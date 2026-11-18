#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8236B0E0) {
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
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r9,r4,1,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FE;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x8236b158
	if (!ctx.cr6.lt) goto loc_8236B158;
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// rlwinm r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8236b158
	if (!ctx.cr6.eq) goto loc_8236B158;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// lwz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r8.u32);
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// bl 0x82362b98
	ctx.lr = 0x8236B140;
	sub_82362B98(ctx, base);
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// bl 0x82634d40
	ctx.lr = 0x8236B148;
	sub_82634D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
loc_8236B158:
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

PPC_WEAK_FUNC(sub_8236B0E0) {
	__imp__sub_8236B0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B16C) {
	__imp__sub_8236B16C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B170) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8236b198
	if (!ctx.cr6.eq) goto loc_8236B198;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8236b184
	if (!ctx.cr6.eq) goto loc_8236B184;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8236B184:
	// subfic r11,r3,1
	ctx.xer.ca = ctx.r3.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r3.s64;
	// neg r10,r4
	ctx.r10.s64 = -ctx.r4.s64;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// blr 
	return;
loc_8236B198:
	// stb r3,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r3.u8);
	// stb r4,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236B170) {
	__imp__sub_8236B170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B1A4) {
	__imp__sub_8236B1A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8236b1dc
	if (!ctx.cr6.eq) goto loc_8236B1DC;
	// subfic r10,r11,257
	ctx.xer.ca = ctx.r11.u32 <= 257;
	ctx.r10.s64 = 257 - ctx.r11.s64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lbz r9,1(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// subfic r11,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r9.s64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8236B1DC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r10,1(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236B1A8) {
	__imp__sub_8236B1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B1EC) {
	__imp__sub_8236B1EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8236B1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,16384
	ctx.r31.s64 = 16384;
	// bl 0x823657f8
	ctx.lr = 0x8236B208;
	sub_823657F8(ctx, base);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// bge cr6,0x8236b214
	if (!ctx.cr6.lt) goto loc_8236B214;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8236B214:
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236b22c
	if (ctx.cr6.gt) goto loc_8236B22C;
loc_8236B220:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236B22C:
	// lwz r30,216(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r28,r30,r31
	ctx.r28.s64 = ctx.r31.s64 - ctx.r30.s64;
	// bl 0x823659a0
	ctx.lr = 0x8236B23C;
	sub_823659A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b24c
	if (ctx.cr6.eq) goto loc_8236B24C;
	// cmplwi cr6,r3,16717
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16717, ctx.xer);
	// blt cr6,0x8236b250
	if (ctx.cr6.lt) goto loc_8236B250;
loc_8236B24C:
	// li r3,16717
	ctx.r3.s64 = 16717;
loc_8236B250:
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8236b268
	if (!ctx.cr6.gt) goto loc_8236B268;
	// li r11,-27648
	ctx.r11.s64 = -27648;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236B268:
	// subf. r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8236b27c
	if (!ctx.cr0.lt) goto loc_8236B27C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236B27C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x8236ae40
	ctx.lr = 0x8236B288;
	sub_8236AE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8236b2a8
	if (ctx.cr6.lt) goto loc_8236B2A8;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8236b220
	if (!ctx.cr6.gt) goto loc_8236B220;
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8236b2a8
	if (ctx.cr6.lt) goto loc_8236B2A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8236B2A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B1F0) {
	__imp__sub_8236B1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8236B2B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,22564
	ctx.r7.s64 = ctx.r10.s64 + 22564;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2032
	ctx.r6.s64 = 2032;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B2E0;
	sub_823911B8(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8236b314
	if (!ctx.cr6.eq) goto loc_8236B314;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,22528
	ctx.r7.s64 = ctx.r11.s64 + 22528;
	// li r6,2035
	ctx.r6.s64 = 2035;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B308;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236B314:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236b328
	if (!ctx.cr6.eq) goto loc_8236B328;
	// li r6,2041
	ctx.r6.s64 = 2041;
	// b 0x8236b3f8
	goto loc_8236B3F8;
loc_8236B328:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r28,r11,21236
	ctx.r28.s64 = ctx.r11.s64 + 21236;
	// addi r27,r10,22492
	ctx.r27.s64 = ctx.r10.s64 + 22492;
loc_8236B338:
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r6,2048
	ctx.r6.s64 = 2048;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,2
	ctx.r4.s64 = 2;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B368;
	sub_823911B8(ctx, base);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8236B384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2053
	ctx.r6.s64 = 2053;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236B3A4;
	sub_823912A0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8236b41c
	if (!ctx.cr6.gt) goto loc_8236B41C;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8236b428
	if (ctx.cr6.gt) goto loc_8236B428;
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x8236b338
	if (ctx.cr6.gt) goto loc_8236B338;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8236b3e4
	if (ctx.cr6.eq) goto loc_8236B3E4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8236B3E4:
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8236ac80
	ctx.lr = 0x8236B3F4;
	sub_8236AC80(ctx, base);
	// li r6,2080
	ctx.r6.s64 = 2080;
loc_8236B3F8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,22476
	ctx.r7.s64 = ctx.r11.s64 + 22476;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B410;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236B41C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236B428:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,22420
	ctx.r7.s64 = ctx.r11.s64 + 22420;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,2063
	ctx.r6.s64 = 2063;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B448;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B2B0) {
	__imp__sub_8236B2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B454) {
	__imp__sub_8236B454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B458) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,604(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// bne cr6,0x8236b4a0
	if (!ctx.cr6.eq) goto loc_8236B4A0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,2163
	ctx.r6.s64 = 2163;
	// addi r7,r11,22592
	ctx.r7.s64 = ctx.r11.s64 + 22592;
	// bl 0x823911b8
	ctx.lr = 0x8236B49C;
	sub_823911B8(ctx, base);
	// b 0x8236b4f4
	goto loc_8236B4F4;
loc_8236B4A0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,2167
	ctx.r6.s64 = 2167;
	// addi r7,r11,22580
	ctx.r7.s64 = ctx.r11.s64 + 22580;
	// bl 0x823911b8
	ctx.lr = 0x8236B4B0;
	sub_823911B8(ctx, base);
	// addi r11,r31,220
	ctx.r11.s64 = ctx.r31.s64 + 220;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r8,604(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// stw r9,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r9.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r7,608(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// ld r6,220(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 220);
	// stw r7,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r7.u32);
	// lwz r5,612(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// stw r5,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r5.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// std r6,608(r11)
	PPC_STORE_U64(ctx.r11.u32 + 608, ctx.r6.u64);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8236ac80
	ctx.lr = 0x8236B4F4;
	sub_8236AC80(ctx, base);
loc_8236B4F4:
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

PPC_WEAK_FUNC(sub_8236B458) {
	__imp__sub_8236B458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B50C) {
	__imp__sub_8236B50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8236B518;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r28,212(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r27,r11,19388
	ctx.r27.s64 = ctx.r11.s64 + 19388;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r7,r10,22860
	ctx.r7.s64 = ctx.r10.s64 + 22860;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2597
	ctx.r6.s64 = 2597;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B548;
	sub_823911B8(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8236b584
	if (!ctx.cr6.eq) goto loc_8236B584;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236b570
	if (!ctx.cr6.eq) goto loc_8236B570;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8236B570:
	// subfic r9,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r9.s64;
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// b 0x8236b58c
	goto loc_8236B58C;
loc_8236B584:
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
loc_8236B58C:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r31,219
	ctx.r11.s64 = ctx.r31.s64 + 219;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_8236B5A0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236b5a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B5A0;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r28,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stb r28,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r28.u8);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236b6fc
	if (ctx.cr6.eq) goto loc_8236B6FC;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r7,212(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// subf r5,r9,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r3,r11,16717
	ctx.r3.s64 = ctx.r11.s64 + 16717;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bne cr6,0x8236b640
	if (!ctx.cr6.eq) goto loc_8236B640;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8236b62c
	if (!ctx.cr6.eq) goto loc_8236B62C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8236B62C:
	// subfic r9,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r8.s64;
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// stb r9,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r9.u8);
	// stb r8,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// b 0x8236b648
	goto loc_8236B648;
loc_8236B640:
	// stb r8,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// stb r10,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r10.u8);
loc_8236B648:
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x823686c0
	ctx.lr = 0x8236B664;
	sub_823686C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236b69c
	if (ctx.cr6.eq) goto loc_8236B69C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,22844
	ctx.r7.s64 = ctx.r11.s64 + 22844;
	// li r6,2663
	ctx.r6.s64 = 2663;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236B690;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8236B69C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236b6d0
	if (ctx.cr6.eq) goto loc_8236B6D0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,2668
	ctx.r6.s64 = 2668;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B6C4;
	sub_823911B8(ctx, base);
loc_8236B6C4:
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8236B6D0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stb r5,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
loc_8236B6FC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8236b754
	if (!ctx.cr6.eq) goto loc_8236B754;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,216(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x823659a0
	ctx.lr = 0x8236B728;
	sub_823659A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b738
	if (ctx.cr6.eq) goto loc_8236B738;
	// cmplwi cr6,r3,16717
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16717, ctx.xer);
	// blt cr6,0x8236b73c
	if (ctx.cr6.lt) goto loc_8236B73C;
loc_8236B738:
	// li r3,16717
	ctx.r3.s64 = 16717;
loc_8236B73C:
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x8236b6c4
	if (ctx.cr6.gt) goto loc_8236B6C4;
	// subf. r3,r29,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8236b960
	if (ctx.cr0.lt) goto loc_8236B960;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x8236b6c4
	if (ctx.cr6.gt) goto loc_8236B6C4;
loc_8236B754:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r10,22780
	ctx.r7.s64 = ctx.r10.s64 + 22780;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r6,2705
	ctx.r6.s64 = 2705;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x823911b8
	ctx.lr = 0x8236B790;
	sub_823911B8(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r7,r10,21248
	ctx.r7.s64 = ctx.r10.s64 + 21248;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r6,2708
	ctx.r6.s64 = 2708;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x8236B7B4;
	sub_82391350(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// stw r8,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r8.u32);
	// bl 0x8236ac80
	ctx.lr = 0x8236B7D8;
	sub_8236AC80(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8236B7E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8236b828
	if (!ctx.cr6.gt) goto loc_8236B828;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r11,219
	ctx.r9.s64 = ctx.r11.s64 + 219;
	// lbz r9,219(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 219);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r7,219(r11)
	PPC_STORE_U8(ctx.r11.u32 + 219, ctx.r7.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8236b828
	if (!ctx.cr6.eq) goto loc_8236B828;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x8236b7e0
	goto loc_8236B7E0;
loc_8236B828:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8236b870
	if (!ctx.cr6.eq) goto loc_8236B870;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,22744
	ctx.r7.s64 = ctx.r11.s64 + 22744;
	// li r6,2722
	ctx.r6.s64 = 2722;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B864;
	sub_823911B8(ctx, base);
	// li r3,-27520
	ctx.r3.s64 = -27520;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8236B870:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8236b8f4
	if (!ctx.cr6.eq) goto loc_8236B8F4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236b8f4
	if (!ctx.cr6.eq) goto loc_8236B8F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1f0
	ctx.lr = 0x8236B88C;
	sub_8236B1F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8236b8c4
	if (!ctx.cr6.lt) goto loc_8236B8C4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,22704
	ctx.r7.s64 = ctx.r11.s64 + 22704;
	// li r6,2734
	ctx.r6.s64 = 2734;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236B8B8;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8236B8C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8236b8d4
	if (!ctx.cr6.eq) goto loc_8236B8D4;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8236b8f4
	goto loc_8236B8F4;
loc_8236B8D4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,22656
	ctx.r7.s64 = ctx.r11.s64 + 22656;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,2744
	ctx.r6.s64 = 2744;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B8F4;
	sub_823911B8(ctx, base);
loc_8236B8F4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8236b940
	if (!ctx.cr6.eq) goto loc_8236B940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b2b0
	ctx.lr = 0x8236B908;
	sub_8236B2B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236b940
	if (ctx.cr6.eq) goto loc_8236B940;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,22628
	ctx.r7.s64 = ctx.r11.s64 + 22628;
	// li r6,2751
	ctx.r6.s64 = 2751;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236B934;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8236B940:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,22612
	ctx.r7.s64 = ctx.r11.s64 + 22612;
	// li r6,2755
	ctx.r6.s64 = 2755;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B95C;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236B960:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B510) {
	__imp__sub_8236B510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B968) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8236b9ac
	if (ctx.cr6.eq) goto loc_8236B9AC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236b9ac
	if (ctx.cr6.eq) goto loc_8236B9AC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,168(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r4,120(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236B9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236B9AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236ba28
	if (!ctx.cr6.eq) goto loc_8236BA28;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236ba28
	if (ctx.cr6.eq) goto loc_8236BA28;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// bl 0x8236b0e0
	ctx.lr = 0x8236B9E0;
	sub_8236B0E0(ctx, base);
	// addi r11,r31,508
	ctx.r11.s64 = ctx.r31.s64 + 508;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
loc_8236B9EC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// blt cr6,0x8236b9ec
	if (ctx.cr6.lt) goto loc_8236B9EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8236BA28:
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

PPC_WEAK_FUNC(sub_8236B968) {
	__imp__sub_8236B968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236BA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8236BA48;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r7,11
	ctx.r7.s64 = 11;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8236ba74
	if (ctx.cr6.eq) goto loc_8236BA74;
	// li r7,3
	ctx.r7.s64 = 3;
loc_8236BA74:
	// addi r9,r7,2
	ctx.r9.s64 = ctx.r7.s64 + 2;
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8236bab4
	if (!ctx.cr6.lt) goto loc_8236BAB4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,23256
	ctx.r7.s64 = ctx.r11.s64 + 23256;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r6,3432
	ctx.r6.s64 = 3432;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BAA8;
	sub_823911B8(ctx, base);
loc_8236BAA8:
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236BAB4:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// beq cr6,0x8236bb10
	if (ctx.cr6.eq) goto loc_8236BB10;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x8236bb10
	if (ctx.cr6.eq) goto loc_8236BB10;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x8236bb10
	if (ctx.cr6.eq) goto loc_8236BB10;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x8236bb10
	if (ctx.cr6.eq) goto loc_8236BB10;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23232
	ctx.r7.s64 = ctx.r10.s64 + 23232;
	// addi r5,r9,19388
	ctx.r5.s64 = ctx.r9.s64 + 19388;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r6,3485
	ctx.r6.s64 = 3485;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BB04;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236BB10:
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// lbz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// stb r10,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8236bb50
	if (!ctx.cr6.eq) goto loc_8236BB50;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r6,10(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// subfic r26,r11,257
	ctx.xer.ca = ctx.r11.u32 <= 257;
	ctx.r26.s64 = 257 - ctx.r11.s64;
	// subfic r27,r6,256
	ctx.xer.ca = ctx.r6.u32 <= 256;
	ctx.r27.s64 = 256 - ctx.r6.s64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8236bb58
	if (!ctx.cr6.eq) goto loc_8236BB58;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x8236bb58
	goto loc_8236BB58;
loc_8236BB50:
	// lbz r26,9(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lbz r27,10(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
loc_8236BB58:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8236bb98
	if (ctx.cr6.eq) goto loc_8236BB98;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r5,r9,19388
	ctx.r5.s64 = ctx.r9.s64 + 19388;
	// addi r7,r10,23188
	ctx.r7.s64 = ctx.r10.s64 + 23188;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r6,3502
	ctx.r6.s64 = 3502;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BB8C;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236BB98:
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8236bbd8
	if (!ctx.cr6.gt) goto loc_8236BBD8;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r5,r9,19388
	ctx.r5.s64 = ctx.r9.s64 + 19388;
	// addi r7,r10,23140
	ctx.r7.s64 = ctx.r10.s64 + 23140;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r6,3509
	ctx.r6.s64 = 3509;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BBCC;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236BBD8:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bne cr6,0x8236bc00
	if (!ctx.cr6.eq) goto loc_8236BC00;
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
loc_8236BBF0:
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bbf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BBF0;
	// b 0x8236bc14
	goto loc_8236BC14;
loc_8236BC00:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8236BC08:
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bc08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BC08;
loc_8236BC14:
	// add r11,r7,r28
	ctx.r11.u64 = ctx.r7.u64 + ctx.r28.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lbzx r10,r7,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// addi r7,r6,23120
	ctx.r7.s64 = ctx.r6.s64 + 23120;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,3535
	ctx.r6.s64 = 3535;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82391350
	ctx.lr = 0x8236BC58;
	sub_82391350(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// lbz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r4,23060
	ctx.r7.s64 = ctx.r4.s64 + 23060;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,3540
	ctx.r6.s64 = 3540;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BC88;
	sub_823911B8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// beq cr6,0x8236baa8
	if (ctx.cr6.eq) goto loc_8236BAA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236bd98
	if (!ctx.cr6.eq) goto loc_8236BD98;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r28,r8,r10
	ctx.r28.u64 = ctx.r8.u64 | ctx.r10.u64;
	// bge cr6,0x8236bcf8
	if (!ctx.cr6.lt) goto loc_8236BCF8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,22984
	ctx.r7.s64 = ctx.r11.s64 + 22984;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r6,3572
	ctx.r6.s64 = 3572;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236BCEC;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236BCF8:
	// lhz r8,140(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 140);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8236bd58
	if (ctx.cr6.eq) goto loc_8236BD58;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,22924
	ctx.r7.s64 = ctx.r11.s64 + 22924;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r6,3582
	ctx.r6.s64 = 3582;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236BD20;
	sub_823911B8(ctx, base);
	// lhz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 140);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8236bd8c
	if (!ctx.cr6.eq) goto loc_8236BD8C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,22892
	ctx.r7.s64 = ctx.r11.s64 + 22892;
	// li r6,3587
	ctx.r6.s64 = 3587;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BD4C;
	sub_823911B8(ctx, base);
	// li r3,-25728
	ctx.r3.s64 = -25728;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236BD58:
	// lwz r28,104(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// bl 0x82369da8
	ctx.lr = 0x8236BD64;
	sub_82369DA8(ctx, base);
	// stw r28,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r28.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236bd98
	if (ctx.cr6.eq) goto loc_8236BD98;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,22876
	ctx.r7.s64 = ctx.r11.s64 + 22876;
	// li r6,3598
	ctx.r6.s64 = 3598;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BD8C;
	sub_823911B8(ctx, base);
loc_8236BD8C:
	// li r3,-26368
	ctx.r3.s64 = -26368;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236BD98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236BA40) {
	__imp__sub_8236BA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236BDA4) {
	__imp__sub_8236BDA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236BDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8236BDB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r25,68(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r27,r11,19388
	ctx.r27.s64 = ctx.r11.s64 + 19388;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r7,r10,23532
	ctx.r7.s64 = ctx.r10.s64 + 23532;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,3973
	ctx.r6.s64 = 3973;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BDE4;
	sub_823911B8(ctx, base);
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236be18
	if (ctx.cr6.eq) goto loc_8236BE18;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236be18
	if (ctx.cr6.eq) goto loc_8236BE18;
	// lwz r11,500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// lwz r10,560(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r9.u32);
	// bl 0x82634d40
	ctx.lr = 0x8236BE10;
	sub_82634D40(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r8.u32);
loc_8236BE18:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,500(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 500);
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8236be58
	if (ctx.cr6.gt) goto loc_8236BE58;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,23472
	ctx.r7.s64 = ctx.r11.s64 + 23472;
	// li r6,3981
	ctx.r6.s64 = 3981;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BE4C;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236BE58:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r26,r11,23392
	ctx.r26.s64 = ctx.r11.s64 + 23392;
loc_8236BE64:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,3993
	ctx.r6.s64 = 3993;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BE80;
	sub_823911B8(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b0e0
	ctx.lr = 0x8236BE8C;
	sub_8236B0E0(ctx, base);
	// lwz r11,500(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 500);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8236beb0
	if (!ctx.cr6.gt) goto loc_8236BEB0;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8236be64
	if (!ctx.cr0.lt) goto loc_8236BE64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236BEB0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,23328
	ctx.r7.s64 = ctx.r11.s64 + 23328;
	// li r6,4000
	ctx.r6.s64 = 4000;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BECC;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236BDA8) {
	__imp__sub_8236BDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236BED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x8236BEE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,68(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8236bf04
	if (!ctx.cr6.eq) goto loc_8236BF04;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8236BF04:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r24,r11,19388
	ctx.r24.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,24372
	ctx.r7.s64 = ctx.r10.s64 + 24372;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,4018
	ctx.r6.s64 = 4018;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BF28;
	sub_823911B8(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x8236c3ac
	if (ctx.cr6.eq) goto loc_8236C3AC;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8236c3d0
	if (!ctx.cr6.eq) goto loc_8236C3D0;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r25,r11,-12
	ctx.r25.s64 = ctx.r11.s64 + -12;
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lwz r11,572(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 572);
	// or r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236bf90
	if (!ctx.cr6.lt) goto loc_8236BF90;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4037
	ctx.r6.s64 = 4037;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BF84;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8236BF90:
	// subf r27,r11,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x8236bfc4
	if (ctx.cr6.lt) goto loc_8236BFC4;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r6,4049
	ctx.r6.s64 = 4049;
	// addi r7,r10,24296
	ctx.r7.s64 = ctx.r10.s64 + 24296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,572(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// bl 0x823911b8
	ctx.lr = 0x8236BFC0;
	sub_823911B8(ctx, base);
	// b 0x8236c3d0
	goto loc_8236C3D0;
loc_8236BFC4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r7,r11,24232
	ctx.r7.s64 = ctx.r11.s64 + 24232;
	// li r6,4055
	ctx.r6.s64 = 4055;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236BFDC;
	sub_823911B8(ctx, base);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r28,r11,508
	ctx.r28.s64 = ctx.r11.s64 + 508;
	// lwz r9,508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8236c304
	if (!ctx.cr6.eq) goto loc_8236C304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369c30
	ctx.lr = 0x8236C008;
	sub_82369C30(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r25,12
	ctx.r31.s64 = ctx.r25.s64 + 12;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r31,16384
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16384, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwimi r11,r8,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x8236c3d0
	if (ctx.cr6.gt) goto loc_8236C3D0;
	// lwz r10,500(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 500);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// ble cr6,0x8236c060
	if (!ctx.cr6.gt) goto loc_8236C060;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,4079
	ctx.r6.s64 = 4079;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C054;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8236C060:
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236c084
	if (ctx.cr6.eq) goto loc_8236C084;
	// clrlwi r9,r25,29
	ctx.r9.u64 = ctx.r25.u32 & 0x7;
	// rlwinm r11,r25,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 29) & 0x1FFFFFFF;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8236C084:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236c124
	if (!ctx.cr6.gt) goto loc_8236C124;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8236c0c8
	if (ctx.cr6.eq) goto loc_8236C0C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4099
	ctx.r6.s64 = 4099;
	// addi r7,r11,24112
	ctx.r7.s64 = ctx.r11.s64 + 24112;
	// bl 0x823911b8
	ctx.lr = 0x8236C0C4;
	sub_823911B8(ctx, base);
	// b 0x8236c3d0
	goto loc_8236C3D0;
loc_8236C0C8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4110
	ctx.r6.s64 = 4110;
	// addi r7,r11,23936
	ctx.r7.s64 = ctx.r11.s64 + 23936;
	// bl 0x823911b8
	ctx.lr = 0x8236C0D8;
	sub_823911B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bda8
	ctx.lr = 0x8236C0E4;
	sub_8236BDA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236c124
	if (ctx.cr6.eq) goto loc_8236C124;
	// lwz r11,500(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 500);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r10,23800
	ctx.r7.s64 = ctx.r10.s64 + 23800;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4126
	ctx.r6.s64 = 4126;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C11C;
	sub_823911B8(ctx, base);
	// li r23,-27136
	ctx.r23.s64 = -27136;
	// b 0x8236c3d0
	goto loc_8236C3D0;
loc_8236C124:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,23756
	ctx.r7.s64 = ctx.r11.s64 + 23756;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r6,4135
	ctx.r6.s64 = 4135;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C144;
	sub_823911B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8236C150;
	sub_826365A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// bne cr6,0x8236c164
	if (!ctx.cr6.eq) goto loc_8236C164;
	// li r23,-32512
	ctx.r23.s64 = -32512;
	// b 0x8236c3d0
	goto loc_8236C3D0;
loc_8236C164:
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C17C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c17c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C17C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stb r23,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r23.u8);
	// stb r23,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r23.u8);
	// stb r23,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r23.u8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// stb r9,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r9.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r7,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// oris r5,r6,32768
	ctx.r5.u64 = ctx.r6.u64 | 2147483648;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// lwz r11,500(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 500);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r4,500(r26)
	PPC_STORE_U32(ctx.r26.u32 + 500, ctx.r4.u32);
loc_8236C1D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236c3d0
	if (!ctx.cr6.eq) goto loc_8236C3D0;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r9,23712
	ctx.r7.s64 = ctx.r9.s64 + 23712;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// li r6,4177
	ctx.r6.s64 = 4177;
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r9,9(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r11,7(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r31,10(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// or r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 | ctx.r31.u64;
	// lbz r10,11(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C24C;
	sub_823911B8(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82635430
	ctx.lr = 0x8236C260;
	sub_82635430(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r8,r11,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236c360
	if (ctx.cr6.eq) goto loc_8236C360;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82369cc0
	ctx.lr = 0x8236C284;
	sub_82369CC0(ctx, base);
	// rlwinm r10,r25,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236c2ac
	if (ctx.cr6.eq) goto loc_8236C2AC;
loc_8236C294:
	// lbzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x8236c358
	if (!ctx.cr6.eq) goto loc_8236C358;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236c294
	if (ctx.cr6.lt) goto loc_8236C294;
loc_8236C2AC:
	// clrlwi r8,r25,29
	ctx.r8.u64 = ctx.r25.u32 & 0x7;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236c2e8
	if (ctx.cr6.eq) goto loc_8236C2E8;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8236C2C8:
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8236c358
	if (ctx.cr6.eq) goto loc_8236C358;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8236c2c8
	if (ctx.cr6.lt) goto loc_8236C2C8;
loc_8236C2E8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8236C2EC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r9,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x8236c368
	goto loc_8236C368;
loc_8236C304:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8236C310:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8236c330
	if (!ctx.cr0.eq) goto loc_8236C330;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8236c310
	if (!ctx.cr6.eq) goto loc_8236C310;
loc_8236C330:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236c1d4
	if (ctx.cr6.eq) goto loc_8236C1D4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,23676
	ctx.r7.s64 = ctx.r11.s64 + 23676;
	// li r6,4156
	ctx.r6.s64 = 4156;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C354;
	sub_823911B8(ctx, base);
	// b 0x8236c3d0
	goto loc_8236C3D0;
loc_8236C358:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8236c2ec
	goto loc_8236C2EC;
loc_8236C360:
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8236C368:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236c384
	if (ctx.cr6.eq) goto loc_8236C384;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r11,8828
	ctx.r8.s64 = ctx.r11.s64 + 8828;
	// b 0x8236c38c
	goto loc_8236C38C;
loc_8236C384:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r8,r11,23664
	ctx.r8.s64 = ctx.r11.s64 + 23664;
loc_8236C38C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,23644
	ctx.r7.s64 = ctx.r11.s64 + 23644;
	// li r6,4190
	ctx.r6.s64 = 4190;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C3A8;
	sub_823911B8(ctx, base);
	// b 0x8236c3d0
	goto loc_8236C3D0;
loc_8236C3AC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,23620
	ctx.r7.s64 = ctx.r11.s64 + 23620;
	// li r6,4022
	ctx.r6.s64 = 4022;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C3C8;
	sub_823911B8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,504(r26)
	PPC_STORE_U8(ctx.r26.u32 + 504, ctx.r10.u8);
loc_8236C3D0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,23596
	ctx.r7.s64 = ctx.r11.s64 + 23596;
	// li r6,4203
	ctx.r6.s64 = 4203;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C3EC;
	sub_823911B8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236BED8) {
	__imp__sub_8236BED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236C3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8236C400;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236c504
	if (ctx.cr6.eq) goto loc_8236C504;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236c504
	if (ctx.cr6.eq) goto loc_8236C504;
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236c43c
	if (ctx.cr6.eq) goto loc_8236C43C;
	// bl 0x8236b2b0
	ctx.lr = 0x8236C434;
	sub_8236B2B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236C43C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r11,19388
	ctx.r30.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,24480
	ctx.r7.s64 = ctx.r10.s64 + 24480;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,4785
	ctx.r6.s64 = 4785;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x8236C45C;
	sub_823911B8(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r9,24448
	ctx.r7.s64 = ctx.r9.s64 + 24448;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// li r6,4786
	ctx.r6.s64 = 4786;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C480;
	sub_823911B8(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r8,21
	ctx.r8.s64 = 21;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r29.u8);
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r28,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r28.u8);
	// bl 0x8236b510
	ctx.lr = 0x8236C4AC;
	sub_8236B510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236c4e4
	if (ctx.cr6.eq) goto loc_8236C4E4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r11,24420
	ctx.r7.s64 = ctx.r11.s64 + 24420;
	// li r6,4794
	ctx.r6.s64 = 4794;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x8236C4D8;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236C4E4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4797
	ctx.r6.s64 = 4797;
	// addi r7,r11,24396
	ctx.r7.s64 = ctx.r11.s64 + 24396;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x8236C4F8;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236C504:
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236C3F8) {
	__imp__sub_8236C3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236C510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8236C518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82365a18
	ctx.lr = 0x8236C52C;
	sub_82365A18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8236c568
	if (!ctx.cr6.lt) goto loc_8236C568;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,24580
	ctx.r7.s64 = ctx.r11.s64 + 24580;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,5474
	ctx.r6.s64 = 5474;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236C55C;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236C568:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8236c5b8
	if (!ctx.cr6.gt) goto loc_8236C5B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236c5b4
	if (!ctx.cr6.eq) goto loc_8236C5B4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,24504
	ctx.r7.s64 = ctx.r11.s64 + 24504;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,5484
	ctx.r6.s64 = 5484;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C5A8;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236C5B4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8236C5B8:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236c608
	if (ctx.cr6.eq) goto loc_8236C608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b2b0
	ctx.lr = 0x8236C5CC;
	sub_8236B2B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236c674
	if (ctx.cr6.eq) goto loc_8236C674;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,22628
	ctx.r7.s64 = ctx.r11.s64 + 22628;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,5499
	ctx.r6.s64 = 5499;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236C5FC;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236C608:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// beq cr6,0x8236c62c
	if (ctx.cr6.eq) goto loc_8236C62C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x8236C62C;
	sub_82635430(ctx, base);
loc_8236C62C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b510
	ctx.lr = 0x8236C638;
	sub_8236B510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236c674
	if (ctx.cr6.eq) goto loc_8236C674;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,24420
	ctx.r7.s64 = ctx.r11.s64 + 24420;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,5515
	ctx.r6.s64 = 5515;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236C668;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236C674:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236C510) {
	__imp__sub_8236C510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236C680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8236C688;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r27,r11,19388
	ctx.r27.s64 = ctx.r11.s64 + 19388;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r7,r10,24660
	ctx.r7.s64 = ctx.r10.s64 + 24660;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,5569
	ctx.r6.s64 = 5569;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C6B8;
	sub_823911B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236c828
	if (ctx.cr6.eq) goto loc_8236C828;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236c828
	if (ctx.cr6.eq) goto loc_8236C828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236af40
	ctx.lr = 0x8236C6D4;
	sub_8236AF40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236c70c
	if (ctx.cr6.eq) goto loc_8236C70C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,24632
	ctx.r7.s64 = ctx.r11.s64 + 24632;
	// li r6,5577
	ctx.r6.s64 = 5577;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236C700;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236C70C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8236c758
	if (ctx.cr6.eq) goto loc_8236C758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365b68
	ctx.lr = 0x8236C720;
	sub_82365B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236c758
	if (ctx.cr6.eq) goto loc_8236C758;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,19316
	ctx.r7.s64 = ctx.r11.s64 + 19316;
	// li r6,5584
	ctx.r6.s64 = 5584;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236C74C;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236C758:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236c7ec
	if (ctx.cr6.eq) goto loc_8236C7EC;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x8236c7ec
	if (!ctx.cr6.gt) goto loc_8236C7EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8236c7ec
	if (ctx.cr6.gt) goto loc_8236C7EC;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236c7ec
	if (ctx.cr6.eq) goto loc_8236C7EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236c7ec
	if (!ctx.cr6.eq) goto loc_8236C7EC;
	// lbz r11,230(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 230);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236c7c4
	if (!ctx.cr6.eq) goto loc_8236C7C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c510
	ctx.lr = 0x8236C7B4;
	sub_8236C510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8236c7fc
	if (!ctx.cr6.gt) goto loc_8236C7FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r11.u8);
loc_8236C7C4:
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c510
	ctx.lr = 0x8236C7D4;
	sub_8236C510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8236c7fc
	if (!ctx.cr6.gt) goto loc_8236C7FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// stb r11,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r11.u8);
	// b 0x8236c800
	goto loc_8236C800;
loc_8236C7EC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c510
	ctx.lr = 0x8236C7FC;
	sub_8236C510(ctx, base);
loc_8236C7FC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8236C800:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,24620
	ctx.r7.s64 = ctx.r11.s64 + 24620;
	// li r6,5595
	ctx.r6.s64 = 5595;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C81C;
	sub_823911B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236C828:
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236C680) {
	__imp__sub_8236C680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236C834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236C834) {
	__imp__sub_8236C834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236C838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8236C840;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236c8f8
	if (ctx.cr6.eq) goto loc_8236C8F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236c8f8
	if (ctx.cr6.eq) goto loc_8236C8F8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,24728
	ctx.r7.s64 = ctx.r10.s64 + 24728;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,5611
	ctx.r6.s64 = 5611;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x8236C87C;
	sub_823911B8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bne cr6,0x8236c8d0
	if (!ctx.cr6.eq) goto loc_8236C8D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x8236C898;
	sub_8236C3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236c8d0
	if (ctx.cr6.eq) goto loc_8236C8D0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,24696
	ctx.r7.s64 = ctx.r11.s64 + 24696;
	// li r6,5617
	ctx.r6.s64 = 5617;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236C8C4;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236C8D0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,24672
	ctx.r7.s64 = ctx.r11.s64 + 24672;
	// li r6,5622
	ctx.r6.s64 = 5622;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C8EC;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236C8F8:
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236C838) {
	__imp__sub_8236C838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236C904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236C904) {
	__imp__sub_8236C904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236C908) {
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
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8236c970
	if (ctx.cr6.eq) goto loc_8236C970;
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236c954
	if (ctx.cr6.eq) goto loc_8236C954;
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// bl 0x82634d40
	ctx.lr = 0x8236C94C;
	sub_82634D40(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r8.u32);
loc_8236C954:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236C958:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b0e0
	ctx.lr = 0x8236C964;
	sub_8236B0E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8236c958
	if (ctx.cr6.lt) goto loc_8236C958;
loc_8236C970:
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

PPC_WEAK_FUNC(sub_8236C908) {
	__imp__sub_8236C908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236C988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x8236C990;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r25,r11,19388
	ctx.r25.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,24916
	ctx.r7.s64 = ctx.r10.s64 + 24916;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,2221
	ctx.r6.s64 = 2221;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C9B8;
	sub_823911B8(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r8,7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x8236ca20
	if (ctx.cr6.eq) goto loc_8236CA20;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,24884
	ctx.r7.s64 = ctx.r11.s64 + 24884;
	// li r6,2224
	ctx.r6.s64 = 2224;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236C9E4;
	sub_823911B8(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,588(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 588);
	// stw r9,592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 592, ctx.r9.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r7,588(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 588);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r6,596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 596, ctx.r6.u32);
	// bl 0x8236b458
	ctx.lr = 0x8236CA0C;
	sub_8236B458(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cd88
	if (!ctx.cr6.eq) goto loc_8236CD88;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
loc_8236CA20:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236cd24
	if (ctx.cr6.eq) goto loc_8236CD24;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r23,r11,24864
	ctx.r23.s64 = ctx.r11.s64 + 24864;
	// addi r22,r10,24824
	ctx.r22.s64 = ctx.r10.s64 + 24824;
	// addi r21,r9,24784
	ctx.r21.s64 = ctx.r9.s64 + 24784;
loc_8236CA4C:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r29,592(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 592);
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x8236ca74
	if (!ctx.cr6.eq) goto loc_8236CA74;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 20, ctx.xer);
	// beq cr6,0x8236ca78
	if (ctx.cr6.eq) goto loc_8236CA78;
loc_8236CA74:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_8236CA78:
	// lbz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 180);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r24,r9,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x8236cacc
	if (ctx.cr6.eq) goto loc_8236CACC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,596(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8236cacc
	if (!ctx.cr6.eq) goto loc_8236CACC;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,2251
	ctx.r6.s64 = 2251;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236CABC;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b458
	ctx.lr = 0x8236CAC4;
	sub_8236B458(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cd88
	if (!ctx.cr6.eq) goto loc_8236CD88;
loc_8236CACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1f0
	ctx.lr = 0x8236CAD4;
	sub_8236B1F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8236cd88
	if (ctx.cr6.lt) goto loc_8236CD88;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x8236cb28
	if (!ctx.cr6.eq) goto loc_8236CB28;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236cd04
	if (ctx.cr6.eq) goto loc_8236CD04;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82635430
	ctx.lr = 0x8236CB00;
	sub_82635430(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lbz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r8.u32);
	// b 0x8236cc54
	goto loc_8236CC54;
loc_8236CB28:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// lwz r27,596(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// subf r11,r9,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r9.s64;
	// addi r28,r11,-12
	ctx.r28.s64 = ctx.r11.s64 + -12;
	// subf r30,r28,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r28.s64;
	// blt cr6,0x8236ccec
	if (ctx.cr6.lt) goto loc_8236CCEC;
	// bne cr6,0x8236cb5c
	if (!ctx.cr6.eq) goto loc_8236CB5C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236ccec
	if (!ctx.cr6.eq) goto loc_8236CCEC;
loc_8236CB5C:
	// addi r9,r3,-12
	ctx.r9.s64 = ctx.r3.s64 + -12;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236cb6c
	if (!ctx.cr6.gt) goto loc_8236CB6C;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8236CB6C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8236cb98
	if (!ctx.cr6.eq) goto loc_8236CB98;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8236cb98
	if (ctx.cr6.eq) goto loc_8236CB98;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,2309
	ctx.r6.s64 = 2309;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236CB98;
	sub_823911B8(ctx, base);
loc_8236CB98:
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236CBB0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236cbb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236CBB0;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r28,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r28,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r3,r30,16,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// rlwinm r28,r30,24,24,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stb r9,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r9.u8);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r8,8(r6)
	PPC_STORE_U8(ctx.r6.u32 + 8, ctx.r8.u8);
	// li r6,2325
	ctx.r6.s64 = 2325;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r3,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r28,10(r8)
	PPC_STORE_U8(ctx.r8.u32 + 10, ctx.r28.u8);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r30,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r30.u8);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82391350
	ctx.lr = 0x8236CC20;
	sub_82391350(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82635430
	ctx.lr = 0x8236CC34;
	sub_82635430(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// lbz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r7,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r7.u32);
loc_8236CC54:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,596(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236cca8
	if (ctx.cr6.lt) goto loc_8236CCA8;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236cc9c
	if (ctx.cr6.eq) goto loc_8236CC9C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r10.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r7,596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 596, ctx.r7.u32);
	// b 0x8236cca8
	goto loc_8236CCA8;
loc_8236CC9C:
	// stw r20,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r20.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r20,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r20.u32);
loc_8236CCA8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b510
	ctx.lr = 0x8236CCB4;
	sub_8236B510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236cd14
	if (ctx.cr6.eq) goto loc_8236CD14;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,24420
	ctx.r7.s64 = ctx.r11.s64 + 24420;
	// li r6,2349
	ctx.r6.s64 = 2349;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236CCE0;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_8236CCEC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8236cd04
	if (ctx.cr6.eq) goto loc_8236CD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b458
	ctx.lr = 0x8236CCFC;
	sub_8236B458(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cd88
	if (!ctx.cr6.eq) goto loc_8236CD88;
loc_8236CD04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b2b0
	ctx.lr = 0x8236CD0C;
	sub_8236B2B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cd88
	if (!ctx.cr6.eq) goto loc_8236CD88;
loc_8236CD14:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236ca4c
	if (!ctx.cr6.eq) goto loc_8236CA4C;
loc_8236CD24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b2b0
	ctx.lr = 0x8236CD2C;
	sub_8236B2B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cd88
	if (!ctx.cr6.eq) goto loc_8236CD88;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bne cr6,0x8236cd50
	if (!ctx.cr6.eq) goto loc_8236CD50;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// b 0x8236cd68
	goto loc_8236CD68;
loc_8236CD50:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,584(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 584);
	// bl 0x82368450
	ctx.lr = 0x8236CD68;
	sub_82368450(ctx, base);
loc_8236CD68:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,24752
	ctx.r7.s64 = ctx.r11.s64 + 24752;
	// li r6,2366
	ctx.r6.s64 = 2366;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236CD84;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236CD88:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236C988) {
	__imp__sub_8236C988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236CD90) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// bl 0x82369b40
	ctx.lr = 0x8236CDB4;
	sub_82369B40(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 588, ctx.r30.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r30.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r7,572(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 572);
	// stw r7,600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 600, ctx.r7.u32);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stb r30,504(r6)
	PPC_STORE_U8(ctx.r6.u32 + 504, ctx.r30.u8);
	// bl 0x8236c908
	ctx.lr = 0x8236CDE4;
	sub_8236C908(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368450
	ctx.lr = 0x8236CDF0;
	sub_82368450(ctx, base);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// bne cr6,0x8236ce1c
	if (!ctx.cr6.eq) goto loc_8236CE1C;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bne cr6,0x8236ce1c
	if (!ctx.cr6.eq) goto loc_8236CE1C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// b 0x8236ce24
	goto loc_8236CE24;
loc_8236CE1C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
loc_8236CE24:
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

PPC_WEAK_FUNC(sub_8236CD90) {
	__imp__sub_8236CD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236CE3C) {
	__imp__sub_8236CE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236CE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8236CE48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// addi r7,r9,25112
	ctx.r7.s64 = ctx.r9.s64 + 25112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2450
	ctx.r6.s64 = 2450;
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// bl 0x823911b8
	ctx.lr = 0x8236CE80;
	sub_823911B8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x8236cec4
	if (ctx.cr6.eq) goto loc_8236CEC4;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x8236cebc
	if (ctx.cr6.eq) goto loc_8236CEBC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,2464
	ctx.r6.s64 = 2464;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236CEB0;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236CEBC:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8236ced0
	if (!ctx.cr6.eq) goto loc_8236CED0;
loc_8236CEC4:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236cf04
	if (ctx.cr6.eq) goto loc_8236CF04;
loc_8236CED0:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236cf04
	if (!ctx.cr6.eq) goto loc_8236CF04;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,2474
	ctx.r6.s64 = 2474;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236CEF8;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236CF04:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8236cf54
	if (!ctx.cr6.eq) goto loc_8236CF54;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236cf54
	if (ctx.cr6.eq) goto loc_8236CF54;
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236cf54
	if (!ctx.cr6.eq) goto loc_8236CF54;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,2482
	ctx.r6.s64 = 2482;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236CF48;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236CF54:
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// ble cr6,0x8236cf8c
	if (!ctx.cr6.gt) goto loc_8236CF8C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,25072
	ctx.r7.s64 = ctx.r11.s64 + 25072;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// li r6,2500
	ctx.r6.s64 = 2500;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236CF80;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236CF8C:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8236d0d0
	if (!ctx.cr6.eq) goto loc_8236D0D0;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r30,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r30,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r9,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r9.u8);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r30,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r30.u8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r4,5(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8236d0a8
	if (!ctx.cr6.eq) goto loc_8236D0A8;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// subfic r10,r11,16384
	ctx.xer.ca = ctx.r11.u32 <= 16384;
	ctx.r10.s64 = 16384 - ctx.r11.s64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8236d000
	if (!ctx.cr6.lt) goto loc_8236D000;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,25016
	ctx.r7.s64 = ctx.r11.s64 + 25016;
	// li r9,16372
	ctx.r9.s64 = 16372;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,2527
	ctx.r6.s64 = 2527;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236CFF4;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D000:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82634bc0
	ctx.lr = 0x8236D014;
	sub_82634BC0(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// beq cr6,0x8236d064
	if (ctx.cr6.eq) goto loc_8236D064;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lbz r8,570(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 570);
	// stb r8,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r8.u8);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r5,568(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 568);
	// stb r5,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r5.u8);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r3.u32);
	// b 0x8236d074
	goto loc_8236D074;
loc_8236D064:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r10,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r10.u8);
loc_8236D074:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// stb r9,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r9.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r7,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
loc_8236D0A8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236d0d0
	if (ctx.cr6.eq) goto loc_8236D0D0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236D0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236D0D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236d138
	if (!ctx.cr6.eq) goto loc_8236D138;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8236d0f8
	if (!ctx.cr6.eq) goto loc_8236D0F8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236d138
	if (ctx.cr6.eq) goto loc_8236D138;
loc_8236D0F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823699d0
	ctx.lr = 0x8236D100;
	sub_823699D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236d17c
	if (ctx.cr6.eq) goto loc_8236D17C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,24996
	ctx.r7.s64 = ctx.r11.s64 + 24996;
	// li r6,2562
	ctx.r6.s64 = 2562;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236D12C;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D138:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b510
	ctx.lr = 0x8236D144;
	sub_8236B510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236d17c
	if (ctx.cr6.eq) goto loc_8236D17C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,24976
	ctx.r7.s64 = ctx.r11.s64 + 24976;
	// li r6,2569
	ctx.r6.s64 = 2569;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236D170;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D17C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,24948
	ctx.r7.s64 = ctx.r11.s64 + 24948;
	// li r6,2574
	ctx.r6.s64 = 2574;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D198;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236CE40) {
	__imp__sub_8236CE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236D1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236D1A4) {
	__imp__sub_8236D1A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236D1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8236D1B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,25168
	ctx.r7.s64 = ctx.r10.s64 + 25168;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,4806
	ctx.r6.s64 = 4806;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D1D8;
	sub_823911B8(ctx, base);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x8236ce40
	ctx.lr = 0x8236D204;
	sub_8236CE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236d23c
	if (ctx.cr6.eq) goto loc_8236D23C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,17284
	ctx.r7.s64 = ctx.r11.s64 + 17284;
	// li r6,4815
	ctx.r6.s64 = 4815;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x8236D230;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236D23C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4819
	ctx.r6.s64 = 4819;
	// addi r7,r11,25140
	ctx.r7.s64 = ctx.r11.s64 + 25140;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x8236D250;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236D1A8) {
	__imp__sub_8236D1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236D25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236D25C) {
	__imp__sub_8236D25C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236D260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8236D268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r11,19388
	ctx.r30.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,25220
	ctx.r7.s64 = ctx.r10.s64 + 25220;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,2202
	ctx.r6.s64 = 2202;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D290;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c988
	ctx.lr = 0x8236D298;
	sub_8236C988(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r9,25196
	ctx.r7.s64 = ctx.r9.s64 + 25196;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,2206
	ctx.r6.s64 = 2206;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D2B8;
	sub_823911B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236D260) {
	__imp__sub_8236D260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236D2C4) {
	__imp__sub_8236D2C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236D2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8236D2D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8236d2f0
	if (ctx.cr6.eq) goto loc_8236D2F0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8236D2F0:
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236d328
	if (!ctx.cr6.lt) goto loc_8236D328;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,25648
	ctx.r7.s64 = ctx.r11.s64 + 25648;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,2906
	ctx.r6.s64 = 2906;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D31C;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D328:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// li r10,12
	ctx.r10.s64 = 12;
	// beq cr6,0x8236d338
	if (ctx.cr6.eq) goto loc_8236D338;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8236D338:
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// addi r7,r7,25592
	ctx.r7.s64 = ctx.r7.s64 + 25592;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r4,1(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// li r6,2915
	ctx.r6.s64 = 2915;
	// lbz r3,2(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// rotlwi r11,r4,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r30,3(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// li r4,3
	ctx.r4.s64 = 3;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// bl 0x823911b8
	ctx.lr = 0x8236D388;
	sub_823911B8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8236d594
	if (!ctx.cr6.eq) goto loc_8236D594;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,7(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r4,9(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rotlwi r8,r4,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r5,r3,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r3,r9,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,5(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r28,11(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 | ctx.r30.u64;
	// or r7,r6,r28
	ctx.r7.u64 = ctx.r6.u64 | ctx.r28.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236d424
	if (ctx.cr6.gt) goto loc_8236D424;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236d424
	if (ctx.cr6.gt) goto loc_8236D424;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r9,r7,12
	ctx.r9.s64 = ctx.r7.s64 + 12;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8236d44c
	if (!ctx.cr6.gt) goto loc_8236D44C;
loc_8236D424:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,25564
	ctx.r7.s64 = ctx.r11.s64 + 25564;
	// li r6,2923
	ctx.r6.s64 = 2923;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D440;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D44C:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236d55c
	if (ctx.cr6.eq) goto loc_8236D55C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// beq cr6,0x8236d478
	if (ctx.cr6.eq) goto loc_8236D478;
	// lwz r7,572(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8236d484
	if (!ctx.cr6.eq) goto loc_8236D484;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bne cr6,0x8236d55c
	if (!ctx.cr6.eq) goto loc_8236D55C;
loc_8236D478:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8236d55c
	if (ctx.cr6.eq) goto loc_8236D55C;
loc_8236D484:
	// lwz r9,572(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236d4b8
	if (!ctx.cr6.gt) goto loc_8236D4B8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,25496
	ctx.r7.s64 = ctx.r11.s64 + 25496;
	// li r6,2937
	ctx.r6.s64 = 2937;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D4AC;
	sub_823911B8(ctx, base);
	// li r3,-25728
	ctx.r3.s64 = -25728;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D4B8:
	// lwz r10,600(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 600);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8236d534
	if (!ctx.cr6.eq) goto loc_8236D534;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8236d534
	if (ctx.cr6.eq) goto loc_8236D534;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,25416
	ctx.r7.s64 = ctx.r11.s64 + 25416;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r6,2949
	ctx.r6.s64 = 2949;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D4F4;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236d260
	ctx.lr = 0x8236D4FC;
	sub_8236D260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236d550
	if (ctx.cr6.eq) goto loc_8236D550;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,25396
	ctx.r7.s64 = ctx.r11.s64 + 25396;
	// li r6,2952
	ctx.r6.s64 = 2952;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236D528;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D534:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,25328
	ctx.r7.s64 = ctx.r11.s64 + 25328;
	// li r6,2959
	ctx.r6.s64 = 2959;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D550;
	sub_823911B8(ctx, base);
loc_8236D550:
	// li r3,-25984
	ctx.r3.s64 = -25984;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D55C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369c30
	ctx.lr = 0x8236D564;
	sub_82369C30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8236d5cc
	if (!ctx.cr6.eq) goto loc_8236D5CC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,25288
	ctx.r7.s64 = ctx.r11.s64 + 25288;
	// li r6,2971
	ctx.r6.s64 = 2971;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D588;
	sub_823911B8(ctx, base);
	// li r3,-25728
	ctx.r3.s64 = -25728;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D594:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8236d5cc
	if (!ctx.cr6.lt) goto loc_8236D5CC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,25244
	ctx.r7.s64 = ctx.r11.s64 + 25244;
	// li r6,2978
	ctx.r6.s64 = 2978;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D5C0;
	sub_823911B8(ctx, base);
	// li r3,-28800
	ctx.r3.s64 = -28800;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236D5CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236D2C8) {
	__imp__sub_8236D2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236D5D8) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8236d608
	if (!ctx.cr6.eq) goto loc_8236D608;
	// bl 0x8236d2c8
	ctx.lr = 0x8236D600;
	sub_8236D2C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
loc_8236D608:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x8236d6f0
	if (!ctx.cr6.eq) goto loc_8236D6F0;
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x8236d648
	if (ctx.cr6.eq) goto loc_8236D648;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,26020
	ctx.r7.s64 = ctx.r11.s64 + 26020;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,4662
	ctx.r6.s64 = 4662;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D640;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// b 0x8236d880
	goto loc_8236D880;
loc_8236D648:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x8236d680
	if (ctx.cr6.eq) goto loc_8236D680;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,25984
	ctx.r7.s64 = ctx.r11.s64 + 25984;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,4668
	ctx.r6.s64 = 4668;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D678;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// b 0x8236d880
	goto loc_8236D880;
loc_8236D680:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8236d6f0
	if (!ctx.cr6.eq) goto loc_8236D6F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8236d6f0
	if (ctx.cr6.eq) goto loc_8236D6F0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8236d6f0
	if (ctx.cr6.eq) goto loc_8236D6F0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// bne cr6,0x8236d6d8
	if (!ctx.cr6.eq) goto loc_8236D6D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4677
	ctx.r6.s64 = 4677;
	// addi r7,r11,25940
	ctx.r7.s64 = ctx.r11.s64 + 25940;
	// bl 0x823911b8
	ctx.lr = 0x8236D6D0;
	sub_823911B8(ctx, base);
	// li r3,-26368
	ctx.r3.s64 = -26368;
	// b 0x8236d880
	goto loc_8236D880;
loc_8236D6D8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4681
	ctx.r6.s64 = 4681;
	// addi r7,r11,25888
	ctx.r7.s64 = ctx.r11.s64 + 25888;
	// bl 0x823911b8
	ctx.lr = 0x8236D6E8;
	sub_823911B8(ctx, base);
	// li r3,-25728
	ctx.r3.s64 = -25728;
	// b 0x8236d880
	goto loc_8236D880;
loc_8236D6F0:
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// bne cr6,0x8236d7fc
	if (!ctx.cr6.eq) goto loc_8236D7FC;
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x8236d72c
	if (ctx.cr6.eq) goto loc_8236D72C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,25856
	ctx.r7.s64 = ctx.r11.s64 + 25856;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,4693
	ctx.r6.s64 = 4693;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236D724;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// b 0x8236d880
	goto loc_8236D880;
loc_8236D72C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r30,r11,19388
	ctx.r30.s64 = ctx.r11.s64 + 19388;
	// addi r7,r9,25820
	ctx.r7.s64 = ctx.r9.s64 + 25820;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,4698
	ctx.r6.s64 = 4698;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x823911b8
	ctx.lr = 0x8236D758;
	sub_823911B8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8236d790
	if (!ctx.cr6.eq) goto loc_8236D790;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r10,25784
	ctx.r7.s64 = ctx.r10.s64 + 25784;
	// li r6,4705
	ctx.r6.s64 = 4705;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D788;
	sub_823911B8(ctx, base);
	// li r3,-30592
	ctx.r3.s64 = -30592;
	// b 0x8236d880
	goto loc_8236D880;
loc_8236D790:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236d854
	if (!ctx.cr6.eq) goto loc_8236D854;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8236d7c8
	if (!ctx.cr6.eq) goto loc_8236D7C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,25756
	ctx.r7.s64 = ctx.r11.s64 + 25756;
	// li r6,4711
	ctx.r6.s64 = 4711;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D7C0;
	sub_823911B8(ctx, base);
	// li r3,-30848
	ctx.r3.s64 = -30848;
	// b 0x8236d880
	goto loc_8236D880;
loc_8236D7C8:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236d854
	if (!ctx.cr6.eq) goto loc_8236D854;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x8236d854
	if (!ctx.cr6.eq) goto loc_8236D854;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,25720
	ctx.r7.s64 = ctx.r11.s64 + 25720;
	// li r6,4718
	ctx.r6.s64 = 4718;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D7F8;
	sub_823911B8(ctx, base);
	// b 0x8236d87c
	goto loc_8236D87C;
loc_8236D7FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8236d87c
	if (!ctx.cr6.eq) goto loc_8236D87C;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// bne cr6,0x8236d85c
	if (!ctx.cr6.eq) goto loc_8236D85C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8236d85c
	if (ctx.cr6.eq) goto loc_8236D85C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8236d834
	if (!ctx.cr6.eq) goto loc_8236D834;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8236d85c
	if (ctx.cr6.eq) goto loc_8236D85C;
loc_8236D834:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,25684
	ctx.r7.s64 = ctx.r11.s64 + 25684;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,4750
	ctx.r6.s64 = 4750;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D854;
	sub_823911B8(ctx, base);
loc_8236D854:
	// li r3,-26240
	ctx.r3.s64 = -26240;
	// b 0x8236d880
	goto loc_8236D880;
loc_8236D85C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236d87c
	if (ctx.cr6.eq) goto loc_8236D87C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8236d87c
	if (!ctx.cr6.eq) goto loc_8236D87C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367ac8
	ctx.lr = 0x8236D87C;
	sub_82367AC8(ctx, base);
loc_8236D87C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236D880:
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

PPC_WEAK_FUNC(sub_8236D5D8) {
	__imp__sub_8236D5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236D898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8236D8A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r27,r11,19388
	ctx.r27.s64 = ctx.r11.s64 + 19388;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r7,r10,26360
	ctx.r7.s64 = ctx.r10.s64 + 26360;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,1834
	ctx.r6.s64 = 1834;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D8CC;
	sub_823911B8(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8236d90c
	if (!ctx.cr6.eq) goto loc_8236D90C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236d90c
	if (!ctx.cr6.eq) goto loc_8236D90C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,22528
	ctx.r7.s64 = ctx.r11.s64 + 22528;
	// li r6,1837
	ctx.r6.s64 = 1837;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D900;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236D90C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r11,16717
	ctx.r9.s64 = ctx.r11.s64 + 16717;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236d94c
	if (!ctx.cr6.gt) goto loc_8236D94C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26328
	ctx.r7.s64 = ctx.r11.s64 + 26328;
	// li r6,1842
	ctx.r6.s64 = 1842;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D940;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236D94C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236dc80
	if (!ctx.cr6.eq) goto loc_8236DC80;
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236d9e0
	if (ctx.cr6.eq) goto loc_8236D9E0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8236d99c
	if (!ctx.cr6.lt) goto loc_8236D99C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,1862
	ctx.r6.s64 = 1862;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D990;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236D99C:
	// subf. r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// beq 0x8236d9d8
	if (ctx.cr0.eq) goto loc_8236D9D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26284
	ctx.r7.s64 = ctx.r11.s64 + 26284;
	// li r6,1871
	ctx.r6.s64 = 1871;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236D9C4;
	sub_823911B8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x82634bc0
	ctx.lr = 0x8236D9D8;
	sub_82634BC0(ctx, base);
loc_8236D9D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_8236D9E0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26256
	ctx.r7.s64 = ctx.r11.s64 + 26256;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r6,1882
	ctx.r6.s64 = 1882;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DA04;
	sub_823911B8(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236da18
	if (ctx.cr6.gt) goto loc_8236DA18;
	// li r6,1888
	ctx.r6.s64 = 1888;
	// b 0x8236dc5c
	goto loc_8236DC5C;
loc_8236DA18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236da48
	if (ctx.cr6.eq) goto loc_8236DA48;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,1898
	ctx.r6.s64 = 1898;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236DA3C;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236DA48:
	// bl 0x823684c8
	ctx.lr = 0x8236DA4C;
	sub_823684C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236da78
	if (ctx.cr6.eq) goto loc_8236DA78;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26236
	ctx.r7.s64 = ctx.r11.s64 + 26236;
	// li r6,1908
	ctx.r6.s64 = 1908;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DA70;
	sub_823911B8(ctx, base);
	// li r30,-26624
	ctx.r30.s64 = -26624;
	// b 0x8236db3c
	goto loc_8236DB3C;
loc_8236DA78:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// addi r29,r11,16717
	ctx.r29.s64 = ctx.r11.s64 + 16717;
	// beq cr6,0x8236daa0
	if (ctx.cr6.eq) goto loc_8236DAA0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r30,584(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// b 0x8236daa8
	goto loc_8236DAA8;
loc_8236DAA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_8236DAA8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26212
	ctx.r7.s64 = ctx.r11.s64 + 26212;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1919
	ctx.r6.s64 = 1919;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DAC8;
	sub_823911B8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236daf0
	if (ctx.cr6.eq) goto loc_8236DAF0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236DAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8236dafc
	goto loc_8236DAFC;
loc_8236DAF0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236DAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236DAFC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26188
	ctx.r7.s64 = ctx.r11.s64 + 26188;
	// li r6,1928
	ctx.r6.s64 = 1928;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236DB20;
	sub_823912A0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8236db34
	if (!ctx.cr6.eq) goto loc_8236DB34;
loc_8236DB28:
	// li r3,-29312
	ctx.r3.s64 = -29312;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236DB34:
	// cmpwi cr6,r30,-26624
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -26624, ctx.xer);
	// bne cr6,0x8236dc4c
	if (!ctx.cr6.eq) goto loc_8236DC4C;
loc_8236DB3C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26180
	ctx.r7.s64 = ctx.r11.s64 + 26180;
	// li r6,1936
	ctx.r6.s64 = 1936;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DB58;
	sub_823911B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368450
	ctx.lr = 0x8236DB64;
	sub_82368450(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// beq cr6,0x8236dbf0
	if (ctx.cr6.eq) goto loc_8236DBF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368550
	ctx.lr = 0x8236DB78;
	sub_82368550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236dba8
	if (ctx.cr6.eq) goto loc_8236DBA8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26160
	ctx.r7.s64 = ctx.r11.s64 + 26160;
	// li r6,1941
	ctx.r6.s64 = 1941;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236DB9C;
	sub_823911B8(ctx, base);
	// li r3,-26624
	ctx.r3.s64 = -26624;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236DBA8:
	// bl 0x8236d260
	ctx.lr = 0x8236DBAC;
	sub_8236D260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236dbe4
	if (ctx.cr6.eq) goto loc_8236DBE4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,25396
	ctx.r7.s64 = ctx.r11.s64 + 25396;
	// li r6,1946
	ctx.r6.s64 = 1946;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236DBD8;
	sub_823912A0(ctx, base);
loc_8236DBD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236DBE4:
	// li r3,-26880
	ctx.r3.s64 = -26880;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236DBF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236dbd8
	if (!ctx.cr6.eq) goto loc_8236DBD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236dbd8
	if (!ctx.cr6.eq) goto loc_8236DBD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823673b0
	ctx.lr = 0x8236DC14;
	sub_823673B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236dbe4
	if (ctx.cr6.eq) goto loc_8236DBE4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26124
	ctx.r7.s64 = ctx.r11.s64 + 26124;
	// li r6,1957
	ctx.r6.s64 = 1957;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236DC40;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236DC4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8236dbd8
	if (ctx.cr6.lt) goto loc_8236DBD8;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_8236DC58:
	// li r6,2019
	ctx.r6.s64 = 2019;
loc_8236DC5C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26108
	ctx.r7.s64 = ctx.r11.s64 + 26108;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DC74;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236DC80:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r26,r11,26256
	ctx.r26.s64 = ctx.r11.s64 + 26256;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1976
	ctx.r6.s64 = 1976;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DCA8;
	sub_823911B8(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8236dc58
	if (!ctx.cr6.lt) goto loc_8236DC58;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r25,r11,26188
	ctx.r25.s64 = ctx.r11.s64 + 26188;
loc_8236DCBC:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r29,r11,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x823684c8
	ctx.lr = 0x8236DCCC;
	sub_823684C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236dcdc
	if (ctx.cr6.eq) goto loc_8236DCDC;
	// li r30,-26624
	ctx.r30.s64 = -26624;
	// b 0x8236dd28
	goto loc_8236DD28;
loc_8236DCDC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236dd10
	if (ctx.cr6.eq) goto loc_8236DD10;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// bctrl 
	ctx.lr = 0x8236DD0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8236dd24
	goto loc_8236DD24;
loc_8236DD10:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8236DD24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236DD24:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8236DD28:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r6,1996
	ctx.r6.s64 = 1996;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DD48;
	sub_823911B8(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1997
	ctx.r6.s64 = 1997;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236DD64;
	sub_823912A0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8236db28
	if (ctx.cr6.eq) goto loc_8236DB28;
	// blt cr6,0x8236dbd8
	if (ctx.cr6.lt) goto loc_8236DBD8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8236dd94
	if (ctx.cr6.gt) goto loc_8236DD94;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8236dcbc
	if (ctx.cr6.lt) goto loc_8236DCBC;
	// b 0x8236dc58
	goto loc_8236DC58;
loc_8236DD94:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,26052
	ctx.r7.s64 = ctx.r11.s64 + 26052;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,2011
	ctx.r6.s64 = 2011;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DDB8;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236D898) {
	__imp__sub_8236D898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236DDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236DDC4) {
	__imp__sub_8236DDC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236DDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8236DDD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236aa30
	ctx.lr = 0x8236DDDC;
	sub_8236AA30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e1d4
	if (!ctx.cr6.eq) goto loc_8236E1D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8236ddfc
	if (ctx.cr6.eq) goto loc_8236DDFC;
	// li r4,5
	ctx.r4.s64 = 5;
loc_8236DDFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236d898
	ctx.lr = 0x8236DE04;
	sub_8236D898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236de40
	if (ctx.cr6.eq) goto loc_8236DE40;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,26584
	ctx.r7.s64 = ctx.r11.s64 + 26584;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,4461
	ctx.r6.s64 = 4461;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x8236DE34;
	sub_823912A0(ctx, base);
loc_8236DE34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236DE40:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x8236ba40
	ctx.lr = 0x8236DE50;
	sub_8236BA40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236dfdc
	if (ctx.cr6.eq) goto loc_8236DFDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236e1d4
	if (!ctx.cr6.eq) goto loc_8236E1D4;
	// cmpwi cr6,r3,-25728
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -25728, ctx.xer);
	// bne cr6,0x8236de8c
	if (!ctx.cr6.eq) goto loc_8236DE8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ab68
	ctx.lr = 0x8236DE7C;
	sub_8236AB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236de94
	if (ctx.cr6.eq) goto loc_8236DE94;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236DE8C:
	// cmpwi cr6,r3,-26368
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26368, ctx.xer);
	// bne cr6,0x8236dfa4
	if (!ctx.cr6.eq) goto loc_8236DFA4;
loc_8236DE94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ad10
	ctx.lr = 0x8236DE9C;
	sub_8236AD10(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lbz r7,1(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8236df48
	if (!ctx.cr6.eq) goto loc_8236DF48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8236df48
	if (!ctx.cr6.eq) goto loc_8236DF48;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8236df48
	if (!ctx.cr6.eq) goto loc_8236DF48;
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// bne cr6,0x8236df48
	if (!ctx.cr6.eq) goto loc_8236DF48;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// ble cr6,0x8236df48
	if (!ctx.cr6.gt) goto loc_8236DF48;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236df48
	if (!ctx.cr6.eq) goto loc_8236DF48;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,21348
	ctx.r7.s64 = ctx.r11.s64 + 21348;
	// li r6,3628
	ctx.r6.s64 = 3628;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236DF38;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a260
	ctx.lr = 0x8236DF40;
	sub_8236A260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8236df4c
	goto loc_8236DF4C;
loc_8236DF48:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236DF4C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26556
	ctx.r7.s64 = ctx.r11.s64 + 26556;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,4495
	ctx.r6.s64 = 4495;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236DF6C;
	sub_823912A0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8236de34
	if (!ctx.cr6.eq) goto loc_8236DE34;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r10,26516
	ctx.r7.s64 = ctx.r10.s64 + 26516;
	// li r6,4505
	ctx.r6.s64 = 4505;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DF98;
	sub_823911B8(ctx, base);
	// li r3,-25984
	ctx.r3.s64 = -25984;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236DFA4:
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// addi r7,r11,26480
	ctx.r7.s64 = ctx.r11.s64 + 26480;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,4512
	ctx.r6.s64 = 4512;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236DFD0;
	sub_823911B8(ctx, base);
	// li r3,-25984
	ctx.r3.s64 = -25984;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236DFDC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,19388
	ctx.r28.s64 = ctx.r11.s64 + 19388;
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8236e02c
	if (!ctx.cr6.eq) goto loc_8236E02C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bge cr6,0x8236e078
	if (!ctx.cr6.lt) goto loc_8236E078;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,26440
	ctx.r7.s64 = ctx.r11.s64 + 26440;
	// li r6,4529
	ctx.r6.s64 = 4529;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E028;
	sub_823911B8(ctx, base);
	// b 0x8236e078
	goto loc_8236E078;
loc_8236E02C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8236d898
	ctx.lr = 0x8236E038;
	sub_8236D898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e074
	if (ctx.cr6.eq) goto loc_8236E074;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,26584
	ctx.r7.s64 = ctx.r11.s64 + 26584;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,4539
	ctx.r6.s64 = 4539;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236E068;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236E074:
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
loc_8236E078:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a408
	ctx.lr = 0x8236E084;
	sub_8236A408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e178
	if (ctx.cr6.eq) goto loc_8236E178;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,5(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8236e154
	if (!ctx.cr6.eq) goto loc_8236E154;
	// cmpwi cr6,r3,-29056
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -29056, ctx.xer);
	// bne cr6,0x8236de34
	if (!ctx.cr6.eq) goto loc_8236DE34;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8236e138
	if (ctx.cr6.eq) goto loc_8236E138;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8236e138
	if (ctx.cr6.eq) goto loc_8236E138;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e108
	if (ctx.cr6.eq) goto loc_8236E108;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236e108
	if (ctx.cr6.lt) goto loc_8236E108;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,26408
	ctx.r7.s64 = ctx.r11.s64 + 26408;
	// li r6,4573
	ctx.r6.s64 = 4573;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E0FC;
	sub_823911B8(ctx, base);
	// li r3,-29056
	ctx.r3.s64 = -29056;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236E108:
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,26376
	ctx.r7.s64 = ctx.r11.s64 + 26376;
	// li r6,4584
	ctx.r6.s64 = 4584;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E12C;
	sub_823911B8(ctx, base);
	// li r3,-25984
	ctx.r3.s64 = -25984;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236E138:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x8236E148;
	sub_8236C3F8(ctx, base);
	// li r3,-29056
	ctx.r3.s64 = -29056;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236E154:
	// cmpwi cr6,r30,-29056
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -29056, ctx.xer);
	// bne cr6,0x8236e16c
	if (!ctx.cr6.eq) goto loc_8236E16C;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x8236E16C;
	sub_8236C3F8(ctx, base);
loc_8236E16C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236E178:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ad10
	ctx.lr = 0x8236E180;
	sub_8236AD10(ctx, base);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r4,r11,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// stb r4,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r4.u8);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
loc_8236E1D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236DDC8) {
	__imp__sub_8236DDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236E1DC) {
	__imp__sub_8236E1DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236E1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8236E1E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r7,r10,26708
	ctx.r7.s64 = ctx.r10.s64 + 26708;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,3791
	ctx.r6.s64 = 3791;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E214;
	sub_823911B8(ctx, base);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236e344
	if (!ctx.cr6.eq) goto loc_8236E344;
loc_8236E220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a8f8
	ctx.lr = 0x8236E228;
	sub_8236A8F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e388
	if (!ctx.cr6.eq) goto loc_8236E388;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8236e288
	if (ctx.cr6.gt) goto loc_8236E288;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236e26c
	if (!ctx.cr6.eq) goto loc_8236E26C;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236e26c
	if (ctx.cr6.gt) goto loc_8236E26C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a688
	ctx.lr = 0x8236E264;
	sub_8236A688(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e288
	if (ctx.cr6.eq) goto loc_8236E288;
loc_8236E26C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ddc8
	ctx.lr = 0x8236E274;
	sub_8236DDC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-25984
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -25984, ctx.xer);
	// beq cr6,0x8236e2b4
	if (ctx.cr6.eq) goto loc_8236E2B4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e2f8
	if (!ctx.cr6.eq) goto loc_8236E2F8;
loc_8236E288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236d5d8
	ctx.lr = 0x8236E290;
	sub_8236D5D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-25728
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -25728, ctx.xer);
	// bne cr6,0x8236e2b4
	if (!ctx.cr6.eq) goto loc_8236E2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236bed8
	ctx.lr = 0x8236E2A4;
	sub_8236BED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e220
	if (ctx.cr6.eq) goto loc_8236E220;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236E2B4:
	// cmpwi cr6,r30,-26240
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -26240, ctx.xer);
	// beq cr6,0x8236e220
	if (ctx.cr6.eq) goto loc_8236E220;
	// cmpwi cr6,r30,-25984
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -25984, ctx.xer);
	// beq cr6,0x8236e220
	if (ctx.cr6.eq) goto loc_8236E220;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8236e324
	if (ctx.cr6.eq) goto loc_8236E324;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26676
	ctx.r7.s64 = ctx.r11.s64 + 26676;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,3846
	ctx.r6.s64 = 3846;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236E2EC;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236E2F8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26656
	ctx.r7.s64 = ctx.r11.s64 + 26656;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,3822
	ctx.r6.s64 = 3822;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236E318;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236E324:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8236e368
	if (!ctx.cr6.eq) goto loc_8236E368;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x8236e368
	if (!ctx.cr6.eq) goto loc_8236E368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b968
	ctx.lr = 0x8236E340;
	sub_8236B968(ctx, base);
	// b 0x8236e368
	goto loc_8236E368;
loc_8236E344:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26624
	ctx.r7.s64 = ctx.r11.s64 + 26624;
	// li r6,3855
	ctx.r6.s64 = 3855;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E360;
	sub_823911B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
loc_8236E368:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26608
	ctx.r7.s64 = ctx.r11.s64 + 26608;
	// li r6,3859
	ctx.r6.s64 = 3859;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E384;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236E388:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236E1E0) {
	__imp__sub_8236E1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236E390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8236E398;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,26836
	ctx.r7.s64 = ctx.r10.s64 + 26836;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,4828
	ctx.r6.s64 = 4828;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E3C0;
	sub_823911B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x8236E3CC;
	sub_8236E1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236e404
	if (ctx.cr6.eq) goto loc_8236E404;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// li r6,4831
	ctx.r6.s64 = 4831;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x8236E3F8;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236E404:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x8236e440
	if (ctx.cr6.eq) goto loc_8236E440;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4836
	ctx.r6.s64 = 4836;
	// addi r7,r11,26804
	ctx.r7.s64 = ctx.r11.s64 + 26804;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236E424;
	sub_823911B8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x8236E434;
	sub_8236C3F8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236E440:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4849
	ctx.r6.s64 = 4849;
	// addi r7,r11,26752
	ctx.r7.s64 = ctx.r11.s64 + 26752;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823911b8
	ctx.lr = 0x8236E454;
	sub_823911B8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8236e4c0
	if (!ctx.cr6.eq) goto loc_8236E4C0;
	// lhz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r10.u64);
	// std r10,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r10.u64);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r10.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236e4dc
	if (!ctx.cr6.eq) goto loc_8236E4DC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,17908
	ctx.r7.s64 = ctx.r11.s64 + 17908;
	// li r6,4861
	ctx.r6.s64 = 4861;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E4B4;
	sub_823911B8(ctx, base);
	// li r3,-27520
	ctx.r3.s64 = -27520;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236E4C0:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8236E4D4:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8236e4d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236E4D4;
loc_8236E4DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ad10
	ctx.lr = 0x8236E4E4;
	sub_8236AD10(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r7,r10,26724
	ctx.r7.s64 = ctx.r10.s64 + 26724;
	// li r6,4885
	ctx.r6.s64 = 4885;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x8236E508;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236E390) {
	__imp__sub_8236E390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236E514) {
	__imp__sub_8236E514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236E518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x8236E520;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236eae0
	if (ctx.cr6.eq) goto loc_8236EAE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236eae0
	if (ctx.cr6.eq) goto loc_8236EAE0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,27144
	ctx.r7.s64 = ctx.r10.s64 + 27144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,5181
	ctx.r6.s64 = 5181;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x8236E564;
	sub_823911B8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8236e5ac
	if (!ctx.cr6.eq) goto loc_8236E5AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b2b0
	ctx.lr = 0x8236E57C;
	sub_8236B2B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236eae4
	if (!ctx.cr6.eq) goto loc_8236EAE4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e5ac
	if (ctx.cr6.eq) goto loc_8236E5AC;
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8236e5ac
	if (!ctx.cr6.eq) goto loc_8236E5AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c988
	ctx.lr = 0x8236E5A4;
	sub_8236C988(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236eae4
	if (!ctx.cr6.eq) goto loc_8236EAE4;
loc_8236E5AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236af40
	ctx.lr = 0x8236E5B4;
	sub_8236AF40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-27392
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -27392, ctx.xer);
	// beq cr6,0x8236e5f4
	if (ctx.cr6.eq) goto loc_8236E5F4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e5f4
	if (ctx.cr6.eq) goto loc_8236E5F4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,24632
	ctx.r7.s64 = ctx.r11.s64 + 24632;
	// li r6,5214
	ctx.r6.s64 = 5214;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236E5E8;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236E5F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8236e648
	if (ctx.cr6.eq) goto loc_8236E648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365b68
	ctx.lr = 0x8236E608;
	sub_82365B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-27392
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -27392, ctx.xer);
	// beq cr6,0x8236e648
	if (ctx.cr6.eq) goto loc_8236E648;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e648
	if (ctx.cr6.eq) goto loc_8236E648;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,19316
	ctx.r7.s64 = ctx.r11.s64 + 19316;
	// li r6,5223
	ctx.r6.s64 = 5223;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236E63C;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236E648:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236e91c
	if (!ctx.cr6.eq) goto loc_8236E91C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r24,3
	ctx.r24.s64 = 3;
	// addi r27,r11,27104
	ctx.r27.s64 = ctx.r11.s64 + 27104;
	// addi r26,r10,27064
	ctx.r26.s64 = ctx.r10.s64 + 27064;
	// addi r25,r9,27024
	ctx.r25.s64 = ctx.r9.s64 + 27024;
	// addi r28,r8,26996
	ctx.r28.s64 = ctx.r8.s64 + 26996;
loc_8236E678:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e6a8
	if (ctx.cr6.eq) goto loc_8236E6A8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236E690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8236e6a8
	if (!ctx.cr6.eq) goto loc_8236E6A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82368450
	ctx.lr = 0x8236E6A8;
	sub_82368450(ctx, base);
loc_8236E6A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x8236E6B4;
	sub_8236E1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e970
	if (!ctx.cr6.eq) goto loc_8236E970;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236e6f0
	if (!ctx.cr6.eq) goto loc_8236E6F0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x8236e6f0
	if (!ctx.cr6.eq) goto loc_8236E6F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x8236E6E4;
	sub_8236E1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e9b0
	if (!ctx.cr6.eq) goto loc_8236E9B0;
loc_8236E6F0:
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r9,22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 22, ctx.xer);
	// bne cr6,0x8236e87c
	if (!ctx.cr6.eq) goto loc_8236E87C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,5261
	ctx.r6.s64 = 5261;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E714;
	sub_823911B8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8236e774
	if (!ctx.cr6.eq) goto loc_8236E774;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236e748
	if (!ctx.cr6.eq) goto loc_8236E748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368430
	ctx.lr = 0x8236E73C;
	sub_82368430(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8236e774
	if (ctx.cr6.eq) goto loc_8236E774;
loc_8236E748:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,5273
	ctx.r6.s64 = 5273;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E760;
	sub_823911B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236ea24
	if (!ctx.cr6.eq) goto loc_8236EA24;
	// b 0x8236e910
	goto loc_8236E910;
loc_8236E774:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8236e7b8
	if (!ctx.cr6.eq) goto loc_8236E7B8;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8236e7b8
	if (ctx.cr6.eq) goto loc_8236E7B8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,5288
	ctx.r6.s64 = 5288;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E7A4;
	sub_823911B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236ea24
	if (!ctx.cr6.eq) goto loc_8236EA24;
	// b 0x8236e910
	goto loc_8236E910;
loc_8236E7B8:
	// lbz r11,14(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e83c
	if (ctx.cr6.eq) goto loc_8236E83C;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e7dc
	if (!ctx.cr6.eq) goto loc_8236E7DC;
	// lbz r11,7(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e83c
	if (ctx.cr6.eq) goto loc_8236E83C;
loc_8236E7DC:
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8236e7f4
	if (!ctx.cr6.eq) goto loc_8236E7F4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8236e7f4
	if (!ctx.cr6.eq) goto loc_8236E7F4;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
loc_8236E7F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368228
	ctx.lr = 0x8236E7FC;
	sub_82368228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-27392
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -27392, ctx.xer);
	// beq cr6,0x8236e910
	if (ctx.cr6.eq) goto loc_8236E910;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e910
	if (ctx.cr6.eq) goto loc_8236E910;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,19356
	ctx.r7.s64 = ctx.r11.s64 + 19356;
	// li r6,5321
	ctx.r6.s64 = 5321;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236E830;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236E83C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,5331
	ctx.r6.s64 = 5331;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236E854;
	sub_823911B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8236e9e4
	if (ctx.cr6.lt) goto loc_8236E9E4;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8236c3f8
	ctx.lr = 0x8236E870;
	sub_8236C3F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236eae4
	if (!ctx.cr6.eq) goto loc_8236EAE4;
	// b 0x8236e910
	goto loc_8236E910;
loc_8236E87C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236e8b0
	if (!ctx.cr6.eq) goto loc_8236E8B0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8236e8b0
	if (ctx.cr6.lt) goto loc_8236E8B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8236ea08
	if (ctx.cr6.gt) goto loc_8236EA08;
loc_8236E8B0:
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// beq cr6,0x8236ea30
	if (ctx.cr6.eq) goto loc_8236EA30;
	// cmpwi cr6,r9,23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 23, ctx.xer);
	// bne cr6,0x8236ea58
	if (!ctx.cr6.eq) goto loc_8236EA58;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bne cr6,0x8236e8e0
	if (!ctx.cr6.eq) goto loc_8236E8E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368450
	ctx.lr = 0x8236E8E0;
	sub_82368450(ctx, base);
loc_8236E8E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236e910
	if (!ctx.cr6.eq) goto loc_8236E910;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236e910
	if (!ctx.cr6.eq) goto loc_8236E910;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823673b0
	ctx.lr = 0x8236E904;
	sub_823673B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236ea80
	if (!ctx.cr6.eq) goto loc_8236EA80;
loc_8236E910:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e678
	if (ctx.cr6.eq) goto loc_8236E678;
loc_8236E91C:
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplw cr6,r23,r30
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8236e92c
	if (!ctx.cr6.lt) goto loc_8236E92C;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8236E92C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8236e950
	if (ctx.cr6.eq) goto loc_8236E950;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82635430
	ctx.lr = 0x8236E944;
	sub_82635430(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_8236E950:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82362b98
	ctx.lr = 0x8236E95C;
	sub_82362B98(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236eaac
	if (!ctx.cr6.eq) goto loc_8236EAAC;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// b 0x8236eab4
	goto loc_8236EAB4;
loc_8236E970:
	// cmpwi cr6,r30,-29312
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -29312, ctx.xer);
	// bne cr6,0x8236e984
	if (!ctx.cr6.eq) goto loc_8236E984;
loc_8236E978:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236E984:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,5241
	ctx.r6.s64 = 5241;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236E9A4;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236E9B0:
	// cmpwi cr6,r30,-29312
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -29312, ctx.xer);
	// beq cr6,0x8236e978
	if (ctx.cr6.eq) goto loc_8236E978;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,5255
	ctx.r6.s64 = 5255;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236E9D8;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236E9E4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,5355
	ctx.r6.s64 = 5355;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236E9FC;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236EA08:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26944
	ctx.r7.s64 = ctx.r11.s64 + 26944;
	// li r6,5385
	ctx.r6.s64 = 5385;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236EA24;
	sub_823911B8(ctx, base);
loc_8236EA24:
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236EA30:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26904
	ctx.r7.s64 = ctx.r11.s64 + 26904;
	// li r6,5394
	ctx.r6.s64 = 5394;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236EA4C;
	sub_823911B8(ctx, base);
	// li r3,-26880
	ctx.r3.s64 = -26880;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236EA58:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26872
	ctx.r7.s64 = ctx.r11.s64 + 26872;
	// li r6,5399
	ctx.r6.s64 = 5399;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236EA74;
	sub_823911B8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236EA80:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26124
	ctx.r7.s64 = ctx.r11.s64 + 26124;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,5420
	ctx.r6.s64 = 5420;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236EAA0;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236EAAC:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_8236EAB4:
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,26864
	ctx.r7.s64 = ctx.r11.s64 + 26864;
	// li r6,5449
	ctx.r6.s64 = 5449;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236EAD4;
	sub_823911B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236EAE0:
	// li r3,-28928
	ctx.r3.s64 = -28928;
loc_8236EAE4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236E518) {
	__imp__sub_8236E518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236EAEC) {
	__imp__sub_8236EAEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236EAF0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8236eafc
	if (!ctx.cr6.lt) goto loc_8236EAFC;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_8236EAFC:
	// rlwinm r11,r3,0,16,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF80;
	// cmpwi cr6,r11,19712
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19712, ctx.xer);
	// bgt cr6,0x8236f1a8
	if (ctx.cr6.gt) goto loc_8236F1A8;
	// beq cr6,0x8236f19c
	if (ctx.cr6.eq) goto loc_8236F19C;
	// cmpwi cr6,r11,12672
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12672, ctx.xer);
	// bgt cr6,0x8236ee6c
	if (ctx.cr6.gt) goto loc_8236EE6C;
	// beq cr6,0x8236ee60
	if (ctx.cr6.eq) goto loc_8236EE60;
	// cmpwi cr6,r11,9088
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9088, ctx.xer);
	// bgt cr6,0x8236ecc8
	if (ctx.cr6.gt) goto loc_8236ECC8;
	// beq cr6,0x8236ecbc
	if (ctx.cr6.eq) goto loc_8236ECBC;
	// cmpwi cr6,r11,7680
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7680, ctx.xer);
	// bgt cr6,0x8236ebfc
	if (ctx.cr6.gt) goto loc_8236EBFC;
	// beq cr6,0x8236ebf0
	if (ctx.cr6.eq) goto loc_8236EBF0;
	// cmpwi cr6,r11,4736
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4736, ctx.xer);
	// bgt cr6,0x8236eb9c
	if (ctx.cr6.gt) goto loc_8236EB9C;
	// beq cr6,0x8236eb90
	if (ctx.cr6.eq) goto loc_8236EB90;
	// cmpwi cr6,r11,4480
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4480, ctx.xer);
	// bgt cr6,0x8236eb7c
	if (ctx.cr6.gt) goto loc_8236EB7C;
	// beq cr6,0x8236eb70
	if (ctx.cr6.eq) goto loc_8236EB70;
	// cmpwi cr6,r11,4224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4224, ctx.xer);
	// beq cr6,0x8236eb64
	if (ctx.cr6.eq) goto loc_8236EB64;
	// cmpwi cr6,r11,4352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4352, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29924
	ctx.r3.s64 = ctx.r11.s64 + -29924;
	// blr 
	return;
loc_8236EB64:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29960
	ctx.r3.s64 = ctx.r11.s64 + -29960;
	// blr 
	return;
loc_8236EB70:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29992
	ctx.r3.s64 = ctx.r11.s64 + -29992;
	// blr 
	return;
loc_8236EB7C:
	// cmpwi cr6,r11,4608
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4608, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30028
	ctx.r3.s64 = ctx.r11.s64 + -30028;
	// blr 
	return;
loc_8236EB90:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30072
	ctx.r3.s64 = ctx.r11.s64 + -30072;
	// blr 
	return;
loc_8236EB9C:
	// cmpwi cr6,r11,5120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5120, ctx.xer);
	// bgt cr6,0x8236ebdc
	if (ctx.cr6.gt) goto loc_8236EBDC;
	// beq cr6,0x8236ebd0
	if (ctx.cr6.eq) goto loc_8236EBD0;
	// cmpwi cr6,r11,4864
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4864, ctx.xer);
	// beq cr6,0x8236ebc4
	if (ctx.cr6.eq) goto loc_8236EBC4;
	// cmpwi cr6,r11,4992
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4992, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30144
	ctx.r3.s64 = ctx.r11.s64 + -30144;
	// blr 
	return;
loc_8236EBC4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30188
	ctx.r3.s64 = ctx.r11.s64 + -30188;
	// blr 
	return;
loc_8236EBD0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30252
	ctx.r3.s64 = ctx.r11.s64 + -30252;
	// blr 
	return;
loc_8236EBDC:
	// cmpwi cr6,r11,5248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5248, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30292
	ctx.r3.s64 = ctx.r11.s64 + -30292;
	// blr 
	return;
loc_8236EBF0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30368
	ctx.r3.s64 = ctx.r11.s64 + -30368;
	// blr 
	return;
loc_8236EBFC:
	// cmpwi cr6,r11,8448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8448, ctx.xer);
	// bgt cr6,0x8236ec68
	if (ctx.cr6.gt) goto loc_8236EC68;
	// beq cr6,0x8236ec5c
	if (ctx.cr6.eq) goto loc_8236EC5C;
	// cmpwi cr6,r11,8064
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8064, ctx.xer);
	// bgt cr6,0x8236ec48
	if (ctx.cr6.gt) goto loc_8236EC48;
	// beq cr6,0x8236ec3c
	if (ctx.cr6.eq) goto loc_8236EC3C;
	// cmpwi cr6,r11,7808
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7808, ctx.xer);
	// beq cr6,0x8236ec30
	if (ctx.cr6.eq) goto loc_8236EC30;
	// cmpwi cr6,r11,7936
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7936, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30440
	ctx.r3.s64 = ctx.r11.s64 + -30440;
	// blr 
	return;
loc_8236EC30:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// blr 
	return;
loc_8236EC3C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30524
	ctx.r3.s64 = ctx.r11.s64 + -30524;
	// blr 
	return;
loc_8236EC48:
	// cmpwi cr6,r11,8320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8320, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30592
	ctx.r3.s64 = ctx.r11.s64 + -30592;
	// blr 
	return;
loc_8236EC5C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30628
	ctx.r3.s64 = ctx.r11.s64 + -30628;
	// blr 
	return;
loc_8236EC68:
	// cmpwi cr6,r11,8832
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8832, ctx.xer);
	// bgt cr6,0x8236eca8
	if (ctx.cr6.gt) goto loc_8236ECA8;
	// beq cr6,0x8236ec9c
	if (ctx.cr6.eq) goto loc_8236EC9C;
	// cmpwi cr6,r11,8576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8576, ctx.xer);
	// beq cr6,0x8236ec90
	if (ctx.cr6.eq) goto loc_8236EC90;
	// cmpwi cr6,r11,8704
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8704, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30680
	ctx.r3.s64 = ctx.r11.s64 + -30680;
	// blr 
	return;
loc_8236EC90:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30752
	ctx.r3.s64 = ctx.r11.s64 + -30752;
	// blr 
	return;
loc_8236EC9C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30796
	ctx.r3.s64 = ctx.r11.s64 + -30796;
	// blr 
	return;
loc_8236ECA8:
	// cmpwi cr6,r11,8960
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8960, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30844
	ctx.r3.s64 = ctx.r11.s64 + -30844;
	// blr 
	return;
loc_8236ECBC:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30884
	ctx.r3.s64 = ctx.r11.s64 + -30884;
	// blr 
	return;
loc_8236ECC8:
	// cmpwi cr6,r11,10368
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10368, ctx.xer);
	// bgt cr6,0x8236eda0
	if (ctx.cr6.gt) goto loc_8236EDA0;
	// beq cr6,0x8236ed94
	if (ctx.cr6.eq) goto loc_8236ED94;
	// cmpwi cr6,r11,9728
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9728, ctx.xer);
	// bgt cr6,0x8236ed40
	if (ctx.cr6.gt) goto loc_8236ED40;
	// beq cr6,0x8236ed34
	if (ctx.cr6.eq) goto loc_8236ED34;
	// cmpwi cr6,r11,9472
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9472, ctx.xer);
	// bgt cr6,0x8236ed20
	if (ctx.cr6.gt) goto loc_8236ED20;
	// beq cr6,0x8236ed14
	if (ctx.cr6.eq) goto loc_8236ED14;
	// cmpwi cr6,r11,9216
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9216, ctx.xer);
	// beq cr6,0x8236ed08
	if (ctx.cr6.eq) goto loc_8236ED08;
	// cmpwi cr6,r11,9344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9344, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30928
	ctx.r3.s64 = ctx.r11.s64 + -30928;
	// blr 
	return;
loc_8236ED08:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-30968
	ctx.r3.s64 = ctx.r11.s64 + -30968;
	// blr 
	return;
loc_8236ED14:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31016
	ctx.r3.s64 = ctx.r11.s64 + -31016;
	// blr 
	return;
loc_8236ED20:
	// cmpwi cr6,r11,9600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9600, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31072
	ctx.r3.s64 = ctx.r11.s64 + -31072;
	// blr 
	return;
loc_8236ED34:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31120
	ctx.r3.s64 = ctx.r11.s64 + -31120;
	// blr 
	return;
loc_8236ED40:
	// cmpwi cr6,r11,10112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10112, ctx.xer);
	// bgt cr6,0x8236ed80
	if (ctx.cr6.gt) goto loc_8236ED80;
	// beq cr6,0x8236ed74
	if (ctx.cr6.eq) goto loc_8236ED74;
	// cmpwi cr6,r11,9856
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9856, ctx.xer);
	// beq cr6,0x8236ed68
	if (ctx.cr6.eq) goto loc_8236ED68;
	// cmpwi cr6,r11,9984
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9984, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31200
	ctx.r3.s64 = ctx.r11.s64 + -31200;
	// blr 
	return;
loc_8236ED68:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// blr 
	return;
loc_8236ED74:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31324
	ctx.r3.s64 = ctx.r11.s64 + -31324;
	// blr 
	return;
loc_8236ED80:
	// cmpwi cr6,r11,10240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10240, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31348
	ctx.r3.s64 = ctx.r11.s64 + -31348;
	// blr 
	return;
loc_8236ED94:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31384
	ctx.r3.s64 = ctx.r11.s64 + -31384;
	// blr 
	return;
loc_8236EDA0:
	// cmpwi cr6,r11,12032
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12032, ctx.xer);
	// bgt cr6,0x8236ee0c
	if (ctx.cr6.gt) goto loc_8236EE0C;
	// beq cr6,0x8236ee00
	if (ctx.cr6.eq) goto loc_8236EE00;
	// cmpwi cr6,r11,11776
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11776, ctx.xer);
	// bgt cr6,0x8236edec
	if (ctx.cr6.gt) goto loc_8236EDEC;
	// beq cr6,0x8236ede0
	if (ctx.cr6.eq) goto loc_8236EDE0;
	// cmpwi cr6,r11,10496
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10496, ctx.xer);
	// beq cr6,0x8236edd4
	if (ctx.cr6.eq) goto loc_8236EDD4;
	// cmpwi cr6,r11,10624
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10624, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31424
	ctx.r3.s64 = ctx.r11.s64 + -31424;
	// blr 
	return;
loc_8236EDD4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31460
	ctx.r3.s64 = ctx.r11.s64 + -31460;
	// blr 
	return;
loc_8236EDE0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31536
	ctx.r3.s64 = ctx.r11.s64 + -31536;
	// blr 
	return;
loc_8236EDEC:
	// cmpwi cr6,r11,11904
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11904, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31596
	ctx.r3.s64 = ctx.r11.s64 + -31596;
	// blr 
	return;
loc_8236EE00:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31628
	ctx.r3.s64 = ctx.r11.s64 + -31628;
	// blr 
	return;
loc_8236EE0C:
	// cmpwi cr6,r11,12416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12416, ctx.xer);
	// bgt cr6,0x8236ee4c
	if (ctx.cr6.gt) goto loc_8236EE4C;
	// beq cr6,0x8236ee40
	if (ctx.cr6.eq) goto loc_8236EE40;
	// cmpwi cr6,r11,12160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12160, ctx.xer);
	// beq cr6,0x8236ee34
	if (ctx.cr6.eq) goto loc_8236EE34;
	// cmpwi cr6,r11,12288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12288, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31712
	ctx.r3.s64 = ctx.r11.s64 + -31712;
	// blr 
	return;
loc_8236EE34:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31756
	ctx.r3.s64 = ctx.r11.s64 + -31756;
	// blr 
	return;
loc_8236EE40:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31784
	ctx.r3.s64 = ctx.r11.s64 + -31784;
	// blr 
	return;
loc_8236EE4C:
	// cmpwi cr6,r11,12544
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12544, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31828
	ctx.r3.s64 = ctx.r11.s64 + -31828;
	// blr 
	return;
loc_8236EE60:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31872
	ctx.r3.s64 = ctx.r11.s64 + -31872;
	// blr 
	return;
loc_8236EE6C:
	// cmpwi cr6,r11,15872
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15872, ctx.xer);
	// bgt cr6,0x8236f01c
	if (ctx.cr6.gt) goto loc_8236F01C;
	// beq cr6,0x8236f010
	if (ctx.cr6.eq) goto loc_8236F010;
	// cmpwi cr6,r11,14592
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14592, ctx.xer);
	// bgt cr6,0x8236ef50
	if (ctx.cr6.gt) goto loc_8236EF50;
	// beq cr6,0x8236ef44
	if (ctx.cr6.eq) goto loc_8236EF44;
	// cmpwi cr6,r11,13312
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13312, ctx.xer);
	// bgt cr6,0x8236eef0
	if (ctx.cr6.gt) goto loc_8236EEF0;
	// beq cr6,0x8236eee4
	if (ctx.cr6.eq) goto loc_8236EEE4;
	// cmpwi cr6,r11,13056
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13056, ctx.xer);
	// bgt cr6,0x8236eed0
	if (ctx.cr6.gt) goto loc_8236EED0;
	// beq cr6,0x8236eec4
	if (ctx.cr6.eq) goto loc_8236EEC4;
	// cmpwi cr6,r11,12800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12800, ctx.xer);
	// beq cr6,0x8236eeb8
	if (ctx.cr6.eq) goto loc_8236EEB8;
	// cmpwi cr6,r11,12928
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12928, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31912
	ctx.r3.s64 = ctx.r11.s64 + -31912;
	// blr 
	return;
loc_8236EEB8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-31956
	ctx.r3.s64 = ctx.r11.s64 + -31956;
	// blr 
	return;
loc_8236EEC4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32000
	ctx.r3.s64 = ctx.r11.s64 + -32000;
	// blr 
	return;
loc_8236EED0:
	// cmpwi cr6,r11,13184
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13184, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32048
	ctx.r3.s64 = ctx.r11.s64 + -32048;
	// blr 
	return;
loc_8236EEE4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32084
	ctx.r3.s64 = ctx.r11.s64 + -32084;
	// blr 
	return;
loc_8236EEF0:
	// cmpwi cr6,r11,13696
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13696, ctx.xer);
	// bgt cr6,0x8236ef30
	if (ctx.cr6.gt) goto loc_8236EF30;
	// beq cr6,0x8236ef24
	if (ctx.cr6.eq) goto loc_8236EF24;
	// cmpwi cr6,r11,13440
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13440, ctx.xer);
	// beq cr6,0x8236ef18
	if (ctx.cr6.eq) goto loc_8236EF18;
	// cmpwi cr6,r11,13568
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13568, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32124
	ctx.r3.s64 = ctx.r11.s64 + -32124;
	// blr 
	return;
loc_8236EF18:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32160
	ctx.r3.s64 = ctx.r11.s64 + -32160;
	// blr 
	return;
loc_8236EF24:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32208
	ctx.r3.s64 = ctx.r11.s64 + -32208;
	// blr 
	return;
loc_8236EF30:
	// cmpwi cr6,r11,14464
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14464, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32244
	ctx.r3.s64 = ctx.r11.s64 + -32244;
	// blr 
	return;
loc_8236EF44:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32312
	ctx.r3.s64 = ctx.r11.s64 + -32312;
	// blr 
	return;
loc_8236EF50:
	// cmpwi cr6,r11,15232
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15232, ctx.xer);
	// bgt cr6,0x8236efbc
	if (ctx.cr6.gt) goto loc_8236EFBC;
	// beq cr6,0x8236efb0
	if (ctx.cr6.eq) goto loc_8236EFB0;
	// cmpwi cr6,r11,14976
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14976, ctx.xer);
	// bgt cr6,0x8236ef9c
	if (ctx.cr6.gt) goto loc_8236EF9C;
	// beq cr6,0x8236ef90
	if (ctx.cr6.eq) goto loc_8236EF90;
	// cmpwi cr6,r11,14720
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14720, ctx.xer);
	// beq cr6,0x8236ef84
	if (ctx.cr6.eq) goto loc_8236EF84;
	// cmpwi cr6,r11,14848
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14848, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32384
	ctx.r3.s64 = ctx.r11.s64 + -32384;
	// blr 
	return;
loc_8236EF84:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32444
	ctx.r3.s64 = ctx.r11.s64 + -32444;
	// blr 
	return;
loc_8236EF90:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32488
	ctx.r3.s64 = ctx.r11.s64 + -32488;
	// blr 
	return;
loc_8236EF9C:
	// cmpwi cr6,r11,15104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15104, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32560
	ctx.r3.s64 = ctx.r11.s64 + -32560;
	// blr 
	return;
loc_8236EFB0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32632
	ctx.r3.s64 = ctx.r11.s64 + -32632;
	// blr 
	return;
loc_8236EFBC:
	// cmpwi cr6,r11,15616
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15616, ctx.xer);
	// bgt cr6,0x8236effc
	if (ctx.cr6.gt) goto loc_8236EFFC;
	// beq cr6,0x8236eff0
	if (ctx.cr6.eq) goto loc_8236EFF0;
	// cmpwi cr6,r11,15360
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15360, ctx.xer);
	// beq cr6,0x8236efe4
	if (ctx.cr6.eq) goto loc_8236EFE4;
	// cmpwi cr6,r11,15488
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15488, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32704
	ctx.r3.s64 = ctx.r11.s64 + -32704;
	// blr 
	return;
loc_8236EFE4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-32748
	ctx.r3.s64 = ctx.r11.s64 + -32748;
	// blr 
	return;
loc_8236EFF0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32756
	ctx.r3.s64 = ctx.r11.s64 + 32756;
	// blr 
	return;
loc_8236EFFC:
	// cmpwi cr6,r11,15744
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15744, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32724
	ctx.r3.s64 = ctx.r11.s64 + 32724;
	// blr 
	return;
loc_8236F010:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32692
	ctx.r3.s64 = ctx.r11.s64 + 32692;
	// blr 
	return;
loc_8236F01C:
	// cmpwi cr6,r11,17280
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17280, ctx.xer);
	// bgt cr6,0x8236f0f4
	if (ctx.cr6.gt) goto loc_8236F0F4;
	// beq cr6,0x8236f0e8
	if (ctx.cr6.eq) goto loc_8236F0E8;
	// cmpwi cr6,r11,16640
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16640, ctx.xer);
	// bgt cr6,0x8236f094
	if (ctx.cr6.gt) goto loc_8236F094;
	// beq cr6,0x8236f088
	if (ctx.cr6.eq) goto loc_8236F088;
	// cmpwi cr6,r11,16256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16256, ctx.xer);
	// bgt cr6,0x8236f074
	if (ctx.cr6.gt) goto loc_8236F074;
	// beq cr6,0x8236f068
	if (ctx.cr6.eq) goto loc_8236F068;
	// cmpwi cr6,r11,16000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16000, ctx.xer);
	// beq cr6,0x8236f05c
	if (ctx.cr6.eq) goto loc_8236F05C;
	// cmpwi cr6,r11,16128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16128, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32632
	ctx.r3.s64 = ctx.r11.s64 + 32632;
	// blr 
	return;
loc_8236F05C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32592
	ctx.r3.s64 = ctx.r11.s64 + 32592;
	// blr 
	return;
loc_8236F068:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32560
	ctx.r3.s64 = ctx.r11.s64 + 32560;
	// blr 
	return;
loc_8236F074:
	// cmpwi cr6,r11,16512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16512, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32520
	ctx.r3.s64 = ctx.r11.s64 + 32520;
	// blr 
	return;
loc_8236F088:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32460
	ctx.r3.s64 = ctx.r11.s64 + 32460;
	// blr 
	return;
loc_8236F094:
	// cmpwi cr6,r11,17024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17024, ctx.xer);
	// bgt cr6,0x8236f0d4
	if (ctx.cr6.gt) goto loc_8236F0D4;
	// beq cr6,0x8236f0c8
	if (ctx.cr6.eq) goto loc_8236F0C8;
	// cmpwi cr6,r11,16768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16768, ctx.xer);
	// beq cr6,0x8236f0bc
	if (ctx.cr6.eq) goto loc_8236F0BC;
	// cmpwi cr6,r11,16896
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16896, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32400
	ctx.r3.s64 = ctx.r11.s64 + 32400;
	// blr 
	return;
loc_8236F0BC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32348
	ctx.r3.s64 = ctx.r11.s64 + 32348;
	// blr 
	return;
loc_8236F0C8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32308
	ctx.r3.s64 = ctx.r11.s64 + 32308;
	// blr 
	return;
loc_8236F0D4:
	// cmpwi cr6,r11,17152
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17152, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32268
	ctx.r3.s64 = ctx.r11.s64 + 32268;
	// blr 
	return;
loc_8236F0E8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32228
	ctx.r3.s64 = ctx.r11.s64 + 32228;
	// blr 
	return;
loc_8236F0F4:
	// cmpwi cr6,r11,19200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19200, ctx.xer);
	// bgt cr6,0x8236f160
	if (ctx.cr6.gt) goto loc_8236F160;
	// beq cr6,0x8236f154
	if (ctx.cr6.eq) goto loc_8236F154;
	// cmpwi cr6,r11,17664
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17664, ctx.xer);
	// bgt cr6,0x8236f140
	if (ctx.cr6.gt) goto loc_8236F140;
	// beq cr6,0x8236f134
	if (ctx.cr6.eq) goto loc_8236F134;
	// cmpwi cr6,r11,17408
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17408, ctx.xer);
	// beq cr6,0x8236f128
	if (ctx.cr6.eq) goto loc_8236F128;
	// cmpwi cr6,r11,17536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17536, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// blr 
	return;
loc_8236F128:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,32112
	ctx.r3.s64 = ctx.r11.s64 + 32112;
	// blr 
	return;
loc_8236F134:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31976
	ctx.r3.s64 = ctx.r11.s64 + 31976;
	// blr 
	return;
loc_8236F140:
	// cmpwi cr6,r11,17792
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17792, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// blr 
	return;
loc_8236F154:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31856
	ctx.r3.s64 = ctx.r11.s64 + 31856;
	// blr 
	return;
loc_8236F160:
	// cmpwi cr6,r11,19328
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19328, ctx.xer);
	// beq cr6,0x8236f190
	if (ctx.cr6.eq) goto loc_8236F190;
	// cmpwi cr6,r11,19456
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19456, ctx.xer);
	// beq cr6,0x8236f184
	if (ctx.cr6.eq) goto loc_8236F184;
	// cmpwi cr6,r11,19584
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19584, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31820
	ctx.r3.s64 = ctx.r11.s64 + 31820;
	// blr 
	return;
loc_8236F184:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31752
	ctx.r3.s64 = ctx.r11.s64 + 31752;
	// blr 
	return;
loc_8236F190:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31704
	ctx.r3.s64 = ctx.r11.s64 + 31704;
	// blr 
	return;
loc_8236F19C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// blr 
	return;
loc_8236F1A8:
	// cmpwi cr6,r11,27776
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27776, ctx.xer);
	// bgt cr6,0x8236f4f0
	if (ctx.cr6.gt) goto loc_8236F4F0;
	// beq cr6,0x8236f4e4
	if (ctx.cr6.eq) goto loc_8236F4E4;
	// cmpwi cr6,r11,25344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25344, ctx.xer);
	// bgt cr6,0x8236f364
	if (ctx.cr6.gt) goto loc_8236F364;
	// beq cr6,0x8236f358
	if (ctx.cr6.eq) goto loc_8236F358;
	// cmpwi cr6,r11,21120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21120, ctx.xer);
	// bgt cr6,0x8236f298
	if (ctx.cr6.gt) goto loc_8236F298;
	// beq cr6,0x8236f28c
	if (ctx.cr6.eq) goto loc_8236F28C;
	// cmpwi cr6,r11,20352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20352, ctx.xer);
	// bgt cr6,0x8236f238
	if (ctx.cr6.gt) goto loc_8236F238;
	// beq cr6,0x8236f22c
	if (ctx.cr6.eq) goto loc_8236F22C;
	// cmpwi cr6,r11,20096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20096, ctx.xer);
	// bgt cr6,0x8236f218
	if (ctx.cr6.gt) goto loc_8236F218;
	// beq cr6,0x8236f20c
	if (ctx.cr6.eq) goto loc_8236F20C;
	// cmpwi cr6,r11,19840
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19840, ctx.xer);
	// beq cr6,0x8236f200
	if (ctx.cr6.eq) goto loc_8236F200;
	// cmpwi cr6,r11,19968
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19968, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31600
	ctx.r3.s64 = ctx.r11.s64 + 31600;
	// blr 
	return;
loc_8236F200:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31568
	ctx.r3.s64 = ctx.r11.s64 + 31568;
	// blr 
	return;
loc_8236F20C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31472
	ctx.r3.s64 = ctx.r11.s64 + 31472;
	// blr 
	return;
loc_8236F218:
	// cmpwi cr6,r11,20224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20224, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// blr 
	return;
loc_8236F22C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31384
	ctx.r3.s64 = ctx.r11.s64 + 31384;
	// blr 
	return;
loc_8236F238:
	// cmpwi cr6,r11,20864
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20864, ctx.xer);
	// bgt cr6,0x8236f278
	if (ctx.cr6.gt) goto loc_8236F278;
	// beq cr6,0x8236f26c
	if (ctx.cr6.eq) goto loc_8236F26C;
	// cmpwi cr6,r11,20608
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20608, ctx.xer);
	// beq cr6,0x8236f260
	if (ctx.cr6.eq) goto loc_8236F260;
	// cmpwi cr6,r11,20736
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20736, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31344
	ctx.r3.s64 = ctx.r11.s64 + 31344;
	// blr 
	return;
loc_8236F260:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31300
	ctx.r3.s64 = ctx.r11.s64 + 31300;
	// blr 
	return;
loc_8236F26C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31268
	ctx.r3.s64 = ctx.r11.s64 + 31268;
	// blr 
	return;
loc_8236F278:
	// cmpwi cr6,r11,20992
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20992, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31228
	ctx.r3.s64 = ctx.r11.s64 + 31228;
	// blr 
	return;
loc_8236F28C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31192
	ctx.r3.s64 = ctx.r11.s64 + 31192;
	// blr 
	return;
loc_8236F298:
	// cmpwi cr6,r11,24704
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24704, ctx.xer);
	// bgt cr6,0x8236f304
	if (ctx.cr6.gt) goto loc_8236F304;
	// beq cr6,0x8236f2f8
	if (ctx.cr6.eq) goto loc_8236F2F8;
	// cmpwi cr6,r11,24320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24320, ctx.xer);
	// bgt cr6,0x8236f2e4
	if (ctx.cr6.gt) goto loc_8236F2E4;
	// beq cr6,0x8236f2d8
	if (ctx.cr6.eq) goto loc_8236F2D8;
	// cmpwi cr6,r11,24064
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24064, ctx.xer);
	// beq cr6,0x8236f2cc
	if (ctx.cr6.eq) goto loc_8236F2CC;
	// cmpwi cr6,r11,24192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24192, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31156
	ctx.r3.s64 = ctx.r11.s64 + 31156;
	// blr 
	return;
loc_8236F2CC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31128
	ctx.r3.s64 = ctx.r11.s64 + 31128;
	// blr 
	return;
loc_8236F2D8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,31056
	ctx.r3.s64 = ctx.r11.s64 + 31056;
	// blr 
	return;
loc_8236F2E4:
	// cmpwi cr6,r11,24576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24576, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30984
	ctx.r3.s64 = ctx.r11.s64 + 30984;
	// blr 
	return;
loc_8236F2F8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30936
	ctx.r3.s64 = ctx.r11.s64 + 30936;
	// blr 
	return;
loc_8236F304:
	// cmpwi cr6,r11,25088
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25088, ctx.xer);
	// bgt cr6,0x8236f344
	if (ctx.cr6.gt) goto loc_8236F344;
	// beq cr6,0x8236f338
	if (ctx.cr6.eq) goto loc_8236F338;
	// cmpwi cr6,r11,24832
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24832, ctx.xer);
	// beq cr6,0x8236f32c
	if (ctx.cr6.eq) goto loc_8236F32C;
	// cmpwi cr6,r11,24960
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24960, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30900
	ctx.r3.s64 = ctx.r11.s64 + 30900;
	// blr 
	return;
loc_8236F32C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30868
	ctx.r3.s64 = ctx.r11.s64 + 30868;
	// blr 
	return;
loc_8236F338:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30804
	ctx.r3.s64 = ctx.r11.s64 + 30804;
	// blr 
	return;
loc_8236F344:
	// cmpwi cr6,r11,25216
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25216, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30752
	ctx.r3.s64 = ctx.r11.s64 + 30752;
	// blr 
	return;
loc_8236F358:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30704
	ctx.r3.s64 = ctx.r11.s64 + 30704;
	// blr 
	return;
loc_8236F364:
	// cmpwi cr6,r11,26624
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26624, ctx.xer);
	// bgt cr6,0x8236f43c
	if (ctx.cr6.gt) goto loc_8236F43C;
	// beq cr6,0x8236f430
	if (ctx.cr6.eq) goto loc_8236F430;
	// cmpwi cr6,r11,25984
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25984, ctx.xer);
	// bgt cr6,0x8236f3dc
	if (ctx.cr6.gt) goto loc_8236F3DC;
	// beq cr6,0x8236f3d0
	if (ctx.cr6.eq) goto loc_8236F3D0;
	// cmpwi cr6,r11,25728
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25728, ctx.xer);
	// bgt cr6,0x8236f3bc
	if (ctx.cr6.gt) goto loc_8236F3BC;
	// beq cr6,0x8236f3b0
	if (ctx.cr6.eq) goto loc_8236F3B0;
	// cmpwi cr6,r11,25472
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25472, ctx.xer);
	// beq cr6,0x8236f3a4
	if (ctx.cr6.eq) goto loc_8236F3A4;
	// cmpwi cr6,r11,25600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25600, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30660
	ctx.r3.s64 = ctx.r11.s64 + 30660;
	// blr 
	return;
loc_8236F3A4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30592
	ctx.r3.s64 = ctx.r11.s64 + 30592;
	// blr 
	return;
loc_8236F3B0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30520
	ctx.r3.s64 = ctx.r11.s64 + 30520;
	// blr 
	return;
loc_8236F3BC:
	// cmpwi cr6,r11,25856
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25856, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// blr 
	return;
loc_8236F3D0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30376
	ctx.r3.s64 = ctx.r11.s64 + 30376;
	// blr 
	return;
loc_8236F3DC:
	// cmpwi cr6,r11,26368
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26368, ctx.xer);
	// bgt cr6,0x8236f41c
	if (ctx.cr6.gt) goto loc_8236F41C;
	// beq cr6,0x8236f410
	if (ctx.cr6.eq) goto loc_8236F410;
	// cmpwi cr6,r11,26112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26112, ctx.xer);
	// beq cr6,0x8236f404
	if (ctx.cr6.eq) goto loc_8236F404;
	// cmpwi cr6,r11,26240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26240, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30312
	ctx.r3.s64 = ctx.r11.s64 + 30312;
	// blr 
	return;
loc_8236F404:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30252
	ctx.r3.s64 = ctx.r11.s64 + 30252;
	// blr 
	return;
loc_8236F410:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30200
	ctx.r3.s64 = ctx.r11.s64 + 30200;
	// blr 
	return;
loc_8236F41C:
	// cmpwi cr6,r11,26496
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26496, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30140
	ctx.r3.s64 = ctx.r11.s64 + 30140;
	// blr 
	return;
loc_8236F430:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30108
	ctx.r3.s64 = ctx.r11.s64 + 30108;
	// blr 
	return;
loc_8236F43C:
	// cmpwi cr6,r11,27264
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27264, ctx.xer);
	// bgt cr6,0x8236f4a8
	if (ctx.cr6.gt) goto loc_8236F4A8;
	// beq cr6,0x8236f49c
	if (ctx.cr6.eq) goto loc_8236F49C;
	// cmpwi cr6,r11,27008
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27008, ctx.xer);
	// bgt cr6,0x8236f488
	if (ctx.cr6.gt) goto loc_8236F488;
	// beq cr6,0x8236f47c
	if (ctx.cr6.eq) goto loc_8236F47C;
	// cmpwi cr6,r11,26752
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26752, ctx.xer);
	// beq cr6,0x8236f470
	if (ctx.cr6.eq) goto loc_8236F470;
	// cmpwi cr6,r11,26880
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26880, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,30032
	ctx.r3.s64 = ctx.r11.s64 + 30032;
	// blr 
	return;
loc_8236F470:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29988
	ctx.r3.s64 = ctx.r11.s64 + 29988;
	// blr 
	return;
loc_8236F47C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// blr 
	return;
loc_8236F488:
	// cmpwi cr6,r11,27136
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27136, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29824
	ctx.r3.s64 = ctx.r11.s64 + 29824;
	// blr 
	return;
loc_8236F49C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29772
	ctx.r3.s64 = ctx.r11.s64 + 29772;
	// blr 
	return;
loc_8236F4A8:
	// cmpwi cr6,r11,27392
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27392, ctx.xer);
	// beq cr6,0x8236f4d8
	if (ctx.cr6.eq) goto loc_8236F4D8;
	// cmpwi cr6,r11,27520
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27520, ctx.xer);
	// beq cr6,0x8236f4cc
	if (ctx.cr6.eq) goto loc_8236F4CC;
	// cmpwi cr6,r11,27648
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27648, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29704
	ctx.r3.s64 = ctx.r11.s64 + 29704;
	// blr 
	return;
loc_8236F4CC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29636
	ctx.r3.s64 = ctx.r11.s64 + 29636;
	// blr 
	return;
loc_8236F4D8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29576
	ctx.r3.s64 = ctx.r11.s64 + 29576;
	// blr 
	return;
loc_8236F4E4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29524
	ctx.r3.s64 = ctx.r11.s64 + 29524;
	// blr 
	return;
loc_8236F4F0:
	// cmpwi cr6,r11,30336
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30336, ctx.xer);
	// bgt cr6,0x8236f6a0
	if (ctx.cr6.gt) goto loc_8236F6A0;
	// beq cr6,0x8236f694
	if (ctx.cr6.eq) goto loc_8236F694;
	// cmpwi cr6,r11,29056
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29056, ctx.xer);
	// bgt cr6,0x8236f5d4
	if (ctx.cr6.gt) goto loc_8236F5D4;
	// beq cr6,0x8236f5c8
	if (ctx.cr6.eq) goto loc_8236F5C8;
	// cmpwi cr6,r11,28416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28416, ctx.xer);
	// bgt cr6,0x8236f574
	if (ctx.cr6.gt) goto loc_8236F574;
	// beq cr6,0x8236f568
	if (ctx.cr6.eq) goto loc_8236F568;
	// cmpwi cr6,r11,28160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28160, ctx.xer);
	// bgt cr6,0x8236f554
	if (ctx.cr6.gt) goto loc_8236F554;
	// beq cr6,0x8236f548
	if (ctx.cr6.eq) goto loc_8236F548;
	// cmpwi cr6,r11,27904
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27904, ctx.xer);
	// beq cr6,0x8236f53c
	if (ctx.cr6.eq) goto loc_8236F53C;
	// cmpwi cr6,r11,28032
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28032, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29488
	ctx.r3.s64 = ctx.r11.s64 + 29488;
	// blr 
	return;
loc_8236F53C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29400
	ctx.r3.s64 = ctx.r11.s64 + 29400;
	// blr 
	return;
loc_8236F548:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29328
	ctx.r3.s64 = ctx.r11.s64 + 29328;
	// blr 
	return;
loc_8236F554:
	// cmpwi cr6,r11,28288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28288, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29268
	ctx.r3.s64 = ctx.r11.s64 + 29268;
	// blr 
	return;
loc_8236F568:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29208
	ctx.r3.s64 = ctx.r11.s64 + 29208;
	// blr 
	return;
loc_8236F574:
	// cmpwi cr6,r11,28800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28800, ctx.xer);
	// bgt cr6,0x8236f5b4
	if (ctx.cr6.gt) goto loc_8236F5B4;
	// beq cr6,0x8236f5a8
	if (ctx.cr6.eq) goto loc_8236F5A8;
	// cmpwi cr6,r11,28544
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28544, ctx.xer);
	// beq cr6,0x8236f59c
	if (ctx.cr6.eq) goto loc_8236F59C;
	// cmpwi cr6,r11,28672
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28672, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29144
	ctx.r3.s64 = ctx.r11.s64 + 29144;
	// blr 
	return;
loc_8236F59C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29080
	ctx.r3.s64 = ctx.r11.s64 + 29080;
	// blr 
	return;
loc_8236F5A8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,29032
	ctx.r3.s64 = ctx.r11.s64 + 29032;
	// blr 
	return;
loc_8236F5B4:
	// cmpwi cr6,r11,28928
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28928, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28992
	ctx.r3.s64 = ctx.r11.s64 + 28992;
	// blr 
	return;
loc_8236F5C8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28944
	ctx.r3.s64 = ctx.r11.s64 + 28944;
	// blr 
	return;
loc_8236F5D4:
	// cmpwi cr6,r11,29696
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29696, ctx.xer);
	// bgt cr6,0x8236f640
	if (ctx.cr6.gt) goto loc_8236F640;
	// beq cr6,0x8236f634
	if (ctx.cr6.eq) goto loc_8236F634;
	// cmpwi cr6,r11,29440
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29440, ctx.xer);
	// bgt cr6,0x8236f620
	if (ctx.cr6.gt) goto loc_8236F620;
	// beq cr6,0x8236f614
	if (ctx.cr6.eq) goto loc_8236F614;
	// cmpwi cr6,r11,29184
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29184, ctx.xer);
	// beq cr6,0x8236f608
	if (ctx.cr6.eq) goto loc_8236F608;
	// cmpwi cr6,r11,29312
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29312, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28904
	ctx.r3.s64 = ctx.r11.s64 + 28904;
	// blr 
	return;
loc_8236F608:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28860
	ctx.r3.s64 = ctx.r11.s64 + 28860;
	// blr 
	return;
loc_8236F614:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28820
	ctx.r3.s64 = ctx.r11.s64 + 28820;
	// blr 
	return;
loc_8236F620:
	// cmpwi cr6,r11,29568
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29568, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28756
	ctx.r3.s64 = ctx.r11.s64 + 28756;
	// blr 
	return;
loc_8236F634:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28712
	ctx.r3.s64 = ctx.r11.s64 + 28712;
	// blr 
	return;
loc_8236F640:
	// cmpwi cr6,r11,30080
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30080, ctx.xer);
	// bgt cr6,0x8236f680
	if (ctx.cr6.gt) goto loc_8236F680;
	// beq cr6,0x8236f674
	if (ctx.cr6.eq) goto loc_8236F674;
	// cmpwi cr6,r11,29824
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29824, ctx.xer);
	// beq cr6,0x8236f668
	if (ctx.cr6.eq) goto loc_8236F668;
	// cmpwi cr6,r11,29952
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29952, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28640
	ctx.r3.s64 = ctx.r11.s64 + 28640;
	// blr 
	return;
loc_8236F668:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// blr 
	return;
loc_8236F674:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28476
	ctx.r3.s64 = ctx.r11.s64 + 28476;
	// blr 
	return;
loc_8236F680:
	// cmpwi cr6,r11,30208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30208, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28408
	ctx.r3.s64 = ctx.r11.s64 + 28408;
	// blr 
	return;
loc_8236F694:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28352
	ctx.r3.s64 = ctx.r11.s64 + 28352;
	// blr 
	return;
loc_8236F6A0:
	// cmpwi cr6,r11,31616
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31616, ctx.xer);
	// bgt cr6,0x8236f778
	if (ctx.cr6.gt) goto loc_8236F778;
	// beq cr6,0x8236f76c
	if (ctx.cr6.eq) goto loc_8236F76C;
	// cmpwi cr6,r11,30976
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30976, ctx.xer);
	// bgt cr6,0x8236f718
	if (ctx.cr6.gt) goto loc_8236F718;
	// beq cr6,0x8236f70c
	if (ctx.cr6.eq) goto loc_8236F70C;
	// cmpwi cr6,r11,30720
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30720, ctx.xer);
	// bgt cr6,0x8236f6f8
	if (ctx.cr6.gt) goto loc_8236F6F8;
	// beq cr6,0x8236f6ec
	if (ctx.cr6.eq) goto loc_8236F6EC;
	// cmpwi cr6,r11,30464
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30464, ctx.xer);
	// beq cr6,0x8236f6e0
	if (ctx.cr6.eq) goto loc_8236F6E0;
	// cmpwi cr6,r11,30592
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30592, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28296
	ctx.r3.s64 = ctx.r11.s64 + 28296;
	// blr 
	return;
loc_8236F6E0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28240
	ctx.r3.s64 = ctx.r11.s64 + 28240;
	// blr 
	return;
loc_8236F6EC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28200
	ctx.r3.s64 = ctx.r11.s64 + 28200;
	// blr 
	return;
loc_8236F6F8:
	// cmpwi cr6,r11,30848
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30848, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28128
	ctx.r3.s64 = ctx.r11.s64 + 28128;
	// blr 
	return;
loc_8236F70C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,28060
	ctx.r3.s64 = ctx.r11.s64 + 28060;
	// blr 
	return;
loc_8236F718:
	// cmpwi cr6,r11,31360
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31360, ctx.xer);
	// bgt cr6,0x8236f758
	if (ctx.cr6.gt) goto loc_8236F758;
	// beq cr6,0x8236f74c
	if (ctx.cr6.eq) goto loc_8236F74C;
	// cmpwi cr6,r11,31104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31104, ctx.xer);
	// beq cr6,0x8236f740
	if (ctx.cr6.eq) goto loc_8236F740;
	// cmpwi cr6,r11,31232
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31232, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27996
	ctx.r3.s64 = ctx.r11.s64 + 27996;
	// blr 
	return;
loc_8236F740:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27932
	ctx.r3.s64 = ctx.r11.s64 + 27932;
	// blr 
	return;
loc_8236F74C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27864
	ctx.r3.s64 = ctx.r11.s64 + 27864;
	// blr 
	return;
loc_8236F758:
	// cmpwi cr6,r11,31488
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31488, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// blr 
	return;
loc_8236F76C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27720
	ctx.r3.s64 = ctx.r11.s64 + 27720;
	// blr 
	return;
loc_8236F778:
	// cmpwi cr6,r11,32256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32256, ctx.xer);
	// bgt cr6,0x8236f7e4
	if (ctx.cr6.gt) goto loc_8236F7E4;
	// beq cr6,0x8236f7d8
	if (ctx.cr6.eq) goto loc_8236F7D8;
	// cmpwi cr6,r11,32000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32000, ctx.xer);
	// bgt cr6,0x8236f7c4
	if (ctx.cr6.gt) goto loc_8236F7C4;
	// beq cr6,0x8236f7b8
	if (ctx.cr6.eq) goto loc_8236F7B8;
	// cmpwi cr6,r11,31744
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31744, ctx.xer);
	// beq cr6,0x8236f7ac
	if (ctx.cr6.eq) goto loc_8236F7AC;
	// cmpwi cr6,r11,31872
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31872, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27624
	ctx.r3.s64 = ctx.r11.s64 + 27624;
	// blr 
	return;
loc_8236F7AC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27552
	ctx.r3.s64 = ctx.r11.s64 + 27552;
	// blr 
	return;
loc_8236F7B8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27448
	ctx.r3.s64 = ctx.r11.s64 + 27448;
	// blr 
	return;
loc_8236F7C4:
	// cmpwi cr6,r11,32128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32128, ctx.xer);
	// bne cr6,0x8236f7fc
	if (!ctx.cr6.eq) goto loc_8236F7FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27376
	ctx.r3.s64 = ctx.r11.s64 + 27376;
	// blr 
	return;
loc_8236F7D8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27304
	ctx.r3.s64 = ctx.r11.s64 + 27304;
	// blr 
	return;
loc_8236F7E4:
	// cmpwi cr6,r11,32384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32384, ctx.xer);
	// beq cr6,0x8236f81c
	if (ctx.cr6.eq) goto loc_8236F81C;
	// cmpwi cr6,r11,32512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32512, ctx.xer);
	// beq cr6,0x8236f810
	if (ctx.cr6.eq) goto loc_8236F810;
	// cmpwi cr6,r11,32640
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32640, ctx.xer);
	// beq cr6,0x8236f804
	if (ctx.cr6.eq) goto loc_8236F804;
loc_8236F7FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236F804:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27244
	ctx.r3.s64 = ctx.r11.s64 + 27244;
	// blr 
	return;
loc_8236F810:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27212
	ctx.r3.s64 = ctx.r11.s64 + 27212;
	// blr 
	return;
loc_8236F81C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,27152
	ctx.r3.s64 = ctx.r11.s64 + 27152;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236EAF0) {
	__imp__sub_8236EAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236F828) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8236f834
	if (!ctx.cr6.lt) goto loc_8236F834;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_8236F834:
	// rlwinm r11,r3,0,25,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF007F;
	// cmpwi cr6,r11,24448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24448, ctx.xer);
	// bgt cr6,0x8236fdc0
	if (ctx.cr6.gt) {
		sub_8236FDC0(ctx, base);
		return;
	}
	// beq cr6,0x8236fdb4
	if (ctx.cr6.eq) {
		sub_8236FDB4(ctx, base);
		return;
	}
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bgt cr6,0x8236fdc0
	if (ctx.cr6.gt) {
		sub_8236FDC0(ctx, base);
		return;
	}
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1944
	ctx.r12.s64 = ctx.r12.s64 + -1944;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_8236F828) {
	__imp__sub_8236F828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236F868) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-900(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -900);
	// lwz r17,-1296(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1296);
	// lwz r17,-840(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -840);
	// lwz r17,-1284(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1284);
	// lwz r17,-828(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -828);
	// lwz r17,-1272(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1272);
	// lwz r17,-816(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -816);
	// lwz r17,-1260(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1260);
	// lwz r17,-804(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -804);
	// lwz r17,-1248(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1248);
	// lwz r17,-768(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -768);
	// lwz r17,-1236(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1236);
	// lwz r17,-1128(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1128);
	// lwz r17,-1224(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1224);
	// lwz r17,-1116(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1116);
	// lwz r17,-1212(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1212);
	// lwz r17,-1104(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1104);
	// lwz r17,-876(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -876);
	// lwz r17,-864(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -864);
	// lwz r17,-852(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -852);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1200(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1200);
	// lwz r17,-1176(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1176);
	// lwz r17,-1188(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1188);
	// lwz r17,-1416(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1416);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1476(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1476);
	// lwz r17,-1452(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1452);
	// lwz r17,-1464(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1464);
	// lwz r17,-1440(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1440);
	// lwz r17,-1164(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1164);
	// lwz r17,-1428(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1428);
	// lwz r17,-1152(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1152);
	// lwz r17,-1140(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1140);
	// lwz r17,-612(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -612);
	// lwz r17,-600(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -600);
	// lwz r17,-1320(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1320);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1308(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1308);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-780(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -780);
	// lwz r17,-792(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -792);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-696(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -696);
	// lwz r17,-984(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -984);
	// lwz r17,-972(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -972);
	// lwz r17,-1032(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1032);
	// lwz r17,-684(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -684);
	// lwz r17,-1020(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1020);
	// lwz r17,-660(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -660);
	// lwz r17,-1008(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1008);
	// lwz r17,-636(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -636);
	// lwz r17,-996(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -996);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-960(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -960);
	// lwz r17,-924(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -924);
	// lwz r17,-948(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -948);
	// lwz r17,-912(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -912);
	// lwz r17,-936(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -936);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1092(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1092);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1080(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1080);
	// lwz r17,-1056(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1056);
	// lwz r17,-1068(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1068);
	// lwz r17,-1044(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1044);
	// lwz r17,-732(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -732);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-720(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -720);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-708(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -708);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1404(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1404);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1392(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1392);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1380(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1380);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1368(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1368);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1356(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1356);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1344(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1344);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-1332(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1332);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-888(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -888);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-756(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -756);
	// lwz r17,-576(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -576);
	// lwz r17,-744(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -744);
	// lwz r17,-672(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -672);
	// lwz r17,-648(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -648);
	// lwz r17,-624(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -624);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26420
	ctx.r3.s64 = ctx.r11.s64 + -26420;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236F868) {
	__imp__sub_8236F868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26452
	ctx.r3.s64 = ctx.r11.s64 + -26452;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FA48) {
	__imp__sub_8236FA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FA54) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26480
	ctx.r3.s64 = ctx.r11.s64 + -26480;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FA54) {
	__imp__sub_8236FA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26552
	ctx.r3.s64 = ctx.r11.s64 + -26552;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FA60) {
	__imp__sub_8236FA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FA6C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26592
	ctx.r3.s64 = ctx.r11.s64 + -26592;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FA6C) {
	__imp__sub_8236FA6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26632
	ctx.r3.s64 = ctx.r11.s64 + -26632;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FA78) {
	__imp__sub_8236FA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FA84) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26688
	ctx.r3.s64 = ctx.r11.s64 + -26688;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FA84) {
	__imp__sub_8236FA84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26732
	ctx.r3.s64 = ctx.r11.s64 + -26732;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FA90) {
	__imp__sub_8236FA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FA9C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26800
	ctx.r3.s64 = ctx.r11.s64 + -26800;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FA9C) {
	__imp__sub_8236FA9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FAA8) {
	__imp__sub_8236FAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FAB4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26880
	ctx.r3.s64 = ctx.r11.s64 + -26880;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FAB4) {
	__imp__sub_8236FAB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26912
	ctx.r3.s64 = ctx.r11.s64 + -26912;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FAC0) {
	__imp__sub_8236FAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FACC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-26972
	ctx.r3.s64 = ctx.r11.s64 + -26972;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FACC) {
	__imp__sub_8236FACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27008
	ctx.r3.s64 = ctx.r11.s64 + -27008;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FAD8) {
	__imp__sub_8236FAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FAE4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27044
	ctx.r3.s64 = ctx.r11.s64 + -27044;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FAE4) {
	__imp__sub_8236FAE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27112
	ctx.r3.s64 = ctx.r11.s64 + -27112;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FAF0) {
	__imp__sub_8236FAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FAFC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27156
	ctx.r3.s64 = ctx.r11.s64 + -27156;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FAFC) {
	__imp__sub_8236FAFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27216
	ctx.r3.s64 = ctx.r11.s64 + -27216;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB08) {
	__imp__sub_8236FB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB14) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27264
	ctx.r3.s64 = ctx.r11.s64 + -27264;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB14) {
	__imp__sub_8236FB14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27336
	ctx.r3.s64 = ctx.r11.s64 + -27336;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB20) {
	__imp__sub_8236FB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB2C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27408
	ctx.r3.s64 = ctx.r11.s64 + -27408;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB2C) {
	__imp__sub_8236FB2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27460
	ctx.r3.s64 = ctx.r11.s64 + -27460;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB38) {
	__imp__sub_8236FB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB44) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27496
	ctx.r3.s64 = ctx.r11.s64 + -27496;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB44) {
	__imp__sub_8236FB44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27524
	ctx.r3.s64 = ctx.r11.s64 + -27524;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB50) {
	__imp__sub_8236FB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB5C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27564
	ctx.r3.s64 = ctx.r11.s64 + -27564;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB5C) {
	__imp__sub_8236FB5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27612
	ctx.r3.s64 = ctx.r11.s64 + -27612;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB68) {
	__imp__sub_8236FB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB74) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27640
	ctx.r3.s64 = ctx.r11.s64 + -27640;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB74) {
	__imp__sub_8236FB74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27680
	ctx.r3.s64 = ctx.r11.s64 + -27680;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB80) {
	__imp__sub_8236FB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB8C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27728
	ctx.r3.s64 = ctx.r11.s64 + -27728;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB8C) {
	__imp__sub_8236FB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27772
	ctx.r3.s64 = ctx.r11.s64 + -27772;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FB98) {
	__imp__sub_8236FB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FBA4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27812
	ctx.r3.s64 = ctx.r11.s64 + -27812;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FBA4) {
	__imp__sub_8236FBA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27852
	ctx.r3.s64 = ctx.r11.s64 + -27852;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FBB0) {
	__imp__sub_8236FBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FBBC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27892
	ctx.r3.s64 = ctx.r11.s64 + -27892;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FBBC) {
	__imp__sub_8236FBBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-27976
	ctx.r3.s64 = ctx.r11.s64 + -27976;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FBC8) {
	__imp__sub_8236FBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FBD4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28028
	ctx.r3.s64 = ctx.r11.s64 + -28028;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FBD4) {
	__imp__sub_8236FBD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28104
	ctx.r3.s64 = ctx.r11.s64 + -28104;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FBE0) {
	__imp__sub_8236FBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FBEC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28176
	ctx.r3.s64 = ctx.r11.s64 + -28176;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FBEC) {
	__imp__sub_8236FBEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28216
	ctx.r3.s64 = ctx.r11.s64 + -28216;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FBF8) {
	__imp__sub_8236FBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC04) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28276
	ctx.r3.s64 = ctx.r11.s64 + -28276;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC04) {
	__imp__sub_8236FC04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28340
	ctx.r3.s64 = ctx.r11.s64 + -28340;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC10) {
	__imp__sub_8236FC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC1C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28380
	ctx.r3.s64 = ctx.r11.s64 + -28380;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC1C) {
	__imp__sub_8236FC1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28424
	ctx.r3.s64 = ctx.r11.s64 + -28424;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC28) {
	__imp__sub_8236FC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC34) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28464
	ctx.r3.s64 = ctx.r11.s64 + -28464;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC34) {
	__imp__sub_8236FC34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28508
	ctx.r3.s64 = ctx.r11.s64 + -28508;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC40) {
	__imp__sub_8236FC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC4C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC4C) {
	__imp__sub_8236FC4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28596
	ctx.r3.s64 = ctx.r11.s64 + -28596;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC58) {
	__imp__sub_8236FC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC64) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28648
	ctx.r3.s64 = ctx.r11.s64 + -28648;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC64) {
	__imp__sub_8236FC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28684
	ctx.r3.s64 = ctx.r11.s64 + -28684;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC70) {
	__imp__sub_8236FC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC7C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28708
	ctx.r3.s64 = ctx.r11.s64 + -28708;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC7C) {
	__imp__sub_8236FC7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28748
	ctx.r3.s64 = ctx.r11.s64 + -28748;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC88) {
	__imp__sub_8236FC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FC94) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28788
	ctx.r3.s64 = ctx.r11.s64 + -28788;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FC94) {
	__imp__sub_8236FC94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28828
	ctx.r3.s64 = ctx.r11.s64 + -28828;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FCA0) {
	__imp__sub_8236FCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FCAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28868
	ctx.r3.s64 = ctx.r11.s64 + -28868;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FCAC) {
	__imp__sub_8236FCAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28924
	ctx.r3.s64 = ctx.r11.s64 + -28924;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FCB8) {
	__imp__sub_8236FCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FCC4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-28976
	ctx.r3.s64 = ctx.r11.s64 + -28976;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FCC4) {
	__imp__sub_8236FCC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29016
	ctx.r3.s64 = ctx.r11.s64 + -29016;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FCD0) {
	__imp__sub_8236FCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FCDC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29056
	ctx.r3.s64 = ctx.r11.s64 + -29056;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FCDC) {
	__imp__sub_8236FCDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29096
	ctx.r3.s64 = ctx.r11.s64 + -29096;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FCE8) {
	__imp__sub_8236FCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FCF4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29120
	ctx.r3.s64 = ctx.r11.s64 + -29120;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FCF4) {
	__imp__sub_8236FCF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29156
	ctx.r3.s64 = ctx.r11.s64 + -29156;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD00) {
	__imp__sub_8236FD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD0C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29196
	ctx.r3.s64 = ctx.r11.s64 + -29196;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD0C) {
	__imp__sub_8236FD0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29264
	ctx.r3.s64 = ctx.r11.s64 + -29264;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD18) {
	__imp__sub_8236FD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD24) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29308
	ctx.r3.s64 = ctx.r11.s64 + -29308;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD24) {
	__imp__sub_8236FD24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29392
	ctx.r3.s64 = ctx.r11.s64 + -29392;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD30) {
	__imp__sub_8236FD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD3C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29444
	ctx.r3.s64 = ctx.r11.s64 + -29444;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD3C) {
	__imp__sub_8236FD3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29496
	ctx.r3.s64 = ctx.r11.s64 + -29496;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD48) {
	__imp__sub_8236FD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD54) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29540
	ctx.r3.s64 = ctx.r11.s64 + -29540;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD54) {
	__imp__sub_8236FD54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29580
	ctx.r3.s64 = ctx.r11.s64 + -29580;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD60) {
	__imp__sub_8236FD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD6C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29628
	ctx.r3.s64 = ctx.r11.s64 + -29628;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD6C) {
	__imp__sub_8236FD6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29672
	ctx.r3.s64 = ctx.r11.s64 + -29672;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD78) {
	__imp__sub_8236FD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD84) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29720
	ctx.r3.s64 = ctx.r11.s64 + -29720;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD84) {
	__imp__sub_8236FD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29764
	ctx.r3.s64 = ctx.r11.s64 + -29764;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD90) {
	__imp__sub_8236FD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FD9C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29808
	ctx.r3.s64 = ctx.r11.s64 + -29808;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FD9C) {
	__imp__sub_8236FD9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29848
	ctx.r3.s64 = ctx.r11.s64 + -29848;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FDA8) {
	__imp__sub_8236FDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FDB4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-29888
	ctx.r3.s64 = ctx.r11.s64 + -29888;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FDB4) {
	__imp__sub_8236FDB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FDC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FDC0) {
	__imp__sub_8236FDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8236FDD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236ff08
	if (ctx.cr6.eq) goto loc_8236FF08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x8236FDF4;
	sub_826344D0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x8236fe00
	if (!ctx.cr6.lt) goto loc_8236FE00;
	// neg r27,r27
	ctx.r27.s64 = -ctx.r27.s64;
loc_8236FE00:
	// rlwinm r28,r27,0,16,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r29,-32155
	ctx.r29.s64 = -2107310080;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r26,r10,8796
	ctx.r26.s64 = ctx.r10.s64 + 8796;
	// addi r25,r11,-26392
	ctx.r25.s64 = ctx.r11.s64 + -26392;
	// beq cr6,0x8236fe60
	if (ctx.cr6.eq) goto loc_8236FE60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236eaf0
	ctx.lr = 0x8236FE28;
	sub_8236EAF0(ctx, base);
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x8236fe50
	if (!ctx.cr6.eq) goto loc_8236FE50;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x8236fe54
	goto loc_8236FE54;
loc_8236FE50:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_8236FE54:
	// bctrl 
	ctx.lr = 0x8236FE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,30592
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 30592, ctx.xer);
	// beq cr6,0x8236ff08
	if (ctx.cr6.eq) goto loc_8236FF08;
loc_8236FE60:
	// rlwinm r28,r27,0,25,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF007F;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8236ff08
	if (ctx.cr6.eq) goto loc_8236FF08;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8236FE70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236fe70
	if (!ctx.cr6.eq) goto loc_8236FE70;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fec8
	if (ctx.cr6.eq) goto loc_8236FEC8;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// blt cr6,0x8236ff08
	if (ctx.cr6.lt) goto loc_8236FF08;
	// lwz r10,3700(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,13108
	ctx.r5.s64 = ctx.r9.s64 + 13108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236FEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
loc_8236FEC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236f828
	ctx.lr = 0x8236FED0;
	sub_8236F828(ctx, base);
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x8236ff00
	if (!ctx.cr6.eq) goto loc_8236FF00;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8236FEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8236FF00:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8236FF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236FF08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236FDC8) {
	__imp__sub_8236FDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FF10) {
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
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x8236FF30;
	sub_826344D0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823706a8
	ctx.lr = 0x8236FF38;
	sub_823706A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
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

PPC_WEAK_FUNC(sub_8236FF10) {
	__imp__sub_8236FF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236FF54) {
	__imp__sub_8236FF54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FF58) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823706c0
	ctx.lr = 0x8236FF74;
	sub_823706C0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8238ad28
	ctx.lr = 0x8236FF7C;
	sub_8238AD28(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8238ad28
	ctx.lr = 0x8236FF84;
	sub_8238AD28(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8238ad28
	ctx.lr = 0x8236FF8C;
	sub_8238AD28(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x8236FF98;
	sub_82362B98(ctx, base);
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

PPC_WEAK_FUNC(sub_8236FF58) {
	__imp__sub_8236FF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236FFAC) {
	__imp__sub_8236FFAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FFB0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FFB0) {
	__imp__sub_8236FFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FFB8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FFB8) {
	__imp__sub_8236FFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FFC0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FFC0) {
	__imp__sub_8236FFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FFC8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236FFC8) {
	__imp__sub_8236FFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FFD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x82397eb8
	sub_82397EB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236FFD0) {
	__imp__sub_8236FFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FFD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// b 0x82397eb8
	sub_82397EB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236FFD8) {
	__imp__sub_8236FFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236FFE0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82370d20
	ctx.lr = 0x82370004;
	sub_82370D20(ctx, base);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// ble cr6,0x82370014
	if (!ctx.cr6.gt) goto loc_82370014;
	// li r3,-10240
	ctx.r3.s64 = -10240;
	// b 0x82370020
	goto loc_82370020;
loc_82370014:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82370888
	ctx.lr = 0x82370020;
	sub_82370888(ctx, base);
loc_82370020:
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

PPC_WEAK_FUNC(sub_8236FFE0) {
	__imp__sub_8236FFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370038) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82370058:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82370058
	if (!ctx.cr6.eq) goto loc_82370058;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x823700d4
	if (!ctx.cr6.eq) goto loc_823700D4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82370080:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82370080
	if (!ctx.cr6.eq) goto loc_82370080;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x823700d4
	if (!ctx.cr6.eq) goto loc_823700D4;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82636be0
	ctx.lr = 0x823700B0;
	sub_82636BE0(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82636be0
	ctx.lr = 0x823700C0;
	sub_82636BE0(ctx, base);
	// li r11,90
	ctx.r11.s64 = 90;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// stb r11,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r11.u8);
	// b 0x823700d8
	goto loc_823700D8;
loc_823700D4:
	// li r3,-10240
	ctx.r3.s64 = -10240;
loc_823700D8:
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

PPC_WEAK_FUNC(sub_82370038) {
	__imp__sub_82370038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823700F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x823700F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// blt cr6,0x82370170
	if (ctx.cr6.lt) goto loc_82370170;
	// bne cr6,0x82370134
	if (!ctx.cr6.eq) goto loc_82370134;
	// lbz r11,1(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82370134
	if (!ctx.cr6.eq) goto loc_82370134;
	// lbz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// blt cr6,0x82370170
	if (ctx.cr6.lt) goto loc_82370170;
loc_82370134:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823986a0
	ctx.lr = 0x82370140;
	sub_823986A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82370190
	if (ctx.cr6.lt) goto loc_82370190;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823984c8
	ctx.lr = 0x8237015C;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823701b8
	if (ctx.cr6.lt) goto loc_823701B8;
	// li r5,24
	ctx.r5.s64 = 24;
	// b 0x823701c8
	goto loc_823701C8;
loc_82370170:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823986a0
	ctx.lr = 0x82370184;
	sub_823986A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8237019c
	if (!ctx.cr6.lt) goto loc_8237019C;
loc_82370190:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8237019C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823984c8
	ctx.lr = 0x823701AC;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823701c4
	if (!ctx.cr6.lt) goto loc_823701C4;
loc_823701B8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823701C4:
	// li r5,23
	ctx.r5.s64 = 23;
loc_823701C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x823701D8;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823701e4
	if (ctx.cr6.lt) goto loc_823701E4;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
loc_823701E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823700F0) {
	__imp__sub_823700F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823701EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823701EC) {
	__imp__sub_823701EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823701F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x823701F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r26,r4,r5
	ctx.r26.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x8235d8d0
	ctx.lr = 0x82370228;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82370238
	if (ctx.cr6.eq) goto loc_82370238;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82370250
	goto loc_82370250;
loc_82370238:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x8235d8d0
	ctx.lr = 0x82370244;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82370628
	if (ctx.cr6.eq) goto loc_82370628;
	// li r27,4
	ctx.r27.s64 = 4;
loc_82370250:
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8238d8a0
	ctx.lr = 0x82370264;
	sub_8238D8A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237062c
	if (!ctx.cr6.eq) goto loc_8237062C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82370324
	if (!ctx.cr6.eq) goto loc_82370324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,68(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82398338
	ctx.lr = 0x82370288;
	sub_82398338(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823702a0
	if (!ctx.cr6.lt) goto loc_823702A0;
loc_82370294:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823702A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823984c8
	ctx.lr = 0x823702B0;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823702c8
	if (!ctx.cr6.lt) goto loc_823702C8;
loc_823702BC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823702C8:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x823702DC;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8237062c
	if (ctx.cr6.lt) goto loc_8237062C;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823984c8
	ctx.lr = 0x823702F8;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// li r5,163
	ctx.r5.s64 = 163;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x82370318;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8237062c
	if (ctx.cr6.lt) goto loc_8237062C;
	// add r29,r30,r3
	ctx.r29.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_82370324:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// bl 0x823990a8
	ctx.lr = 0x82370338;
	sub_823990A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x823980c8
	ctx.lr = 0x82370364;
	sub_823980C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r28,52
	ctx.r5.s64 = ctx.r28.s64 + 52;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823700f0
	ctx.lr = 0x8237038C;
	sub_823700F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r28,36
	ctx.r5.s64 = ctx.r28.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x823700f0
	ctx.lr = 0x823703B0;
	sub_823700F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8237062c
	if (ctx.cr6.lt) goto loc_8237062C;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823984c8
	ctx.lr = 0x823703CC;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x823703F0;
	sub_82398670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823980c8
	ctx.lr = 0x82370410;
	sub_823980C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8237062c
	if (ctx.cr6.lt) goto loc_8237062C;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82370430:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82370430
	if (!ctx.cr6.eq) goto loc_82370430;
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823988b8
	ctx.lr = 0x8237045C;
	sub_823988B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82398718
	ctx.lr = 0x8237047C;
	sub_82398718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8237062c
	if (ctx.cr6.lt) goto loc_8237062C;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823704ec
	if (ctx.cr6.eq) goto loc_823704EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82398b80
	ctx.lr = 0x823704A0;
	sub_82398B80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82370294
	if (ctx.cr6.lt) goto loc_82370294;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823984c8
	ctx.lr = 0x823704BC;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x823704E0;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8237062c
	if (ctx.cr6.lt) goto loc_8237062C;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_823704EC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823984c8
	ctx.lr = 0x823704FC;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x8237051C;
	sub_82398670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8235cac8
	ctx.lr = 0x82370538;
	sub_8235CAC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// bl 0x8235d020
	ctx.lr = 0x82370548;
	sub_8235D020(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237062c
	if (!ctx.cr6.eq) goto loc_8237062C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8235dae0
	ctx.lr = 0x82370574;
	sub_8235DAE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237062c
	if (!ctx.cr6.eq) goto loc_8237062C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634bc0
	ctx.lr = 0x8237058C;
	sub_82634BC0(ctx, base);
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82398230
	ctx.lr = 0x823705B4;
	sub_82398230(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823705c8
	if (!ctx.cr6.lt) goto loc_823705C8;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823705C8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r30,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x82634bc0
	ctx.lr = 0x823705E0;
	sub_82634BC0(ctx, base);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823984c8
	ctx.lr = 0x823705F4;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823702bc
	if (ctx.cr6.lt) goto loc_823702BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x82370614;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8237062c
	if (ctx.cr6.lt) goto loc_8237062C;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82370628:
	// li r3,-8960
	ctx.r3.s64 = -8960;
loc_8237062C:
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823701F0) {
	__imp__sub_823701F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82370634) {
	__imp__sub_82370634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370638) {
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
	// bl 0x823701f0
	ctx.lr = 0x82370658;
	sub_823701F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82370668
	if (!ctx.cr6.lt) goto loc_82370668;
	// b 0x82370690
	goto loc_82370690;
loc_82370668:
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// subf r11,r6,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r6.s64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r9,-26316
	ctx.r3.s64 = ctx.r9.s64 + -26316;
	// addi r4,r10,-26344
	ctx.r4.s64 = ctx.r10.s64 + -26344;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8238e770
	ctx.lr = 0x82370690;
	sub_8238E770(ctx, base);
loc_82370690:
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

PPC_WEAK_FUNC(sub_82370638) {
	__imp__sub_82370638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823706A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823706A8) {
	__imp__sub_823706A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823706C0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370710
	if (ctx.cr6.eq) goto loc_82370710;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823706fc
	if (ctx.cr6.eq) goto loc_823706FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x823706F4;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x823706FC;
	sub_82634D40(ctx, base);
loc_823706FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82370710:
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

PPC_WEAK_FUNC(sub_823706C0) {
	__imp__sub_823706C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82370724) {
	__imp__sub_82370724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82370730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,10000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10000, ctx.xer);
	// ble cr6,0x82370750
	if (!ctx.cr6.gt) goto loc_82370750;
loc_82370744:
	// li r3,-16
	ctx.r3.s64 = -16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82370750:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823707a8
	if (!ctx.cr6.lt) goto loc_823707A8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826365a8
	ctx.lr = 0x82370768;
	sub_826365A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370744
	if (ctx.cr6.eq) goto loc_82370744;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823707a0
	if (ctx.cr6.eq) goto loc_823707A0;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82635430
	ctx.lr = 0x82370788;
	sub_82635430(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82370798;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x823707A0;
	sub_82634D40(ctx, base);
loc_823707A0:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_823707A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82370728) {
	__imp__sub_82370728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823707B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823707B4) {
	__imp__sub_823707B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823707B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x823707C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,10000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10000, ctx.xer);
	// ble cr6,0x823707dc
	if (!ctx.cr6.gt) goto loc_823707DC;
loc_823707D0:
	// li r3,-16
	ctx.r3.s64 = -16;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823707DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823707f8
	if (ctx.cr6.gt) goto loc_823707F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370728
	ctx.lr = 0x823707F0;
	sub_82370728(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823707F8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82370820
	if (ctx.cr0.eq) goto loc_82370820;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82370808:
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82370820
	if (!ctx.cr6.eq) goto loc_82370820;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bne 0x82370808
	if (!ctx.cr0.eq) goto loc_82370808;
loc_82370820:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82370830
	if (!ctx.cr6.lt) goto loc_82370830;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82370830:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826365a8
	ctx.lr = 0x8237083C;
	sub_826365A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823707d0
	if (ctx.cr6.eq) goto loc_823707D0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82370874
	if (ctx.cr6.eq) goto loc_82370874;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82635430
	ctx.lr = 0x8237085C;
	sub_82635430(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x8237086C;
	sub_82362B98(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82370874;
	sub_82634D40(ctx, base);
loc_82370874:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823707B8) {
	__imp__sub_823707B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82370890;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823708d8
	if (ctx.cr6.eq) goto loc_823708D8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823708e4
	if (!ctx.cr6.eq) goto loc_823708E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823708d8
	if (ctx.cr6.eq) goto loc_823708D8;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x826344d0
	ctx.lr = 0x823708D8;
	sub_826344D0(ctx, base);
loc_823708D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823708E4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237090c
	if (ctx.cr0.eq) goto loc_8237090C;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823708F4:
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237090c
	if (!ctx.cr6.eq) goto loc_8237090C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bne 0x823708f4
	if (!ctx.cr0.eq) goto loc_823708F4;
loc_8237090C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bge cr6,0x82370990
	if (!ctx.cr6.lt) goto loc_82370990;
	// cmplwi cr6,r30,10000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10000, ctx.xer);
	// ble cr6,0x8237093c
	if (!ctx.cr6.gt) goto loc_8237093C;
loc_8237092C:
	// li r26,-16
	ctx.r26.s64 = -16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8237093C:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826365a8
	ctx.lr = 0x82370948;
	sub_826365A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237092c
	if (ctx.cr6.eq) goto loc_8237092C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82370980
	if (ctx.cr6.eq) goto loc_82370980;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82635430
	ctx.lr = 0x82370968;
	sub_82635430(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82370978;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82370980;
	sub_82634D40(ctx, base);
loc_82370980:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// b 0x823709ac
	goto loc_823709AC;
loc_82370990:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826344d0
	ctx.lr = 0x823709AC;
	sub_826344D0(ctx, base);
loc_823709AC:
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82635430
	ctx.lr = 0x823709BC;
	sub_82635430(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82370888) {
	__imp__sub_82370888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823709C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x823709D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bge cr6,0x82370a48
	if (!ctx.cr6.lt) goto loc_82370A48;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x823709F4;
	sub_826365A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82370a0c
	if (!ctx.cr6.eq) goto loc_82370A0C;
	// li r3,-16
	ctx.r3.s64 = -16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82370A0C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82370a3c
	if (ctx.cr6.eq) goto loc_82370A3C;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x82370A24;
	sub_82635430(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82370A34;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82370A3C;
	sub_82634D40(ctx, base);
loc_82370A3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82370A48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826344d0
	ctx.lr = 0x82370A60;
	sub_826344D0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82370a70
	if (!ctx.cr6.lt) goto loc_82370A70;
	// neg r11,r28
	ctx.r11.s64 = -ctx.r28.s64;
loc_82370A70:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// blt cr6,0x82370a88
	if (ctx.cr6.lt) goto loc_82370A88;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82370A88:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823709C8) {
	__imp__sub_823709C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82370ab0
	if (ctx.cr6.gt) goto loc_82370AB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82370AB0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82370A98) {
	__imp__sub_82370A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82370ACC) {
	__imp__sub_82370ACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82370AD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r27,r5,24
	ctx.r27.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r25,r4,27,5,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r26,r4,27
	ctx.r26.u64 = ctx.r4.u32 & 0x1F;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82370b0c
	if (ctx.cr6.eq) goto loc_82370B0C;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// beq cr6,0x82370b0c
	if (ctx.cr6.eq) goto loc_82370B0C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82370B0C:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82370ba0
	if (ctx.cr6.gt) goto loc_82370BA0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82370b30
	if (!ctx.cr6.eq) goto loc_82370B30;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82370B30:
	// addi r29,r25,1
	ctx.r29.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r29,10000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10000, ctx.xer);
	// ble cr6,0x82370b48
	if (!ctx.cr6.gt) goto loc_82370B48;
loc_82370B3C:
	// li r3,-16
	ctx.r3.s64 = -16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82370B48:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82370b9c
	if (!ctx.cr6.lt) goto loc_82370B9C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826365a8
	ctx.lr = 0x82370B5C;
	sub_826365A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370b3c
	if (ctx.cr6.eq) goto loc_82370B3C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82370b94
	if (ctx.cr6.eq) goto loc_82370B94;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82635430
	ctx.lr = 0x82370B7C;
	sub_82635430(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82370B8C;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82370B94;
	sub_82634D40(ctx, base);
loc_82370B94:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82370B9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82370BA0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r27,r26
	ctx.r8.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r26.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r6,r9,r26
	ctx.r6.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r26.u8 & 0x3F));
	// andc r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82370AD0) {
	__imp__sub_82370AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82370c2c
	if (ctx.cr6.eq) goto loc_82370C2C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82370BF4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82370BFC:
	// srw r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82370bfc
	if (ctx.cr6.lt) goto loc_82370BFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82370bf4
	if (ctx.cr6.lt) goto loc_82370BF4;
loc_82370C2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82370BD8) {
	__imp__sub_82370BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82370C34) {
	__imp__sub_82370C34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82370c4c
	if (!ctx.cr6.eq) goto loc_82370C4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82370C4C:
	// addic. r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82370c74
	if (ctx.cr0.eq) goto loc_82370C74;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82370C5C:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82370c74
	if (!ctx.cr6.eq) goto loc_82370C74;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x82370c5c
	if (!ctx.cr0.eq) goto loc_82370C5C;
loc_82370C74:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
loc_82370C88:
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82370d10
	if (!ctx.cr6.eq) goto loc_82370D10;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82370ce4
	if (!ctx.cr6.eq) goto loc_82370CE4;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82370cf8
	if (!ctx.cr6.eq) goto loc_82370CF8;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82370d0c
	if (!ctx.cr6.eq) goto loc_82370D0C;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// blt cr6,0x82370c88
	if (ctx.cr6.lt) goto loc_82370C88;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blr 
	return;
loc_82370CE4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blr 
	return;
loc_82370CF8:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blr 
	return;
loc_82370D0C:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
loc_82370D10:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82370C38) {
	__imp__sub_82370C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370D20) {
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
	// bl 0x82370c38
	ctx.lr = 0x82370D30;
	sub_82370C38(ctx, base);
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// rlwinm r3,r11,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82370D20) {
	__imp__sub_82370D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82370D68:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
loc_82370D80:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwimi r9,r7,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// blt cr6,0x82370d80
	if (ctx.cr6.lt) goto loc_82370D80;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
loc_82370DB4:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwimi r8,r10,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// blt cr6,0x82370db4
	if (ctx.cr6.lt) goto loc_82370DB4;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82370d68
	if (!ctx.cr6.gt) goto loc_82370D68;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82370D48) {
	__imp__sub_82370D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82370DEC) {
	__imp__sub_82370DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82370DF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82370e64
	if (!ctx.cr0.eq) goto loc_82370E64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370e5c
	if (ctx.cr6.eq) goto loc_82370E5C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370e4c
	if (ctx.cr6.eq) goto loc_82370E4C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82370E44;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82370E4C;
	sub_82634D40(ctx, base);
loc_82370E4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82370E5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82370ed4
	goto loc_82370ED4;
loc_82370E64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82370e94
	if (!ctx.cr6.eq) goto loc_82370E94;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x82370E80;
	sub_826344D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82370ed4
	goto loc_82370ED4;
loc_82370E94:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370eac
	if (ctx.cr6.eq) goto loc_82370EAC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82370EA4;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82370EAC;
	sub_82634D40(ctx, base);
loc_82370EAC:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82370728
	ctx.lr = 0x82370ECC;
	sub_82370728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82370f0c
	if (!ctx.cr6.eq) goto loc_82370F0C;
loc_82370ED4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82370f0c
	if (ctx.cr6.eq) goto loc_82370F0C;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_82370EE4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lbzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r7,r11,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// bdnz 0x82370ee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82370EE4;
loc_82370F0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82370DF0) {
	__imp__sub_82370DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82370F14) {
	__imp__sub_82370F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82370F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82370F20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add. r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r26,r28,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r28.s64;
	// bne 0x82370f90
	if (!ctx.cr0.eq) goto loc_82370F90;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370ffc
	if (ctx.cr6.eq) goto loc_82370FFC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370f7c
	if (ctx.cr6.eq) goto loc_82370F7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82370F74;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82370F7C;
	sub_82634D40(ctx, base);
loc_82370F7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82370ffc
	goto loc_82370FFC;
loc_82370F90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82370fb8
	if (!ctx.cr6.eq) goto loc_82370FB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x82370FA8;
	sub_826344D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82370ffc
	goto loc_82370FFC;
loc_82370FB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370fd0
	if (ctx.cr6.eq) goto loc_82370FD0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82370FC8;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82370FD0;
	sub_82634D40(ctx, base);
loc_82370FD0:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82370728
	ctx.lr = 0x82370FF0;
	sub_82370728(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371024
	if (!ctx.cr6.eq) goto loc_82371024;
loc_82370FFC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82371024
	if (ctx.cr6.eq) goto loc_82371024;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x82371018;
	sub_82635430(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82370d48
	ctx.lr = 0x82371024;
	sub_82370D48(ctx, base);
loc_82371024:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82370F18) {
	__imp__sub_82370F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371030) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823710b8
	if (!ctx.cr6.lt) goto loc_823710B8;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_82371054:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8237108c
	if (ctx.cr6.eq) goto loc_8237108C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_82371068:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r7,r11,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// lwzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// srw r10,r4,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bdnz 0x82371068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371068;
loc_8237108C:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823710a4
	if (!ctx.cr6.lt) goto loc_823710A4;
	// subf r5,r9,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bl 0x826344d0
	ctx.lr = 0x823710A4;
	sub_826344D0(ctx, base);
loc_823710A4:
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
loc_823710B8:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82371054
	if (!ctx.cr6.lt) goto loc_82371054;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
loc_823710D0:
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r4,r11,3,27,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// srw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823710fc
	if (!ctx.cr6.eq) goto loc_823710FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// blt cr6,0x823710d0
	if (ctx.cr6.lt) goto loc_823710D0;
	// b 0x82371054
	goto loc_82371054;
loc_823710FC:
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82371030) {
	__imp__sub_82371030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82371118;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82371198
	if (!ctx.cr6.lt) goto loc_82371198;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x826344d0
	ctx.lr = 0x82371150;
	sub_826344D0(ctx, base);
loc_82371150:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237118c
	if (ctx.cr6.eq) goto loc_8237118C;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_82371168:
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r7,r11,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// srw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stbu r4,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82371168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371168;
loc_8237118C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82371198:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82371150
	if (!ctx.cr6.lt) goto loc_82371150;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_823711B0:
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r7,r11,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// srw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823711dc
	if (!ctx.cr6.eq) goto loc_823711DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// blt cr6,0x823711b0
	if (ctx.cr6.lt) goto loc_823711B0;
	// b 0x82371150
	goto loc_82371150;
loc_823711DC:
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82371110) {
	__imp__sub_82371110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823711E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x823711F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r26,r4,27,5,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r25,r4,27
	ctx.r25.u64 = ctx.r4.u32 & 0x1F;
	// bl 0x82370c38
	ctx.lr = 0x82371208;
	sub_82370C38(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82371298
	if (!ctx.cr6.lt) goto loc_82371298;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r28,10000
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10000, ctx.xer);
	// ble cr6,0x82371244
	if (!ctx.cr6.gt) goto loc_82371244;
loc_82371238:
	// li r3,-16
	ctx.r3.s64 = -16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82371244:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82371298
	if (!ctx.cr6.lt) goto loc_82371298;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826365a8
	ctx.lr = 0x82371258;
	sub_826365A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82371238
	if (ctx.cr6.eq) goto loc_82371238;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82371290
	if (ctx.cr6.eq) goto loc_82371290;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82635430
	ctx.lr = 0x82371278;
	sub_82635430(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82371288;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82371290;
	sub_82634D40(ctx, base);
loc_82371290:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82371298:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82371308
	if (ctx.cr6.eq) goto loc_82371308;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823712e4
	if (!ctx.cr6.gt) goto loc_823712E4;
	// subf r8,r26,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r26.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823712C0:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// lwz r5,-4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stw r5,-4(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4, ctx.r5.u32);
	// bdnz 0x823712c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823712C0;
loc_823712E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371308
	if (ctx.cr6.eq) goto loc_82371308;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823712F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r27,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r27.u32);
	// bdnz 0x823712f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823712F4;
loc_82371308:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82371368
	if (ctx.cr6.eq) goto loc_82371368;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82371368
	if (!ctx.cr6.lt) goto loc_82371368;
	// subfic r7,r25,32
	ctx.xer.ca = ctx.r25.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r25.s64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82371328:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r6,r8,r25
	ctx.r6.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r25.u8 & 0x3F));
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// or r4,r5,r27
	ctx.r4.u64 = ctx.r5.u64 | ctx.r27.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82371328
	if (ctx.cr6.lt) goto loc_82371328;
loc_82371368:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823711E8) {
	__imp__sub_823711E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371370) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r4,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r5,r4,27
	ctx.r5.u64 = ctx.r4.u32 & 0x1F;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371464
	if (ctx.cr6.gt) goto loc_82371464;
	// bne cr6,0x82371394
	if (!ctx.cr6.eq) goto loc_82371394;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82371464
	if (!ctx.cr6.eq) goto loc_82371464;
loc_82371394:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82371400
	if (ctx.cr6.eq) goto loc_82371400;
	// subf. r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// beq 0x823713d8
	if (ctx.cr0.eq) goto loc_823713D8;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_823713B0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stwx r4,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823713b0
	if (ctx.cr6.lt) goto loc_823713B0;
loc_823713D8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82371400
	if (!ctx.cr6.lt) goto loc_82371400;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823713E4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823713e4
	if (ctx.cr6.lt) goto loc_823713E4;
loc_82371400:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8237145c
	if (ctx.cr6.eq) goto loc_8237145C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237145c
	if (ctx.cr6.eq) goto loc_8237145C;
	// subfic r7,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r5.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8237141C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// srw r8,r9,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// slw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// or r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 | ctx.r6.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// bdnz 0x8237141c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237141C;
loc_8237145C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82371464:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823709c8
	sub_823709C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82371370) {
	__imp__sub_82371370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8237146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8237146C) {
	__imp__sub_8237146C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371470) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823714a4
	if (ctx.cr6.eq) goto loc_823714A4;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82371488:
	// lwz r8,-4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823714a4
	if (!ctx.cr6.eq) goto loc_823714A4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x82371488
	if (!ctx.cr0.eq) goto loc_82371488;
loc_823714A4:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823714d8
	if (ctx.cr6.eq) goto loc_823714D8;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_823714BC:
	// lwz r7,-4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823714d8
	if (!ctx.cr6.eq) goto loc_823714D8;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne 0x823714bc
	if (!ctx.cr0.eq) goto loc_823714BC;
loc_823714D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823714f8
	if (!ctx.cr6.eq) goto loc_823714F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237154c
	if (ctx.cr6.eq) goto loc_8237154C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_823714EC:
	// ble cr6,0x82371508
	if (!ctx.cr6.gt) goto loc_82371508;
loc_823714F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_823714F8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823714ec
	if (!ctx.cr6.lt) goto loc_823714EC;
loc_82371500:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82371508:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237154c
	if (ctx.cr6.eq) goto loc_8237154C;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_82371524:
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r8,-4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82371500
	if (ctx.cr6.gt) goto loc_82371500;
	// blt cr6,0x823714f0
	if (ctx.cr6.lt) goto loc_823714F0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bne 0x82371524
	if (!ctx.cr0.eq) goto loc_82371524;
loc_8237154C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82371470) {
	__imp__sub_82371470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82371554) {
	__imp__sub_82371554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371558) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82371590
	if (ctx.cr6.eq) goto loc_82371590;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82371574:
	// lwz r8,-4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82371590
	if (!ctx.cr6.eq) goto loc_82371590;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x82371574
	if (!ctx.cr0.eq) goto loc_82371574;
loc_82371590:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823715c4
	if (ctx.cr6.eq) goto loc_823715C4;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_823715A8:
	// lwz r7,-4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823715c4
	if (!ctx.cr6.eq) goto loc_823715C4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne 0x823715a8
	if (!ctx.cr0.eq) goto loc_823715A8;
loc_823715C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823715dc
	if (!ctx.cr6.eq) goto loc_823715DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823715ec
	if (!ctx.cr6.eq) goto loc_823715EC;
loc_823715D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823715D8:
	// blr 
	return;
loc_823715DC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823715f0
	if (!ctx.cr6.lt) goto loc_823715F0;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// blr 
	return;
loc_823715EC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_823715F0:
	// ble cr6,0x82371600
	if (!ctx.cr6.gt) goto loc_82371600;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// blr 
	return;
loc_82371600:
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82371620
	if (!ctx.cr6.gt) goto loc_82371620;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82371620
	if (!ctx.cr6.lt) goto loc_82371620;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82371620:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237163c
	if (!ctx.cr6.gt) goto loc_8237163C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8237163c
	if (!ctx.cr6.lt) goto loc_8237163C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8237163C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823715d4
	if (ctx.cr6.eq) goto loc_823715D4;
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_82371658:
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r8,-4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823715d8
	if (ctx.cr6.gt) goto loc_823715D8;
	// blt cr6,0x82371688
	if (ctx.cr6.lt) goto loc_82371688;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bne 0x82371658
	if (!ctx.cr0.eq) goto loc_82371658;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82371688:
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82371558) {
	__imp__sub_82371558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371690) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823716ac
	if (ctx.cr6.lt) goto loc_823716AC;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// b 0x823716b4
	goto loc_823716B4;
loc_823716AC:
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_823716B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x823716cc
	if (!ctx.cr6.lt) goto loc_823716CC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x823716d0
	goto loc_823716D0;
loc_823716CC:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_823716D0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82371558
	ctx.lr = 0x823716E4;
	sub_82371558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82371690) {
	__imp__sub_82371690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823716F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823716F4) {
	__imp__sub_823716F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823716F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82371700;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8237171c
	if (!ctx.cr6.eq) goto loc_8237171C;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// b 0x82371734
	goto loc_82371734;
loc_8237171C:
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82371734
	if (ctx.cr6.eq) goto loc_82371734;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370888
	ctx.lr = 0x8237172C;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371908
	if (!ctx.cr6.eq) goto loc_82371908;
loc_82371734:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82371778
	if (ctx.cr6.eq) goto loc_82371778;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82371754:
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82371770
	if (!ctx.cr6.eq) goto loc_82371770;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82371754
	if (!ctx.cr0.eq) goto loc_82371754;
loc_82371770:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82371784
	if (!ctx.cr6.eq) goto loc_82371784;
loc_82371778:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82371784:
	// cmplwi cr6,r30,10000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10000, ctx.xer);
	// bgt cr6,0x82371904
	if (ctx.cr6.gt) goto loc_82371904;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x823717e4
	if (!ctx.cr6.lt) goto loc_823717E4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826365a8
	ctx.lr = 0x823717A4;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82371904
	if (ctx.cr6.eq) goto loc_82371904;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823717dc
	if (ctx.cr6.eq) goto loc_823717DC;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82635430
	ctx.lr = 0x823717C4;
	sub_82635430(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x823717D4;
	sub_82362B98(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x823717DC;
	sub_82634D40(ctx, base);
loc_823717DC:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_823717E4:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82371908
	if (ctx.cr6.eq) goto loc_82371908;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
loc_82371804:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// subfc r7,r31,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r31.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r31.s64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r7,r5,31
	ctx.r7.u64 = ctx.r5.u32 & 0x1;
	// subfc r4,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// add r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bdnz 0x82371804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371804;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82371908
	if (ctx.cr6.eq) goto loc_82371908;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r26,r30,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82371858:
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823718d0
	if (ctx.cr6.lt) goto loc_823718D0;
	// cmplwi cr6,r30,10000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10000, ctx.xer);
	// bgt cr6,0x82371904
	if (ctx.cr6.gt) goto loc_82371904;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x823718c4
	if (!ctx.cr6.lt) goto loc_823718C4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826365a8
	ctx.lr = 0x82371884;
	sub_826365A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82371904
	if (ctx.cr6.eq) goto loc_82371904;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823718bc
	if (ctx.cr6.eq) goto loc_823718BC;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82635430
	ctx.lr = 0x823718A4;
	sub_82635430(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x823718B4;
	sub_82362B98(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x823718BC;
	sub_82634D40(ctx, base);
loc_823718BC:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_823718C4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_823718D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subfc r9,r31,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r31.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82371858
	if (!ctx.cr6.eq) goto loc_82371858;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82371904:
	// li r3,-16
	ctx.r3.s64 = -16;
loc_82371908:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823716F8) {
	__imp__sub_823716F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82371918;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237195c
	if (ctx.cr6.eq) goto loc_8237195C;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82371940:
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8237195c
	if (!ctx.cr6.eq) goto loc_8237195C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82371940
	if (!ctx.cr0.eq) goto loc_82371940;
loc_8237195C:
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82371974
	if (!ctx.cr6.gt) goto loc_82371974;
loc_82371968:
	// li r3,-10
	ctx.r3.s64 = -10;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82371974:
	// cmplwi cr6,r28,10000
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10000, ctx.xer);
	// ble cr6,0x82371988
	if (!ctx.cr6.gt) goto loc_82371988;
loc_8237197C:
	// li r3,-16
	ctx.r3.s64 = -16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82371988:
	// lwz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823719e0
	if (!ctx.cr6.lt) goto loc_823719E0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826365a8
	ctx.lr = 0x823719A0;
	sub_826365A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237197c
	if (ctx.cr6.eq) goto loc_8237197C;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823719d8
	if (ctx.cr6.eq) goto loc_823719D8;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82635430
	ctx.lr = 0x823719C0;
	sub_82635430(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x823719D0;
	sub_82362B98(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x823719D8;
	sub_82634D40(ctx, base);
loc_823719D8:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_823719E0:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82371a18
	if (!ctx.cr6.gt) goto loc_82371A18;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82371a18
	if (ctx.cr6.eq) goto loc_82371A18;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x82371A18;
	sub_82635430(ctx, base);
loc_82371A18:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82371a48
	if (!ctx.cr6.gt) goto loc_82371A48;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826344d0
	ctx.lr = 0x82371A48;
	sub_826344D0(ctx, base);
loc_82371A48:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// beq cr6,0x82371b10
	if (ctx.cr6.eq) goto loc_82371B10;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
loc_82371A6C:
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfc r5,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r9,r6,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r6.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r6.s64;
	// subf r4,r6,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r6.s64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stwx r4,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r4.u32);
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x82371a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371A6C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82371b10
	if (ctx.cr6.eq) goto loc_82371B10;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82371af0
	if (!ctx.cr6.lt) goto loc_82371AF0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82371ABC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82371af0
	if (!ctx.cr6.eq) goto loc_82371AF0;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82371abc
	if (ctx.cr6.lt) goto loc_82371ABC;
loc_82371AF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82371968
	if (ctx.cr6.eq) goto loc_82371968;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82371B10:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82371910) {
	__imp__sub_82371910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82371B24) {
	__imp__sub_82371B24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82371B30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mullw. r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82371bb8
	if (!ctx.cr0.lt) goto loc_82371BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371470
	ctx.lr = 0x82371B5C;
	sub_82371470(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x82371b98
	if (ctx.cr6.lt) goto loc_82371B98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82371910
	ctx.lr = 0x82371B74;
	sub_82371910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371bd4
	if (!ctx.cr6.eq) goto loc_82371BD4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82371b8c
	if (ctx.cr6.eq) goto loc_82371B8C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82371B8C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82371B98:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82371910
	ctx.lr = 0x82371BA0;
	sub_82371910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371bd4
	if (!ctx.cr6.eq) goto loc_82371BD4;
	// neg r11,r28
	ctx.r11.s64 = -ctx.r28.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82371BB8:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823716f8
	ctx.lr = 0x82371BC8;
	sub_823716F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371bd4
	if (!ctx.cr6.eq) goto loc_82371BD4;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82371BD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82371B28) {
	__imp__sub_82371B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82371BDC) {
	__imp__sub_82371BDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371BE0) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82371b28
	sub_82371B28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82371BE0) {
	__imp__sub_82371BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371BE8) {
	PPC_FUNC_PROLOGUE();
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x82371b28
	sub_82371B28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82371BE8) {
	__imp__sub_82371BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371BF0) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82371c0c
	if (ctx.cr6.lt) goto loc_82371C0C;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x82371c14
	goto loc_82371C14;
loc_82371C0C:
	// neg r11,r5
	ctx.r11.s64 = -ctx.r5.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82371C14:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82371c2c
	if (!ctx.cr6.lt) goto loc_82371C2C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x82371c30
	goto loc_82371C30;
loc_82371C2C:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82371C30:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x82371b28
	ctx.lr = 0x82371C48;
	sub_82371B28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82371BF0) {
	__imp__sub_82371BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371C58) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82371c74
	if (ctx.cr6.lt) goto loc_82371C74;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x82371c7c
	goto loc_82371C7C;
loc_82371C74:
	// neg r11,r5
	ctx.r11.s64 = -ctx.r5.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82371C7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82371c94
	if (!ctx.cr6.lt) goto loc_82371C94;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x82371c98
	goto loc_82371C98;
loc_82371C94:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82371C98:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x82371b28
	ctx.lr = 0x82371CB0;
	sub_82371B28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82371C58) {
	__imp__sub_82371C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82371CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// blt cr6,0x823720ec
	if (ctx.cr6.lt) goto loc_823720EC;
	// rlwinm r9,r3,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82371CDC:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mulld r7,r9,r11
	ctx.r7.s64 = ctx.r9.s64 * ctx.r11.s64;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rldicl r7,r7,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfe r9,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r8,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mulld r31,r31,r11
	ctx.r31.s64 = ctx.r31.s64 * ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r7,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mulld r31,r7,r11
	ctx.r31.s64 = ctx.r7.s64 * ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mulld r31,r7,r11
	ctx.r31.s64 = ctx.r7.s64 * ctx.r11.s64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// lwzu r9,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mulld r7,r9,r11
	ctx.r7.s64 = ctx.r9.s64 * ctx.r11.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rldicl r7,r7,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// mulld r31,r7,r11
	ctx.r31.s64 = ctx.r7.s64 * ctx.r11.s64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mulld r31,r7,r11
	ctx.r31.s64 = ctx.r7.s64 * ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mulld r31,r7,r11
	ctx.r31.s64 = ctx.r7.s64 * ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mulld r31,r7,r11
	ctx.r31.s64 = ctx.r7.s64 * ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// lwzu r8,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mulld r7,r8,r11
	ctx.r7.s64 = ctx.r8.s64 * ctx.r11.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// rldicl r7,r7,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subfc r10,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfe r8,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mulld r7,r31,r11
	ctx.r7.s64 = ctx.r31.s64 * ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rldicl r7,r7,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mulld r31,r31,r11
	ctx.r31.s64 = ctx.r31.s64 * ctx.r11.s64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// subfc r7,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mulld r31,r7,r11
	ctx.r31.s64 = ctx.r7.s64 * ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// lwzu r9,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mulld r7,r9,r11
	ctx.r7.s64 = ctx.r9.s64 * ctx.r11.s64;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rldicl r7,r7,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// mulld r31,r7,r11
	ctx.r31.s64 = ctx.r7.s64 * ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rldicl r31,r31,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulld r8,r7,r11
	ctx.r8.s64 = ctx.r7.s64 * ctx.r11.s64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rldicl r31,r8,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// subfc r7,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x82371cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371CDC;
loc_823720EC:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82372310
	if (ctx.cr6.lt) goto loc_82372310;
	// rlwinm r9,r3,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82372100:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mulld r7,r9,r11
	ctx.r7.s64 = ctx.r9.s64 * ctx.r11.s64;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rldicl r7,r7,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfe r9,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r8,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulld r8,r7,r11
	ctx.r8.s64 = ctx.r7.s64 * ctx.r11.s64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rldicl r31,r8,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r7,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulld r8,r7,r11
	ctx.r8.s64 = ctx.r7.s64 * ctx.r11.s64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rldicl r31,r8,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r7,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulld r8,r7,r11
	ctx.r8.s64 = ctx.r7.s64 * ctx.r11.s64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rldicl r31,r8,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfc r7,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// mulld r7,r7,r11
	ctx.r7.s64 = ctx.r7.s64 * ctx.r11.s64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rldicl r7,r7,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subfc r7,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// mulld r31,r7,r11
	ctx.r31.s64 = ctx.r7.s64 * ctx.r11.s64;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// lwzu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// rldicl r7,r31,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subfc r10,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfe r8,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mulld r7,r31,r11
	ctx.r7.s64 = ctx.r31.s64 * ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rldicl r7,r7,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfc r9,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r8,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// mulld r31,r31,r11
	ctx.r31.s64 = ctx.r31.s64 * ctx.r11.s64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rldicl r7,r31,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// subfc r10,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfe r8,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x82372100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372100;
loc_82372310:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237236c
	if (ctx.cr6.eq) goto loc_8237236C;
	// clrldi r7,r6,32
	ctx.r7.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// subf r6,r5,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_82372324:
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mulld r8,r11,r7
	ctx.r8.s64 = ctx.r11.s64 * ctx.r7.s64;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rldicl r8,r8,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfc r4,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r9,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x82372324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372324;
loc_8237236C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82372398
	if (ctx.cr6.eq) goto loc_82372398;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
loc_82372378:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82372378
	if (!ctx.cr6.eq) goto loc_82372378;
loc_82372398:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82371CC0) {
	__imp__sub_82371CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823723A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x823723A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82372408
	if (!ctx.cr6.eq) goto loc_82372408;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370888
	ctx.lr = 0x823723F4;
	sub_82370888(ctx, base);
	// lwz r20,104(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372638
	if (!ctx.cr6.eq) goto loc_82372638;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
loc_82372408:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82372430
	if (!ctx.cr6.eq) goto loc_82372430;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370888
	ctx.lr = 0x8237241C;
	sub_82370888(ctx, base);
	// lwz r21,88(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372618
	if (!ctx.cr6.eq) goto loc_82372618;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
loc_82372430:
	// lwz r26,4(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8237246c
	if (ctx.cr6.eq) goto loc_8237246C;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82372448:
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82372464
	if (!ctx.cr6.eq) goto loc_82372464;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82372448
	if (!ctx.cr0.eq) goto loc_82372448;
loc_82372464:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82372470
	if (!ctx.cr6.eq) goto loc_82372470;
loc_8237246C:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
loc_82372470:
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823724ac
	if (ctx.cr6.eq) goto loc_823724AC;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82372488:
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823724a4
	if (!ctx.cr6.eq) goto loc_823724A4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82372488
	if (!ctx.cr0.eq) goto loc_82372488;
loc_823724A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823724b0
	if (!ctx.cr6.eq) goto loc_823724B0;
loc_823724AC:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
loc_823724B0:
	// add r28,r30,r26
	ctx.r28.u64 = ctx.r30.u64 + ctx.r26.u64;
	// cmplwi cr6,r28,10000
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10000, ctx.xer);
	// ble cr6,0x823724c4
	if (!ctx.cr6.gt) goto loc_823724C4;
	// li r28,-16
	ctx.r28.s64 = -16;
	// b 0x82372618
	goto loc_82372618;
loc_823724C4:
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82372528
	if (!ctx.cr6.lt) goto loc_82372528;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826365a8
	ctx.lr = 0x823724DC;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823724f0
	if (!ctx.cr6.eq) goto loc_823724F0;
	// li r28,-16
	ctx.r28.s64 = -16;
	// b 0x82372618
	goto loc_82372618;
loc_823724F0:
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82372520
	if (ctx.cr6.eq) goto loc_82372520;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x82372508;
	sub_82635430(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82372518;
	sub_82362B98(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82372520;
	sub_82634D40(ctx, base);
loc_82372520:
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82372528:
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bge cr6,0x8237258c
	if (!ctx.cr6.lt) goto loc_8237258C;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82372540;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82372554
	if (!ctx.cr6.eq) goto loc_82372554;
	// li r31,-16
	ctx.r31.s64 = -16;
	// b 0x823725b0
	goto loc_823725B0;
loc_82372554:
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82372584
	if (ctx.cr6.eq) goto loc_82372584;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x8237256C;
	sub_82635430(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x8237257C;
	sub_82362B98(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82372584;
	sub_82634D40(ctx, base);
loc_82372584:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r23,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r23.u32);
loc_8237258C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826344d0
	ctx.lr = 0x823725A4;
	sub_826344D0(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_823725B0:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82372618
	if (!ctx.cr6.eq) goto loc_82372618;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823725f8
	if (ctx.cr6.eq) goto loc_823725F8;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_823725C8:
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x82371cc0
	ctx.lr = 0x823725EC;
	sub_82371CC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bne 0x823725c8
	if (!ctx.cr0.eq) goto loc_823725C8;
loc_823725F8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82372608
	if (ctx.cr6.eq) goto loc_82372608;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// b 0x82372618
	goto loc_82372618;
loc_82372608:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_82372618:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82372638
	if (ctx.cr6.eq) goto loc_82372638;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82372630;
	sub_82362B98(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82634d40
	ctx.lr = 0x82372638;
	sub_82634D40(ctx, base);
loc_82372638:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82372658
	if (ctx.cr6.eq) goto loc_82372658;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82372650;
	sub_82362B98(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82634d40
	ctx.lr = 0x82372658;
	sub_82634D40(ctx, base);
loc_82372658:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823723A0) {
	__imp__sub_823723A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82372664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82372664) {
	__imp__sub_82372664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82372668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82372670;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823726b4
	if (ctx.cr6.eq) goto loc_823726B4;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82372698:
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823726b4
	if (!ctx.cr6.eq) goto loc_823726B4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82372698
	if (!ctx.cr0.eq) goto loc_82372698;
loc_823726B4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82372714
	if (ctx.cr6.eq) goto loc_82372714;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82372714
	if (ctx.cr6.eq) goto loc_82372714;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82370728
	ctx.lr = 0x823726D0;
	sub_82370728(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372708
	if (!ctx.cr6.eq) goto loc_82372708;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82370888
	ctx.lr = 0x823726E8;
	sub_82370888(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372708
	if (!ctx.cr6.eq) goto loc_82372708;
	// addi r6,r27,-1
	ctx.r6.s64 = ctx.r27.s64 + -1;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82371cc0
	ctx.lr = 0x82372708;
	sub_82371CC0(ctx, base);
loc_82372708:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82372714:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823709c8
	ctx.lr = 0x82372720;
	sub_823709C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82372668) {
	__imp__sub_82372668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82372728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634428
	ctx.lr = 0x82372730;
	__savegprlr_16(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// bl 0x82371558
	ctx.lr = 0x8237276C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372780
	if (!ctx.cr6.eq) goto loc_82372780;
	// li r3,-12
	ctx.r3.s64 = -12;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82372780:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x82371470
	ctx.lr = 0x823727D0;
	sub_82371470(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8237289c
	if (!ctx.cr6.lt) goto loc_8237289C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82372870
	if (ctx.cr6.eq) goto loc_82372870;
	// lwz r30,4(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bge cr6,0x82372844
	if (!ctx.cr6.lt) goto loc_82372844;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x823727F8;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237280c
	if (!ctx.cr6.eq) goto loc_8237280C;
	// li r31,-16
	ctx.r31.s64 = -16;
	// b 0x82372868
	goto loc_82372868;
loc_8237280C:
	// lwz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237283c
	if (ctx.cr6.eq) goto loc_8237283C;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x82372824;
	sub_82635430(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82372834;
	sub_82362B98(ctx, base);
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x8237283C;
	sub_82634D40(ctx, base);
loc_8237283C:
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
	// stw r22,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r22.u32);
loc_82372844:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826344d0
	ctx.lr = 0x8237285C;
	sub_826344D0(ctx, base);
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// stw r22,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r22.u32);
loc_82372868:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
loc_82372870:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82372890
	if (ctx.cr6.eq) goto loc_82372890;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82370888
	ctx.lr = 0x82372884;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
loc_82372890:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_8237289C:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82370888
	ctx.lr = 0x823728A8;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82370888
	ctx.lr = 0x823728C0;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// bl 0x82370728
	ctx.lr = 0x823728E4;
	sub_82370728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823709c8
	ctx.lr = 0x823728FC;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82370728
	ctx.lr = 0x82372918;
	sub_82370728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82370c38
	ctx.lr = 0x8237292C;
	sub_82370C38(ctx, base);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bge cr6,0x82372970
	if (!ctx.cr6.lt) goto loc_82372970;
	// subfic r19,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r19.s64 = 31 - ctx.r11.s64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x823711e8
	ctx.lr = 0x82372948;
	sub_823711E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823711e8
	ctx.lr = 0x82372960;
	sub_823711E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// b 0x82372974
	goto loc_82372974;
loc_82372970:
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
loc_82372974:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// subf r27,r25,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r25.s64;
	// rlwinm r26,r27,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823711e8
	ctx.lr = 0x82372998;
	sub_823711E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371558
	ctx.lr = 0x823729B0;
	sub_82371558(ctx, base);
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82372a00
	if (ctx.cr6.lt) goto loc_82372A00;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_823729C0:
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stwx r11,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371b28
	ctx.lr = 0x823729E0;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371558
	ctx.lr = 0x823729F8;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823729c0
	if (!ctx.cr6.lt) goto loc_823729C0;
loc_82372A00:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82371370
	ctx.lr = 0x82372A0C;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82372c5c
	if (!ctx.cr6.gt) goto loc_82372C5C;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r27,r26,-32
	ctx.r27.s64 = ctx.r26.s64 + -32;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r23,-1
	ctx.r23.s64 = -1;
	// clrldi r26,r11,32
	ctx.r26.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_82372A50:
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r9,r29,r8
	ctx.r9.u64 = ctx.r29.u64 + ctx.r8.u64;
	// lwzx r10,r29,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82372a70
	if (ctx.cr6.lt) goto loc_82372A70;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// b 0x82372ab4
	goto loc_82372AB4;
loc_82372A70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82372aac
	if (ctx.cr6.eq) goto loc_82372AAC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82372aac
	if (!ctx.cr6.lt) goto loc_82372AAC;
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// rldicr r6,r10,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// tdllei r5,0
	// divdu r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 / ctx.r5.u64;
	// cmpld cr6,r11,r26
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r26.u64, ctx.xer);
	// ble cr6,0x82372aa4
	if (!ctx.cr6.gt) goto loc_82372AA4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82372AA4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82372ab0
	goto loc_82372AB0;
loc_82372AAC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82372AB0:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82372AB4:
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 2, ctx.xer);
	// bge cr6,0x82372ac4
	if (!ctx.cr6.lt) goto loc_82372AC4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82372acc
	goto loc_82372ACC;
loc_82372AC4:
	// add r11,r29,r8
	ctx.r11.u64 = ctx.r29.u64 + ctx.r8.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
loc_82372ACC:
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82372ae0
	if (ctx.cr6.lt) goto loc_82372AE0;
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
loc_82372AE0:
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82372AF8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x823709c8
	ctx.lr = 0x82372B10;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// blt cr6,0x82372b2c
	if (ctx.cr6.lt) goto loc_82372B2C;
	// lwz r10,-4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
loc_82372B2C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82372668
	ctx.lr = 0x82372B4C;
	sub_82372668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82371558
	ctx.lr = 0x82372B64;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82372af8
	if (ctx.cr6.gt) goto loc_82372AF8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82372668
	ctx.lr = 0x82372B7C;
	sub_82372668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823711e8
	ctx.lr = 0x82372B94;
	sub_823711E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371b28
	ctx.lr = 0x82372BB4;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x82372BE0;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82372c44
	if (!ctx.cr6.lt) goto loc_82372C44;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82370888
	ctx.lr = 0x82372BF4;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823711e8
	ctx.lr = 0x82372C0C;
	sub_823711E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371b28
	ctx.lr = 0x82372C2C;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82372C44:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// addi r27,r27,-32
	ctx.r27.s64 = ctx.r27.s64 + -32;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82372a50
	if (ctx.cr6.gt) goto loc_82372A50;
loc_82372C5C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82372c8c
	if (ctx.cr6.eq) goto loc_82372C8C;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82370888
	ctx.lr = 0x82372C70;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r9.u32);
loc_82372C8C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82372cf8
	if (ctx.cr6.eq) goto loc_82372CF8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371370
	ctx.lr = 0x82372CA0;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82370888
	ctx.lr = 0x82372CC0;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x82372CEC;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372cf8
	if (!ctx.cr6.eq) goto loc_82372CF8;
	// stw r22,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r22.u32);
loc_82372CF8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823706c0
	ctx.lr = 0x82372D00;
	sub_823706C0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823706c0
	ctx.lr = 0x82372D08;
	sub_823706C0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823706c0
	ctx.lr = 0x82372D10;
	sub_823706C0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823706c0
	ctx.lr = 0x82372D18;
	sub_823706C0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82362b98
	ctx.lr = 0x82372D24;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82372728) {
	__imp__sub_82372728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82372D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82372D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82371558
	ctx.lr = 0x82372D70;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82372d84
	if (!ctx.cr6.lt) goto loc_82372D84;
	// li r3,-10
	ctx.r3.s64 = -10;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82372D84:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372728
	ctx.lr = 0x82372D98;
	sub_82372728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372e34
	if (!ctx.cr6.eq) goto loc_82372E34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x82372DB0;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82372dec
	if (!ctx.cr6.lt) goto loc_82372DEC;
loc_82372DB8:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371b28
	ctx.lr = 0x82372DCC;
	sub_82371B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372e34
	if (!ctx.cr6.eq) goto loc_82372E34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x82372DE4;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82372db8
	if (ctx.cr6.lt) goto loc_82372DB8;
loc_82372DEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371558
	ctx.lr = 0x82372DF8;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82372e34
	if (ctx.cr6.lt) goto loc_82372E34;
loc_82372E00:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371b28
	ctx.lr = 0x82372E14;
	sub_82371B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82372e34
	if (!ctx.cr6.eq) goto loc_82372E34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371558
	ctx.lr = 0x82372E2C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82372e00
	if (!ctx.cr6.lt) goto loc_82372E00;
loc_82372E34:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82372D30) {
	__imp__sub_82372D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82372E40) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82372e54
	if (!ctx.cr6.eq) goto loc_82372E54;
	// li r3,-12
	ctx.r3.s64 = -12;
	// blr 
	return;
loc_82372E54:
	// bge cr6,0x82372e60
	if (!ctx.cr6.lt) goto loc_82372E60;
	// li r3,-10
	ctx.r3.s64 = -10;
	// blr 
	return;
loc_82372E60:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82372f18
	if (ctx.cr6.eq) goto loc_82372F18;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82372f18
	if (ctx.cr6.eq) goto loc_82372F18;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82372e94
	if (!ctx.cr6.eq) goto loc_82372E94;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82372E94:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82372ef4
	if (ctx.cr6.eq) goto loc_82372EF4;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82372EB0:
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r6,r10,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// divwu r6,r9,r5
	ctx.r6.u32 = ctx.r9.u32 / ctx.r5.u32;
	// twllei r5,0
	// mullw r6,r6,r5
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// twllei r5,0
	// rlwimi r3,r9,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// divwu r6,r3,r5
	ctx.r6.u32 = ctx.r3.u32 / ctx.r5.u32;
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// bdnz 0x82372eb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372EB0;
loc_82372EF4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82372f0c
	if (!ctx.cr6.lt) goto loc_82372F0C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82372f0c
	if (ctx.cr6.eq) goto loc_82372F0C;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
loc_82372F0C:
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82372F18:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82372E40) {
	__imp__sub_82372E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82372F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// rlwinm r11,r11,1,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82372F3C:
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subfic r7,r8,2
	ctx.xer.ca = ctx.r8.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r8.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82372f3c
	if (!ctx.cr6.lt) goto loc_82372F3C;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82372F28) {
	__imp__sub_82372F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82372F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x82372F68;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x826344d0
	ctx.lr = 0x82372F94;
	sub_826344D0(ctx, base);
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r23,4(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82372fac
	if (ctx.cr6.lt) goto loc_82372FAC;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
loc_82372FAC:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82373024
	if (ctx.cr6.eq) goto loc_82373024;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82372FC8:
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r20,r10,r29
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mullw r10,r20,r9
	ctx.r10.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r9.s32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r19,r8,r22
	ctx.r19.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r22.s32);
	// bl 0x82371cc0
	ctx.lr = 0x82372FF8;
	sub_82371CC0(ctx, base);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371cc0
	ctx.lr = 0x8237300C;
	sub_82371CC0(ctx, base);
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r24,r26,r31
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r24.u32);
	// bne 0x82372fc8
	if (!ctx.cr0.eq) goto loc_82372FC8;
loc_82373024:
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x82373038;
	sub_82635430(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// beq cr6,0x82373098
	if (ctx.cr6.eq) goto loc_82373098;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// subf r8,r31,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r31.s64;
loc_82373060:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfc r5,r7,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subf r3,r7,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r7,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r6,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x82373060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82373060;
loc_82373098:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// bl 0x82386a88
	ctx.lr = 0x823730B8;
	sub_82386A88(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82372F60) {
	__imp__sub_82372F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823730C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x823730C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r3,-110
	ctx.r3.s64 = -110;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82373120
	if (ctx.cr6.eq) goto loc_82373120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_823730EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82386a50
	ctx.lr = 0x823730F8;
	sub_82386A50(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82386f18
	ctx.lr = 0x82373108;
	sub_82386F18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373120
	if (!ctx.cr6.eq) goto loc_82373120;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823730ec
	if (ctx.cr6.lt) goto loc_823730EC;
loc_82373120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823730C0) {
	__imp__sub_823730C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82373128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82373130;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bge cr6,0x823731a4
	if (!ctx.cr6.lt) goto loc_823731A4;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82373158;
	sub_826365A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237316c
	if (!ctx.cr6.eq) goto loc_8237316C;
	// li r30,-16
	ctx.r30.s64 = -16;
	// b 0x823731c8
	goto loc_823731C8;
loc_8237316C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237319c
	if (ctx.cr6.eq) goto loc_8237319C;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x82373184;
	sub_82635430(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82373194;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x8237319C;
	sub_82634D40(ctx, base);
loc_8237319C:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_823731A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826344d0
	ctx.lr = 0x823731BC;
	sub_826344D0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_823731C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82373214
	if (!ctx.cr6.eq) goto loc_82373214;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x823711e8
	ctx.lr = 0x823731E0;
	sub_823711E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373218
	if (!ctx.cr6.eq) goto loc_82373218;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372d30
	ctx.lr = 0x823731F8;
	sub_82372D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373218
	if (!ctx.cr6.eq) goto loc_82373218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x823707b8
	ctx.lr = 0x8237320C;
	sub_823707B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82373214:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82373218:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82373128) {
	__imp__sub_82373128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82373220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82373228;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// bl 0x82371558
	ctx.lr = 0x8237326C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823739f4
	if (!ctx.cr6.gt) goto loc_823739F4;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823739f4
	if (ctx.cr6.eq) goto loc_823739F4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x823732A8;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823739f4
	if (ctx.cr6.lt) goto loc_823739F4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82370c38
	ctx.lr = 0x823732B8;
	sub_82370C38(ctx, base);
	// cmplwi cr6,r3,8192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8192, ctx.xer);
	// bgt cr6,0x823739f4
	if (ctx.cr6.gt) goto loc_823739F4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82370c38
	ctx.lr = 0x823732C8;
	sub_82370C38(ctx, base);
	// cmplwi cr6,r3,8192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8192, ctx.xer);
	// bgt cr6,0x823739f4
	if (ctx.cr6.gt) goto loc_823739F4;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// rlwinm r11,r11,1,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_823732E4:
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subfic r7,r8,2
	ctx.xer.ca = ctx.r8.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r8.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x823732e4
	if (!ctx.cr6.lt) goto loc_823732E4;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
loc_8237334C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8237334c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237334C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82370c38
	ctx.lr = 0x8237335C;
	sub_82370C38(ctx, base);
	// cmplwi cr6,r3,671
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 671, ctx.xer);
	// bgt cr6,0x8237338c
	if (ctx.cr6.gt) goto loc_8237338C;
	// cmplwi cr6,r3,239
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 239, ctx.xer);
	// bgt cr6,0x8237338c
	if (ctx.cr6.gt) goto loc_8237338C;
	// cmplwi cr6,r3,79
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 79, ctx.xer);
	// bgt cr6,0x8237338c
	if (ctx.cr6.gt) goto loc_8237338C;
	// subfic r11,r3,23
	ctx.xer.ca = ctx.r3.u32 <= 23;
	ctx.r11.s64 = 23 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// ble cr6,0x82373390
	if (!ctx.cr6.gt) goto loc_82373390;
loc_8237338C:
	// li r23,2
	ctx.r23.s64 = 2;
loc_82373390:
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// slw r22,r21,r23
	ctx.r22.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r23.u8 & 0x3F));
	// stw r19,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r19.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82370728
	ctx.lr = 0x823733B4;
	sub_82370728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82370728
	ctx.lr = 0x823733CC;
	sub_82370728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82370728
	ctx.lr = 0x823733E4;
	sub_82370728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r18,r10,27,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8237342c
	if (ctx.cr6.eq) goto loc_8237342C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82370888
	ctx.lr = 0x82373414;
	sub_82370888(ctx, base);
	// lwz r15,144(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r29,r1,136
	ctx.r29.s64 = ctx.r1.s64 + 136;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
loc_8237342C:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x8237345c
	if (ctx.cr6.eq) goto loc_8237345C;
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237345c
	if (ctx.cr6.eq) goto loc_8237345C;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r9,8(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// b 0x82373488
	goto loc_82373488;
loc_8237345C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82373128
	ctx.lr = 0x82373468;
	sub_82373128(ctx, base);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82373488
	if (ctx.cr6.eq) goto loc_82373488;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// stw r10,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r10.u32);
	// stw r9,8(r14)
	PPC_STORE_U32(ctx.r14.u32 + 8, ctx.r9.u32);
loc_82373488:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371558
	ctx.lr = 0x82373494;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// blt cr6,0x823734cc
	if (ctx.cr6.lt) goto loc_823734CC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82372d30
	ctx.lr = 0x823734AC;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82370728
	ctx.lr = 0x823734C8;
	sub_82370728(ctx, base);
	// b 0x823734d0
	goto loc_823734D0;
loc_823734CC:
	// bl 0x82370888
	ctx.lr = 0x823734D0;
	sub_82370888(ctx, base);
loc_823734D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82372f60
	ctx.lr = 0x823734F4;
	sub_82372F60(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82370888
	ctx.lr = 0x82373500;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82372f60
	ctx.lr = 0x82373538;
	sub_82372F60(ctx, base);
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// ble cr6,0x82373630
	if (!ctx.cr6.gt) goto loc_82373630;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r9,r22,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r29,r22,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// add r11,r29,r9
	ctx.r11.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370728
	ctx.lr = 0x82373568;
	sub_82370728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370888
	ctx.lr = 0x82373580;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addic. r31,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r31.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823735b4
	if (ctx.cr0.eq) goto loc_823735B4;
loc_82373594:
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372f60
	ctx.lr = 0x823735AC;
	sub_82372F60(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82373594
	if (!ctx.cr0.eq) goto loc_82373594;
loc_823735B4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82373630
	if (!ctx.cr6.lt) goto loc_82373630;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823735D4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82370728
	ctx.lr = 0x823735E4;
	sub_82370728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370888
	ctx.lr = 0x823735FC;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372f60
	ctx.lr = 0x82373620;
	sub_82372F60(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x823735d4
	if (ctx.cr6.lt) goto loc_823735D4;
loc_82373630:
	// lwz r25,4(r17)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82373644:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82373660
	if (!ctx.cr6.eq) goto loc_82373660;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8237377c
	if (ctx.cr6.eq) goto loc_8237377C;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,-4
	ctx.r26.s64 = ctx.r26.s64 + -4;
	// li r28,32
	ctx.r28.s64 = 32;
loc_82373660:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// srw r9,r10,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r28.u8 & 0x3F));
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823736c8
	if (!ctx.cr6.eq) goto loc_823736C8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82373644
	if (ctx.cr6.eq) goto loc_82373644;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x823736c8
	if (!ctx.cr6.eq) goto loc_823736C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823730c0
	ctx.lr = 0x823736A0;
	sub_823730C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82372f60
	ctx.lr = 0x823736C4;
	sub_82372F60(ctx, base);
	// b 0x82373644
	goto loc_82373644;
loc_823736C8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r29,2
	ctx.r29.s64 = 2;
	// subf r10,r30,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r30.s64;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r20,r9,r20
	ctx.r20.u64 = ctx.r9.u64 | ctx.r20.u64;
	// bne cr6,0x82373644
	if (!ctx.cr6.eq) goto loc_82373644;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82373734
	if (ctx.cr6.eq) goto loc_82373734;
loc_823736F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823730c0
	ctx.lr = 0x82373704;
	sub_823730C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82372f60
	ctx.lr = 0x82373728;
	sub_82372F60(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823736f0
	if (ctx.cr6.lt) goto loc_823736F0;
loc_82373734:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823730c0
	ctx.lr = 0x82373748;
	sub_823730C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82372f60
	ctx.lr = 0x8237376C;
	sub_82372F60(ctx, base);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// b 0x82373644
	goto loc_82373644;
loc_8237377C:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82373814
	if (ctx.cr6.eq) goto loc_82373814;
loc_82373788:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823730c0
	ctx.lr = 0x8237379C;
	sub_823730C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82372f60
	ctx.lr = 0x823737C0;
	sub_82372F60(ctx, base);
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r22,r20
	ctx.r11.u64 = ctx.r22.u64 & ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82373808
	if (ctx.cr6.eq) goto loc_82373808;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823730c0
	ctx.lr = 0x823737E4;
	sub_823730C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82372f60
	ctx.lr = 0x82373808;
	sub_82372F60(ctx, base);
loc_82373808:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82373788
	if (ctx.cr6.lt) goto loc_82373788;
loc_82373814:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82372f60
	ctx.lr = 0x82373840;
	sub_82372F60(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82373890
	if (ctx.cr6.eq) goto loc_82373890;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82373890
	if (ctx.cr6.eq) goto loc_82373890;
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82373890
	if (ctx.cr6.eq) goto loc_82373890;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82371b28
	ctx.lr = 0x82373884;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823738a0
	if (!ctx.cr6.eq) goto loc_823738A0;
loc_82373890:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82370888
	ctx.lr = 0x8237389C;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823738A0:
	// rlwinm r11,r22,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82373904
	if (!ctx.cr6.lt) goto loc_82373904;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r11,r22
	ctx.r29.s64 = ctx.r22.s64 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823738C4:
	// addic. r11,r30,-8
	ctx.xer.ca = ctx.r30.u32 > 7;
	ctx.r11.s64 = ctx.r30.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823738f8
	if (ctx.cr0.eq) goto loc_823738F8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823738ec
	if (ctx.cr6.eq) goto loc_823738EC;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x823738E4;
	sub_82362B98(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82634d40
	ctx.lr = 0x823738EC;
	sub_82634D40(ctx, base);
loc_823738EC:
	// stw r21,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r21.u32);
	// stw r19,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r19.u32);
	// stw r19,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r19.u32);
loc_823738F8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x823738c4
	if (!ctx.cr0.eq) goto loc_823738C4;
loc_82373904:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373924
	if (ctx.cr6.eq) goto loc_82373924;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x8237391C;
	sub_82362B98(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82634d40
	ctx.lr = 0x82373924;
	sub_82634D40(ctx, base);
loc_82373924:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r19,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r19.u32);
	// beq cr6,0x82373950
	if (ctx.cr6.eq) goto loc_82373950;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82373948;
	sub_82362B98(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82634d40
	ctx.lr = 0x82373950;
	sub_82634D40(ctx, base);
loc_82373950:
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r19,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// beq cr6,0x82373980
	if (ctx.cr6.eq) goto loc_82373980;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82373978;
	sub_82362B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d40
	ctx.lr = 0x82373980;
	sub_82634D40(ctx, base);
loc_82373980:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x823739a0
	if (ctx.cr6.eq) goto loc_823739A0;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82373998;
	sub_82362B98(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82634d40
	ctx.lr = 0x823739A0;
	sub_82634D40(ctx, base);
loc_823739A0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823739c0
	if (ctx.cr6.eq) goto loc_823739C0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x823739B8;
	sub_82362B98(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82634d40
	ctx.lr = 0x823739C0;
	sub_82634D40(ctx, base);
loc_823739C0:
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// beq cr6,0x823739e0
	if (ctx.cr6.eq) goto loc_823739E0;
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823739e8
	if (!ctx.cr6.eq) goto loc_823739E8;
loc_823739E0:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823706c0
	ctx.lr = 0x823739E8;
	sub_823706C0(ctx, base);
loc_823739E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_823739F4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82373220) {
	__imp__sub_82373220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82373A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82373A08;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x82370888
	ctx.lr = 0x82373A44;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373c7c
	if (!ctx.cr6.eq) goto loc_82373C7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82370888
	ctx.lr = 0x82373A5C;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373c78
	if (!ctx.cr6.eq) goto loc_82373C78;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82370bd8
	ctx.lr = 0x82373A70;
	sub_82370BD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82370bd8
	ctx.lr = 0x82373A7C;
	sub_82370BD8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82373abc
	if (!ctx.cr6.eq) goto loc_82373ABC;
	// rlwinm r10,r27,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82373aa8
	if (ctx.cr6.eq) goto loc_82373AA8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82373abc
	if (!ctx.cr6.eq) goto loc_82373ABC;
loc_82373AA8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82370888
	ctx.lr = 0x82373AB4;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82373c7c
	goto loc_82373C7C;
loc_82373ABC:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82373ac8
	if (!ctx.cr6.lt) goto loc_82373AC8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82373AC8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82373AE4:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82371558
	ctx.lr = 0x82373AF0;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82373c50
	if (ctx.cr6.eq) goto loc_82373C50;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82373b48
	if (ctx.cr6.eq) goto loc_82373B48;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82373B10:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82373B18:
	// srw r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82373b4c
	if (!ctx.cr6.eq) goto loc_82373B4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82373b18
	if (ctx.cr6.lt) goto loc_82373B18;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82373b10
	if (ctx.cr6.lt) goto loc_82373B10;
loc_82373B48:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82373B4C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82371370
	ctx.lr = 0x82373B54;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373c7c
	if (!ctx.cr6.eq) goto loc_82373C7C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82373bac
	if (ctx.cr6.eq) goto loc_82373BAC;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82373B74:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82373B7C:
	// srw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82373bb0
	if (!ctx.cr6.eq) goto loc_82373BB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82373b7c
	if (ctx.cr6.lt) goto loc_82373B7C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82373b74
	if (ctx.cr6.lt) goto loc_82373B74;
loc_82373BAC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82373BB0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371370
	ctx.lr = 0x82373BB8;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373c78
	if (!ctx.cr6.eq) goto loc_82373C78;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82371558
	ctx.lr = 0x82373BD0;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82373c14
	if (ctx.cr6.lt) goto loc_82373C14;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82371910
	ctx.lr = 0x82373BE8;
	sub_82371910(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373c78
	if (!ctx.cr6.eq) goto loc_82373C78;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82371370
	ctx.lr = 0x82373C00;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373c78
	if (!ctx.cr6.eq) goto loc_82373C78;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82373ae4
	goto loc_82373AE4;
loc_82373C14:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371910
	ctx.lr = 0x82373C24;
	sub_82371910(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373c78
	if (!ctx.cr6.eq) goto loc_82373C78;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371370
	ctx.lr = 0x82373C3C;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373c78
	if (!ctx.cr6.eq) goto loc_82373C78;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82373ae4
	goto loc_82373AE4;
loc_82373C50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823711e8
	ctx.lr = 0x82373C5C;
	sub_823711E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373c78
	if (!ctx.cr6.eq) goto loc_82373C78;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82370888
	ctx.lr = 0x82373C74;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82373C78:
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82373C7C:
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82373ca0
	if (ctx.cr6.eq) goto loc_82373CA0;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82373C98;
	sub_82362B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d40
	ctx.lr = 0x82373CA0;
	sub_82634D40(ctx, base);
loc_82373CA0:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82373cc0
	if (ctx.cr6.eq) goto loc_82373CC0;
	// rlwinm r4,r27,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362b98
	ctx.lr = 0x82373CB8;
	sub_82362B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d40
	ctx.lr = 0x82373CC0;
	sub_82634D40(ctx, base);
loc_82373CC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82373A00) {
	__imp__sub_82373A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82373CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82373CCC) {
	__imp__sub_82373CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82373CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82373CD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// subf r28,r4,r27
	ctx.r28.s64 = ctx.r27.s64 - ctx.r4.s64;
	// bge cr6,0x82373d20
	if (!ctx.cr6.lt) goto loc_82373D20;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82373D20:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x82373D30;
	sub_826344D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826344d0
	ctx.lr = 0x82373D4C;
	sub_826344D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82373D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373d7c
	if (!ctx.cr6.eq) goto loc_82373D7C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82370d48
	ctx.lr = 0x82373D7C;
	sub_82370D48(ctx, base);
loc_82373D7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82373CD0) {
	__imp__sub_82373CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82373D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82373D90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82373dfc
	if (!ctx.cr0.eq) goto loc_82373DFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373e64
	if (ctx.cr6.eq) goto loc_82373E64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373de4
	if (ctx.cr6.eq) goto loc_82373DE4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82373DDC;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82373DE4;
	sub_82634D40(ctx, base);
loc_82373DE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82373e64
	goto loc_82373E64;
loc_82373DFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82373e24
	if (!ctx.cr6.eq) goto loc_82373E24;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x82373E18;
	sub_826344D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82373e64
	goto loc_82373E64;
loc_82373E24:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373e3c
	if (ctx.cr6.eq) goto loc_82373E3C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82373E34;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82373E3C;
	sub_82634D40(ctx, base);
loc_82373E3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82370728
	ctx.lr = 0x82373E5C;
	sub_82370728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82373e8c
	if (!ctx.cr6.eq) goto loc_82373E8C;
loc_82373E64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82373e78
	if (!ctx.cr6.eq) goto loc_82373E78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82373E78:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82373cd0
	ctx.lr = 0x82373E8C;
	sub_82373CD0(ctx, base);
loc_82373E8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82373D88) {
	__imp__sub_82373D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82373E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82373E94) {
	__imp__sub_82373E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82373E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x82373EA0;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x82370c38
	ctx.lr = 0x82373ED0;
	sub_82370C38(ctx, base);
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r27,r11,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bge cr6,0x82373ef0
	if (!ctx.cr6.lt) goto loc_82373EF0;
loc_82373EE4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82373EF0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82371690
	ctx.lr = 0x82373EFC;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82373ee4
	if (!ctx.cr6.gt) goto loc_82373EE4;
	// subfic r11,r27,4
	ctx.xer.ca = ctx.r27.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r27.s64;
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r12,-220
	ctx.r12.s64 = -220;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// addi r21,r11,250
	ctx.r21.s64 = ctx.r11.s64 + 250;
	// bne cr6,0x82373f68
	if (!ctx.cr6.eq) goto loc_82373F68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82373fc8
	if (ctx.cr6.eq) goto loc_82373FC8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373f58
	if (ctx.cr6.eq) goto loc_82373F58;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82373F50;
	sub_82362B98(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82373F58;
	sub_82634D40(ctx, base);
loc_82373F58:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// b 0x82373fc8
	goto loc_82373FC8;
loc_82373F68:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82373f8c
	if (!ctx.cr6.eq) goto loc_82373F8C;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x82373F84;
	sub_826344D0(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// b 0x82373fc8
	goto loc_82373FC8;
loc_82373F8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373fa4
	if (ctx.cr6.eq) goto loc_82373FA4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82373F9C;
	sub_82362B98(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82373FA4;
	sub_82634D40(ctx, base);
loc_82373FA4:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// bl 0x82370728
	ctx.lr = 0x82373FBC;
	sub_82370728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823740a4
	if (!ctx.cr6.eq) goto loc_823740A4;
loc_82373FC8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82370728
	ctx.lr = 0x82373FD4;
	sub_82370728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823740a4
	if (!ctx.cr6.eq) goto loc_823740A4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823709c8
	ctx.lr = 0x82373FEC;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823740a4
	if (!ctx.cr6.eq) goto loc_823740A4;
loc_82373FF8:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82373cd0
	ctx.lr = 0x8237400C;
	sub_82373CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823740a4
	if (!ctx.cr6.eq) goto loc_823740A4;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r4,r24,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r24.s64;
	// bl 0x82371370
	ctx.lr = 0x82374028;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823740a4
	if (!ctx.cr6.eq) goto loc_823740A4;
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x823740a0
	if (ctx.cr0.eq) goto loc_823740A0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823870f0
	ctx.lr = 0x8237404C;
	sub_823870F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823740a4
	if (!ctx.cr6.eq) goto loc_823740A4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823870f0
	ctx.lr = 0x82374068;
	sub_823870F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823740a4
	if (!ctx.cr6.eq) goto loc_823740A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82373ff8
	if (!ctx.cr6.eq) goto loc_82373FF8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82373ff8
	if (ctx.cr6.eq) goto loc_82373FF8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823706c0
	ctx.lr = 0x82374094;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_823740A0:
	// li r31,-14
	ctx.r31.s64 = -14;
loc_823740A4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823706c0
	ctx.lr = 0x823740AC;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82373E98) {
	__imp__sub_82373E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823740B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x823740C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r28.u32);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82371558
	ctx.lr = 0x823740F4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82374108
	if (ctx.cr6.gt) goto loc_82374108;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82374108:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// bl 0x82373a00
	ctx.lr = 0x82374188;
	sub_82373A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x823741B4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823741c4
	if (ctx.cr6.eq) goto loc_823741C4;
	// li r31,-14
	ctx.r31.s64 = -14;
	// b 0x823745dc
	goto loc_823745DC;
loc_823741C4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82372d30
	ctx.lr = 0x823741D4;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82370888
	ctx.lr = 0x823741EC;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82370888
	ctx.lr = 0x82374204;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82370888
	ctx.lr = 0x8237421C;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823709c8
	ctx.lr = 0x82374234;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823709c8
	ctx.lr = 0x8237424C;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823709c8
	ctx.lr = 0x82374264;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x823709c8
	ctx.lr = 0x8237427C;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82374290:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82374364
	if (!ctx.cr6.eq) goto loc_82374364;
loc_823742A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82371370
	ctx.lr = 0x823742AC;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823742e0
	if (!ctx.cr6.eq) goto loc_823742E0;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82374320
	if (ctx.cr6.eq) goto loc_82374320;
loc_823742E0:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82371b28
	ctx.lr = 0x823742F4;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82371b28
	ctx.lr = 0x82374314;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
loc_82374320:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82371370
	ctx.lr = 0x8237432C;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82371370
	ctx.lr = 0x82374344;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823742a0
	if (ctx.cr6.eq) goto loc_823742A0;
loc_82374364:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82374438
	if (!ctx.cr6.eq) goto loc_82374438;
loc_82374374:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82371370
	ctx.lr = 0x82374380;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823743b4
	if (!ctx.cr6.eq) goto loc_823743B4;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823743f4
	if (ctx.cr6.eq) goto loc_823743F4;
loc_823743B4:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371b28
	ctx.lr = 0x823743C8;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82371b28
	ctx.lr = 0x823743E8;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
loc_823743F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371370
	ctx.lr = 0x82374400;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82371370
	ctx.lr = 0x82374418;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82374374
	if (ctx.cr6.eq) goto loc_82374374;
loc_82374438:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82371558
	ctx.lr = 0x82374444;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r6,-1
	ctx.r6.s64 = -1;
	// blt cr6,0x823744b4
	if (ctx.cr6.lt) goto loc_823744B4;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82371b28
	ctx.lr = 0x82374460;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82371b28
	ctx.lr = 0x82374480;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82371b28
	ctx.lr = 0x823744A0;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82374514
	goto loc_82374514;
loc_823744B4:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82371b28
	ctx.lr = 0x823744C4;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371b28
	ctx.lr = 0x823744E4;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82371b28
	ctx.lr = 0x82374504;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82374514:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x82374534;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374290
	if (!ctx.cr6.eq) goto loc_82374290;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
loc_82374550:
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371558
	ctx.lr = 0x8237455C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bge cr6,0x82374588
	if (!ctx.cr6.lt) goto loc_82374588;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82371b28
	ctx.lr = 0x82374578;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82374550
	if (ctx.cr6.eq) goto loc_82374550;
	// b 0x823745dc
	goto loc_823745DC;
loc_82374588:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82371558
	ctx.lr = 0x82374590;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823745cc
	if (ctx.cr6.lt) goto loc_823745CC;
loc_82374598:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371b28
	ctx.lr = 0x823745AC;
	sub_82371B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823745dc
	if (!ctx.cr6.eq) goto loc_823745DC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371558
	ctx.lr = 0x823745C4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82374598
	if (!ctx.cr6.lt) goto loc_82374598;
loc_823745CC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82370888
	ctx.lr = 0x823745D8;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823745DC:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x823706c0
	ctx.lr = 0x823745E4;
	sub_823706C0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823706c0
	ctx.lr = 0x823745EC;
	sub_823706C0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823706c0
	ctx.lr = 0x823745F4;
	sub_823706C0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823706c0
	ctx.lr = 0x823745FC;
	sub_823706C0(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823706c0
	ctx.lr = 0x82374604;
	sub_823706C0(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x823706c0
	ctx.lr = 0x8237460C;
	sub_823706C0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823706c0
	ctx.lr = 0x82374614;
	sub_823706C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823706c0
	ctx.lr = 0x8237461C;
	sub_823706C0(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x823706c0
	ctx.lr = 0x82374624;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823740B8) {
	__imp__sub_823740B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82374638;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823746fc
	if (ctx.cr6.eq) goto loc_823746FC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r30,r11,-26280
	ctx.r30.s64 = ctx.r11.s64 + -26280;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82374688
	if (ctx.cr6.lt) goto loc_82374688;
loc_82374680:
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x82374690
	goto loc_82374690;
loc_82374688:
	// neg r11,r5
	ctx.r11.s64 = -ctx.r5.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82374690:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// blt cr6,0x823746a0
	if (ctx.cr6.lt) goto loc_823746A0;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_823746A0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371558
	ctx.lr = 0x823746AC;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823746f0
	if (!ctx.cr6.gt) goto loc_823746F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82372e40
	ctx.lr = 0x823746C0;
	sub_82372E40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374700
	if (!ctx.cr6.eq) goto loc_82374700;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823746fc
	if (ctx.cr6.eq) goto loc_823746FC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x82374680
	if (ctx.cr6.gt) goto loc_82374680;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823746F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823746FC:
	// li r3,-14
	ctx.r3.s64 = -14;
loc_82374700:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82374630) {
	__imp__sub_82374630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x82374710;
	__savegprlr_21(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// bl 0x82371b28
	ctx.lr = 0x82374794;
	sub_82371B28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823749f4
	if (!ctx.cr6.eq) goto loc_823749F4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82370bd8
	ctx.lr = 0x823747A8;
	sub_82370BD8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82370888
	ctx.lr = 0x823747B8;
	sub_82370888(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823749f4
	if (!ctx.cr6.eq) goto loc_823749F4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82371370
	ctx.lr = 0x823747D0;
	sub_82371370(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823749f4
	if (!ctx.cr6.eq) goto loc_823749F4;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823749f4
	if (ctx.cr6.eq) goto loc_823749F4;
loc_823747E8:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_823747EC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82373d88
	ctx.lr = 0x82374804;
	sub_82373D88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823749f0
	if (!ctx.cr6.eq) goto loc_823749F0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82370c38
	ctx.lr = 0x82374818;
	sub_82370C38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82370c38
	ctx.lr = 0x82374824;
	sub_82370C38(ctx, base);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82374864
	if (!ctx.cr6.gt) goto loc_82374864;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// slw r10,r31,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
loc_82374864:
	// cmpwi cr6,r27,30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 30, ctx.xer);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bgt cr6,0x823749e4
	if (ctx.cr6.gt) goto loc_823749E4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371558
	ctx.lr = 0x8237487C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823747ec
	if (!ctx.cr6.lt) goto loc_823747EC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x823748A4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823747ec
	if (!ctx.cr6.gt) goto loc_823747EC;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82373220
	ctx.lr = 0x823748C4;
	sub_82373220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823749f0
	if (!ctx.cr6.eq) goto loc_823749F0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371558
	ctx.lr = 0x823748DC;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823749d4
	if (ctx.cr6.eq) goto loc_823749D4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x82374904;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823749d4
	if (ctx.cr6.eq) goto loc_823749D4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// ble cr6,0x82374998
	if (!ctx.cr6.gt) goto loc_82374998;
loc_82374918:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371558
	ctx.lr = 0x82374924;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82374998
	if (ctx.cr6.eq) goto loc_82374998;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823723a0
	ctx.lr = 0x8237493C;
	sub_823723A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823749f0
	if (!ctx.cr6.eq) goto loc_823749F0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82372d30
	ctx.lr = 0x82374958;
	sub_82372D30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823749f0
	if (!ctx.cr6.eq) goto loc_823749F0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x82374984;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82374998
	if (ctx.cr6.eq) goto loc_82374998;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82374918
	if (ctx.cr6.lt) goto loc_82374918;
loc_82374998:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371558
	ctx.lr = 0x823749A4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823749ec
	if (!ctx.cr6.eq) goto loc_823749EC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x823749CC;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823749ec
	if (ctx.cr6.eq) goto loc_823749EC;
loc_823749D4:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x823747e8
	if (ctx.cr6.lt) goto loc_823747E8;
	// b 0x823749f0
	goto loc_823749F0;
loc_823749E4:
	// li r30,-14
	ctx.r30.s64 = -14;
	// b 0x823749f4
	goto loc_823749F4;
loc_823749EC:
	// li r30,-14
	ctx.r30.s64 = -14;
loc_823749F0:
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823749F4:
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82374a18
	if (ctx.cr6.eq) goto loc_82374A18;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82374A10;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82374A18;
	sub_82634D40(ctx, base);
loc_82374A18:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82374a3c
	if (ctx.cr6.eq) goto loc_82374A3C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82374A34;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82374A3C;
	sub_82634D40(ctx, base);
loc_82374A3C:
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82374a60
	if (ctx.cr6.eq) goto loc_82374A60;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82374A58;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82374A60;
	sub_82634D40(ctx, base);
loc_82374A60:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82374a80
	if (ctx.cr6.eq) goto loc_82374A80;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x82374A78;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82374A80;
	sub_82634D40(ctx, base);
loc_82374A80:
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82374aa4
	if (ctx.cr6.eq) goto loc_82374AA4;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82362b98
	ctx.lr = 0x82374A9C;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82374AA4;
	sub_82634D40(ctx, base);
loc_82374AA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82374708) {
	__imp__sub_82374708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82374AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x82371558
	ctx.lr = 0x82374B04;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82374bac
	if (ctx.cr6.eq) goto loc_82374BAC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82371558
	ctx.lr = 0x82374B2C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82374bac
	if (ctx.cr6.eq) goto loc_82374BAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371558
	ctx.lr = 0x82374B58;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374b68
	if (!ctx.cr6.eq) goto loc_82374B68;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82374B68:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82374630
	ctx.lr = 0x82374B70;
	sub_82374630(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82374b90
	if (ctx.cr6.eq) goto loc_82374B90;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82374B90:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82374708
	ctx.lr = 0x82374BA4;
	sub_82374708(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82374BAC:
	// li r3,-14
	ctx.r3.s64 = -14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82374AB0) {
	__imp__sub_82374AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374BB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823996f8
	sub_823996F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82374BB8) {
	__imp__sub_82374BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82374BBC) {
	__imp__sub_82374BBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-19060
	ctx.r3.s64 = ctx.r11.s64 + -19060;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-25408
	ctx.r8.s64 = ctx.r11.s64 + -25408;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
loc_82374BE8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzu r11,12(r8)
	ea = 12 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82374be8
	if (!ctx.cr6.eq) goto loc_82374BE8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82374BC0) {
	__imp__sub_82374BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82374C14) {
	__imp__sub_82374C14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r10,-25408
	ctx.r10.s64 = ctx.r10.s64 + -25408;
loc_82374C24:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82374c40
	if (ctx.cr6.eq) goto loc_82374C40;
	// lwzu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82374c24
	if (!ctx.cr6.eq) goto loc_82374C24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82374C40:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82374C18) {
	__imp__sub_82374C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r11,-25408
	ctx.r3.s64 = ctx.r11.s64 + -25408;
loc_82374C54:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwzu r11,12(r3)
	ea = 12 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82374c54
	if (!ctx.cr6.eq) goto loc_82374C54;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82374C48) {
	__imp__sub_82374C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82374C74) {
	__imp__sub_82374C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374C78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82374c8c
	if (!ctx.cr6.eq) goto loc_82374C8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82374C8C:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82374C78) {
	__imp__sub_82374C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374CA0) {
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
	// bl 0x823706a8
	ctx.lr = 0x82374CB8;
	sub_823706A8(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x823706a8
	ctx.lr = 0x82374CC0;
	sub_823706A8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823706a8
	ctx.lr = 0x82374CC8;
	sub_823706A8(ctx, base);
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

PPC_WEAK_FUNC(sub_82374CA0) {
	__imp__sub_82374CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82374CDC) {
	__imp__sub_82374CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82374CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x823706a8
	ctx.lr = 0x82374D00;
	sub_823706A8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823706a8
	ctx.lr = 0x82374D08;
	sub_823706A8(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823706a8
	ctx.lr = 0x82374D10;
	sub_823706A8(ctx, base);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823706a8
	ctx.lr = 0x82374D1C;
	sub_823706A8(ctx, base);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x823706a8
	ctx.lr = 0x82374D24;
	sub_823706A8(ctx, base);
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x823706a8
	ctx.lr = 0x82374D2C;
	sub_823706A8(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x823706a8
	ctx.lr = 0x82374D34;
	sub_823706A8(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82374CE0) {
	__imp__sub_82374CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374D60) {
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
	// bl 0x82374ce0
	ctx.lr = 0x82374D78;
	sub_82374CE0(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x823706a8
	ctx.lr = 0x82374D80;
	sub_823706A8(ctx, base);
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823706a8
	ctx.lr = 0x82374D8C;
	sub_823706A8(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x823706a8
	ctx.lr = 0x82374D94;
	sub_823706A8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823706a8
	ctx.lr = 0x82374D9C;
	sub_823706A8(ctx, base);
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

PPC_WEAK_FUNC(sub_82374D60) {
	__imp__sub_82374D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374DB0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374de0
	if (ctx.cr6.eq) goto loc_82374DE0;
	// bl 0x823706c0
	ctx.lr = 0x82374DD0;
	sub_823706C0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x823706c0
	ctx.lr = 0x82374DD8;
	sub_823706C0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823706c0
	ctx.lr = 0x82374DE0;
	sub_823706C0(ctx, base);
loc_82374DE0:
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

PPC_WEAK_FUNC(sub_82374DB0) {
	__imp__sub_82374DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82374DF4) {
	__imp__sub_82374DF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82374E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374ec8
	if (ctx.cr6.eq) goto loc_82374EC8;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82374e5c
	if (ctx.cr6.eq) goto loc_82374E5C;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823706c0
	ctx.lr = 0x82374E24;
	sub_823706C0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823706c0
	ctx.lr = 0x82374E2C;
	sub_823706C0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823706c0
	ctx.lr = 0x82374E34;
	sub_823706C0(ctx, base);
	// addic. r30,r31,40
	ctx.xer.ca = ctx.r31.u32 > 4294967255;
	ctx.r30.s64 = ctx.r31.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82374e54
	if (ctx.cr0.eq) goto loc_82374E54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823706c0
	ctx.lr = 0x82374E44;
	sub_823706C0(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x823706c0
	ctx.lr = 0x82374E4C;
	sub_823706C0(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x823706c0
	ctx.lr = 0x82374E54;
	sub_823706C0(ctx, base);
loc_82374E54:
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x823706c0
	ctx.lr = 0x82374E5C;
	sub_823706C0(ctx, base);
loc_82374E5C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82374ebc
	if (ctx.cr6.eq) goto loc_82374EBC;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82374eb4
	if (!ctx.cr6.gt) goto loc_82374EB4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82374E7C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add. r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82374ea0
	if (ctx.cr0.eq) goto loc_82374EA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823706c0
	ctx.lr = 0x82374E90;
	sub_823706C0(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x823706c0
	ctx.lr = 0x82374E98;
	sub_823706C0(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x823706c0
	ctx.lr = 0x82374EA0;
	sub_823706C0(ctx, base);
loc_82374EA0:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82374e7c
	if (ctx.cr6.lt) goto loc_82374E7C;
loc_82374EB4:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82634d40
	ctx.lr = 0x82374EBC;
	sub_82634D40(ctx, base);
loc_82374EBC:
	// li r4,124
	ctx.r4.s64 = 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x82374EC8;
	sub_82362B98(ctx, base);
loc_82374EC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82374DF8) {
	__imp__sub_82374DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374ED0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374f18
	if (ctx.cr6.eq) goto loc_82374F18;
	// bl 0x82374df8
	ctx.lr = 0x82374EF0;
	sub_82374DF8(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x823706c0
	ctx.lr = 0x82374EF8;
	sub_823706C0(ctx, base);
	// addic. r31,r31,136
	ctx.xer.ca = ctx.r31.u32 > 4294967159;
	ctx.r31.s64 = ctx.r31.s64 + 136;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82374f18
	if (ctx.cr0.eq) goto loc_82374F18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823706c0
	ctx.lr = 0x82374F08;
	sub_823706C0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x823706c0
	ctx.lr = 0x82374F10;
	sub_823706C0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823706c0
	ctx.lr = 0x82374F18;
	sub_823706C0(ctx, base);
loc_82374F18:
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

PPC_WEAK_FUNC(sub_82374ED0) {
	__imp__sub_82374ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82374F2C) {
	__imp__sub_82374F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374F30) {
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
	// bl 0x82370888
	ctx.lr = 0x82374F50;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374f78
	if (!ctx.cr6.eq) goto loc_82374F78;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82370888
	ctx.lr = 0x82374F64;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374f78
	if (!ctx.cr6.eq) goto loc_82374F78;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82370888
	ctx.lr = 0x82374F78;
	sub_82370888(ctx, base);
loc_82374F78:
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

PPC_WEAK_FUNC(sub_82374F30) {
	__imp__sub_82374F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8238d008
	sub_8238D008(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82374F90) {
	__imp__sub_82374F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374F98) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823709c8
	ctx.lr = 0x82374FB4;
	sub_823709C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374fdc
	if (!ctx.cr6.eq) goto loc_82374FDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x823709c8
	ctx.lr = 0x82374FC8;
	sub_823709C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374fdc
	if (!ctx.cr6.eq) goto loc_82374FDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823709c8
	ctx.lr = 0x82374FDC;
	sub_823709C8(ctx, base);
loc_82374FDC:
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

PPC_WEAK_FUNC(sub_82374F98) {
	__imp__sub_82374F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82374FF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82371690
	ctx.lr = 0x82375008;
	sub_82371690(ctx, base);
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

PPC_WEAK_FUNC(sub_82374FF0) {
	__imp__sub_82374FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82375028;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r30,-20096
	ctx.r30.s64 = -20096;
	// bl 0x82370d20
	ctx.lr = 0x82375050;
	sub_82370D20(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823750a0
	if (ctx.cr6.eq) goto loc_823750A0;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823750a0
	if (!ctx.cr6.eq) goto loc_823750A0;
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82375084
	if (!ctx.cr6.lt) goto loc_82375084;
loc_82375078:
	// li r3,-20224
	ctx.r3.s64 = -20224;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82375084:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82371030
	ctx.lr = 0x82375094;
	sub_82371030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237517c
	if (!ctx.cr6.eq) goto loc_8237517C;
loc_823750A0:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237517c
	if (ctx.cr6.eq) goto loc_8237517C;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237517c
	if (ctx.cr6.eq) goto loc_8237517C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82371690
	ctx.lr = 0x823750C4;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823750ec
	if (!ctx.cr6.eq) goto loc_823750EC;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// blt cr6,0x82375078
	if (ctx.cr6.lt) goto loc_82375078;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823750EC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8237513c
	if (!ctx.cr6.eq) goto loc_8237513C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82375078
	if (ctx.cr6.lt) goto loc_82375078;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82371110
	ctx.lr = 0x82375120;
	sub_82371110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237517c
	if (!ctx.cr6.eq) goto loc_8237517C;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x82375170
	goto loc_82375170;
loc_8237513C:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8237517c
	if (!ctx.cr6.eq) goto loc_8237517C;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82375078
	if (ctx.cr6.lt) goto loc_82375078;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// bl 0x82370a98
	ctx.lr = 0x82375160;
	sub_82370A98(ctx, base);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82375170:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82371110
	ctx.lr = 0x82375178;
	sub_82371110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8237517C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82375020) {
	__imp__sub_82375020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82375190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r31,-20096
	ctx.r31.s64 = -20096;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bge cr6,0x823751bc
	if (!ctx.cr6.lt) goto loc_823751BC;
loc_823751B0:
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823751BC:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82370d20
	ctx.lr = 0x823751C4;
	sub_82370D20(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82375250
	if (ctx.cr6.eq) goto loc_82375250;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82375250
	if (!ctx.cr6.eq) goto loc_82375250;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823751b0
	if (!ctx.cr6.eq) goto loc_823751B0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370df0
	ctx.lr = 0x823751F8;
	sub_82370DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823752fc
	if (!ctx.cr6.eq) goto loc_823752FC;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x823706c0
	ctx.lr = 0x8237520C;
	sub_823706C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82375238
	if (!ctx.cr6.eq) goto loc_82375238;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370ad0
	ctx.lr = 0x8237522C;
	sub_82370AD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823752fc
	if (!ctx.cr6.eq) goto loc_823752FC;
loc_82375238:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x823709c8
	ctx.lr = 0x82375244;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823752fc
	if (!ctx.cr6.eq) goto loc_823752FC;
loc_82375250:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823752fc
	if (ctx.cr6.eq) goto loc_823752FC;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823752fc
	if (ctx.cr6.eq) goto loc_823752FC;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237528c
	if (!ctx.cr6.eq) goto loc_8237528C;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x823751b0
	if (!ctx.cr6.eq) goto loc_823751B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82374f98
	ctx.lr = 0x82375284;
	sub_82374F98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8237528C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823752a0
	if (ctx.cr6.eq) goto loc_823752A0;
	// li r3,-20096
	ctx.r3.s64 = -20096;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823752A0:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823751b0
	if (!ctx.cr6.eq) goto loc_823751B0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370f18
	ctx.lr = 0x823752C0;
	sub_82370F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823752fc
	if (!ctx.cr6.eq) goto loc_823752FC;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x82370f18
	ctx.lr = 0x823752E0;
	sub_82370F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823752fc
	if (!ctx.cr6.eq) goto loc_823752FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x823709c8
	ctx.lr = 0x823752F8;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823752FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82375188) {
	__imp__sub_82375188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375308) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x82375348
	if (ctx.cr6.lt) goto loc_82375348;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82375348
	if (ctx.cr6.lt) goto loc_82375348;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82375348
	if (ctx.cr6.gt) goto loc_82375348;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x82375188
	sub_82375188(ctx, base);
	return;
loc_82375348:
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82375308) {
	__imp__sub_82375308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375350) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x8237537c
	if (!ctx.cr6.lt) goto loc_8237537C;
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// b 0x823753a8
	goto loc_823753A8;
loc_8237537C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82375020
	ctx.lr = 0x8237538C;
	sub_82375020(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823753a8
	if (!ctx.cr6.eq) goto loc_823753A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_823753A8:
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

PPC_WEAK_FUNC(sub_82375350) {
	__imp__sub_82375350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823753C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bge cr6,0x823753d4
	if (!ctx.cr6.lt) goto loc_823753D4;
loc_823753CC:
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// blr 
	return;
loc_823753D4:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823753cc
	if (!ctx.cr6.eq) goto loc_823753CC;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// addi r11,r9,-25408
	ctx.r11.s64 = ctx.r9.s64 + -25408;
loc_82375418:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82375438
	if (ctx.cr6.eq) goto loc_82375438;
	// lwzu r9,12(r11)
	ea = 12 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82375418
	if (!ctx.cr6.eq) goto loc_82375418;
	// li r3,-20096
	ctx.r3.s64 = -20096;
	// blr 
	return;
loc_82375438:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823753C0) {
	__imp__sub_823753C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r10,-25408
	ctx.r10.s64 = ctx.r10.s64 + -25408;
loc_82375458:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82375474
	if (ctx.cr6.eq) goto loc_82375474;
	// lwzu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375458
	if (!ctx.cr6.eq) goto loc_82375458;
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// blr 
	return;
loc_82375474:
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bge cr6,0x8237548c
	if (!ctx.cr6.lt) goto loc_8237548C;
	// li r3,-20224
	ctx.r3.s64 = -20224;
	// blr 
	return;
loc_8237548C:
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stbu r11,1(r5)
	ea = 1 + ctx.r5.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r5.u32 = ea;
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// stb r10,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82375448) {
	__imp__sub_82375448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823754A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x823754B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823754dc
	if (!ctx.cr6.eq) goto loc_823754DC;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x82372d30
	ctx.lr = 0x823754D4;
	sub_82372D30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823754DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823754fc
	if (!ctx.cr6.lt) goto loc_823754FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x823754F4;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375514
	if (!ctx.cr6.eq) goto loc_82375514;
loc_823754FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370c38
	ctx.lr = 0x82375504;
	sub_82370C38(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82375520
	if (!ctx.cr6.gt) goto loc_82375520;
loc_82375514:
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82375520:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823755cc
	if (!ctx.cr6.eq) goto loc_823755CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82375584
	if (!ctx.cr6.lt) goto loc_82375584;
loc_82375548:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x82375554;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82375584
	if (ctx.cr6.eq) goto loc_82375584;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371be0
	ctx.lr = 0x8237556C;
	sub_82371BE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823755cc
	if (!ctx.cr6.eq) goto loc_823755CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82375548
	if (ctx.cr6.lt) goto loc_82375548;
loc_82375584:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82371558
	ctx.lr = 0x82375594;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823755cc
	if (ctx.cr6.lt) goto loc_823755CC;
loc_8237559C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371910
	ctx.lr = 0x823755AC;
	sub_82371910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823755cc
	if (!ctx.cr6.eq) goto loc_823755CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371558
	ctx.lr = 0x823755C4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8237559c
	if (!ctx.cr6.lt) goto loc_8237559C;
loc_823755CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823754A8) {
	__imp__sub_823754A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823755D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x823755E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823723a0
	ctx.lr = 0x823755FC;
	sub_823723A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375730
	if (!ctx.cr6.eq) goto loc_82375730;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82375624
	if (!ctx.cr6.eq) goto loc_82375624;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372d30
	ctx.lr = 0x82375620;
	sub_82372D30(ctx, base);
	// b 0x82375718
	goto loc_82375718;
loc_82375624:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82375644
	if (!ctx.cr6.lt) goto loc_82375644;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x8237563C;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237565c
	if (!ctx.cr6.eq) goto loc_8237565C;
loc_82375644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370c38
	ctx.lr = 0x8237564C;
	sub_82370C38(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82375668
	if (!ctx.cr6.gt) goto loc_82375668;
loc_8237565C:
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82375668:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375714
	if (!ctx.cr6.eq) goto loc_82375714;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823756cc
	if (!ctx.cr6.lt) goto loc_823756CC;
loc_82375690:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x8237569C;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823756cc
	if (ctx.cr6.eq) goto loc_823756CC;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371be0
	ctx.lr = 0x823756B4;
	sub_82371BE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375714
	if (!ctx.cr6.eq) goto loc_82375714;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82375690
	if (ctx.cr6.lt) goto loc_82375690;
loc_823756CC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82371558
	ctx.lr = 0x823756DC;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82375714
	if (ctx.cr6.lt) goto loc_82375714;
loc_823756E4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371910
	ctx.lr = 0x823756F4;
	sub_82371910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375714
	if (!ctx.cr6.eq) goto loc_82375714;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371558
	ctx.lr = 0x8237570C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823756e4
	if (!ctx.cr6.lt) goto loc_823756E4;
loc_82375714:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82375718:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375730
	if (!ctx.cr6.eq) goto loc_82375730;
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// lwz r11,-19064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19064);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-19064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19064, ctx.r11.u32);
loc_82375730:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823755D8) {
	__imp__sub_823755D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82375740;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371be8
	ctx.lr = 0x8237575C;
	sub_82371BE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823757b0
	if (!ctx.cr6.eq) goto loc_823757B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823757b0
	if (!ctx.cr6.lt) goto loc_823757B0;
loc_82375774:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x82375780;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823757b0
	if (ctx.cr6.eq) goto loc_823757B0;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371be0
	ctx.lr = 0x82375798;
	sub_82371BE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823757b0
	if (!ctx.cr6.eq) goto loc_823757B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82375774
	if (ctx.cr6.lt) goto loc_82375774;
loc_823757B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82375738) {
	__imp__sub_82375738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823757BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823757BC) {
	__imp__sub_823757BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823757C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x823757C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371be0
	ctx.lr = 0x823757E4;
	sub_82371BE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375838
	if (!ctx.cr6.eq) goto loc_82375838;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82371558
	ctx.lr = 0x82375800;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82375838
	if (ctx.cr6.lt) goto loc_82375838;
loc_82375808:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371910
	ctx.lr = 0x82375818;
	sub_82371910(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375838
	if (!ctx.cr6.eq) goto loc_82375838;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371558
	ctx.lr = 0x82375830;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82375808
	if (!ctx.cr6.lt) goto loc_82375808;
loc_82375838:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823757C0) {
	__imp__sub_823757C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82375844) {
	__imp__sub_82375844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82375850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823711e8
	ctx.lr = 0x82375868;
	sub_823711E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823758bc
	if (!ctx.cr6.eq) goto loc_823758BC;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82371558
	ctx.lr = 0x82375884;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823758bc
	if (ctx.cr6.lt) goto loc_823758BC;
loc_8237588C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371910
	ctx.lr = 0x8237589C;
	sub_82371910(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823758bc
	if (!ctx.cr6.eq) goto loc_823758BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371558
	ctx.lr = 0x823758B4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8237588c
	if (!ctx.cr6.lt) goto loc_8237588C;
loc_823758BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82375848) {
	__imp__sub_82375848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823758C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x823758D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r4,24
	ctx.r28.s64 = ctx.r4.s64 + 24;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371690
	ctx.lr = 0x823758EC;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823758fc
	if (!ctx.cr6.eq) goto loc_823758FC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_823758FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x82375904;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x8237590C;
	sub_823706A8(ctx, base);
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823740b8
	ctx.lr = 0x8237591C;
	sub_823740B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759bc
	if (!ctx.cr6.eq) goto loc_823759BC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237593C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759bc
	if (!ctx.cr6.eq) goto loc_823759BC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237595C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759bc
	if (!ctx.cr6.eq) goto loc_823759BC;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375980;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759bc
	if (!ctx.cr6.eq) goto loc_823759BC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823755d8
	ctx.lr = 0x823759A0;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759bc
	if (!ctx.cr6.eq) goto loc_823759BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823709c8
	ctx.lr = 0x823759B8;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823759BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x823759C4;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x823759CC;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823758C8) {
	__imp__sub_823758C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823759D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x823759E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bge cr6,0x82375a08
	if (!ctx.cr6.lt) goto loc_82375A08;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x823758c8
	ctx.lr = 0x82375A00;
	sub_823758C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82375A08:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826365a8
	ctx.lr = 0x82375A14;
	sub_826365A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82375a2c
	if (!ctx.cr6.eq) goto loc_82375A2C;
	// li r3,-19840
	ctx.r3.s64 = -19840;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82375A2C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82375a50
	if (ctx.cr6.eq) goto loc_82375A50;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82375A3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823706a8
	ctx.lr = 0x82375A44;
	sub_823706A8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82375a3c
	if (!ctx.cr0.eq) goto loc_82375A3C;
loc_82375A50:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x82375A58;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x82375A60;
	sub_823706A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706a8
	ctx.lr = 0x82375A68;
	sub_823706A8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x82370888
	ctx.lr = 0x82375A78;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// ble cr6,0x82375ad0
	if (!ctx.cr6.gt) goto loc_82375AD0;
	// addi r30,r25,12
	ctx.r30.s64 = ctx.r25.s64 + 12;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
loc_82375A98:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375AB0;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82375a98
	if (ctx.cr6.lt) goto loc_82375A98;
loc_82375AD0:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x823740b8
	ctx.lr = 0x82375AF0;
	sub_823740B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// addi r28,r24,-1
	ctx.r28.s64 = ctx.r24.s64 + -1;
loc_82375B00:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82375b18
	if (!ctx.cr6.eq) goto loc_82375B18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370888
	ctx.lr = 0x82375B14;
	sub_82370888(ctx, base);
	// b 0x82375b64
	goto loc_82375B64;
loc_82375B18:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// bl 0x823755d8
	ctx.lr = 0x82375B3C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// bl 0x823755d8
	ctx.lr = 0x82375B64;
	sub_823755D8(ctx, base);
loc_82375B64:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375B84;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r30,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375BA8;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375BCC;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375BF0;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x823707b8
	ctx.lr = 0x82375C08;
	sub_823707B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x823707b8
	ctx.lr = 0x82375C24;
	sub_823707B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c4c
	if (!ctx.cr6.eq) goto loc_82375C4C;
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x823706c0
	ctx.lr = 0x82375C3C;
	sub_823706C0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82375c4c
	if (ctx.cr6.eq) goto loc_82375C4C;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// b 0x82375b00
	goto loc_82375B00;
loc_82375C4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82375C54;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x82375C5C;
	sub_823706C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706c0
	ctx.lr = 0x82375C64;
	sub_823706C0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82375c88
	if (ctx.cr6.eq) goto loc_82375C88;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82375C74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823706c0
	ctx.lr = 0x82375C7C;
	sub_823706C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82375c74
	if (!ctx.cr0.eq) goto loc_82375C74;
loc_82375C88:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82634d40
	ctx.lr = 0x82375C90;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823759D8) {
	__imp__sub_823759D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82375C9C) {
	__imp__sub_82375C9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82375CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82375CA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-19000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-19000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19000, ctx.r11.u32);
	// bl 0x823706a8
	ctx.lr = 0x82375CD0;
	sub_823706A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x82375CD8;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x82375CE0;
	sub_823706A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823706a8
	ctx.lr = 0x82375CE8;
	sub_823706A8(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82375ddc
	if (!ctx.cr6.eq) goto loc_82375DDC;
	// addi r6,r28,24
	ctx.r6.s64 = ctx.r28.s64 + 24;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375D08;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823757c0
	ctx.lr = 0x82375D28;
	sub_823757C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x82375D48;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375D68;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82372668
	ctx.lr = 0x82375D84;
	sub_82372668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82371558
	ctx.lr = 0x82375DA0;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82375ef0
	if (ctx.cr6.lt) goto loc_82375EF0;
loc_82375DA8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82371910
	ctx.lr = 0x82375DB8;
	sub_82371910(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82371558
	ctx.lr = 0x82375DD0;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82375da8
	if (!ctx.cr6.lt) goto loc_82375DA8;
	// b 0x82375ef0
	goto loc_82375EF0;
loc_82375DDC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375DE8;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82372668
	ctx.lr = 0x82375E04;
	sub_82372668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82371558
	ctx.lr = 0x82375E20;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82375e58
	if (ctx.cr6.lt) goto loc_82375E58;
loc_82375E28:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82371910
	ctx.lr = 0x82375E38;
	sub_82371910(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82371558
	ctx.lr = 0x82375E50;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82375e28
	if (!ctx.cr6.lt) goto loc_82375E28;
loc_82375E58:
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371690
	ctx.lr = 0x82375E68;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82375ef0
	if (ctx.cr6.eq) goto loc_82375EF0;
	// addi r6,r28,24
	ctx.r6.s64 = ctx.r28.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375E84;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375EA4;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375EC4;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823757c0
	ctx.lr = 0x82375EE4;
	sub_823757C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
loc_82375EF0:
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375F08;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375848
	ctx.lr = 0x82375F24;
	sub_82375848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375F44;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375848
	ctx.lr = 0x82375F60;
	sub_82375848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375F80;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375848
	ctx.lr = 0x82375F9C;
	sub_82375848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82375FBC;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x82375FDC;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x82375FFC;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x8237601C;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237603C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x8237605C;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r6,r28,24
	ctx.r6.s64 = ctx.r28.s64 + 24;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237607C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375848
	ctx.lr = 0x82376098;
	sub_82375848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82370888
	ctx.lr = 0x823760B0;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// bl 0x82370888
	ctx.lr = 0x823760C8;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823760e4
	if (!ctx.cr6.eq) goto loc_823760E4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82370888
	ctx.lr = 0x823760E0;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823760E4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706c0
	ctx.lr = 0x823760EC;
	sub_823706C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x823760F4;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x823760FC;
	sub_823706C0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823706c0
	ctx.lr = 0x82376104;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82375CA0) {
	__imp__sub_82375CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82376110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82376118;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// addi r28,r5,24
	ctx.r28.s64 = ctx.r5.s64 + 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-19004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19004);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,-19004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19004, ctx.r11.u32);
	// bl 0x82371690
	ctx.lr = 0x8237614C;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376190
	if (!ctx.cr6.eq) goto loc_82376190;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82370888
	ctx.lr = 0x82376160;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376544
	if (!ctx.cr6.eq) goto loc_82376544;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x82370888
	ctx.lr = 0x82376174;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376544
	if (!ctx.cr6.eq) goto loc_82376544;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82370888
	ctx.lr = 0x82376188;
	sub_82370888(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82376190:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823761c4
	if (ctx.cr6.eq) goto loc_823761C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82371690
	ctx.lr = 0x823761A8;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823761c4
	if (!ctx.cr6.eq) goto loc_823761C4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374f30
	ctx.lr = 0x823761BC;
	sub_82374F30(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823761C4:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823761f0
	if (ctx.cr6.eq) goto loc_823761F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82371690
	ctx.lr = 0x823761DC;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823761f0
	if (ctx.cr6.eq) goto loc_823761F0;
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823761F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x823761F8;
	sub_823706A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706a8
	ctx.lr = 0x82376200;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x82376208;
	sub_823706A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823706a8
	ctx.lr = 0x82376210;
	sub_823706A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823706a8
	ctx.lr = 0x82376218;
	sub_823706A8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823706a8
	ctx.lr = 0x82376220;
	sub_823706A8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823706a8
	ctx.lr = 0x82376228;
	sub_823706A8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237623C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237625C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237627C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237629C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x823762BC;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r29,r27,12
	ctx.r29.s64 = ctx.r27.s64 + 12;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x823762E0;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371690
	ctx.lr = 0x823762F8;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376334
	if (!ctx.cr6.eq) goto loc_82376334;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82371690
	ctx.lr = 0x8237630C;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376328
	if (!ctx.cr6.eq) goto loc_82376328;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375ca0
	ctx.lr = 0x82376324;
	sub_82375CA0(ctx, base);
	// b 0x82376504
	goto loc_82376504;
loc_82376328:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374f98
	ctx.lr = 0x82376330;
	sub_82374F98(ctx, base);
	// b 0x82376504
	goto loc_82376504;
loc_82376334:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82376348;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82376368;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82376388;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x823763A8;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370888
	ctx.lr = 0x823763C0;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375848
	ctx.lr = 0x823763DC;
	sub_82375848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x823763FC;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x8237641C;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x8237643C;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x8237645C;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237647C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237649C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x823764BC;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82370888
	ctx.lr = 0x823764D4;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x82370888
	ctx.lr = 0x823764EC;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376508
	if (!ctx.cr6.eq) goto loc_82376508;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82370888
	ctx.lr = 0x82376504;
	sub_82370888(ctx, base);
loc_82376504:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82376508:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82376510;
	sub_823706C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706c0
	ctx.lr = 0x82376518;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x82376520;
	sub_823706C0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823706c0
	ctx.lr = 0x82376528;
	sub_823706C0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823706c0
	ctx.lr = 0x82376530;
	sub_823706C0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823706c0
	ctx.lr = 0x82376538;
	sub_823706C0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823706c0
	ctx.lr = 0x82376540;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82376544:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82376110) {
	__imp__sub_82376110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8237654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8237654C) {
	__imp__sub_8237654C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82376550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82376558;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823706a8
	ctx.lr = 0x82376574;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x8237657C;
	sub_823706A8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373e98
	ctx.lr = 0x82376594;
	sub_82373E98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376638
	if (!ctx.cr6.eq) goto loc_82376638;
	// addi r5,r29,24
	ctx.r5.s64 = ctx.r29.s64 + 24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x823755d8
	ctx.lr = 0x823765B4;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376638
	if (!ctx.cr6.eq) goto loc_82376638;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x823765D4;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376638
	if (!ctx.cr6.eq) goto loc_82376638;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x823765F4;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376638
	if (!ctx.cr6.eq) goto loc_82376638;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82376614;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376638
	if (!ctx.cr6.eq) goto loc_82376638;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x823755d8
	ctx.lr = 0x82376634;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82376638:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82376640;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x82376648;
	sub_823706C0(ctx, base);
	// cmpwi cr6,r31,-14
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -14, ctx.xer);
	// li r3,-19712
	ctx.r3.s64 = -19712;
	// beq cr6,0x82376658
	if (ctx.cr6.eq) goto loc_82376658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82376658:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82376550) {
	__imp__sub_82376550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82376660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82376668;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x826344d0
	ctx.lr = 0x82376688;
	sub_826344D0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823766e4
	if (ctx.cr6.eq) goto loc_823766E4;
	// clrlwi r26,r31,24
	ctx.r26.u64 = ctx.r31.u32 & 0xFF;
loc_82376698:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823766d8
	if (ctx.cr6.eq) goto loc_823766D8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_823766A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82370a98
	ctx.lr = 0x823766B4;
	sub_82370A98(ctx, base);
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// slw r10,r3,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r31.u8 & 0x3F));
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// stbx r8,r28,r29
	PPC_STORE_U8(ctx.r28.u32 + ctx.r29.u32, ctx.r8.u8);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823766a8
	if (ctx.cr6.lt) goto loc_823766A8;
loc_823766D8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82376698
	if (ctx.cr6.lt) goto loc_82376698;
loc_823766E4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x82376764
	if (ctx.cr6.lt) goto loc_82376764;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_823766FC:
	// lbzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// xor r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// stbx r3,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u8);
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// subfic r7,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r6.s64;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r7,r8,7,17,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7F80;
	// mullw r31,r9,r8
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// xor r7,r31,r5
	ctx.r7.u64 = ctx.r31.u64 ^ ctx.r5.u64;
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stbx r7,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u8);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// and r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 & ctx.r3.u64;
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 | ctx.r6.u64;
	// bdnz 0x823766fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823766FC;
loc_82376764:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82376660) {
	__imp__sub_82376660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8237676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8237676C) {
	__imp__sub_8237676C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82376770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x82376778;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// slw r11,r23,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r30.u8 & 0x3F));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82370888
	ctx.lr = 0x823767AC;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823769a4
	if (!ctx.cr6.eq) goto loc_823769A4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// bl 0x82370888
	ctx.lr = 0x823767C0;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823769a4
	if (!ctx.cr6.eq) goto loc_823769A4;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x82370888
	ctx.lr = 0x823767D4;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823769a4
	if (!ctx.cr6.eq) goto loc_823769A4;
	// mullw. r26,r30,r27
	ctx.r26.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x82376890
	if (ctx.cr0.eq) goto loc_82376890;
loc_823767E8:
	// divwu r11,r29,r27
	ctx.r11.u32 = ctx.r29.u32 / ctx.r27.u32;
	// divwu r10,r29,r27
	ctx.r10.u32 = ctx.r29.u32 / ctx.r27.u32;
	// slw r9,r23,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mullw r8,r10,r27
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// twllei r27,0
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r27,0
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r7,r8,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r31,r10,r28
	ctx.r31.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bne 0x8237686c
	if (!ctx.cr0.eq) goto loc_8237686C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,2,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82370888
	ctx.lr = 0x8237683C;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823769a4
	if (!ctx.cr6.eq) goto loc_823769A4;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82370888
	ctx.lr = 0x82376850;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823769a4
	if (!ctx.cr6.eq) goto loc_823769A4;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82370888
	ctx.lr = 0x82376864;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823769a4
	if (!ctx.cr6.eq) goto loc_823769A4;
loc_8237686C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82375ca0
	ctx.lr = 0x8237687C;
	sub_82375CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823769a4
	if (!ctx.cr6.eq) goto loc_823769A4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823767e8
	if (ctx.cr6.lt) goto loc_823767E8;
loc_82376890:
	// clrlwi r27,r25,24
	ctx.r27.u64 = ctx.r25.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x823768d4
	if (!ctx.cr6.gt) goto loc_823768D4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_823768AC:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x823768ac
	if (ctx.cr6.lt) goto loc_823768AC;
loc_823768D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823759d8
	ctx.lr = 0x823768E0;
	sub_823759D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823769a4
	if (!ctx.cr6.eq) goto loc_823769A4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x82376964
	if (!ctx.cr6.gt) goto loc_82376964;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_823768F4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82376958
	if (ctx.cr6.eq) goto loc_82376958;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82376910:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r29,-36
	ctx.r29.s64 = ctx.r29.s64 + -36;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82376110
	ctx.lr = 0x82376948;
	sub_82376110(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823769a4
	if (!ctx.cr6.eq) goto loc_823769A4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82376910
	if (!ctx.cr6.eq) goto loc_82376910;
loc_82376958:
	// rlwinm r30,r30,1,24,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFE;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823768f4
	if (ctx.cr6.lt) goto loc_823768F4;
loc_82376964:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x82376998
	if (!ctx.cr6.gt) goto loc_82376998;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r10,r28,36
	ctx.r10.s64 = ctx.r28.s64 + 36;
loc_82376980:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82376980
	if (ctx.cr6.lt) goto loc_82376980;
loc_82376998:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823759d8
	ctx.lr = 0x823769A4;
	sub_823759D8(ctx, base);
loc_823769A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82376770) {
	__imp__sub_82376770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823769AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823769AC) {
	__imp__sub_823769AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823769B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x823769B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r25,r6,24
	ctx.r25.u64 = ctx.r6.u32 & 0xFF;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// rlwinm r11,r7,31,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x3F;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82376a40
	if (ctx.cr6.eq) goto loc_82376A40;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823769E4:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r31,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r31.s64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r8,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82386f18
	ctx.lr = 0x82376A10;
	sub_82386F18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376aa0
	if (!ctx.cr6.eq) goto loc_82376AA0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// bl 0x82386f18
	ctx.lr = 0x82376A28;
	sub_82386F18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376aa0
	if (!ctx.cr6.eq) goto loc_82376AA0;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823769e4
	if (ctx.cr6.lt) goto loc_823769E4;
loc_82376A40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x82376A48;
	sub_823706A8(ctx, base);
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// addi r4,r23,4
	ctx.r4.s64 = ctx.r23.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371be8
	ctx.lr = 0x82376A5C;
	sub_82371BE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376a94
	if (!ctx.cr6.eq) goto loc_82376A94;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x82376A74;
	sub_82371690(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// rlwinm r10,r24,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 25) & 0x1;
	// subfe r11,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82386f18
	ctx.lr = 0x82376A90;
	sub_82386F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82376A94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82376A9C;
	sub_823706C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82376AA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823769B0) {
	__imp__sub_823769B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82376AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x82376AB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x823706a8
	ctx.lr = 0x82376ADC;
	sub_823706A8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823706a8
	ctx.lr = 0x82376AE4;
	sub_823706A8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823706a8
	ctx.lr = 0x82376AEC;
	sub_823706A8(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lbzx r7,r23,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823769b0
	ctx.lr = 0x82376B04;
	sub_823769B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376bbc
	if (!ctx.cr6.eq) goto loc_82376BBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x823709c8
	ctx.lr = 0x82376B1C;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376bbc
	if (!ctx.cr6.eq) goto loc_82376BBC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82376550
	ctx.lr = 0x82376B3C;
	sub_82376550(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376bbc
	if (!ctx.cr6.eq) goto loc_82376BBC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82376bbc
	if (ctx.cr6.eq) goto loc_82376BBC;
loc_82376B50:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// bl 0x82375ca0
	ctx.lr = 0x82376B64;
	sub_82375CA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376bbc
	if (!ctx.cr6.eq) goto loc_82376BBC;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lbzx r7,r28,r23
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r23.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823769b0
	ctx.lr = 0x82376B88;
	sub_823769B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376bbc
	if (!ctx.cr6.eq) goto loc_82376BBC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82376110
	ctx.lr = 0x82376BA8;
	sub_82376110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376bbc
	if (!ctx.cr6.eq) goto loc_82376BBC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82376b50
	if (!ctx.cr6.eq) goto loc_82376B50;
loc_82376BBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82376BC4;
	sub_823706C0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823706c0
	ctx.lr = 0x82376BCC;
	sub_823706C0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823706c0
	ctx.lr = 0x82376BD4;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82376AA8) {
	__imp__sub_82376AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82376BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82376BE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x823706a8
	ctx.lr = 0x82376C0C;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x82376C14;
	sub_823706A8(ctx, base);
	// addi r29,r30,76
	ctx.r29.s64 = ctx.r30.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370a98
	ctx.lr = 0x82376C24;
	sub_82370A98(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82376c38
	if (ctx.cr6.eq) goto loc_82376C38;
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82376C38:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370a98
	ctx.lr = 0x82376C44;
	sub_82370A98(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// bl 0x82370888
	ctx.lr = 0x82376C5C;
	sub_82370888(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376cb4
	if (!ctx.cr6.eq) goto loc_82376CB4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371be8
	ctx.lr = 0x82376C78;
	sub_82371BE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376cb4
	if (!ctx.cr6.eq) goto loc_82376CB4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82386f18
	ctx.lr = 0x82376C94;
	sub_82386F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376cb4
	if (!ctx.cr6.eq) goto loc_82376CB4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82376660
	ctx.lr = 0x82376CB4;
	sub_82376660(ctx, base);
loc_82376CB4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x82376CBC;
	sub_823706C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82376CC4;
	sub_823706C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82376BE0) {
	__imp__sub_82376BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82376CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82376CD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82376be0
	ctx.lr = 0x82376D0C;
	sub_82376BE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376de0
	if (!ctx.cr6.eq) goto loc_82376DE0;
	// lwz r25,532(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82376aa8
	ctx.lr = 0x82376D3C;
	sub_82376AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376de0
	if (!ctx.cr6.eq) goto loc_82376DE0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823706a8
	ctx.lr = 0x82376D4C;
	sub_823706A8(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82371be8
	ctx.lr = 0x82376D60;
	sub_82371BE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376d9c
	if (!ctx.cr6.eq) goto loc_82376D9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371690
	ctx.lr = 0x82376D78;
	sub_82371690(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subfe r11,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// bl 0x82386f18
	ctx.lr = 0x82376D98;
	sub_82386F18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82376D9C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823706c0
	ctx.lr = 0x82376DA4;
	sub_823706C0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82376ddc
	if (!ctx.cr6.eq) goto loc_82376DDC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82376550
	ctx.lr = 0x82376DC0;
	sub_82376550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376de0
	if (!ctx.cr6.eq) goto loc_82376DE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823758c8
	ctx.lr = 0x82376DD4;
	sub_823758C8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82376DDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82376DE0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82376CD0) {
	__imp__sub_82376CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82376DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634430
	ctx.lr = 0x82376DF0;
	__savegprlr_18(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82399230
	ctx.lr = 0x82376E1C;
	sub_82399230(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82376ea8
	if (!ctx.cr6.eq) goto loc_82376EA8;
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// addi r20,r1,176
	ctx.r20.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r22,r10,19384
	ctx.r22.s64 = ctx.r10.s64 + 19384;
	// rlwinm r31,r11,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x8235cab8
	ctx.lr = 0x82376E40;
	sub_8235CAB8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8235cac8
	ctx.lr = 0x82376E48;
	sub_8235CAC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,66
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 66, ctx.xer);
	// ble cr6,0x82376e5c
	if (!ctx.cr6.gt) goto loc_82376E5C;
	// li r30,-19712
	ctx.r30.s64 = -19712;
	// b 0x82376e90
	goto loc_82376E90;
loc_82376E5C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82371110
	ctx.lr = 0x82376E6C;
	sub_82371110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376e90
	if (!ctx.cr6.eq) goto loc_82376E90;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823993d8
	ctx.lr = 0x82376E8C;
	sub_823993D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82376E90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x82376E9C;
	sub_82362B98(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82377044
	if (!ctx.cr6.eq) goto loc_82377044;
loc_82376EA8:
	// addi r4,r26,52
	ctx.r4.s64 = ctx.r26.s64 + 52;
	// addi r3,r21,12
	ctx.r3.s64 = ctx.r21.s64 + 12;
	// bl 0x82371558
	ctx.lr = 0x82376EB4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376ed4
	if (!ctx.cr6.eq) goto loc_82376ED4;
	// addi r4,r26,40
	ctx.r4.s64 = ctx.r26.s64 + 40;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82371558
	ctx.lr = 0x82376EC8;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82376ed8
	if (ctx.cr6.eq) goto loc_82376ED8;
loc_82376ED4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82376ED8:
	// lwz r10,92(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// li r9,384
	ctx.r9.s64 = 384;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r9,5
	ctx.r27.s64 = ctx.r9.s64 + 5;
	// beq cr6,0x82376f08
	if (ctx.cr6.eq) goto loc_82376F08;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_82376F08:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82376f18
	if (!ctx.cr6.gt) goto loc_82376F18;
	// li r27,4
	ctx.r27.s64 = 4;
loc_82376F18:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82376f28
	if (ctx.cr6.lt) goto loc_82376F28;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82376F28:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// clrlwi r24,r7,24
	ctx.r24.u64 = ctx.r7.u32 & 0xFF;
	// divwu r25,r6,r11
	ctx.r25.u32 = ctx.r6.u32 / ctx.r11.u32;
	// twllei r11,0
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82376f68
	if (ctx.cr6.eq) goto loc_82376F68;
	// lwz r29,116(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82376f68
	if (ctx.cr6.eq) goto loc_82376F68;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82376fd4
	goto loc_82376FD4;
loc_82376F68:
	// clrlwi r28,r24,24
	ctx.r28.u64 = ctx.r24.u32 & 0xFF;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826365a8
	ctx.lr = 0x82376F78;
	sub_826365A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82376f8c
	if (!ctx.cr6.eq) goto loc_82376F8C;
	// li r28,-19840
	ctx.r28.s64 = -19840;
	// b 0x82377044
	goto loc_82377044;
loc_82376F8C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82376fd0
	if (ctx.cr6.eq) goto loc_82376FD0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82376F98:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823706a8
	ctx.lr = 0x82376FB0;
	sub_823706A8(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x823706a8
	ctx.lr = 0x82376FB8;
	sub_823706A8(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x823706a8
	ctx.lr = 0x82376FC0;
	sub_823706A8(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82376f98
	if (ctx.cr6.lt) goto loc_82376F98;
loc_82376FD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82376FD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82377018
	if (!ctx.cr6.eq) goto loc_82377018;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82376770
	ctx.lr = 0x82376FF8;
	sub_82376770(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82377044
	if (!ctx.cr6.eq) goto loc_82377044;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82377018
	if (ctx.cr6.eq) goto loc_82377018;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// stw r29,116(r26)
	PPC_STORE_U32(ctx.r26.u32 + 116, ctx.r29.u32);
	// stw r11,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r11.u32);
loc_82377018:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82376cd0
	ctx.lr = 0x82377040;
	sub_82376CD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82377044:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82399708
	ctx.lr = 0x8237704C;
	sub_82399708(ctx, base);
	// lwz r11,116(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823770b4
	if (ctx.cr6.eq) goto loc_823770B4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823770b4
	if (ctx.cr6.eq) goto loc_823770B4;
	// clrlwi r27,r24,24
	ctx.r27.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823770ac
	if (ctx.cr6.eq) goto loc_823770AC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82377070:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8237709c
	if (ctx.cr0.eq) goto loc_8237709C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823706c0
	ctx.lr = 0x8237708C;
	sub_823706C0(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x823706c0
	ctx.lr = 0x82377094;
	sub_823706C0(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x823706c0
	ctx.lr = 0x8237709C;
	sub_823706C0(ctx, base);
loc_8237709C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82377070
	if (ctx.cr6.lt) goto loc_82377070;
loc_823770AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x823770B4;
	sub_82634D40(ctx, base);
loc_823770B4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823770dc
	if (ctx.cr6.eq) goto loc_823770DC;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x823770dc
	if (ctx.cr6.eq) goto loc_823770DC;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823706c0
	ctx.lr = 0x823770CC;
	sub_823706C0(ctx, base);
	// addi r3,r18,12
	ctx.r3.s64 = ctx.r18.s64 + 12;
	// bl 0x823706c0
	ctx.lr = 0x823770D4;
	sub_823706C0(ctx, base);
	// addi r3,r18,24
	ctx.r3.s64 = ctx.r18.s64 + 24;
	// bl 0x823706c0
	ctx.lr = 0x823770DC;
	sub_823706C0(ctx, base);
loc_823770DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82376DE8) {
	__imp__sub_82376DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823770E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x823770F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823706a8
	ctx.lr = 0x8237710C;
	sub_823706A8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373e98
	ctx.lr = 0x82377124;
	sub_82373E98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823771b8
	if (!ctx.cr6.eq) goto loc_823771B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823723a0
	ctx.lr = 0x82377140;
	sub_823723A0(ctx, base);
	// lis r29,-31991
	ctx.r29.s64 = -2096562176;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237716c
	if (!ctx.cr6.eq) goto loc_8237716C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823754a8
	ctx.lr = 0x82377158;
	sub_823754A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237716c
	if (!ctx.cr6.eq) goto loc_8237716C;
	// lwz r11,-19064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19064);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-19064(r29)
	PPC_STORE_U32(ctx.r29.u32 + -19064, ctx.r11.u32);
loc_8237716C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823771b8
	if (!ctx.cr6.eq) goto loc_823771B8;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823723a0
	ctx.lr = 0x8237718C;
	sub_823723A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823771b4
	if (!ctx.cr6.eq) goto loc_823771B4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823754a8
	ctx.lr = 0x823771A0;
	sub_823754A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823771b4
	if (!ctx.cr6.eq) goto loc_823771B4;
	// lwz r11,-19064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19064);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-19064(r29)
	PPC_STORE_U32(ctx.r29.u32 + -19064, ctx.r11.u32);
loc_823771B4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823771B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x823771C0;
	sub_823706C0(ctx, base);
	// cmpwi cr6,r31,-14
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -14, ctx.xer);
	// li r3,-19712
	ctx.r3.s64 = -19712;
	// beq cr6,0x823771d0
	if (ctx.cr6.eq) goto loc_823771D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823771D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823770E8) {
	__imp__sub_823770E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823771D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x823771E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x823706a8
	ctx.lr = 0x82377204;
	sub_823706A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823706a8
	ctx.lr = 0x8237720C;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x82377214;
	sub_823706A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706a8
	ctx.lr = 0x8237721C;
	sub_823706A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823706a8
	ctx.lr = 0x82377224;
	sub_823706A8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823706a8
	ctx.lr = 0x8237722C;
	sub_823706A8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823706a8
	ctx.lr = 0x82377234;
	sub_823706A8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823706a8
	ctx.lr = 0x8237723C;
	sub_823706A8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823706a8
	ctx.lr = 0x82377244;
	sub_823706A8(ctx, base);
	// addi r28,r29,24
	ctx.r28.s64 = ctx.r29.s64 + 24;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823757c0
	ctx.lr = 0x8237725C;
	sub_823757C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x8237727C;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x8237729C;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x823772BC;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x823772DC;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r29,r27,24
	ctx.r29.s64 = ctx.r27.s64 + 24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823757c0
	ctx.lr = 0x82377300;
	sub_823757C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x82377320;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82377340;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82377360;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823757c0
	ctx.lr = 0x82377380;
	sub_823757C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x823773A0;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r29,r26,24
	ctx.r29.s64 = ctx.r26.s64 + 24;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375738
	ctx.lr = 0x823773C4;
	sub_82375738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x823773E4;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82377404;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82377424;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// addi r29,r24,24
	ctx.r29.s64 = ctx.r24.s64 + 24;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82377448;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823757c0
	ctx.lr = 0x82377468;
	sub_823757C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237748c
	if (!ctx.cr6.eq) goto loc_8237748C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82377488;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8237748C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82377494;
	sub_823706C0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823706c0
	ctx.lr = 0x8237749C;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x823774A4;
	sub_823706C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706c0
	ctx.lr = 0x823774AC;
	sub_823706C0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823706c0
	ctx.lr = 0x823774B4;
	sub_823706C0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823706c0
	ctx.lr = 0x823774BC;
	sub_823706C0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823706c0
	ctx.lr = 0x823774C4;
	sub_823706C0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823706c0
	ctx.lr = 0x823774CC;
	sub_823706C0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823706c0
	ctx.lr = 0x823774D4;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823771D8) {
	__imp__sub_823771D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823774E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x823774E8;
	__savegprlr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82399230
	ctx.lr = 0x8237750C;
	sub_82399230(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x82377514;
	sub_823706A8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823706a8
	ctx.lr = 0x8237751C;
	sub_823706A8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823706a8
	ctx.lr = 0x82377524;
	sub_823706A8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823706a8
	ctx.lr = 0x8237752C;
	sub_823706A8(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x823775b4
	if (!ctx.cr6.eq) goto loc_823775B4;
	// lwz r11,92(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r30,r11,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x8235cab8
	ctx.lr = 0x82377544;
	sub_8235CAB8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8235cac8
	ctx.lr = 0x8237754C;
	sub_8235CAC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,66
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 66, ctx.xer);
	// ble cr6,0x82377560
	if (!ctx.cr6.gt) goto loc_82377560;
	// li r31,-19712
	ctx.r31.s64 = -19712;
	// b 0x82377594
	goto loc_82377594;
loc_82377560:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82371110
	ctx.lr = 0x82377570;
	sub_82371110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82377594
	if (!ctx.cr6.eq) goto loc_82377594;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823993d8
	ctx.lr = 0x82377590;
	sub_823993D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82377594:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82362b98
	ctx.lr = 0x823775A0;
	sub_82362B98(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// addi r23,r1,224
	ctx.r23.s64 = ctx.r1.s64 + 224;
	// addi r24,r11,19384
	ctx.r24.s64 = ctx.r11.s64 + 19384;
loc_823775B4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82370888
	ctx.lr = 0x823775C0;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370888
	ctx.lr = 0x823775D8;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82377600
	if (!ctx.cr6.eq) goto loc_82377600;
	// addi r4,r27,12
	ctx.r4.s64 = ctx.r27.s64 + 12;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82370888
	ctx.lr = 0x823775EC;
	sub_82370888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82377600
	if (!ctx.cr6.eq) goto loc_82377600;
	// addi r4,r27,24
	ctx.r4.s64 = ctx.r27.s64 + 24;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82370888
	ctx.lr = 0x82377600;
	sub_82370888(ctx, base);
loc_82377600:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823709c8
	ctx.lr = 0x82377618;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// addi r27,r28,24
	ctx.r27.s64 = ctx.r28.s64 + 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823709c8
	ctx.lr = 0x82377634;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// bl 0x823706c0
	ctx.lr = 0x82377648;
	sub_823706C0(ctx, base);
	// addi r26,r25,4
	ctx.r26.s64 = ctx.r25.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82371558
	ctx.lr = 0x82377658;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82377690
	if (ctx.cr6.lt) goto loc_82377690;
loc_82377660:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371910
	ctx.lr = 0x82377670;
	sub_82371910(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371558
	ctx.lr = 0x82377688;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82377660
	if (!ctx.cr6.lt) goto loc_82377660;
loc_82377690:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823770e8
	ctx.lr = 0x823776A4;
	sub_823770E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// lwz r11,92(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	// addic. r29,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r29.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82377770
	if (ctx.cr0.eq) goto loc_82377770;
loc_823776BC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82370a98
	ctx.lr = 0x823776CC;
	sub_82370A98(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82386ff0
	ctx.lr = 0x823776E0;
	sub_82386FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82386ff0
	ctx.lr = 0x823776FC;
	sub_82386FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823771d8
	ctx.lr = 0x82377724;
	sub_823771D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82386ff0
	ctx.lr = 0x82377740;
	sub_82386FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82386ff0
	ctx.lr = 0x8237775C;
	sub_82386FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x823776bc
	if (!ctx.cr6.eq) goto loc_823776BC;
loc_82377770:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823770e8
	ctx.lr = 0x82377784;
	sub_823770E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d4
	if (!ctx.cr6.eq) goto loc_823777D4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823740b8
	ctx.lr = 0x823777A0;
	sub_823740B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d0
	if (!ctx.cr6.eq) goto loc_823777D0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823755d8
	ctx.lr = 0x823777BC;
	sub_823755D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823777d0
	if (!ctx.cr6.eq) goto loc_823777D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823709c8
	ctx.lr = 0x823777D0;
	sub_823709C8(ctx, base);
loc_823777D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823777D4:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82399708
	ctx.lr = 0x823777DC;
	sub_82399708(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x823777E4;
	sub_823706C0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823706c0
	ctx.lr = 0x823777EC;
	sub_823706C0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823706c0
	ctx.lr = 0x823777F4;
	sub_823706C0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823706c0
	ctx.lr = 0x823777FC;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823774E0) {
	__imp__sub_823774E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82377808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82377810;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371690
	ctx.lr = 0x82377828;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823779c8
	if (ctx.cr6.lt) goto loc_823779C8;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x82377840;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823779c8
	if (ctx.cr6.lt) goto loc_823779C8;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82371558
	ctx.lr = 0x82377858;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823779c8
	if (!ctx.cr6.lt) goto loc_823779C8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371558
	ctx.lr = 0x8237786C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823779c8
	if (!ctx.cr6.lt) goto loc_823779C8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x8237787C;
	sub_823706A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x82377884;
	sub_823706A8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82377898;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823779ac
	if (!ctx.cr6.eq) goto loc_823779AC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x823778B8;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823779ac
	if (!ctx.cr6.eq) goto loc_823779AC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82377938
	if (!ctx.cr6.eq) goto loc_82377938;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x823778E0;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823779ac
	if (!ctx.cr6.eq) goto loc_823779AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82377954
	if (!ctx.cr6.lt) goto loc_82377954;
loc_823778F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371690
	ctx.lr = 0x82377904;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82377954
	if (ctx.cr6.eq) goto loc_82377954;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371be0
	ctx.lr = 0x8237791C;
	sub_82371BE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823779ac
	if (!ctx.cr6.eq) goto loc_823779AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823778f8
	if (ctx.cr6.lt) goto loc_823778F8;
	// b 0x82377954
	goto loc_82377954;
loc_82377938:
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823757c0
	ctx.lr = 0x82377948;
	sub_823757C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823779ac
	if (!ctx.cr6.eq) goto loc_823779AC;
loc_82377954:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823755d8
	ctx.lr = 0x82377968;
	sub_823755D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823779ac
	if (!ctx.cr6.eq) goto loc_823779AC;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823757c0
	ctx.lr = 0x82377988;
	sub_823757C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823779ac
	if (!ctx.cr6.eq) goto loc_823779AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371558
	ctx.lr = 0x823779A0;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823779ac
	if (ctx.cr6.eq) goto loc_823779AC;
	// li r31,-19584
	ctx.r31.s64 = -19584;
loc_823779AC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x823779B4;
	sub_823706C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x823779BC;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_823779C8:
	// li r3,-19584
	ctx.r3.s64 = -19584;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82377808) {
	__imp__sub_82377808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823779D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823779D4) {
	__imp__sub_823779D4(ctx, base);
}

