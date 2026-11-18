#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8235ED70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8235ED78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8235eddc
	if (ctx.cr6.eq) goto loc_8235EDDC;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r5,4
	ctx.r29.s64 = ctx.r5.s64 + 4;
	// ori r6,r6,160
	ctx.r6.u64 = ctx.r6.u64 | 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x8235EDA8;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235edc4
	if (ctx.cr6.eq) goto loc_8235EDC4;
	// cmpwi cr6,r3,-98
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -98, ctx.xer);
	// beq cr6,0x8235eddc
	if (ctx.cr6.eq) goto loc_8235EDDC;
	// addi r3,r3,-8576
	ctx.r3.s64 = ctx.r3.s64 + -8576;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235EDC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8235EDDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235ED70) {
	__imp__sub_8235ED70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235EDF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x8235EE1C;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235ee30
	if (ctx.cr6.eq) goto loc_8235EE30;
loc_8235EE24:
	// addi r3,r3,-9472
	ctx.r3.s64 = ctx.r3.s64 + -9472;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235EE30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8235eeec
	if (ctx.cr6.eq) goto loc_8235EEEC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a518
	ctx.lr = 0x8235EE4C;
	sub_8238A518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235ee88
	if (ctx.cr6.eq) goto loc_8235EE88;
	// cmpwi cr6,r3,-98
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -98, ctx.xer);
	// bne cr6,0x8235ee6c
	if (!ctx.cr6.eq) goto loc_8235EE6C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a700
	ctx.lr = 0x8235EE6C;
	sub_8238A700(ctx, base);
loc_8235EE6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ee24
	if (!ctx.cr6.eq) goto loc_8235EE24;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ee88
	if (ctx.cr6.eq) goto loc_8235EE88;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8235EE88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8235eeec
	if (ctx.cr6.eq) goto loc_8235EEEC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a700
	ctx.lr = 0x8235EEA4;
	sub_8238A700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ee24
	if (!ctx.cr6.eq) goto loc_8235EE24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8235eec4
	if (ctx.cr6.eq) goto loc_8235EEC4;
	// li r3,-9574
	ctx.r3.s64 = -9574;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235EEC4:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8235eee4
	if (!ctx.cr6.eq) goto loc_8235EEE4;
	// li r3,-9572
	ctx.r3.s64 = -9572;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235EEE4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8235EEEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235EDE8) {
	__imp__sub_8235EDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x8235EF00;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x8238a4e0
	ctx.lr = 0x8235EF20;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235ef34
	if (ctx.cr6.eq) goto loc_8235EF34;
loc_8235EF28:
	// addi r3,r3,-9472
	ctx.r3.s64 = ctx.r3.s64 + -9472;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235EF34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8235ef54
	if (ctx.cr6.eq) goto loc_8235EF54;
loc_8235EF48:
	// li r3,-9574
	ctx.r3.s64 = -9574;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235EF54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235ef48
	if (ctx.cr6.eq) goto loc_8235EF48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8235f09c
	if (!ctx.cr6.lt) goto loc_8235F09C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r25,6
	ctx.r25.s64 = 6;
	// addi r24,r11,15008
	ctx.r24.s64 = ctx.r11.s64 + 15008;
loc_8235EF74:
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x8235EF88;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ef28
	if (!ctx.cr6.eq) goto loc_8235EF28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x8235EFB0;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ef28
	if (!ctx.cr6.eq) goto loc_8235EF28;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8235f000
	if (!ctx.cr6.eq) goto loc_8235F000;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r24,4
	ctx.r8.s64 = ctx.r24.s64 + 4;
loc_8235EFD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235eff8
	if (!ctx.cr0.eq) goto loc_8235EFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235efd8
	if (!ctx.cr6.eq) goto loc_8235EFD8;
loc_8235EFF8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8235f004
	if (ctx.cr6.eq) goto loc_8235F004;
loc_8235F000:
	// li r23,-8320
	ctx.r23.s64 = -8320;
loc_8235F004:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f038
	if (ctx.cr6.eq) goto loc_8235F038;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235f0c0
	if (!ctx.cr6.eq) goto loc_8235F0C0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8235F028;
	sub_826365A8(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235f0cc
	if (ctx.cr6.eq) goto loc_8235F0CC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8235F038:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8235f08c
	if (!ctx.cr6.lt) goto loc_8235F08C;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x8235F070;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ef28
	if (!ctx.cr6.eq) goto loc_8235EF28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
loc_8235F08C:
	// bne cr6,0x8235ef48
	if (!ctx.cr6.eq) goto loc_8235EF48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8235ef74
	if (ctx.cr6.lt) goto loc_8235EF74;
loc_8235F09C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-9574
	ctx.r3.s64 = -9574;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8235f0b8
	if (!ctx.cr6.eq) goto loc_8235F0B8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8235F0B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235F0C0:
	// li r3,-9472
	ctx.r3.s64 = -9472;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235F0CC:
	// li r3,-9578
	ctx.r3.s64 = -9578;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235EEF8) {
	__imp__sub_8235EEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F0D8) {
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
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r8,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r8,128
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 128, ctx.xer);
	// beq cr6,0x8235f11c
	if (ctx.cr6.eq) goto loc_8235F11C;
	// li r3,-10240
	ctx.r3.s64 = -10240;
	// b 0x8235f298
	goto loc_8235F298;
loc_8235F11C:
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x8235F130;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235f140
	if (ctx.cr6.eq) goto loc_8235F140;
loc_8235F138:
	// addi r3,r3,-9472
	ctx.r3.s64 = ctx.r3.s64 + -9472;
	// b 0x8235f298
	goto loc_8235F298;
loc_8235F140:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bne cr6,0x8235f18c
	if (!ctx.cr6.eq) goto loc_8235F18C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,15016
	ctx.r11.s64 = ctx.r11.s64 + 15016;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8235F164:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235f184
	if (!ctx.cr0.eq) goto loc_8235F184;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235f164
	if (!ctx.cr6.eq) goto loc_8235F164;
loc_8235F184:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8235f194
	if (ctx.cr6.eq) goto loc_8235F194;
loc_8235F18C:
	// li r3,-8320
	ctx.r3.s64 = -8320;
	// b 0x8235f298
	goto loc_8235F298;
loc_8235F194:
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// li r6,160
	ctx.r6.s64 = 160;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x8235F1BC;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f138
	if (!ctx.cr6.eq) goto loc_8235F138;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8235f1e0
	if (ctx.cr6.eq) goto loc_8235F1E0;
loc_8235F1D8:
	// li r3,-9574
	ctx.r3.s64 = -9574;
	// b 0x8235f298
	goto loc_8235F298;
loc_8235F1E0:
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x8235F1F4;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f138
	if (!ctx.cr6.eq) goto loc_8235F138;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235f1d8
	if (!ctx.cr6.eq) goto loc_8235F1D8;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x8235F224;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f138
	if (!ctx.cr6.eq) goto loc_8235F138;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x8235F260;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f138
	if (!ctx.cr6.eq) goto loc_8235F138;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,-9574
	ctx.r8.s64 = -9574;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// subf r7,r11,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
loc_8235F298:
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

PPC_WEAK_FUNC(sub_8235F0D8) {
	__imp__sub_8235F0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F2B0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x8235f334
	if (ctx.cr6.eq) goto loc_8235F334;
	// cmpwi cr6,r11,130
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 130, ctx.xer);
	// beq cr6,0x8235f2f8
	if (ctx.cr6.eq) goto loc_8235F2F8;
	// li r3,-8320
	ctx.r3.s64 = -8320;
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
loc_8235F2F8:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235F308:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235f308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F308;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// b 0x8235f388
	goto loc_8235F388;
loc_8235F334:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8235f0d8
	ctx.lr = 0x8235F33C;
	sub_8235F0D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f38c
	if (!ctx.cr6.eq) goto loc_8235F38C;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235F354:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235f354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F354;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235F37C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8235f37c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F37C;
loc_8235F388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235F38C:
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

PPC_WEAK_FUNC(sub_8235F2B0) {
	__imp__sub_8235F2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8235F3A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r5,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r29,-32155
	ctx.r29.s64 = -2107310080;
	// clrlwi r27,r5,24
	ctx.r27.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,15144
	ctx.r28.s64 = ctx.r11.s64 + 15144;
	// beq cr6,0x8235f418
	if (ctx.cr6.eq) goto loc_8235F418;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15128
	ctx.r5.s64 = ctx.r10.s64 + 15128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f604
	if (ctx.cr6.lt) goto loc_8235F604;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f604
	if (!ctx.cr6.lt) goto loc_8235F604;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F418:
	// rlwinm r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f45c
	if (ctx.cr6.eq) goto loc_8235F45C;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15112
	ctx.r5.s64 = ctx.r10.s64 + 15112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f604
	if (ctx.cr6.lt) goto loc_8235F604;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f604
	if (!ctx.cr6.lt) goto loc_8235F604;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F45C:
	// rlwinm r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f4a0
	if (ctx.cr6.eq) goto loc_8235F4A0;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15104
	ctx.r5.s64 = ctx.r10.s64 + 15104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f604
	if (ctx.cr6.lt) goto loc_8235F604;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f604
	if (!ctx.cr6.lt) goto loc_8235F604;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F4A0:
	// rlwinm r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f4e4
	if (ctx.cr6.eq) goto loc_8235F4E4;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15084
	ctx.r5.s64 = ctx.r10.s64 + 15084;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f604
	if (ctx.cr6.lt) goto loc_8235F604;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f604
	if (!ctx.cr6.lt) goto loc_8235F604;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F4E4:
	// rlwinm r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f528
	if (ctx.cr6.eq) goto loc_8235F528;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15072
	ctx.r5.s64 = ctx.r10.s64 + 15072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f604
	if (ctx.cr6.lt) goto loc_8235F604;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f604
	if (!ctx.cr6.lt) goto loc_8235F604;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F528:
	// rlwinm r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f56c
	if (ctx.cr6.eq) goto loc_8235F56C;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15060
	ctx.r5.s64 = ctx.r10.s64 + 15060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f604
	if (ctx.cr6.lt) goto loc_8235F604;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f604
	if (!ctx.cr6.lt) goto loc_8235F604;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F56C:
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f5b0
	if (ctx.cr6.eq) goto loc_8235F5B0;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15048
	ctx.r5.s64 = ctx.r10.s64 + 15048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f604
	if (ctx.cr6.lt) goto loc_8235F604;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f604
	if (!ctx.cr6.lt) goto loc_8235F604;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F5B0:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f5f0
	if (ctx.cr6.eq) goto loc_8235F5F0;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15028
	ctx.r5.s64 = ctx.r10.s64 + 15028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f604
	if (ctx.cr6.lt) goto loc_8235F604;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f604
	if (!ctx.cr6.lt) goto loc_8235F604;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F5F0:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8235F604:
	// li r3,-10624
	ctx.r3.s64 = -10624;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235F3A0) {
	__imp__sub_8235F3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8235F618;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r5,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lis r29,-32155
	ctx.r29.s64 = -2107310080;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,15144
	ctx.r28.s64 = ctx.r11.s64 + 15144;
	// beq cr6,0x8235f688
	if (ctx.cr6.eq) goto loc_8235F688;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15284
	ctx.r5.s64 = ctx.r10.s64 + 15284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f8b8
	if (ctx.cr6.lt) goto loc_8235F8B8;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f8b8
	if (!ctx.cr6.lt) goto loc_8235F8B8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F688:
	// rlwinm r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f6cc
	if (ctx.cr6.eq) goto loc_8235F6CC;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15264
	ctx.r5.s64 = ctx.r10.s64 + 15264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f8b8
	if (ctx.cr6.lt) goto loc_8235F8B8;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f8b8
	if (!ctx.cr6.lt) goto loc_8235F8B8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F6CC:
	// rlwinm r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f710
	if (ctx.cr6.eq) goto loc_8235F710;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15244
	ctx.r5.s64 = ctx.r10.s64 + 15244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f8b8
	if (ctx.cr6.lt) goto loc_8235F8B8;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f8b8
	if (!ctx.cr6.lt) goto loc_8235F8B8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F710:
	// rlwinm r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f754
	if (ctx.cr6.eq) goto loc_8235F754;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15224
	ctx.r5.s64 = ctx.r10.s64 + 15224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f8b8
	if (ctx.cr6.lt) goto loc_8235F8B8;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f8b8
	if (!ctx.cr6.lt) goto loc_8235F8B8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F754:
	// rlwinm r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f798
	if (ctx.cr6.eq) goto loc_8235F798;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15208
	ctx.r5.s64 = ctx.r10.s64 + 15208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f8b8
	if (ctx.cr6.lt) goto loc_8235F8B8;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f8b8
	if (!ctx.cr6.lt) goto loc_8235F8B8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F798:
	// rlwinm r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f7dc
	if (ctx.cr6.eq) goto loc_8235F7DC;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15192
	ctx.r5.s64 = ctx.r10.s64 + 15192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f8b8
	if (ctx.cr6.lt) goto loc_8235F8B8;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f8b8
	if (!ctx.cr6.lt) goto loc_8235F8B8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F7DC:
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f820
	if (ctx.cr6.eq) goto loc_8235F820;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15180
	ctx.r5.s64 = ctx.r10.s64 + 15180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f8b8
	if (ctx.cr6.lt) goto loc_8235F8B8;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f8b8
	if (!ctx.cr6.lt) goto loc_8235F8B8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F820:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f864
	if (ctx.cr6.eq) goto loc_8235F864;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15164
	ctx.r5.s64 = ctx.r10.s64 + 15164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f8b8
	if (ctx.cr6.lt) goto loc_8235F8B8;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f8b8
	if (!ctx.cr6.lt) goto loc_8235F8B8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F864:
	// rlwinm r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f8a4
	if (ctx.cr6.eq) goto loc_8235F8A4;
	// lwz r11,3700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,15148
	ctx.r5.s64 = ctx.r10.s64 + 15148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235F88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8235f8b8
	if (ctx.cr6.lt) goto loc_8235F8B8;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8235f8b8
	if (!ctx.cr6.lt) goto loc_8235F8B8;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_8235F8A4:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8235F8B8:
	// li r3,-10624
	ctx.r3.s64 = -10624;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235F610) {
	__imp__sub_8235F610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F8C4) {
	__imp__sub_8235F8C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235f8e0
	if (!ctx.cr6.eq) goto loc_8235F8E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235F8E0:
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r8,0,17,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8235f908
	if (ctx.cr6.eq) goto loc_8235F908;
	// li r3,-10240
	ctx.r3.s64 = -10240;
	// blr 
	return;
loc_8235F908:
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8001;
	// rlwinm r9,r9,0,31,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF8001;
	// li r8,-10240
	ctx.r8.s64 = -10240;
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F8C8) {
	__imp__sub_8235F8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F934) {
	__imp__sub_8235F934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F938) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235f958
	if (!ctx.cr6.eq) goto loc_8235F958;
loc_8235F94C:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8235F958:
	// addic. r7,r3,296
	ctx.xer.ca = ctx.r3.u32 > 4294966999;
	ctx.r7.s64 = ctx.r3.s64 + 296;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8235f9fc
	if (ctx.cr0.eq) goto loc_8235F9FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,15308
	ctx.r3.s64 = ctx.r11.s64 + 15308;
loc_8235F968:
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8235f9b4
	if (!ctx.cr6.eq) goto loc_8235F9B4;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8235f9ac
	if (ctx.cr6.eq) goto loc_8235F9AC;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_8235F98C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235f9ac
	if (!ctx.cr0.eq) goto loc_8235F9AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235f98c
	if (!ctx.cr6.eq) goto loc_8235F98C;
loc_8235F9AC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8235f94c
	if (ctx.cr6.eq) goto loc_8235F94C;
loc_8235F9B4:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x8235f9f0
	if (!ctx.cr6.eq) goto loc_8235F9F0;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8235F9C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235f9e8
	if (!ctx.cr0.eq) goto loc_8235F9E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235f9c8
	if (!ctx.cr6.eq) goto loc_8235F9C8;
loc_8235F9E8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8235f94c
	if (ctx.cr6.eq) goto loc_8235F94C;
loc_8235F9F0:
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8235f968
	if (!ctx.cr6.eq) goto loc_8235F968;
loc_8235F9FC:
	// li r3,-10240
	ctx.r3.s64 = -10240;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F938) {
	__imp__sub_8235F938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FA08) {
	PPC_FUNC_PROLOGUE();
	// addic. r7,r4,132
	ctx.xer.ca = ctx.r4.u32 > 4294967163;
	ctx.r7.s64 = ctx.r4.s64 + 132;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8235fa74
	if (ctx.cr0.eq) goto loc_8235FA74;
loc_8235FA10:
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235fa74
	if (ctx.cr6.eq) goto loc_8235FA74;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235fa68
	if (!ctx.cr6.eq) goto loc_8235FA68;
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235fa60
	if (ctx.cr6.eq) goto loc_8235FA60;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8235FA40:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8235fa60
	if (!ctx.cr0.eq) goto loc_8235FA60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8235fa40
	if (!ctx.cr6.eq) goto loc_8235FA40;
loc_8235FA60:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8235fa7c
	if (ctx.cr6.eq) goto loc_8235FA7C;
loc_8235FA68:
	// lwz r7,60(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8235fa10
	if (!ctx.cr6.eq) goto loc_8235FA10;
loc_8235FA74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235FA7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235FA08) {
	__imp__sub_8235FA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235FA84) {
	__imp__sub_8235FA84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x8235FA90;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8235fabc
	if (!ctx.cr6.eq) goto loc_8235FABC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235FABC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235fc2c
	if (ctx.cr6.eq) goto loc_8235FC2C;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8235FAC8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fc00
	if (ctx.cr6.eq) goto loc_8235FC00;
	// addi r4,r26,112
	ctx.r4.s64 = ctx.r26.s64 + 112;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8235ec00
	ctx.lr = 0x8235FAE0;
	sub_8235EC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fc00
	if (!ctx.cr6.eq) goto loc_8235FC00;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235f8c8
	ctx.lr = 0x8235FAF4;
	sub_8235F8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fc18
	if (!ctx.cr6.eq) goto loc_8235FC18;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235fb20
	if (ctx.cr6.eq) goto loc_8235FB20;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8235fb24
	if (!ctx.cr6.eq) goto loc_8235FB24;
loc_8235FB20:
	// oris r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 131072;
loc_8235FB24:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fb48
	if (ctx.cr6.eq) goto loc_8235FB48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8235fb4c
	if (!ctx.cr6.eq) goto loc_8235FB4C;
loc_8235FB48:
	// oris r28,r28,4
	ctx.r28.u64 = ctx.r28.u64 | 262144;
loc_8235FB4C:
	// bl 0x8235cac8
	ctx.lr = 0x8235FB50;
	sub_8235CAC8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8235d020
	ctx.lr = 0x8235FB64;
	sub_8235D020(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fc18
	if (!ctx.cr6.eq) goto loc_8235FC18;
	// addi r30,r26,204
	ctx.r30.s64 = ctx.r26.s64 + 204;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235e9d8
	ctx.lr = 0x8235FB7C;
	sub_8235E9D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235fb88
	if (ctx.cr6.eq) goto loc_8235FB88;
	// oris r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 65536;
loc_8235FB88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,224(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r23,228(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x8235d358
	ctx.lr = 0x8235FB98;
	sub_8235D358(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,232(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x8235dcd0
	ctx.lr = 0x8235FBBC;
	sub_8235DCD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fc18
	if (!ctx.cr6.eq) goto loc_8235FC18;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8238fec8
	ctx.lr = 0x8235FBCC;
	sub_8238FEC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235fbd8
	if (ctx.cr6.eq) goto loc_8235FBD8;
	// ori r28,r28,32
	ctx.r28.u64 = ctx.r28.u64 | 32;
loc_8235FBD8:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8238ff28
	ctx.lr = 0x8235FBE0;
	sub_8238FF28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235fbec
	if (ctx.cr6.eq) goto loc_8235FBEC;
	// ori r28,r28,1024
	ctx.r28.u64 = ctx.r28.u64 | 1024;
loc_8235FBEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235fa08
	ctx.lr = 0x8235FBF8;
	sub_8235FA08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fc28
	if (!ctx.cr6.eq) goto loc_8235FC28;
loc_8235FC00:
	// lwz r31,244(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8235fac8
	if (!ctx.cr6.eq) goto loc_8235FAC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235FC18:
	// ori r28,r28,16
	ctx.r28.u64 = ctx.r28.u64 | 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235FC28:
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
loc_8235FC2C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235FA88) {
	__imp__sub_8235FA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263442c
	ctx.lr = 0x8235FC40;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// li r18,0
	ctx.r18.s64 = 0;
loc_8235FC6C:
	// lwz r24,0(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8235fc80
	if (!ctx.cr6.eq) goto loc_8235FC80;
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
loc_8235FC80:
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235fde8
	if (ctx.cr6.eq) goto loc_8235FDE8;
	// addi r25,r28,80
	ctx.r25.s64 = ctx.r28.s64 + 80;
loc_8235FC98:
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8235ec00
	ctx.lr = 0x8235FCA4;
	sub_8235EC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fddc
	if (!ctx.cr6.eq) goto loc_8235FDDC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8235fcc0
	if (ctx.cr6.eq) goto loc_8235FCC0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8235fcfc
	if (ctx.cr6.lt) goto loc_8235FCFC;
loc_8235FCC0:
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fddc
	if (ctx.cr6.eq) goto loc_8235FDDC;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235fcfc
	if (ctx.cr6.eq) goto loc_8235FCFC;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8235fddc
	if (!ctx.cr6.eq) goto loc_8235FDDC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,0,31,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF8001;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235fddc
	if (!ctx.cr6.eq) goto loc_8235FDDC;
loc_8235FCFC:
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235fd18
	if (!ctx.cr6.gt) goto loc_8235FD18;
	// subf r10,r20,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r20.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8235fddc
	if (ctx.cr6.lt) goto loc_8235FDDC;
loc_8235FD18:
	// lwz r3,328(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// bl 0x8235cac8
	ctx.lr = 0x8235FD20;
	sub_8235CAC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235d358
	ctx.lr = 0x8235FD28;
	sub_8235D358(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d020
	ctx.lr = 0x8235FD40;
	sub_8235D020(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235fd50
	if (ctx.cr6.eq) goto loc_8235FD50;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8235fd94
	goto loc_8235FD94;
loc_8235FD50:
	// addi r31,r30,204
	ctx.r31.s64 = ctx.r30.s64 + 204;
	// lwz r4,332(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d8d0
	ctx.lr = 0x8235FD60;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fd70
	if (!ctx.cr6.eq) goto loc_8235FD70;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8235fd94
	goto loc_8235FD94;
loc_8235FD70:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r10,320(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r9,324(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,328(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// lwz r4,336(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// lwz r3,332(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// bl 0x8235dcd0
	ctx.lr = 0x8235FD94;
	sub_8235DCD0(ctx, base);
loc_8235FD94:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8235fdac
	if (ctx.cr6.eq) goto loc_8235FDAC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8235fddc
	if (ctx.cr6.eq) goto loc_8235FDDC;
loc_8235FDAC:
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x8238fec8
	ctx.lr = 0x8235FDB4;
	sub_8238FEC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fdcc
	if (!ctx.cr6.eq) goto loc_8235FDCC;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x8238ff28
	ctx.lr = 0x8235FDC4;
	sub_8238FF28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235fe1c
	if (ctx.cr6.eq) goto loc_8235FE1C;
loc_8235FDCC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8235fddc
	if (!ctx.cr6.eq) goto loc_8235FDDC;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8235FDDC:
	// lwz r30,340(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8235fc98
	if (!ctx.cr6.eq) goto loc_8235FC98;
loc_8235FDE8:
	// stw r27,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
	// stw r26,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r26.u32);
loc_8235FDF0:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235fe10
	if (!ctx.cr6.eq) goto loc_8235FE10;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// stw r18,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235fc6c
	if (!ctx.cr6.eq) goto loc_8235FC6C;
	// stw r18,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r18.u32);
loc_8235FE10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_8235FE1C:
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// b 0x8235fdf0
	goto loc_8235FDF0;
}

PPC_WEAK_FUNC(sub_8235FC38) {
	__imp__sub_8235FC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x8235FE30;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r20,1
	ctx.r20.s64 = 1;
loc_8235FE5C:
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// addi r3,r28,168
	ctx.r3.s64 = ctx.r28.s64 + 168;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r25
	ctx.r27.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stwx r28,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r28.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r10.u32);
	// bl 0x8238fec8
	ctx.lr = 0x8235FE84;
	sub_8238FEC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235fe98
	if (ctx.cr6.eq) goto loc_8235FE98;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_8235FE98:
	// addi r3,r28,144
	ctx.r3.s64 = ctx.r28.s64 + 144;
	// bl 0x8238ff28
	ctx.lr = 0x8235FEA0;
	sub_8238FF28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235feb4
	if (ctx.cr6.eq) goto loc_8235FEB4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_8235FEB4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82360074
	if (!ctx.cr6.eq) goto loc_82360074;
	// lwz r11,328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fee0
	if (ctx.cr6.eq) goto loc_8235FEE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// slw r9,r20,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8235feec
	if (!ctx.cr6.eq) goto loc_8235FEEC;
loc_8235FEE0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_8235FEEC:
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ff10
	if (ctx.cr6.eq) goto loc_8235FF10;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// slw r9,r20,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8235ff1c
	if (!ctx.cr6.eq) goto loc_8235FF1C;
loc_8235FF10:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_8235FF1C:
	// lwz r31,80(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x8235ffa4
	if (!ctx.cr6.eq) goto loc_8235FFA4;
	// addi r4,r28,112
	ctx.r4.s64 = ctx.r28.s64 + 112;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x8235ec00
	ctx.lr = 0x8235FF34;
	sub_8235EC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ffa4
	if (!ctx.cr6.eq) goto loc_8235FFA4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8235ffa4
	if (ctx.cr6.eq) goto loc_8235FFA4;
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
loc_8235FF4C:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235ff98
	if (!ctx.cr6.eq) goto loc_8235FF98;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8235ff90
	if (ctx.cr6.eq) goto loc_8235FF90;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_8235FF70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235ff90
	if (!ctx.cr0.eq) goto loc_8235FF90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235ff70
	if (!ctx.cr6.eq) goto loc_8235FF70;
loc_8235FF90:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82360074
	if (ctx.cr6.eq) goto loc_82360074;
loc_8235FF98:
	// lwz r6,340(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8235ff4c
	if (!ctx.cr6.eq) goto loc_8235FF4C;
loc_8235FFA4:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235fc38
	ctx.lr = 0x8235FFC4;
	sub_8235FC38(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82360080
	if (ctx.cr6.eq) goto loc_82360080;
	// lwz r29,80(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8235fff4
	if (ctx.cr6.eq) goto loc_8235FFF4;
	// addi r4,r28,112
	ctx.r4.s64 = ctx.r28.s64 + 112;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x8235ec00
	ctx.lr = 0x8235FFE8;
	sub_8235EC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fff4
	if (!ctx.cr6.eq) goto loc_8235FFF4;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_8235FFF4:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82360008
	if (!ctx.cr6.eq) goto loc_82360008;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bgt cr6,0x82360098
	if (ctx.cr6.gt) goto loc_82360098;
loc_82360008:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82360020
	if (!ctx.cr6.eq) goto loc_82360020;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_82360020:
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235e9d8
	ctx.lr = 0x8236002C;
	sub_8235E9D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360040
	if (ctx.cr6.eq) goto loc_82360040;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_82360040:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235fa88
	ctx.lr = 0x82360054;
	sub_8235FA88(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// b 0x8235fe5c
	goto loc_8235FE5C;
loc_82360074:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82360080:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82360098:
	// li r3,-12288
	ctx.r3.s64 = -12288;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235FE28) {
	__imp__sub_8235FE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823600A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823600A4) {
	__imp__sub_823600A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823600A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x823600B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823600C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823600c0
	if (!ctx.cr6.eq) goto loc_823600C0;
	// lwz r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// rotlwi r28,r9,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8236015c
	if (ctx.cr6.eq) goto loc_8236015C;
	// addic. r31,r3,248
	ctx.xer.ca = ctx.r3.u32 > 4294967047;
	ctx.r31.s64 = ctx.r3.s64 + 248;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823601f4
	if (ctx.cr0.eq) goto loc_823601F4;
loc_823600F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8236013c
	if (!ctx.cr6.eq) goto loc_8236013C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82360128
	if (!ctx.cr6.eq) goto loc_82360128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235eab0
	ctx.lr = 0x82360120;
	sub_8235EAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360200
	if (ctx.cr6.eq) goto loc_82360200;
loc_82360128:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235eb28
	ctx.lr = 0x82360134;
	sub_8235EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360200
	if (ctx.cr6.eq) goto loc_82360200;
loc_8236013C:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823600f4
	if (!ctx.cr6.eq) goto loc_823600F4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8236015C:
	// addic. r30,r3,112
	ctx.xer.ca = ctx.r3.u32 > 4294967183;
	ctx.r30.s64 = ctx.r3.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823601f4
	if (ctx.cr0.eq) goto loc_823601F4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r27,r11,15316
	ctx.r27.s64 = ctx.r11.s64 + 15316;
loc_8236016C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823601e8
	if (!ctx.cr6.eq) goto loc_823601E8;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r8,r27,3
	ctx.r8.s64 = ctx.r27.s64 + 3;
loc_82360184:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823601a4
	if (!ctx.cr0.eq) goto loc_823601A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82360184
	if (!ctx.cr6.eq) goto loc_82360184;
loc_823601A4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823601e8
	if (!ctx.cr6.eq) goto loc_823601E8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823601d4
	if (!ctx.cr6.eq) goto loc_823601D4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235eab0
	ctx.lr = 0x823601CC;
	sub_8235EAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360200
	if (ctx.cr6.eq) goto loc_82360200;
loc_823601D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235eb28
	ctx.lr = 0x823601E0;
	sub_8235EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360200
	if (ctx.cr6.eq) goto loc_82360200;
loc_823601E8:
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8236016c
	if (!ctx.cr6.eq) goto loc_8236016C;
loc_823601F4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82360200:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823600A8) {
	__imp__sub_823600A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x82360210;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bne cr6,0x823602b0
	if (!ctx.cr6.eq) goto loc_823602B0;
	// li r3,-10240
	ctx.r3.s64 = -10240;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_823602B0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823602cc
	if (ctx.cr6.eq) goto loc_823602CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823600a8
	ctx.lr = 0x823602C8;
	sub_823600A8(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823602CC:
	// addi r27,r29,204
	ctx.r27.s64 = ctx.r29.s64 + 204;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235dc40
	ctx.lr = 0x823602D8;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823602fc
	if (ctx.cr6.eq) goto loc_823602FC;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82360300
	if (!ctx.cr6.eq) goto loc_82360300;
loc_823602FC:
	// ori r28,r28,32768
	ctx.r28.u64 = ctx.r28.u64 | 32768;
loc_82360300:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e9d8
	ctx.lr = 0x8236030C;
	sub_8235E9D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360318
	if (ctx.cr6.eq) goto loc_82360318;
	// oris r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 65536;
loc_82360318:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235fe28
	ctx.lr = 0x82360330;
	sub_8235FE28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823603c8
	if (!ctx.cr6.eq) goto loc_823603C8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// beq cr6,0x823603ac
	if (ctx.cr6.eq) goto loc_823603AC;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
loc_82360360:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82360390
	if (ctx.cr6.eq) goto loc_82360390;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x82360388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823603c8
	if (!ctx.cr6.eq) goto loc_823603C8;
loc_82360390:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// bne 0x82360360
	if (!ctx.cr0.eq) goto loc_82360360;
loc_823603AC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r10,-9984
	ctx.r10.s64 = -9984;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_823603C8:
	// cmpwi cr6,r3,-9984
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9984, ctx.xer);
	// bne cr6,0x823603e0
	if (!ctx.cr6.eq) goto loc_823603E0;
	// li r3,-12288
	ctx.r3.s64 = -12288;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_823603E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823603ac
	if (ctx.cr6.eq) goto loc_823603AC;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360208) {
	__imp__sub_82360208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823603F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823603F4) {
	__imp__sub_823603F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823603F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82360208
	sub_82360208(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823603F8) {
	__imp__sub_823603F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823603FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823603FC) {
	__imp__sub_823603FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360400) {
	PPC_FUNC_PROLOGUE();
	// li r5,344
	ctx.r5.s64 = 344;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360400) {
	__imp__sub_82360400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236040C) {
	__imp__sub_8236040C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82360418;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360590
	if (ctx.cr6.eq) goto loc_82360590;
loc_8236042C:
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x8235d7a8
	ctx.lr = 0x82360434;
	sub_8235D7A8(ctx, base);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x82634d40
	ctx.lr = 0x8236043C;
	sub_82634D40(ctx, base);
	// lwz r30,104(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236046c
	if (ctx.cr6.eq) goto loc_8236046C;
loc_82360448:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362b98
	ctx.lr = 0x8236045C;
	sub_82362B98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x82360464;
	sub_82634D40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82360448
	if (!ctx.cr6.eq) goto loc_82360448;
loc_8236046C:
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236049c
	if (ctx.cr6.eq) goto loc_8236049C;
loc_82360478:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362b98
	ctx.lr = 0x8236048C;
	sub_82362B98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x82360494;
	sub_82634D40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82360478
	if (!ctx.cr6.eq) goto loc_82360478;
loc_8236049C:
	// lwz r30,308(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823604cc
	if (ctx.cr6.eq) goto loc_823604CC;
loc_823604A8:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362b98
	ctx.lr = 0x823604BC;
	sub_82362B98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x823604C4;
	sub_82634D40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823604a8
	if (!ctx.cr6.eq) goto loc_823604A8;
loc_823604CC:
	// lwz r30,260(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823604fc
	if (ctx.cr6.eq) goto loc_823604FC;
loc_823604D8:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362b98
	ctx.lr = 0x823604EC;
	sub_82362B98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x823604F4;
	sub_82634D40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823604d8
	if (!ctx.cr6.eq) goto loc_823604D8;
loc_823604FC:
	// lwz r30,276(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236052c
	if (ctx.cr6.eq) goto loc_8236052C;
loc_82360508:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362b98
	ctx.lr = 0x8236051C;
	sub_82362B98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x82360524;
	sub_82634D40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82360508
	if (!ctx.cr6.eq) goto loc_82360508;
loc_8236052C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360554
	if (ctx.cr6.eq) goto loc_82360554;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82360554
	if (ctx.cr6.eq) goto loc_82360554;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82362b98
	ctx.lr = 0x8236054C;
	sub_82362B98(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82634d40
	ctx.lr = 0x82360554;
	sub_82634D40(ctx, base);
loc_82360554:
	// lwz r31,340(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236042c
	if (!ctx.cr6.eq) goto loc_8236042C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82360564:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r30,340(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// li r4,344
	ctx.r4.s64 = 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x82360578;
	sub_82362B98(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82360588
	if (ctx.cr6.eq) goto loc_82360588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82360588;
	sub_82634D40(ctx, base);
loc_82360588:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82360564
	if (!ctx.cr6.eq) goto loc_82360564;
loc_82360590:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360410) {
	__imp__sub_82360410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x823605A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x823605C0;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823605d4
	if (ctx.cr6.eq) goto loc_823605D4;
loc_823605C8:
	// addi r3,r3,-9472
	ctx.r3.s64 = ctx.r3.s64 + -9472;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_823605D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823605f4
	if (ctx.cr6.eq) goto loc_823605F4;
	// li r3,-9574
	ctx.r3.s64 = -9574;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_823605F4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823606d8
	if (!ctx.cr6.lt) goto loc_823606D8;
loc_82360600:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// std r29,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r29.u64);
	// std r29,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r29.u64);
	// std r29,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r29.u64);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x8238a398
	ctx.lr = 0x8236063C;
	sub_8238A398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823605c8
	if (!ctx.cr6.eq) goto loc_823605C8;
	// lwz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r26,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC0;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bne cr6,0x823606fc
	if (!ctx.cr6.eq) goto loc_823606FC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8235f2b0
	ctx.lr = 0x8236066C;
	sub_8235F2B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360680
	if (ctx.cr6.eq) goto loc_82360680;
	// cmpwi cr6,r3,-8320
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8320, ctx.xer);
	// bne cr6,0x82360708
	if (!ctx.cr6.eq) goto loc_82360708;
loc_82360680:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823606b4
	if (ctx.cr6.eq) goto loc_823606B4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82360748
	if (!ctx.cr6.eq) goto loc_82360748;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x823606A4;
	sub_826365A8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360754
	if (ctx.cr6.eq) goto loc_82360754;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823606B4:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82360600
	if (ctx.cr6.lt) goto loc_82360600;
loc_823606D8:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// li r11,-9574
	ctx.r11.s64 = -9574;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 & ctx.r11.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_823606FC:
	// li r3,-9570
	ctx.r3.s64 = -9570;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82360708:
	// lwz r31,12(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82360738
	if (ctx.cr6.eq) goto loc_82360738;
loc_82360714:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362b98
	ctx.lr = 0x82360728;
	sub_82362B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d40
	ctx.lr = 0x82360730;
	sub_82634D40(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82360714
	if (!ctx.cr6.eq) goto loc_82360714;
loc_82360738:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r29.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82360748:
	// li r3,-9472
	ctx.r3.s64 = -9472;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82360754:
	// li r3,-9578
	ctx.r3.s64 = -9578;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360598) {
	__imp__sub_82360598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x82360768;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82360794
	if (!ctx.cr6.eq) goto loc_82360794;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82360794:
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r28,236
	ctx.r5.s64 = ctx.r28.s64 + 236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f768
	ctx.lr = 0x823607A4;
	sub_8238F768(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360b28
	if (!ctx.cr6.eq) goto loc_82360B28;
	// lwz r10,244(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	// lwz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82360b10
	if (!ctx.cr6.lt) goto loc_82360B10;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r22,6
	ctx.r22.s64 = 6;
	// lis r21,1
	ctx.r21.s64 = 65536;
loc_823607D0:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x823607F8;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360b30
	if (!ctx.cr6.eq) goto loc_82360B30;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x82360820;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360b30
	if (!ctx.cr6.eq) goto loc_82360B30;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8238a518
	ctx.lr = 0x82360850;
	sub_8238A518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360860
	if (ctx.cr6.eq) goto loc_82360860;
	// cmpwi cr6,r3,-98
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -98, ctx.xer);
	// bne cr6,0x82360b30
	if (!ctx.cr6.eq) goto loc_82360B30;
loc_82360860:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x82360874;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360b30
	if (!ctx.cr6.eq) goto loc_82360B30;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82360b3c
	if (!ctx.cr6.eq) goto loc_82360B3C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238d550
	ctx.lr = 0x8236089C;
	sub_8238D550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360904
	if (ctx.cr6.eq) goto loc_82360904;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823608e8
	if (ctx.cr6.eq) goto loc_823608E8;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x823608CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823608e0
	if (ctx.cr6.eq) goto loc_823608E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82360b28
	if (!ctx.cr6.eq) goto loc_82360B28;
loc_823608E0:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x82360b04
	goto loc_82360B04;
loc_823608E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82360b04
	if (ctx.cr6.eq) goto loc_82360B04;
	// li r3,-9570
	ctx.r3.s64 = -9570;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82360904:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,280(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82360b48
	if (!ctx.cr6.eq) goto loc_82360B48;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stw r10,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r10.u32);
	// bgt cr6,0x82360a5c
	if (ctx.cr6.gt) goto loc_82360A5C;
	// beq cr6,0x82360a44
	if (ctx.cr6.eq) goto loc_82360A44;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823609cc
	if (ctx.cr6.eq) goto loc_823609CC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82360958
	if (ctx.cr6.eq) goto loc_82360958;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82360a6c
	if (!ctx.cr6.eq) goto loc_82360A6C;
	// addi r5,r28,248
	ctx.r5.s64 = ctx.r28.s64 + 248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360598
	ctx.lr = 0x82360954;
	sub_82360598(ctx, base);
	// b 0x82360afc
	goto loc_82360AFC;
loc_82360958:
	// addi r5,r28,264
	ctx.r5.s64 = ctx.r28.s64 + 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235eef8
	ctx.lr = 0x82360968;
	sub_8235EEF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360b04
	if (ctx.cr6.eq) goto loc_82360B04;
	// cmpwi cr6,r3,-8320
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8320, ctx.xer);
	// bne cr6,0x823609ac
	if (!ctx.cr6.eq) goto loc_823609AC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823609ac
	if (ctx.cr6.eq) goto loc_823609AC;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x823609A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360b04
	if (ctx.cr6.eq) goto loc_82360B04;
loc_823609AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823609c0
	if (!ctx.cr6.eq) goto loc_823609C0;
	// cmpwi cr6,r29,-8320
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -8320, ctx.xer);
	// beq cr6,0x82360b04
	if (ctx.cr6.eq) goto loc_82360B04;
loc_823609C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_823609CC:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r26.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238a7a0
	ctx.lr = 0x823609E8;
	sub_8238A7A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360af8
	if (!ctx.cr6.eq) goto loc_82360AF8;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82360aec
	if (ctx.cr6.lt) goto loc_82360AEC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,292(r28)
	PPC_STORE_U32(ctx.r28.u32 + 292, ctx.r26.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82360b04
	if (ctx.cr6.eq) goto loc_82360B04;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82360A14:
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x82360b04
	if (!ctx.cr6.lt) goto loc_82360B04;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,292(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// slw r5,r7,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r4,292(r28)
	PPC_STORE_U32(ctx.r28.u32 + 292, ctx.r4.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82360a14
	if (ctx.cr6.lt) goto loc_82360A14;
	// b 0x82360b04
	goto loc_82360B04;
loc_82360A44:
	// addi r6,r28,288
	ctx.r6.s64 = ctx.r28.s64 + 288;
	// addi r5,r28,284
	ctx.r5.s64 = ctx.r28.s64 + 284;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ede8
	ctx.lr = 0x82360A58;
	sub_8235EDE8(ctx, base);
	// b 0x82360afc
	goto loc_82360AFC;
loc_82360A5C:
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// beq cr6,0x82360ac0
	if (ctx.cr6.eq) goto loc_82360AC0;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// beq cr6,0x82360a80
	if (ctx.cr6.eq) goto loc_82360A80;
loc_82360A6C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82360b54
	if (!ctx.cr6.eq) goto loc_82360B54;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x82360b04
	goto loc_82360B04;
loc_82360A80:
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r26,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r26.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238a7a0
	ctx.lr = 0x82360A9C;
	sub_8238A7A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360af8
	if (!ctx.cr6.eq) goto loc_82360AF8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82360aec
	if (!ctx.cr6.eq) goto loc_82360AEC;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,312(r28)
	PPC_STORE_U8(ctx.r28.u32 + 312, ctx.r10.u8);
	// b 0x82360b04
	goto loc_82360B04;
loc_82360AC0:
	// addi r29,r28,296
	ctx.r29.s64 = ctx.r28.s64 + 296;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238aaf8
	ctx.lr = 0x82360AD8;
	sub_8238AAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360af8
	if (!ctx.cr6.eq) goto loc_82360AF8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82360b04
	if (!ctx.cr6.eq) goto loc_82360B04;
loc_82360AEC:
	// li r3,-9572
	ctx.r3.s64 = -9572;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82360AF8:
	// addi r3,r3,-9472
	ctx.r3.s64 = ctx.r3.s64 + -9472;
loc_82360AFC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360b28
	if (!ctx.cr6.eq) goto loc_82360B28;
loc_82360B04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823607d0
	if (ctx.cr6.lt) goto loc_823607D0;
loc_82360B10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,-9574
	ctx.r10.s64 = -9574;
	// subf r9,r11,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r11.s64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
loc_82360B28:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82360B30:
	// addi r3,r3,-9472
	ctx.r3.s64 = ctx.r3.s64 + -9472;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82360B3C:
	// li r3,-9574
	ctx.r3.s64 = -9574;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82360B48:
	// li r3,-9472
	ctx.r3.s64 = -9472;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82360B54:
	// li r3,-8320
	ctx.r3.s64 = -8320;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360760) {
	__imp__sub_82360760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x82360B68;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r26.u64);
	// std r26,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r26.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r26,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r26.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236112c
	if (ctx.cr6.eq) goto loc_8236112C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236112c
	if (ctx.cr6.eq) goto loc_8236112C;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x82360BD4;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360bf0
	if (ctx.cr6.eq) goto loc_82360BF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360410
	ctx.lr = 0x82360BE4;
	sub_82360410(ctx, base);
	// li r3,-8576
	ctx.r3.s64 = -8576;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82360BF0:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r29,r30,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r30.s64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// beq cr6,0x82360c68
	if (ctx.cr6.eq) goto loc_82360C68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82360C18;
	sub_826365A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82360c34
	if (!ctx.cr6.eq) goto loc_82360C34;
	// li r3,-10368
	ctx.r3.s64 = -10368;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82360C34:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x82360C40;
	sub_82635430(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82360c70
	goto loc_82360C70;
loc_82360C68:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82360C70:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x82360C88;
	sub_8238A4E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360ca8
	if (ctx.cr6.eq) goto loc_82360CA8;
loc_82360C94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360410
	ctx.lr = 0x82360C9C;
	sub_82360410(ctx, base);
	// addi r3,r30,-8576
	ctx.r3.s64 = ctx.r30.s64 + -8576;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82360CA8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,160
	ctx.r6.s64 = 160;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
	// subf r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x82360CD8;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360dfc
	if (ctx.cr6.eq) goto loc_82360DFC;
	// cmpwi cr6,r3,-98
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -98, ctx.xer);
	// bne cr6,0x82360cf0
	if (!ctx.cr6.eq) goto loc_82360CF0;
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// b 0x82360cfc
	goto loc_82360CFC;
loc_82360CF0:
	// addi r30,r3,-8576
	ctx.r30.s64 = ctx.r3.s64 + -8576;
loc_82360CF4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
loc_82360CFC:
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238e9b0
	ctx.lr = 0x82360D0C;
	sub_8238E9B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238ea58
	ctx.lr = 0x82360D30;
	sub_8238EA58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82361118
	if (ctx.cr6.lt) goto loc_82361118;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82361118
	if (ctx.cr6.gt) goto loc_82361118;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r31,336
	ctx.r7.s64 = ctx.r31.s64 + 336;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r6,r31,332
	ctx.r6.s64 = ctx.r31.s64 + 332;
	// addi r5,r31,328
	ctx.r5.s64 = ctx.r31.s64 + 328;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238f670
	ctx.lr = 0x82360D70;
	sub_8238F670(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x82360D98;
	sub_8238A4E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360c94
	if (!ctx.cr6.eq) goto loc_82360C94;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8238efd0
	ctx.lr = 0x82360DBC;
	sub_8238EFD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x82360DEC;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360e4c
	if (ctx.cr6.eq) goto loc_82360E4C;
	// addi r30,r3,-9216
	ctx.r30.s64 = ctx.r3.s64 + -9216;
	// b 0x82360eb0
	goto loc_82360EB0;
loc_82360DFC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8238a700
	ctx.lr = 0x82360E18;
	sub_8238A700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360e28
	if (ctx.cr6.eq) goto loc_82360E28;
	// addi r30,r3,-8704
	ctx.r30.s64 = ctx.r3.s64 + -8704;
	// b 0x82360cf4
	goto loc_82360CF4;
loc_82360E28:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82360cfc
	if (ctx.cr6.eq) goto loc_82360CFC;
	// li r30,-8806
	ctx.r30.s64 = -8806;
loc_82360E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360410
	ctx.lr = 0x82360E40;
	sub_82360410(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82360E4C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8238f550
	ctx.lr = 0x82360E68;
	sub_8238F550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360eac
	if (!ctx.cr6.eq) goto loc_82360EAC;
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238f550
	ctx.lr = 0x82360E80;
	sub_8238F550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360eac
	if (!ctx.cr6.eq) goto loc_82360EAC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82360eb8
	if (ctx.cr6.eq) goto loc_82360EB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,-9318
	ctx.r30.s64 = -9318;
	// bl 0x82360410
	ctx.lr = 0x82360EA0;
	sub_82360410(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82360EAC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82360EB0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
loc_82360EB8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x82360ED4;
	sub_8238A4E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360c94
	if (!ctx.cr6.eq) goto loc_82360C94;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82360f0c
	if (ctx.cr6.eq) goto loc_82360F0C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8238efd0
	ctx.lr = 0x82360F00;
	sub_8238EFD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
loc_82360F0C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r31,204
	ctx.r5.s64 = ctx.r31.s64 + 204;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x8235e588
	ctx.lr = 0x82360F30;
	sub_8235E588(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r8,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// beq cr6,0x82360f60
	if (ctx.cr6.eq) goto loc_82360F60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82360f80
	if (!ctx.cr6.eq) goto loc_82360F80;
loc_82360F60:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,212
	ctx.r5.s64 = ctx.r31.s64 + 212;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235ed70
	ctx.lr = 0x82360F74;
	sub_8235ED70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
loc_82360F80:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82360f94
	if (ctx.cr6.eq) goto loc_82360F94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82360fb4
	if (!ctx.cr6.eq) goto loc_82360FB4;
loc_82360F94:
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r31,224
	ctx.r5.s64 = ctx.r31.s64 + 224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235ed70
	ctx.lr = 0x82360FA8;
	sub_8235ED70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
loc_82360FB4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82360fe4
	if (!ctx.cr6.eq) goto loc_82360FE4;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82360760
	ctx.lr = 0x82360FD8;
	sub_82360760(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
loc_82360FE4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82361004
	if (ctx.cr6.eq) goto loc_82361004;
loc_82360FF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360410
	ctx.lr = 0x82360FF8;
	sub_82360410(ctx, base);
	// li r3,-8678
	ctx.r3.s64 = -8678;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82361004:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238ea58
	ctx.lr = 0x82361018;
	sub_8238EA58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82361104
	if (!ctx.cr6.eq) goto loc_82361104;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236106c
	if (ctx.cr6.eq) goto loc_8236106C;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8236104C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8236106c
	if (!ctx.cr0.eq) goto loc_8236106C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8236104c
	if (!ctx.cr6.eq) goto loc_8236104C;
loc_8236106C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82361104
	if (!ctx.cr6.eq) goto loc_82361104;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82361104
	if (!ctx.cr6.eq) goto loc_82361104;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82361104
	if (!ctx.cr6.eq) goto loc_82361104;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823610d4
	if (ctx.cr6.eq) goto loc_823610D4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_823610AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823610cc
	if (!ctx.cr0.eq) goto loc_823610CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823610ac
	if (!ctx.cr6.eq) goto loc_823610AC;
loc_823610CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82361104
	if (!ctx.cr6.eq) goto loc_82361104;
loc_823610D4:
	// addi r5,r31,316
	ctx.r5.s64 = ctx.r31.s64 + 316;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238f5f0
	ctx.lr = 0x823610E4;
	sub_8238F5F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360e38
	if (!ctx.cr6.eq) goto loc_82360E38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82360ff0
	if (!ctx.cr6.eq) goto loc_82360FF0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82361104:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360410
	ctx.lr = 0x8236110C;
	sub_82360410(ctx, base);
	// li r3,-9856
	ctx.r3.s64 = -9856;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82361118:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360410
	ctx.lr = 0x82361120;
	sub_82360410(ctx, base);
	// li r3,-9600
	ctx.r3.s64 = -9600;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8236112C:
	// li r3,-10240
	ctx.r3.s64 = -10240;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360B60) {
	__imp__sub_82360B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82361140;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361258
	if (ctx.cr6.eq) goto loc_82361258;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82361258
	if (ctx.cr6.eq) goto loc_82361258;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823611a8
	if (ctx.cr6.eq) goto loc_823611A8;
loc_82361184:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823611a8
	if (ctx.cr6.eq) goto loc_823611A8;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82361184
	if (!ctx.cr6.eq) goto loc_82361184;
loc_823611A8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823611f8
	if (ctx.cr6.eq) goto loc_823611F8;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823611f8
	if (!ctx.cr6.eq) goto loc_823611F8;
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x823611CC;
	sub_826365A8(ctx, base);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823611e4
	if (!ctx.cr6.eq) goto loc_823611E4;
	// li r3,-10368
	ctx.r3.s64 = -10368;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823611E4:
	// li r5,344
	ctx.r5.s64 = 344;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x823611F4;
	sub_826344D0(ctx, base);
	// lwz r31,340(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
loc_823611F8:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360b60
	ctx.lr = 0x82361214;
	sub_82360B60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236124c
	if (ctx.cr6.eq) goto loc_8236124C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82361230
	if (ctx.cr6.eq) goto loc_82361230;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 340, ctx.r11.u32);
loc_82361230:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82361240
	if (ctx.cr6.eq) goto loc_82361240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82361240;
	sub_82634D40(ctx, base);
loc_82361240:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8236124C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82361258:
	// li r3,-10240
	ctx.r3.s64 = -10240;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361138) {
	__imp__sub_82361138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82361264) {
	__imp__sub_82361264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361268) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82361138
	sub_82361138(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361268) {
	__imp__sub_82361268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x82361280;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236141c
	if (ctx.cr6.eq) goto loc_8236141C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236141c
	if (ctx.cr6.eq) goto loc_8236141C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823612e0
	if (ctx.cr6.eq) goto loc_823612E0;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823612e0
	if (!ctx.cr6.eq) goto loc_823612E0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r25,r11,15348
	ctx.r25.s64 = ctx.r11.s64 + 15348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82634c80
	ctx.lr = 0x823612D8;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82361304
	if (!ctx.cr6.eq) goto loc_82361304;
loc_823612E0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82361138
	ctx.lr = 0x823612FC;
	sub_82361138(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82361304:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x82361410
	if (!ctx.cr6.gt) goto loc_82361410;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r26,r11,15320
	ctx.r26.s64 = ctx.r11.s64 + 15320;
loc_82361314:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8238dd80
	ctx.lr = 0x8236131C;
	sub_8238DD80(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8238e078
	ctx.lr = 0x8236133C;
	sub_8238E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823613a0
	if (!ctx.cr6.eq) goto loc_823613A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82361138
	ctx.lr = 0x82361370;
	sub_82361138(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8238e718
	ctx.lr = 0x8236137C;
	sub_8238E718(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82361398
	if (ctx.cr6.eq) goto loc_82361398;
	// cmpwi cr6,r30,-10368
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -10368, ctx.xer);
	// bne cr6,0x823613c4
	if (!ctx.cr6.eq) goto loc_823613C4;
	// li r3,-10368
	ctx.r3.s64 = -10368;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82361398:
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x823613d4
	goto loc_823613D4;
loc_823613A0:
	// cmpwi cr6,r30,-5248
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -5248, ctx.xer);
	// beq cr6,0x823613f0
	if (ctx.cr6.eq) goto loc_823613F0;
	// cmpwi cr6,r30,-4224
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -4224, ctx.xer);
	// beq cr6,0x823613dc
	if (ctx.cr6.eq) goto loc_823613DC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8238e718
	ctx.lr = 0x823613B8;
	sub_8238E718(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823613C4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x823613d0
	if (!ctx.cr6.eq) goto loc_823613D0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823613D0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_823613D4:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bgt cr6,0x82361314
	if (ctx.cr6.gt) goto loc_82361314;
loc_823613DC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x823613fc
	if (ctx.cr6.eq) goto loc_823613FC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_823613F0:
	// li r3,-5248
	ctx.r3.s64 = -5248;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_823613FC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82361410
	if (ctx.cr6.eq) goto loc_82361410;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82361410:
	// li r3,-10112
	ctx.r3.s64 = -10112;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8236141C:
	// li r3,-10240
	ctx.r3.s64 = -10240;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361278) {
	__imp__sub_82361278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82361430;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82361738
	if (ctx.cr6.eq) goto loc_82361738;
	// lis r3,-32239
	ctx.r3.s64 = -2112815104;
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r28,-32155
	ctx.r28.s64 = -2107310080;
	// addi r22,r3,15572
	ctx.r22.s64 = ctx.r3.s64 + 15572;
	// addi r26,r4,15564
	ctx.r26.s64 = ctx.r4.s64 + 15564;
	// addi r24,r5,15520
	ctx.r24.s64 = ctx.r5.s64 + 15520;
	// addi r23,r6,15476
	ctx.r23.s64 = ctx.r6.s64 + 15476;
	// addi r21,r7,15440
	ctx.r21.s64 = ctx.r7.s64 + 15440;
	// addi r17,r8,15016
	ctx.r17.s64 = ctx.r8.s64 + 15016;
	// addi r20,r9,15420
	ctx.r20.s64 = ctx.r9.s64 + 15420;
	// addi r19,r10,15400
	ctx.r19.s64 = ctx.r10.s64 + 15400;
	// addi r25,r11,15376
	ctx.r25.s64 = ctx.r11.s64 + 15376;
loc_823614A4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// std r18,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r18.u64);
	// std r18,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r18.u64);
	// std r18,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r18.u64);
	// std r18,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r18.u64);
	// std r18,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r18.u64);
	// bl 0x8235f2b0
	ctx.lr = 0x823614C8;
	sub_8235F2B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq cr6,0x82361514
	if (ctx.cr6.eq) goto loc_82361514;
	// lwz r11,3700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3700);
	// cmpwi cr6,r3,-8320
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8320, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823614f4
	if (ctx.cr6.eq) goto loc_823614F4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_823614F4:
	// bctrl 
	ctx.lr = 0x823614F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361750
	if (ctx.cr6.lt) goto loc_82361750;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361750
	if (!ctx.cr6.lt) goto loc_82361750;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// b 0x8236172c
	goto loc_8236172C;
loc_82361514:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823615a0
	if (ctx.cr6.eq) goto loc_823615A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,3700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3700);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x82361558
	if (ctx.cr6.eq) goto loc_82361558;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8236153C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361750
	if (ctx.cr6.lt) goto loc_82361750;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361750
	if (!ctx.cr6.lt) goto loc_82361750;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// b 0x8236172c
	goto loc_8236172C;
loc_82361558:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x82361560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361750
	if (ctx.cr6.lt) goto loc_82361750;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361750
	if (!ctx.cr6.lt) goto loc_82361750;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r29,r3,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r31,r30,r3
	ctx.r31.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8236175c
	if (!ctx.cr6.lt) goto loc_8236175C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82635430
	ctx.lr = 0x82361590;
	sub_82635430(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r31,r11,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r11.s64;
	// b 0x8236172c
	goto loc_8236172C;
loc_823615A0:
	// lwz r11,3700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3700);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823615B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361750
	if (ctx.cr6.lt) goto loc_82361750;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361750
	if (!ctx.cr6.lt) goto loc_82361750;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8236172c
	if (!ctx.cr6.eq) goto loc_8236172C;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// addi r8,r17,8
	ctx.r8.s64 = ctx.r17.s64 + 8;
loc_823615E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82361600
	if (!ctx.cr0.eq) goto loc_82361600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823615e0
	if (!ctx.cr6.eq) goto loc_823615E0;
loc_82361600:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236172c
	if (!ctx.cr6.eq) goto loc_8236172C;
	// lwz r11,3700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3700);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361750
	if (ctx.cr6.lt) goto loc_82361750;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361750
	if (!ctx.cr6.lt) goto loc_82361750;
	// lwz r11,3700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3700);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361750
	if (ctx.cr6.lt) goto loc_82361750;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361750
	if (!ctx.cr6.lt) goto loc_82361750;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238dbf8
	ctx.lr = 0x82361680;
	sub_8238DBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361750
	if (ctx.cr6.lt) goto loc_82361750;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361750
	if (!ctx.cr6.lt) goto loc_82361750;
	// lwz r11,3700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3700);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823616B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361750
	if (ctx.cr6.lt) goto loc_82361750;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361750
	if (!ctx.cr6.lt) goto loc_82361750;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236172c
	if (ctx.cr6.eq) goto loc_8236172C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
loc_823616E0:
	// lwz r11,3700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3700);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x82361700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361750
	if (ctx.cr6.lt) goto loc_82361750;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361750
	if (!ctx.cr6.lt) goto loc_82361750;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// blt cr6,0x823616e0
	if (ctx.cr6.lt) goto loc_823616E0;
loc_8236172C:
	// lwz r16,12(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x823614a4
	if (!ctx.cr6.eq) goto loc_823614A4;
loc_82361738:
	// stb r18,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r18.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r31.u32);
	// stw r30,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r30.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82361750:
	// li r3,-10624
	ctx.r3.s64 = -10624;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_8236175C:
	// li r3,-10624
	ctx.r3.s64 = -10624;
	// stb r18,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r18.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361428) {
	__imp__sub_82361428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236176C) {
	__imp__sub_8236176C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x82361778;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823617cc
	if (!ctx.cr6.eq) goto loc_823617CC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r5,r10,16024
	ctx.r5.s64 = ctx.r10.s64 + 16024;
	// lwz r9,3700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3700);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823617AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r11,r3,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r3.s64;
	// subf r3,r11,r20
	ctx.r3.s64 = ctx.r20.s64 - ctx.r11.s64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_823617CC:
	// lis r23,-32155
	ctx.r23.s64 = -2107310080;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,15996
	ctx.r5.s64 = ctx.r11.s64 + 15996;
	// lwz r10,3700(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823617EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// subf r31,r3,r20
	ctx.r31.s64 = ctx.r20.s64 - ctx.r3.s64;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15972
	ctx.r5.s64 = ctx.r10.s64 + 15972;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82361824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238fa28
	ctx.lr = 0x8236184C;
	sub_8238FA28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15948
	ctx.r5.s64 = ctx.r10.s64 + 15948;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82361884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r5,r29,80
	ctx.r5.s64 = ctx.r29.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f800
	ctx.lr = 0x823618AC;
	sub_8238F800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15924
	ctx.r5.s64 = ctx.r10.s64 + 15924;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823618E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r5,r29,112
	ctx.r5.s64 = ctx.r29.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f800
	ctx.lr = 0x8236190C;
	sub_8238F800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r28,160(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r27,3700(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r10,156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// addi r5,r9,15868
	ctx.r5.s64 = ctx.r9.s64 + 15868;
	// lwz r9,152(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,148(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,144(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bctrl 
	ctx.lr = 0x82361964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r28,184(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r27,3700(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r5,r9,15812
	ctx.r5.s64 = ctx.r9.s64 + 15812;
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,172(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,168(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bctrl 
	ctx.lr = 0x823619BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15788
	ctx.r5.s64 = ctx.r10.s64 + 15788;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823619F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r8,336(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// add r28,r30,r3
	ctx.r28.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r7,328(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// addi r5,r29,44
	ctx.r5.s64 = ctx.r29.s64 + 44;
	// lwz r6,332(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238fb50
	ctx.lr = 0x82361A28;
	sub_8238FB50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// addi r30,r29,204
	ctx.r30.s64 = ctx.r29.s64 + 204;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x8235dc18
	ctx.lr = 0x82361A50;
	sub_8235DC18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8238fc88
	ctx.lr = 0x82361A60;
	sub_8238FC88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361e78
	if (!ctx.cr6.eq) goto loc_82361E78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235db78
	ctx.lr = 0x82361A70;
	sub_8235DB78(ctx, base);
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r5,r10,15768
	ctx.r5.s64 = ctx.r10.s64 + 15768;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82361A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r28,r3
	ctx.r30.u64 = ctx.r28.u64 + ctx.r3.u64;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82361b5c
	if (ctx.cr6.eq) goto loc_82361B5C;
	// lwz r11,284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361ad8
	if (ctx.cr6.eq) goto loc_82361AD8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,18464
	ctx.r7.s64 = ctx.r11.s64 + 18464;
	// b 0x82361ae0
	goto loc_82361AE0;
loc_82361AD8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,18456
	ctx.r7.s64 = ctx.r11.s64 + 18456;
loc_82361AE0:
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15736
	ctx.r5.s64 = ctx.r10.s64 + 15736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82361b5c
	if (!ctx.cr6.gt) goto loc_82361B5C;
	// lwz r10,3700(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r5,r9,15716
	ctx.r5.s64 = ctx.r9.s64 + 15716;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82361B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_82361B5C:
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82361bd0
	if (ctx.cr6.eq) goto loc_82361BD0;
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15692
	ctx.r5.s64 = ctx.r10.s64 + 15692;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r29,248
	ctx.r5.s64 = ctx.r29.s64 + 248;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82361428
	ctx.lr = 0x82361BC0;
	sub_82361428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361e78
	if (!ctx.cr6.eq) goto loc_82361E78;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82361BD0:
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82361c40
	if (ctx.cr6.eq) goto loc_82361C40;
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15668
	ctx.r5.s64 = ctx.r10.s64 + 15668;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lbz r5,312(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 312);
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235f3a0
	ctx.lr = 0x82361C30;
	sub_8235F3A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361e78
	if (!ctx.cr6.eq) goto loc_82361E78;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82361C40:
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82361cb0
	if (ctx.cr6.eq) goto loc_82361CB0;
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15644
	ctx.r5.s64 = ctx.r10.s64 + 15644;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r5,292(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235f610
	ctx.lr = 0x82361CA0;
	sub_8235F610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361e78
	if (!ctx.cr6.eq) goto loc_82361E78;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82361CB0:
	// lwz r9,280(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r7,r9,0,20,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r24,r11,15144
	ctx.r24.s64 = ctx.r11.s64 + 15144;
	// addi r25,r10,19980
	ctx.r25.s64 = ctx.r10.s64 + 19980;
	// addi r21,r9,15304
	ctx.r21.s64 = ctx.r9.s64 + 15304;
	// addi r26,r8,8828
	ctx.r26.s64 = ctx.r8.s64 + 8828;
	// beq cr6,0x82361d84
	if (ctx.cr6.eq) goto loc_82361D84;
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15620
	ctx.r5.s64 = ctx.r10.s64 + 15620;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addic. r28,r29,296
	ctx.xer.ca = ctx.r29.u32 > 4294966999;
	ctx.r28.s64 = ctx.r29.s64 + 296;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// beq 0x82361d84
	if (ctx.cr0.eq) goto loc_82361D84;
loc_82361D24:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238d600
	ctx.lr = 0x82361D30;
	sub_8238D600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361d3c
	if (ctx.cr6.eq) goto loc_82361D3C;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
loc_82361D3C:
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r28,12(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82361d24
	if (!ctx.cr6.eq) goto loc_82361D24;
loc_82361D84:
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82361e38
	if (ctx.cr6.eq) goto loc_82361E38;
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r10,15592
	ctx.r5.s64 = ctx.r10.s64 + 15592;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addic. r29,r29,264
	ctx.xer.ca = ctx.r29.u32 > 4294967031;
	ctx.r29.s64 = ctx.r29.s64 + 264;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// beq 0x82361e38
	if (ctx.cr0.eq) goto loc_82361E38;
loc_82361DD8:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238d6b0
	ctx.lr = 0x82361DE4;
	sub_8238D6B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361df0
	if (ctx.cr6.eq) goto loc_82361DF0;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
loc_82361DF0:
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82361dd8
	if (!ctx.cr6.eq) goto loc_82361DD8;
loc_82361E38:
	// lwz r11,3700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3700);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,10696
	ctx.r5.s64 = ctx.r10.s64 + 10696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82361e74
	if (ctx.cr6.lt) goto loc_82361E74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82361e74
	if (!ctx.cr6.lt) goto loc_82361E74;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subf r3,r11,r20
	ctx.r3.s64 = ctx.r20.s64 - ctx.r11.s64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82361E74:
	// li r3,-10624
	ctx.r3.s64 = -10624;
loc_82361E78:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361770) {
	__imp__sub_82361770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361E80) {
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
	// li r5,320
	ctx.r5.s64 = 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x82361EA0;
	sub_826344D0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,10000
	ctx.r10.s64 = 10000;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82361E80) {
	__imp__sub_82361E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82361EC4) {
	__imp__sub_82361EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361EC8) {
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
	// beq cr6,0x82361f08
	if (ctx.cr6.eq) goto loc_82361F08;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x8237ef90
	ctx.lr = 0x82361EEC;
	sub_8237EF90(ctx, base);
	// li r4,320
	ctx.r4.s64 = 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x82361EF8;
	sub_82362B98(ctx, base);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_82361F08:
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

PPC_WEAK_FUNC(sub_82361EC8) {
	__imp__sub_82361EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82361F1C) {
	__imp__sub_82361F1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x82361F28;
	__savegprlr_23(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 384, ctx.xer);
	// ble cr6,0x82361f4c
	if (!ctx.cr6.gt) goto loc_82361F4C;
	// li r3,-56
	ctx.r3.s64 = -56;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82361F4C:
	// li r5,416
	ctx.r5.s64 = 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826344d0
	ctx.lr = 0x82361F5C;
	sub_826344D0(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8237ef80
	ctx.lr = 0x82361F64;
	sub_8237EF80(ctx, base);
	// rlwinm r11,r31,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r31,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFF;
	// stb r31,195(r1)
	PPC_STORE_U8(ctx.r1.u32 + 195, ctx.r31.u8);
	// rlwinm r9,r31,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// stb r11,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// li r7,48
	ctx.r7.s64 = 48;
	// stb r10,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r10.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r9,194(r1)
	PPC_STORE_U8(ctx.r1.u32 + 194, ctx.r9.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r7,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r7.u8);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82635430
	ctx.lr = 0x82361F98;
	sub_82635430(ctx, base);
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r25,r31,25
	ctx.r25.s64 = ctx.r31.s64 + 25;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stbx r5,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u8);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82361FBC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82361fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82361FBC;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8237f038
	ctx.lr = 0x82361FDC;
	sub_8237F038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362160
	if (!ctx.cr6.eq) goto loc_82362160;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82361FEC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// beq cr6,0x823620cc
	if (ctx.cr6.eq) goto loc_823620CC;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,178
	ctx.r31.s64 = ctx.r1.s64 + 178;
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82362014:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82362028:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r23,3(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// xor r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r30.u64;
	// xor r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r23.u64;
	// xor r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// bdnz 0x82362028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362028;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// bge cr6,0x823620a0
	if (!ctx.cr6.lt) goto loc_823620A0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_823620A0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x82380638
	ctx.lr = 0x823620B8;
	sub_82380638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362160
	if (!ctx.cr6.eq) goto loc_82362160;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82362014
	if (!ctx.cr6.eq) goto loc_82362014;
loc_823620CC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82635430
	ctx.lr = 0x823620E0;
	sub_82635430(ctx, base);
	// lbz r11,179(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 179);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r27,48
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 48, ctx.xer);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r9.u8);
	// blt cr6,0x82361fec
	if (ctx.cr6.lt) goto loc_82361FEC;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8237f038
	ctx.lr = 0x8236210C;
	sub_8237F038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362160
	if (!ctx.cr6.eq) goto loc_82362160;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82362120:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82380638
	ctx.lr = 0x82362134;
	sub_82380638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362160
	if (!ctx.cr6.eq) goto loc_82362160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x82362150;
	sub_82635430(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// blt cr6,0x82362120
	if (ctx.cr6.lt) goto loc_82362120;
loc_82362160:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8237ef90
	ctx.lr = 0x82362168;
	sub_8237EF90(ctx, base);
	// li r4,416
	ctx.r4.s64 = 416;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82362b98
	ctx.lr = 0x82362174;
	sub_82362B98(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x82362180;
	sub_82362B98(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82362b98
	ctx.lr = 0x8236218C;
	sub_82362B98(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x82362198;
	sub_82362B98(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x823621ac
	if (ctx.cr6.eq) goto loc_823621AC;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82362b98
	ctx.lr = 0x823621AC;
	sub_82362B98(ctx, base);
loc_823621AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361F20) {
	__imp__sub_82361F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823621B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x823621C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823621E0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x823621e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823621E0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r26,-1
	ctx.r29.s64 = ctx.r26.s64 + -1;
	// addi r25,r26,32
	ctx.r25.s64 = ctx.r26.s64 + 32;
loc_823621F4:
	// li r11,16
	ctx.r11.s64 = 16;
loc_823621F8:
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82362218
	if (!ctx.cr6.eq) goto loc_82362218;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x823621f8
	if (ctx.cr0.gt) goto loc_823621F8;
loc_82362218:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82380638
	ctx.lr = 0x8236222C;
	sub_82380638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236231c
	if (!ctx.cr6.eq) goto loc_8236231C;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpwi cr6,r27,48
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 48, ctx.xer);
	// blt cr6,0x823621f4
	if (ctx.cr6.lt) goto loc_823621F4;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// addi r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// addi r5,r31,5
	ctx.r5.s64 = ctx.r31.s64 + 5;
	// subf r4,r4,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r4.s64;
loc_82362270:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r31,r8,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r30,r7,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r29,r6,r10
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r28,r5,r10
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// lbz r24,1(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r23,2(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r22,3(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// xor r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r24.u64;
	// xor r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r23.u64;
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// xor r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r22.u64;
	// lbz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r23,5(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbzx r22,r4,r11
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// xor r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r24.u64;
	// xor r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// xor r27,r22,r27
	ctx.r27.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r30,r29,24
	ctx.r30.u64 = ctx.r29.u32 & 0xFF;
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// clrlwi r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// bdnz 0x82362270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362270;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237f038
	ctx.lr = 0x82362300;
	sub_8237F038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236231c
	if (!ctx.cr6.eq) goto loc_8236231C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82635430
	ctx.lr = 0x8236231C;
	sub_82635430(ctx, base);
loc_8236231C:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x82362328;
	sub_82362B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823621B8) {
	__imp__sub_823621B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362334) {
	__imp__sub_82362334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82362340;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,384
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 384, ctx.xer);
	// ble cr6,0x8236236c
	if (!ctx.cr6.gt) goto loc_8236236C;
loc_82362360:
	// li r3,-56
	ctx.r3.s64 = -56;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236236C:
	// subfic r11,r31,384
	ctx.xer.ca = ctx.r31.u32 <= 384;
	ctx.r11.s64 = 384 - ctx.r31.s64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82362360
	if (ctx.cr6.gt) goto loc_82362360;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82362360
	if (ctx.cr6.gt) goto loc_82362360;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826344d0
	ctx.lr = 0x82362394;
	sub_826344D0(ctx, base);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,316(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823623AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823623c0
	if (ctx.cr6.eq) goto loc_823623C0;
loc_823623B4:
	// li r3,-52
	ctx.r3.s64 = -52;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823623C0:
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823623f4
	if (ctx.cr6.eq) goto loc_823623F4;
	// lwz r10,312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,316(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823623E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823623b4
	if (!ctx.cr6.eq) goto loc_823623B4;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_823623F4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8236241c
	if (ctx.cr6.eq) goto loc_8236241C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8236241c
	if (ctx.cr6.eq) goto loc_8236241C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x82362418;
	sub_82635430(ctx, base);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
loc_8236241C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361f20
	ctx.lr = 0x8236242C;
	sub_82361F20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362458
	if (!ctx.cr6.eq) goto loc_82362458;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823621b8
	ctx.lr = 0x82362444;
	sub_823621B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362458
	if (!ctx.cr6.eq) goto loc_82362458;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82362458:
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x82362464;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362338) {
	__imp__sub_82362338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82362478;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8237ef80
	ctx.lr = 0x823624B4;
	sub_8237EF80(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r26,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r26.u32);
	// stw r25,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823624d0
	if (!ctx.cr6.eq) goto loc_823624D0;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_823624D0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823624e4
	if (ctx.cr6.lt) goto loc_823624E4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x823624f8
	goto loc_823624F8;
loc_823624E4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x823624f8
	if (!ctx.cr6.lt) goto loc_823624F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_823624F8:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237f038
	ctx.lr = 0x82362508;
	sub_8237F038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362524
	if (!ctx.cr6.eq) goto loc_82362524;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362338
	ctx.lr = 0x82362524;
	sub_82362338(ctx, base);
loc_82362524:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362470) {
	__imp__sub_82362470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236252C) {
	__imp__sub_8236252C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82362538;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// ble cr6,0x82362564
	if (!ctx.cr6.gt) goto loc_82362564;
	// li r3,-54
	ctx.r3.s64 = -54;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82362564:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// ble cr6,0x82362578
	if (!ctx.cr6.gt) goto loc_82362578;
	// li r3,-56
	ctx.r3.s64 = -56;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82362578:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82362588:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82362588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362588;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823625ac
	if (ctx.cr6.gt) goto loc_823625AC;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823625c8
	if (ctx.cr6.eq) goto loc_823625C8;
loc_823625AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362338
	ctx.lr = 0x823625B8;
	sub_82362338(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823625fc
	if (ctx.cr6.eq) goto loc_823625FC;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823625C8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823625fc
	if (ctx.cr6.eq) goto loc_823625FC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82361f20
	ctx.lr = 0x823625D8;
	sub_82361F20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823626a0
	if (!ctx.cr6.eq) goto loc_823626A0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823621b8
	ctx.lr = 0x823625F0;
	sub_823621B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823626a0
	if (!ctx.cr6.eq) goto loc_823626A0;
loc_823625FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236267c
	if (ctx.cr6.eq) goto loc_8236267C;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
	// addi r27,r28,32
	ctx.r27.s64 = ctx.r28.s64 + 32;
loc_8236260C:
	// li r11,16
	ctx.r11.s64 = 16;
loc_82362610:
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82362630
	if (!ctx.cr6.eq) goto loc_82362630;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82362610
	if (ctx.cr0.gt) goto loc_82362610;
loc_82362630:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82380638
	ctx.lr = 0x82362644;
	sub_82380638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823626a0
	if (!ctx.cr6.eq) goto loc_823626A0;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// li r31,16
	ctx.r31.s64 = 16;
	// bgt cr6,0x82362660
	if (ctx.cr6.gt) goto loc_82362660;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82362660:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82635430
	ctx.lr = 0x82362670;
	sub_82635430(ctx, base);
	// subf. r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r26,r31,r26
	ctx.r26.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bne 0x8236260c
	if (!ctx.cr0.eq) goto loc_8236260C;
loc_8236267C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823621b8
	ctx.lr = 0x82362688;
	sub_823621B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823626a0
	if (!ctx.cr6.eq) goto loc_823626A0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_823626A0:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x823626AC;
	sub_82362B98(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x823626B8;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362530) {
	__imp__sub_82362530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823626C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823626C4) {
	__imp__sub_823626C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823626C8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82362530
	sub_82362530(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823626C8) {
	__imp__sub_823626C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823626D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823626D4) {
	__imp__sub_823626D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823626D8) {
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
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8236271c
	if (ctx.cr6.eq) goto loc_8236271C;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82380ff0
	ctx.lr = 0x82362700;
	sub_82380FF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,400
	ctx.r4.s64 = 400;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x82362b98
	ctx.lr = 0x82362714;
	sub_82362B98(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8236271C:
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

PPC_WEAK_FUNC(sub_823626D8) {
	__imp__sub_823626D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82362738;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// ble cr6,0x8236277c
	if (!ctx.cr6.gt) goto loc_8236277C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82381c68
	ctx.lr = 0x82362768;
	sub_82381C68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823627e4
	if (!ctx.cr6.eq) goto loc_823627E4;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// li r30,64
	ctx.r30.s64 = 64;
loc_8236277C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823627a8
	if (!ctx.cr6.eq) goto loc_823627A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82381010
	ctx.lr = 0x8236279C;
	sub_82381010(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823627e4
	if (!ctx.cr6.eq) goto loc_823627E4;
loc_823627A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82381848
	ctx.lr = 0x823627C4;
	sub_82381848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823627e4
	if (!ctx.cr6.eq) goto loc_823627E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82381848
	ctx.lr = 0x823627E0;
	sub_82381848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823627E4:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x823627F0;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362730) {
	__imp__sub_82362730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823627FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823627FC) {
	__imp__sub_823627FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82362808;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82362830
	if (!ctx.cr6.eq) goto loc_82362830;
	// li r3,-64
	ctx.r3.s64 = -64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82362830:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823628d0
	if (!ctx.cr6.gt) goto loc_823628D0;
	// addi r31,r28,228
	ctx.r31.s64 = ctx.r28.s64 + 228;
loc_82362840:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82362850
	if (!ctx.cr6.eq) goto loc_82362850;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82362850:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82362870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823628d4
	if (!ctx.cr6.eq) goto loc_823628D4;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823628b4
	if (ctx.cr6.eq) goto loc_823628B4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362730
	ctx.lr = 0x82362898;
	sub_82362730(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823628e0
	if (!ctx.cr6.eq) goto loc_823628E0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823628B4:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82362840
	if (ctx.cr6.lt) goto loc_82362840;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x823628d4
	if (!ctx.cr6.eq) goto loc_823628D4;
loc_823628D0:
	// li r30,-61
	ctx.r30.s64 = -61;
loc_823628D4:
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x823628E0;
	sub_82362B98(ctx, base);
loc_823628E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362800) {
	__imp__sub_82362800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823628EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823628EC) {
	__imp__sub_823628EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823628F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x823628F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// ble cr6,0x82362924
	if (!ctx.cr6.gt) goto loc_82362924;
	// li r3,-60
	ctx.r3.s64 = -60;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82362924:
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bgt cr6,0x82362a90
	if (ctx.cr6.gt) goto loc_82362A90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362800
	ctx.lr = 0x82362938;
	sub_82362800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362a78
	if (!ctx.cr6.eq) goto loc_82362A78;
	// lwz r11,224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82362924
	if (!ctx.cr6.gt) goto loc_82362924;
	// addi r28,r29,236
	ctx.r28.s64 = ctx.r29.s64 + 236;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82362964:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subfc r5,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r5.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// subf r3,r4,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r4.s64;
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// bne cr6,0x8236298c
	if (!ctx.cr6.eq) goto loc_8236298C;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8236298C:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bdnz 0x82362964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362964;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82362924
	if (ctx.cr6.eq) goto loc_82362924;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// blt cr6,0x82362924
	if (ctx.cr6.lt) goto loc_82362924;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823629B4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x823629b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823629B4;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82381930
	ctx.lr = 0x823629CC;
	sub_82381930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362a78
	if (!ctx.cr6.eq) goto loc_82362A78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82380ff0
	ctx.lr = 0x823629E0;
	sub_82380FF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82380fe0
	ctx.lr = 0x823629E8;
	sub_82380FE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82381010
	ctx.lr = 0x823629F4;
	sub_82381010(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362a78
	if (!ctx.cr6.eq) goto loc_82362A78;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82381848
	ctx.lr = 0x82362A10;
	sub_82381848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362a78
	if (!ctx.cr6.eq) goto loc_82362A78;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82381c68
	ctx.lr = 0x82362A30;
	sub_82381C68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362a78
	if (!ctx.cr6.eq) goto loc_82362A78;
	// lwz r10,224(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82362a64
	if (!ctx.cr6.gt) goto loc_82362A64;
	// addi r10,r28,-20
	ctx.r10.s64 = ctx.r28.s64 + -20;
loc_82362A50:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r27,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r10.u32 = ea;
	// lwz r9,224(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82362a50
	if (ctx.cr6.lt) goto loc_82362A50;
loc_82362A64:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82635430
	ctx.lr = 0x82362A74;
	sub_82635430(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82362A78:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x82362A84;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82362A90:
	// li r31,-60
	ctx.r31.s64 = -60;
	// b 0x82362a78
	goto loc_82362A78;
}

PPC_WEAK_FUNC(sub_823628F0) {
	__imp__sub_823628F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362A98) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r30.u32);
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// bl 0x826344d0
	ctx.lr = 0x82362AC8;
	sub_826344D0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82380fe0
	ctx.lr = 0x82362AD4;
	sub_82380FE0(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x82362b28
	if (!ctx.cr6.lt) goto loc_82362B28;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-120
	ctx.r7.s64 = ctx.r9.s64 + -120;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r7.u32);
	// stw r30,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r30.u32);
	// stwx r6,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r6.u32);
	// stw r30,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r30.u32);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r5.u32);
loc_82362B28:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x82362b80
	if (!ctx.cr6.lt) goto loc_82362B80;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,24728
	ctx.r8.s64 = ctx.r9.s64 + 24728;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,32
	ctx.r7.s64 = 32;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r8.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r30.u32);
	// stw r5,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r5.u32);
	// stwx r7,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
loc_82362B80:
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

PPC_WEAK_FUNC(sub_82362A98) {
	__imp__sub_82362A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362B98) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82362B98) {
	__imp__sub_82362B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362BB8) {
	__imp__sub_82362BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362BBC) {
	__imp__sub_82362BBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362BC0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826386b0
	ctx.lr = 0x82362BE0;
	sub_826386B0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82362BC0) {
	__imp__sub_82362BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362C00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82639388
	sub_82639388(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362C00) {
	__imp__sub_82362C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362C04) {
	__imp__sub_82362C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// lwz r8,3704(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3704);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82362C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362C08) {
	__imp__sub_82362C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362C5C) {
	__imp__sub_82362C5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362C60) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362c88
	if (ctx.cr6.eq) goto loc_82362C88;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82362c88
	if (ctx.cr6.eq) goto loc_82362C88;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82362c88
	if (ctx.cr6.eq) goto loc_82362C88;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x8263ab30
	sub_8263AB30(ctx, base);
	return;
loc_82362C88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362C60) {
	__imp__sub_82362C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362C90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3708, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362C90) {
	__imp__sub_82362C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362CA4) {
	__imp__sub_82362CA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x82362CB0;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x8238dd80
	ctx.lr = 0x82362CD8;
	sub_8238DD80(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82362CDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82362cdc
	if (!ctx.cr6.eq) goto loc_82362CDC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r19,r11,20
	ctx.r19.s64 = ctx.r11.s64 + 20;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x826365a8
	ctx.lr = 0x82362D0C;
	sub_826365A8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82362d20
	if (!ctx.cr6.eq) goto loc_82362D20;
	// li r31,-32512
	ctx.r31.s64 = -32512;
	// b 0x8236308c
	goto loc_8236308C;
loc_82362D20:
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r25,r10,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r10,r25,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r25.s64;
	// add r23,r10,r29
	ctx.r23.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82362D34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82362d34
	if (!ctx.cr6.eq) goto loc_82362D34;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r26,r22,20
	ctx.r26.s64 = ctx.r22.s64 + 20;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x82362D64;
	sub_82635430(ctx, base);
	// add r11,r31,r22
	ctx.r11.u64 = ctx.r31.u64 + ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82635430
	ctx.lr = 0x82362D78;
	sub_82635430(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// add r20,r31,r30
	ctx.r20.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x8235cac8
	ctx.lr = 0x82362D84;
	sub_8235CAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82362d98
	if (!ctx.cr6.eq) goto loc_82362D98;
loc_82362D90:
	// li r31,-27648
	ctx.r31.s64 = -27648;
	// b 0x8236308c
	goto loc_8236308C;
loc_82362D98:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cd48
	ctx.lr = 0x82362DA4;
	sub_8235CD48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d0a0
	ctx.lr = 0x82362DC0;
	sub_8235D0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x82362DDC;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// addi r29,r22,4
	ctx.r29.s64 = ctx.r22.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235d228
	ctx.lr = 0x82362DF8;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82362ef0
	if (ctx.cr6.eq) goto loc_82362EF0;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// subfic r27,r21,16
	ctx.xer.ca = ctx.r21.u32 <= 16;
	ctx.r27.s64 = 16 - ctx.r21.s64;
loc_82362E18:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d2e0
	ctx.lr = 0x82362E20;
	sub_8235D2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// addi r5,r20,16
	ctx.r5.s64 = ctx.r20.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x82362E3C;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d228
	ctx.lr = 0x82362E54;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d2e0
	ctx.lr = 0x82362E68;
	sub_8235D2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x82362E84;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d228
	ctx.lr = 0x82362E9C;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// clrlwi r10,r24,28
	ctx.r10.u64 = ctx.r24.u32 & 0xF;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82362ebc
	if (ctx.cr6.gt) goto loc_82362EBC;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82362EBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82362ee0
	if (ctx.cr6.eq) goto loc_82362EE0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82362ED0:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stbx r9,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82362ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362ED0;
loc_82362EE0:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82362e18
	if (ctx.cr6.lt) goto loc_82362E18;
loc_82362EF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cb50
	ctx.lr = 0x82362EF8;
	sub_8235CB50(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8235cac8
	ctx.lr = 0x82362F00;
	sub_8235CAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362d90
	if (ctx.cr6.eq) goto loc_82362D90;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cd48
	ctx.lr = 0x82362F18;
	sub_8235CD48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d0a0
	ctx.lr = 0x82362F34;
	sub_8235D0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x82362F50;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d228
	ctx.lr = 0x82362F68;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8236308c
	if (ctx.cr6.eq) goto loc_8236308C;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// subfic r27,r21,20
	ctx.xer.ca = ctx.r21.u32 <= 20;
	ctx.r27.s64 = 20 - ctx.r21.s64;
	// ori r29,r11,52429
	ctx.r29.u64 = ctx.r11.u64 | 52429;
loc_82362F90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d2e0
	ctx.lr = 0x82362F98;
	sub_8235D2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// addi r5,r20,20
	ctx.r5.s64 = ctx.r20.s64 + 20;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x82362FB4;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d228
	ctx.lr = 0x82362FCC;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d2e0
	ctx.lr = 0x82362FE0;
	sub_8235D2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x82362FFC;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d228
	ctx.lr = 0x82363014;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236308c
	if (!ctx.cr6.eq) goto loc_8236308C;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82363048
	if (!ctx.cr6.gt) goto loc_82363048;
	// mulhwu r11,r24,r29
	ctx.r11.u64 = (uint64_t(ctx.r24.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r9.s64;
	// b 0x8236304c
	goto loc_8236304C;
loc_82363048:
	// li r10,20
	ctx.r10.s64 = 20;
loc_8236304C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236307c
	if (ctx.cr6.eq) goto loc_8236307C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82363060:
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stbx r6,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82363060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363060;
loc_8236307C:
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82362f90
	if (ctx.cr6.lt) goto loc_82362F90;
loc_8236308C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cb50
	ctx.lr = 0x82363094;
	sub_8235CB50(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82362b98
	ctx.lr = 0x823630A0;
	sub_82362B98(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x823630AC;
	sub_82362B98(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82634d40
	ctx.lr = 0x823630B4;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362CA8) {
	__imp__sub_82362CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823630C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x823630C8;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// bl 0x8238dd80
	ctx.lr = 0x823630F4;
	sub_8238DD80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235cac8
	ctx.lr = 0x823630FC;
	sub_8235CAC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82363114
	if (!ctx.cr6.eq) goto loc_82363114;
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82363114:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d358
	ctx.lr = 0x8236311C;
	sub_8235D358(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82363124:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82363124
	if (!ctx.cr6.eq) goto loc_82363124;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r20,r11,r29
	ctx.r20.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x826365a8
	ctx.lr = 0x82363154;
	sub_826365A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82363168
	if (!ctx.cr6.eq) goto loc_82363168;
	// li r31,-32512
	ctx.r31.s64 = -32512;
	// b 0x8236331c
	goto loc_8236331C;
loc_82363168:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8236316C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236316c
	if (!ctx.cr6.eq) goto loc_8236316C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r28,r25,r30
	ctx.r28.u64 = ctx.r25.u64 + ctx.r30.u64;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x8236319C;
	sub_82635430(ctx, base);
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x823631B0;
	sub_82635430(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r27,r31,r29
	ctx.r27.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x8235cd48
	ctx.lr = 0x823631C4;
	sub_8235CD48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d0a0
	ctx.lr = 0x823631E0;
	sub_8235D0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x823631FC;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d228
	ctx.lr = 0x82363214;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8236331c
	if (ctx.cr6.eq) goto loc_8236331C;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// subf r26,r22,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r22.s64;
loc_82363234:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d2e0
	ctx.lr = 0x8236323C;
	sub_8235D2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// add r5,r27,r30
	ctx.r5.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x82363258;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d228
	ctx.lr = 0x82363270;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d2e0
	ctx.lr = 0x82363284;
	sub_8235D2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x823632A0;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d228
	ctx.lr = 0x823632B8;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236331c
	if (!ctx.cr6.eq) goto loc_8236331C;
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x823632e4
	if (!ctx.cr6.gt) goto loc_823632E4;
	// divwu r11,r21,r30
	ctx.r11.u32 = ctx.r21.u32 / ctx.r30.u32;
	// twllei r30,0
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf r10,r10,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r10.s64;
	// b 0x823632e8
	goto loc_823632E8;
loc_823632E4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823632E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236330c
	if (ctx.cr6.eq) goto loc_8236330C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_823632FC:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stbx r9,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823632fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823632FC;
loc_8236330C:
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82363234
	if (ctx.cr6.lt) goto loc_82363234;
loc_8236331C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cb50
	ctx.lr = 0x82363324;
	sub_8235CB50(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82363338
	if (ctx.cr6.eq) goto loc_82363338;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82362b98
	ctx.lr = 0x82363338;
	sub_82362B98(ctx, base);
loc_82363338:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x82363344;
	sub_82362B98(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82634d40
	ctx.lr = 0x8236334C;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823630C0) {
	__imp__sub_823630C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363358) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x823630c0
	sub_823630C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363358) {
	__imp__sub_82363358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236337C) {
	__imp__sub_8236337C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363380) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x823630c0
	sub_823630C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363380) {
	__imp__sub_82363380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823633A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823633A4) {
	__imp__sub_823633A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823633A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823633fc
	if (ctx.cr6.eq) goto loc_823633FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823633f0
	if (ctx.cr6.eq) goto loc_823633F0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823633e4
	if (ctx.cr6.eq) goto loc_823633E4;
	// li r3,-28800
	ctx.r3.s64 = -28800;
	// blr 
	return;
loc_823633E4:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,13144
	ctx.r11.s64 = ctx.r11.s64 + 13144;
	// b 0x82363404
	goto loc_82363404;
loc_823633F0:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,13184
	ctx.r11.s64 = ctx.r11.s64 + 13184;
	// b 0x82363404
	goto loc_82363404;
loc_823633FC:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,11432
	ctx.r11.s64 = ctx.r11.s64 + 11432;
loc_82363404:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_823633A8) {
	__imp__sub_823633A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634428
	ctx.lr = 0x82363418;
	__savegprlr_16(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// addi r3,r3,212
	ctx.r3.s64 = ctx.r3.s64 + 212;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// bl 0x82635430
	ctx.lr = 0x82363454;
	sub_82635430(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82391b98
	ctx.lr = 0x8236345C;
	sub_82391B98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82363498
	if (!ctx.cr6.eq) goto loc_82363498;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r3,588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,16900
	ctx.r7.s64 = ctx.r11.s64 + 16900;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1017
	ctx.r6.s64 = 1017;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236348C;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82363498:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8238ffd0
	ctx.lr = 0x823634A0;
	sub_8238FFD0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823634dc
	if (!ctx.cr6.eq) goto loc_823634DC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r3,588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// addi r7,r11,16804
	ctx.r7.s64 = ctx.r11.s64 + 16804;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x823634D0;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_823634DC:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8235cac8
	ctx.lr = 0x823634E4;
	sub_8235CAC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82363520
	if (!ctx.cr6.eq) goto loc_82363520;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r3,588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// addi r7,r11,16768
	ctx.r7.s64 = ctx.r11.s64 + 16768;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,1031
	ctx.r6.s64 = 1031;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82363514;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82363520:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r5,r11,16752
	ctx.r5.s64 = ctx.r11.s64 + 16752;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x82363548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363584
	if (ctx.cr6.eq) goto loc_82363584;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r3,588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,16748
	ctx.r7.s64 = ctx.r11.s64 + 16748;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,1059
	ctx.r6.s64 = 1059;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82363578;
	sub_823912A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82363584:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82391bd0
	ctx.lr = 0x8236358C;
	sub_82391BD0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r23,588(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r22,r11,16836
	ctx.r22.s64 = ctx.r11.s64 + 16836;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r7,r10,16728
	ctx.r7.s64 = ctx.r10.s64 + 16728;
	// li r6,1064
	ctx.r6.s64 = 1064;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823911b8
	ctx.lr = 0x823635B8;
	sub_823911B8(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r9,16712
	ctx.r7.s64 = ctx.r9.s64 + 16712;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r6,1065
	ctx.r6.s64 = 1065;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82391350
	ctx.lr = 0x823635DC;
	sub_82391350(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r8,16696
	ctx.r7.s64 = ctx.r8.s64 + 16696;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// li r6,1066
	ctx.r6.s64 = 1066;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82391350
	ctx.lr = 0x82363600;
	sub_82391350(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r7,16684
	ctx.r7.s64 = ctx.r7.s64 + 16684;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r6,1067
	ctx.r6.s64 = 1067;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82391350
	ctx.lr = 0x82363624;
	sub_82391350(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r6,8(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r16,4
	ctx.r16.s64 = 4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// rlwinm r26,r6,29,3,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82363790
	if (ctx.cr6.eq) goto loc_82363790;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82363790
	if (ctx.cr6.eq) goto loc_82363790;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82363790
	if (ctx.cr6.eq) goto loc_82363790;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82363684
	if (ctx.cr6.eq) goto loc_82363684;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82363684
	if (ctx.cr6.eq) goto loc_82363684;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,1193
	ctx.r6.s64 = 1193;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823911b8
	ctx.lr = 0x82363678;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82363684:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8235cd48
	ctx.lr = 0x82363694;
	sub_8235CD48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236376c
	if (!ctx.cr6.eq) goto loc_8236376C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8235cd48
	ctx.lr = 0x823636B0;
	sub_8235CD48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236376c
	if (!ctx.cr6.eq) goto loc_8236376C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d358
	ctx.lr = 0x823636C4;
	sub_8235D358(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bne cr6,0x823636dc
	if (!ctx.cr6.eq) goto loc_823636DC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_823636DC:
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x823636fc
	if (!ctx.cr6.eq) goto loc_823636FC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823637e8
	goto loc_823637E8;
loc_823636FC:
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x82363714
	if (!ctx.cr6.eq) goto loc_82363714;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82363730
	goto loc_82363730;
loc_82363714:
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
loc_82363730:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x823637e8
	if (ctx.cr6.eq) goto loc_823637E8;
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// beq cr6,0x823637e8
	if (ctx.cr6.eq) goto loc_823637E8;
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 2, ctx.xer);
	// beq cr6,0x82363758
	if (ctx.cr6.eq) goto loc_82363758;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x82363758
	if (ctx.cr6.eq) goto loc_82363758;
	// li r6,1185
	ctx.r6.s64 = 1185;
	// b 0x82363b68
	goto loc_82363B68;
loc_82363758:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823637e8
	goto loc_823637E8;
loc_8236376C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r11,16644
	ctx.r7.s64 = ctx.r11.s64 + 16644;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1121
	ctx.r6.s64 = 1121;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236378C;
	sub_823912A0(ctx, base);
	// b 0x82363b84
	goto loc_82363B84;
loc_82363790:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r7,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,4(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bne cr6,0x823637d0
	if (!ctx.cr6.eq) goto loc_823637D0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x823637d4
	goto loc_823637D4;
loc_823637D0:
	// stw r16,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r16.u32);
loc_823637D4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_823637E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r9,16596
	ctx.r7.s64 = ctx.r9.s64 + 16596;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r6,1201
	ctx.r6.s64 = 1201;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823911b8
	ctx.lr = 0x82363818;
	sub_823911B8(ctx, base);
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363874
	if (!ctx.cr6.eq) goto loc_82363874;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// add r27,r28,r7
	ctx.r27.u64 = ctx.r28.u64 + ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82363858
	if (!ctx.cr6.eq) goto loc_82363858;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82363858:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r24,r26
	ctx.r4.u64 = ctx.r24.u64 + ctx.r26.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82635430
	ctx.lr = 0x82363868;
	sub_82635430(ctx, base);
	// add r11,r29,r24
	ctx.r11.u64 = ctx.r29.u64 + ctx.r24.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// b 0x823638c8
	goto loc_823638C8;
loc_82363874:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82363b64
	if (!ctx.cr6.eq) goto loc_82363B64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r30,r28,r7
	ctx.r30.u64 = ctx.r28.u64 + ctx.r7.u64;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x823638b0
	if (!ctx.cr6.eq) goto loc_823638B0;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_823638B0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r25,r26
	ctx.r4.u64 = ctx.r25.u64 + ctx.r26.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82635430
	ctx.lr = 0x823638C0;
	sub_82635430(ctx, base);
	// add r11,r29,r25
	ctx.r11.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
loc_823638C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82635430
	ctx.lr = 0x823638D4;
	sub_82635430(ctx, base);
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// blt cr6,0x82363b5c
	if (ctx.cr6.lt) goto loc_82363B5C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8236391c
	if (ctx.cr6.eq) goto loc_8236391C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8235d0a0
	ctx.lr = 0x823638F4;
	sub_8235D0A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82363b84
	if (!ctx.cr6.eq) goto loc_82363B84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8235d0a0
	ctx.lr = 0x82363910;
	sub_8235D0A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82363b84
	if (!ctx.cr6.eq) goto loc_82363B84;
loc_8236391C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236394c
	if (ctx.cr6.eq) goto loc_8236394C;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8236394C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236394C:
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r7,148(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823639d0
	if (ctx.cr6.eq) goto loc_823639D0;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r10,r11,11432
	ctx.r10.s64 = ctx.r11.s64 + 11432;
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82363974
	if (!ctx.cr6.eq) goto loc_82363974;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823639a4
	goto loc_823639A4;
loc_82363974:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r10,r11,13184
	ctx.r10.s64 = ctx.r11.s64 + 13184;
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8236398c
	if (!ctx.cr6.eq) goto loc_8236398C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823639a4
	goto loc_823639A4;
loc_8236398C:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r10,r11,13144
	ctx.r10.s64 = ctx.r11.s64 + 13144;
	// subf r8,r17,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r17.s64;
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r16
	ctx.r11.u64 = ctx.r4.u64 & ctx.r16.u64;
loc_823639A4:
	// lwz r3,152(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r20,32
	ctx.r9.s64 = ctx.r20.s64 + 32;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x823639D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823639D0:
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82391110
	ctx.lr = 0x823639E0;
	sub_82391110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363a10
	if (ctx.cr6.eq) goto loc_82363A10;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r11,16572
	ctx.r7.s64 = ctx.r11.s64 + 16572;
	// li r6,1367
	ctx.r6.s64 = 1367;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823912a0
	ctx.lr = 0x82363A0C;
	sub_823912A0(ctx, base);
	// b 0x82363b84
	goto loc_82363B84;
loc_82363A10:
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391110
	ctx.lr = 0x82363A20;
	sub_82391110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363a50
	if (ctx.cr6.eq) goto loc_82363A50;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r11,16572
	ctx.r7.s64 = ctx.r11.s64 + 16572;
	// li r6,1410
	ctx.r6.s64 = 1410;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823912a0
	ctx.lr = 0x82363A4C;
	sub_823912A0(ctx, base);
	// b 0x82363b84
	goto loc_82363B84;
loc_82363A50:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823900d8
	ctx.lr = 0x82363A64;
	sub_823900D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363a94
	if (ctx.cr6.eq) goto loc_82363A94;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r11,16548
	ctx.r7.s64 = ctx.r11.s64 + 16548;
	// li r6,1417
	ctx.r6.s64 = 1417;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823912a0
	ctx.lr = 0x82363A90;
	sub_823912A0(ctx, base);
	// b 0x82363b84
	goto loc_82363B84;
loc_82363A94:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823900d8
	ctx.lr = 0x82363AA8;
	sub_823900D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363ad8
	if (ctx.cr6.eq) goto loc_82363AD8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r11,16548
	ctx.r7.s64 = ctx.r11.s64 + 16548;
	// li r6,1424
	ctx.r6.s64 = 1424;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823912a0
	ctx.lr = 0x82363AD4;
	sub_823912A0(ctx, base);
	// b 0x82363b84
	goto loc_82363B84;
loc_82363AD8:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82363b84
	if (!ctx.cr6.eq) goto loc_82363B84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82390c68
	ctx.lr = 0x82363AF0;
	sub_82390C68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363b20
	if (ctx.cr6.eq) goto loc_82363B20;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r11,16516
	ctx.r7.s64 = ctx.r11.s64 + 16516;
	// li r6,1432
	ctx.r6.s64 = 1432;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823912a0
	ctx.lr = 0x82363B1C;
	sub_823912A0(ctx, base);
	// b 0x82363b84
	goto loc_82363B84;
loc_82363B20:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82390c68
	ctx.lr = 0x82363B2C;
	sub_82390C68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363b84
	if (ctx.cr6.eq) goto loc_82363B84;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r11,16516
	ctx.r7.s64 = ctx.r11.s64 + 16516;
	// li r6,1438
	ctx.r6.s64 = 1438;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823912a0
	ctx.lr = 0x82363B58;
	sub_823912A0(ctx, base);
	// b 0x82363b84
	goto loc_82363B84;
loc_82363B5C:
	// li r6,1281
	ctx.r6.s64 = 1281;
	// b 0x82363b68
	goto loc_82363B68;
loc_82363B64:
	// li r6,1243
	ctx.r6.s64 = 1243;
loc_82363B68:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823911b8
	ctx.lr = 0x82363B80;
	sub_823911B8(ctx, base);
	// li r30,-27648
	ctx.r30.s64 = -27648;
loc_82363B84:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x82363B90;
	sub_82362B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363410) {
	__imp__sub_82363410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363B9C) {
	__imp__sub_82363B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82363BA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r29,r11,16712
	ctx.r29.s64 = ctx.r11.s64 + 16712;
	// addi r27,r3,1128
	ctx.r27.s64 = ctx.r3.s64 + 1128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82363c04
	if (ctx.cr6.eq) goto loc_82363C04;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,17020
	ctx.r7.s64 = ctx.r11.s64 + 17020;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,1580
	ctx.r6.s64 = 1580;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823911b8
	ctx.lr = 0x82363BF8;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82363C04:
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// addi r26,r11,16836
	ctx.r26.s64 = ctx.r11.s64 + 16836;
	// bne cr6,0x82363c60
	if (!ctx.cr6.eq) goto loc_82363C60;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r11,16996
	ctx.r29.s64 = ctx.r11.s64 + 16996;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// bctrl 
	ctx.lr = 0x82363C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r8,16956
	ctx.r7.s64 = ctx.r8.s64 + 16956;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r6,1591
	ctx.r6.s64 = 1591;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82391350
	ctx.lr = 0x82363C60;
	sub_82391350(ctx, base);
loc_82363C60:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,1192
	ctx.r30.s64 = ctx.r31.s64 + 1192;
	// li r9,48
	ctx.r9.s64 = 48;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82363cc4
	if (ctx.cr6.eq) goto loc_82363CC4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r11,16748
	ctx.r7.s64 = ctx.r11.s64 + 16748;
	// li r6,1648
	ctx.r6.s64 = 1648;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82363CB8;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82363CC4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,16936
	ctx.r7.s64 = ctx.r11.s64 + 16936;
	// li r6,1654
	ctx.r6.s64 = 1654;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82391350
	ctx.lr = 0x82363CE0;
	sub_82391350(ctx, base);
	// li r4,1060
	ctx.r4.s64 = 1060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362b98
	ctx.lr = 0x82363CEC;
	sub_82362B98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363BA0) {
	__imp__sub_82363BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82363D00;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r28,r11,16836
	ctx.r28.s64 = ctx.r11.s64 + 16836;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r10,17096
	ctx.r7.s64 = ctx.r10.s64 + 17096;
	// li r6,1809
	ctx.r6.s64 = 1809;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82363D30;
	sub_823911B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82385a08
	ctx.lr = 0x82363D38;
	sub_82385A08(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82381cf0
	ctx.lr = 0x82363D40;
	sub_82381CF0(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// bl 0x82385a30
	ctx.lr = 0x82363D50;
	sub_82385A30(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,708
	ctx.r4.s64 = ctx.r11.s64 + 708;
	// bl 0x82383438
	ctx.lr = 0x82363D60;
	sub_82383438(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823867a0
	ctx.lr = 0x82363D6C;
	sub_823867A0(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823831c8
	ctx.lr = 0x82363D78;
	sub_823831C8(ctx, base);
	// li r9,36
	ctx.r9.s64 = 36;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r8,17068
	ctx.r7.s64 = ctx.r8.s64 + 17068;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r6,1822
	ctx.r6.s64 = 1822;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82391350
	ctx.lr = 0x82363DA0;
	sub_82391350(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r7,17052
	ctx.r7.s64 = ctx.r7.s64 + 17052;
	// li r6,1823
	ctx.r6.s64 = 1823;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x82363DBC;
	sub_823911B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82385a18
	ctx.lr = 0x82363DC4;
	sub_82385A18(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82383420
	ctx.lr = 0x82363DCC;
	sub_82383420(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363CF8) {
	__imp__sub_82363CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363DD4) {
	__imp__sub_82363DD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82363DE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8235b930
	ctx.lr = 0x82363DF8;
	sub_8235B930(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r28,r11,16836
	ctx.r28.s64 = ctx.r11.s64 + 16836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r10,17116
	ctx.r7.s64 = ctx.r10.s64 + 17116;
	// li r6,1864
	ctx.r6.s64 = 1864;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82363E1C;
	sub_823911B8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,800
	ctx.r4.s64 = ctx.r11.s64 + 800;
	// bl 0x8235b958
	ctx.lr = 0x82363E2C;
	sub_8235B958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235c828
	ctx.lr = 0x82363E38;
	sub_8235C828(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r8,17068
	ctx.r7.s64 = ctx.r8.s64 + 17068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1871
	ctx.r6.s64 = 1871;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82391350
	ctx.lr = 0x82363E60;
	sub_82391350(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r7,17052
	ctx.r7.s64 = ctx.r7.s64 + 17052;
	// li r6,1872
	ctx.r6.s64 = 1872;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82363E7C;
	sub_823911B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235b940
	ctx.lr = 0x82363E84;
	sub_8235B940(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363DD8) {
	__imp__sub_82363DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363E8C) {
	__imp__sub_82363E8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82363E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82380fe0
	ctx.lr = 0x82363EB0;
	sub_82380FE0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r28,r11,16836
	ctx.r28.s64 = ctx.r11.s64 + 16836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r10,17140
	ctx.r7.s64 = ctx.r10.s64 + 17140;
	// li r6,1911
	ctx.r6.s64 = 1911;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82363ED4;
	sub_823911B8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,912
	ctx.r4.s64 = ctx.r11.s64 + 912;
	// bl 0x82381008
	ctx.lr = 0x82363EE4;
	sub_82381008(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82381930
	ctx.lr = 0x82363EF0;
	sub_82381930(ctx, base);
	// li r9,48
	ctx.r9.s64 = 48;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r8,17068
	ctx.r7.s64 = ctx.r8.s64 + 17068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1918
	ctx.r6.s64 = 1918;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82391350
	ctx.lr = 0x82363F18;
	sub_82391350(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r7,17052
	ctx.r7.s64 = ctx.r7.s64 + 17052;
	// li r6,1919
	ctx.r6.s64 = 1919;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82363F34;
	sub_823911B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82380ff0
	ctx.lr = 0x82363F3C;
	sub_82380FF0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363E90) {
	__imp__sub_82363E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363F44) {
	__imp__sub_82363F44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82363F50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,1192
	ctx.r31.s64 = ctx.r11.s64 + 1192;
	// addi r27,r31,1060
	ctx.r27.s64 = ctx.r31.s64 + 1060;
	// lwz r11,476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363fac
	if (ctx.cr6.eq) goto loc_82363FAC;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82363fac
	if (!ctx.cr6.gt) goto loc_82363FAC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r26,476(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// lwz r28,480(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
loc_82363F8C:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82364014
	if (!ctx.cr6.eq) goto loc_82364014;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82363fd8
	if (!ctx.cr6.lt) goto loc_82363FD8;
loc_82363FA0:
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82363FAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82363fd0
	if (ctx.cr6.eq) goto loc_82363FD0;
	// lwz r28,208(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82363fd0
	if (ctx.cr6.eq) goto loc_82363FD0;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// b 0x82363f8c
	goto loc_82363F8C;
loc_82363FD0:
	// li r6,1942
	ctx.r6.s64 = 1942;
	// b 0x823641fc
	goto loc_823641FC;
loc_82363FD8:
	// rlwinm r11,r28,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// stb r28,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r28.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82363fa0
	if (ctx.cr6.lt) goto loc_82363FA0;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82363fa0
	if (ctx.cr6.lt) goto loc_82363FA0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x8236400C;
	sub_826344D0(ctx, base);
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// b 0x82364198
	goto loc_82364198;
loc_82364014:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x82364040
	if (!ctx.cr6.eq) goto loc_82364040;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82363fa0
	if (ctx.cr6.lt) goto loc_82363FA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stbu r10,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r31.u32 = ea;
	// addi r31,r31,49
	ctx.r31.s64 = ctx.r31.s64 + 49;
	// b 0x82364198
	goto loc_82364198;
loc_82364040:
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x823640f4
	if (!ctx.cr6.eq) goto loc_823640F4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// addi r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 2;
	// addi r3,r10,40
	ctx.r3.s64 = ctx.r10.s64 + 40;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r7,76(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// bl 0x82392af8
	ctx.lr = 0x82364070;
	sub_82392AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823640ac
	if (ctx.cr6.eq) goto loc_823640AC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,17200
	ctx.r7.s64 = ctx.r11.s64 + 17200;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,1994
	ctx.r6.s64 = 1994;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823912a0
	ctx.lr = 0x823640A0;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823640AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r7,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r7.u8);
	// addi r7,r10,17192
	ctx.r7.s64 = ctx.r10.s64 + 17192;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r5,r9,16836
	ctx.r5.s64 = ctx.r9.s64 + 16836;
	// addi r8,r10,104
	ctx.r8.s64 = ctx.r10.s64 + 104;
	// li r6,2000
	ctx.r6.s64 = 2000;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// bl 0x823915c8
	ctx.lr = 0x823640F0;
	sub_823915C8(ctx, base);
	// b 0x82364198
	goto loc_82364198;
loc_823640F4:
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x823641f8
	if (!ctx.cr6.eq) goto loc_823641F8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r10,164
	ctx.r3.s64 = ctx.r10.s64 + 164;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r7,76(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// bl 0x823922b8
	ctx.lr = 0x82364124;
	sub_823922B8(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// beq cr6,0x82364160
	if (ctx.cr6.eq) goto loc_82364160;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,17164
	ctx.r7.s64 = ctx.r11.s64 + 17164;
	// li r6,2011
	ctx.r6.s64 = 2011;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823912a0
	ctx.lr = 0x82364154;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82364160:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,2019
	ctx.r6.s64 = 2019;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r7,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r7.u8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r7,r10,164
	ctx.r7.s64 = ctx.r10.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// bl 0x82391b50
	ctx.lr = 0x82364198;
	sub_82391B50(ctx, base);
loc_82364198:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82363fa0
	if (ctx.cr6.lt) goto loc_82363FA0;
	// rlwinm r11,r28,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// stb r28,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r28.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82363fa0
	if (ctx.cr6.lt) goto loc_82363FA0;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82363fa0
	if (ctx.cr6.lt) goto loc_82363FA0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x823641D8;
	sub_82635430(ctx, base);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r11,r10,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r10.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,-1192
	ctx.r9.s64 = ctx.r11.s64 + -1192;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823641F8:
	// li r6,2023
	ctx.r6.s64 = 2023;
loc_823641FC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364218;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363F48) {
	__imp__sub_82363F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364224) {
	__imp__sub_82364224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82364230;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r27,r11,16836
	ctx.r27.s64 = ctx.r11.s64 + 16836;
	// addi r7,r9,17388
	ctx.r7.s64 = ctx.r9.s64 + 17388;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2148
	ctx.r6.s64 = 2148;
	// lwz r30,20(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364260;
	sub_823911B8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823642b0
	if (ctx.cr6.gt) goto loc_823642B0;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17032
	ctx.r12.s64 = ctx.r12.s64 + 17032;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,17124(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17124);
	// lwz r17,17124(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17124);
	// lwz r17,17124(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17124);
	// lwz r17,17124(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17124);
	// lwz r17,17072(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17072);
	// lwz r17,17072(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17072);
	// lwz r17,17124(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17124);
	// lwz r17,17072(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17072);
	// lwz r17,17124(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17124);
	// lwz r17,17124(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17124);
loc_823642B0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,17360
	ctx.r7.s64 = ctx.r11.s64 + 17360;
	// li r6,2151
	ctx.r6.s64 = 2151;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823642CC;
	sub_823911B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364334
	if (!ctx.cr6.eq) goto loc_82364334;
	// lwz r9,232(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82364334
	if (!ctx.cr6.eq) goto loc_82364334;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,17360
	ctx.r7.s64 = ctx.r11.s64 + 17360;
	// li r6,2159
	ctx.r6.s64 = 2159;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236431C;
	sub_823911B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82364334:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82364394
	if (!ctx.cr6.eq) goto loc_82364394;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364354
	if (ctx.cr6.eq) goto loc_82364354;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364360
	if (!ctx.cr6.eq) goto loc_82364360;
loc_82364354:
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236436c
	if (ctx.cr6.eq) goto loc_8236436C;
loc_82364360:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364394
	if (!ctx.cr6.eq) goto loc_82364394;
loc_8236436C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,17332
	ctx.r7.s64 = ctx.r11.s64 + 17332;
	// li r6,2185
	ctx.r6.s64 = 2185;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364388;
	sub_823911B8(ctx, base);
	// li r3,-30080
	ctx.r3.s64 = -30080;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82364394:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823643ac
	if (ctx.cr6.eq) goto loc_823643AC;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823643bc
	if (!ctx.cr6.eq) goto loc_823643BC;
loc_823643AC:
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823643c0
	if (ctx.cr6.eq) goto loc_823643C0;
loc_823643BC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823643C0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,17316
	ctx.r7.s64 = ctx.r11.s64 + 17316;
	// li r6,2191
	ctx.r6.s64 = 2191;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823919c8
	ctx.lr = 0x823643DC;
	sub_823919C8(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r11,7
	ctx.r11.s64 = 7;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823643f8
	if (ctx.cr6.eq) goto loc_823643F8;
	// lwz r10,484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82364408
	if (!ctx.cr6.eq) goto loc_82364408;
loc_823643F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82364474
	if (ctx.cr6.eq) goto loc_82364474;
loc_82364408:
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364474
	if (ctx.cr6.eq) goto loc_82364474;
loc_82364414:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r10,r11,16381
	ctx.xer.ca = ctx.r11.u32 <= 16381;
	ctx.r10.s64 = 16381 - ctx.r11.s64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82364500
	if (ctx.cr6.gt) goto loc_82364500;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r30,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r30,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// addi r28,r11,3
	ctx.r28.s64 = ctx.r11.s64 + 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r8.u8);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r30,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r30.u8);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x82364464;
	sub_82635430(ctx, base);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwz r29,340(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82364414
	if (!ctx.cr6.eq) goto loc_82364414;
loc_82364474:
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r11,-7
	ctx.r10.s64 = ctx.r11.s64 + -7;
	// addi r8,r11,249
	ctx.r8.s64 = ctx.r11.s64 + 249;
	// rlwinm r7,r10,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// li r4,22
	ctx.r4.s64 = 22;
	// stb r7,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r7.u8);
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r6,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r6.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stb r8,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r8.u8);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r4,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r4.u32);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x8236ce40
	ctx.lr = 0x823644C8;
	sub_8236CE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82364534
	if (ctx.cr6.eq) goto loc_82364534;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,17284
	ctx.r7.s64 = ctx.r11.s64 + 17284;
	// li r6,2237
	ctx.r6.s64 = 2237;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x823644F4;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82364500:
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r10,17248
	ctx.r7.s64 = ctx.r10.s64 + 17248;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// li r6,2210
	ctx.r6.s64 = 2210;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364528;
	sub_823911B8(ctx, base);
	// li r3,-29952
	ctx.r3.s64 = -29952;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82364534:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,2241
	ctx.r6.s64 = 2241;
	// addi r7,r11,17224
	ctx.r7.s64 = ctx.r11.s64 + 17224;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82364548;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364228) {
	__imp__sub_82364228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364554) {
	__imp__sub_82364554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x82364560;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x823645b8
	if (ctx.cr6.eq) goto loc_823645B8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,17556
	ctx.r7.s64 = ctx.r11.s64 + 17556;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,2317
	ctx.r6.s64 = 2317;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236459C;
	sub_823911B8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823645AC;
	sub_8236C3F8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_823645B8:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82364878
	if (!ctx.cr6.eq) goto loc_82364878;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x823645e0
	if (ctx.cr6.eq) goto loc_823645E0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823645E0:
	// lwz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82364878
	if (ctx.cr6.lt) goto loc_82364878;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// li r10,12
	ctx.r10.s64 = 12;
	// beq cr6,0x82364600
	if (ctx.cr6.eq) goto loc_82364600;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82364600:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82364870
	if (!ctx.cr6.eq) goto loc_82364870;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x82364634
	if (ctx.cr6.eq) goto loc_82364634;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82364634:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82364870
	if (!ctx.cr6.eq) goto loc_82364870;
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// addi r26,r10,16836
	ctx.r26.s64 = ctx.r10.s64 + 16836;
	// bge cr6,0x823647b0
	if (!ctx.cr6.lt) goto loc_823647B0;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r25,r10,17500
	ctx.r25.s64 = ctx.r10.s64 + 17500;
loc_82364660:
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823647dc
	if (ctx.cr6.gt) goto loc_823647DC;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823647e8
	if (!ctx.cr6.eq) goto loc_823647E8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r28,r7,r8
	ctx.r28.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 128, ctx.xer);
	// blt cr6,0x82364864
	if (ctx.cr6.lt) goto loc_82364864;
	// add r27,r28,r29
	ctx.r27.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82364864
	if (ctx.cr6.gt) goto loc_82364864;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// bne cr6,0x82364764
	if (!ctx.cr6.eq) goto loc_82364764;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82364764
	if (!ctx.cr6.eq) goto loc_82364764;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82364764
	if (!ctx.cr6.eq) goto loc_82364764;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,2391
	ctx.r6.s64 = 2391;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x823646E8;
	sub_823911B8(ctx, base);
	// lwz r31,60(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823647f4
	if (ctx.cr6.eq) goto loc_823647F4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823647f4
	if (!ctx.cr6.eq) goto loc_823647F4;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// beq cr6,0x82364740
	if (ctx.cr6.eq) goto loc_82364740;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82364720:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82364740
	if (!ctx.cr0.eq) goto loc_82364740;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82364720
	if (!ctx.cr6.eq) goto loc_82364720;
loc_82364740:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823647f4
	if (!ctx.cr6.eq) goto loc_823647F4;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364764
	if (ctx.cr6.eq) goto loc_82364764;
	// bl 0x82360410
	ctx.lr = 0x82364758;
	sub_82360410(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82634d40
	ctx.lr = 0x82364760;
	sub_82634D40(ctx, base);
	// stw r23,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r23.u32);
loc_82364764:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82361268
	ctx.lr = 0x82364778;
	sub_82361268(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-9600
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9600, ctx.xer);
	// bgt cr6,0x82364798
	if (ctx.cr6.gt) goto loc_82364798;
	// beq cr6,0x82364820
	if (ctx.cr6.eq) goto loc_82364820;
	// cmpwi cr6,r3,-10368
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -10368, ctx.xer);
	// beq cr6,0x82364818
	if (ctx.cr6.eq) goto loc_82364818;
	// cmpwi cr6,r3,-9774
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9774, ctx.xer);
	// b 0x8236479c
	goto loc_8236479C;
loc_82364798:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_8236479C:
	// bne cr6,0x82364828
	if (!ctx.cr6.eq) goto loc_82364828;
	// lwz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82364660
	if (ctx.cr6.lt) goto loc_82364660;
loc_823647B0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r11,17480
	ctx.r7.s64 = ctx.r11.s64 + 17480;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r6,2441
	ctx.r6.s64 = 2441;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823919c8
	ctx.lr = 0x823647D0;
	sub_823919C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_823647DC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,2353
	ctx.r6.s64 = 2353;
	// b 0x82364884
	goto loc_82364884;
loc_823647E8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,2362
	ctx.r6.s64 = 2362;
	// b 0x82364884
	goto loc_82364884;
loc_823647F4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r11,17440
	ctx.r7.s64 = ctx.r11.s64 + 17440;
	// li r6,2395
	ctx.r6.s64 = 2395;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364810;
	sub_823911B8(ctx, base);
	// li r5,49
	ctx.r5.s64 = 49;
	// b 0x8236489c
	goto loc_8236489C;
loc_82364818:
	// li r5,80
	ctx.r5.s64 = 80;
	// b 0x8236482c
	goto loc_8236482C;
loc_82364820:
	// li r5,43
	ctx.r5.s64 = 43;
	// b 0x8236482c
	goto loc_8236482C;
loc_82364828:
	// li r5,42
	ctx.r5.s64 = 42;
loc_8236482C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82364838;
	sub_8236C3F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r11,17412
	ctx.r7.s64 = ctx.r11.s64 + 17412;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r6,2434
	ctx.r6.s64 = 2434;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823912a0
	ctx.lr = 0x82364858;
	sub_823912A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_82364864:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,2375
	ctx.r6.s64 = 2375;
	// b 0x82364884
	goto loc_82364884;
loc_82364870:
	// li r6,2340
	ctx.r6.s64 = 2340;
	// b 0x8236487c
	goto loc_8236487C;
loc_82364878:
	// li r6,2325
	ctx.r6.s64 = 2325;
loc_8236487C:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
loc_82364884:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r11,17556
	ctx.r7.s64 = ctx.r11.s64 + 17556;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364898;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
loc_8236489C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823648A8;
	sub_8236C3F8(ctx, base);
	// li r3,-31232
	ctx.r3.s64 = -31232;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364558) {
	__imp__sub_82364558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823648B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823648B4) {
	__imp__sub_823648B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823648B8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236498c
	if (ctx.cr6.eq) goto loc_8236498C;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823648e8
	if (ctx.cr6.eq) goto loc_823648E8;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823648E8:
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8236498c
	if (!ctx.cr6.eq) goto loc_8236498C;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8236498c
	if (!ctx.cr6.eq) goto loc_8236498C;
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8236498c
	if (!ctx.cr6.eq) goto loc_8236498C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x82364924
	if (ctx.cr6.eq) goto loc_82364924;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82364924:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,264
	ctx.r10.s64 = ctx.r10.s64 + 264;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_82364934:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82364954
	if (!ctx.cr0.eq) goto loc_82364954;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82364934
	if (!ctx.cr6.eq) goto loc_82364934;
loc_82364954:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236498c
	if (!ctx.cr6.eq) goto loc_8236498C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,17580
	ctx.r7.s64 = ctx.r11.s64 + 17580;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,2476
	ctx.r6.s64 = 2476;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82364978;
	sub_823911B8(ctx, base);
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
loc_8236498C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823648B8) {
	__imp__sub_823648B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823649A0) {
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
	// addi r3,r11,620
	ctx.r3.s64 = ctx.r11.s64 + 620;
	// bl 0x82385a38
	ctx.lr = 0x823649C0;
	sub_82385A38(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r11,708
	ctx.r3.s64 = ctx.r11.s64 + 708;
	// bl 0x82383440
	ctx.lr = 0x823649CC;
	sub_82383440(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,800
	ctx.r3.s64 = ctx.r11.s64 + 800;
	// bl 0x8235b960
	ctx.lr = 0x823649DC;
	sub_8235B960(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// bl 0x82381010
	ctx.lr = 0x823649EC;
	sub_82381010(ctx, base);
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

PPC_WEAK_FUNC(sub_823649A0) {
	__imp__sub_823649A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82364A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,620
	ctx.r3.s64 = ctx.r11.s64 + 620;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823866c0
	ctx.lr = 0x82364A24;
	sub_823866C0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,708
	ctx.r3.s64 = ctx.r11.s64 + 708;
	// bl 0x823830e8
	ctx.lr = 0x82364A38;
	sub_823830E8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,800
	ctx.r3.s64 = ctx.r11.s64 + 800;
	// bl 0x8235c740
	ctx.lr = 0x82364A4C;
	sub_8235C740(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// bl 0x82381848
	ctx.lr = 0x82364A60;
	sub_82381848(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364A00) {
	__imp__sub_82364A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82364A70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,620
	ctx.r3.s64 = ctx.r11.s64 + 620;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823866c0
	ctx.lr = 0x82364A8C;
	sub_823866C0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,708
	ctx.r3.s64 = ctx.r11.s64 + 708;
	// bl 0x823830e8
	ctx.lr = 0x82364AA0;
	sub_823830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364A68) {
	__imp__sub_82364A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r3,r11,800
	ctx.r3.s64 = ctx.r11.s64 + 800;
	// b 0x8235c740
	sub_8235C740(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364AA8) {
	__imp__sub_82364AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364AB4) {
	__imp__sub_82364AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// b 0x82381848
	sub_82381848(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364AB8) {
	__imp__sub_82364AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364AC4) {
	__imp__sub_82364AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82364AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,64(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82364af0
	if (!ctx.cr6.eq) goto loc_82364AF0;
	// lwz r28,60(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
loc_82364AF0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r11,16836
	ctx.r30.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,17728
	ctx.r7.s64 = ctx.r10.s64 + 17728;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,3126
	ctx.r6.s64 = 3126;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364B14;
	sub_823911B8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82385a08
	ctx.lr = 0x82364B1C;
	sub_82385A08(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82381cf0
	ctx.lr = 0x82364B24;
	sub_82381CF0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// bl 0x82385a30
	ctx.lr = 0x82364B34;
	sub_82385A30(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,708
	ctx.r4.s64 = ctx.r11.s64 + 708;
	// bl 0x82383438
	ctx.lr = 0x82364B44;
	sub_82383438(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r9,17708
	ctx.r7.s64 = ctx.r9.s64 + 17708;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// li r6,3142
	ctx.r6.s64 = 3142;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82364B68;
	sub_82391350(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r8,17688
	ctx.r7.s64 = ctx.r8.s64 + 17688;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r1,232
	ctx.r8.s64 = ctx.r1.s64 + 232;
	// li r6,3147
	ctx.r6.s64 = 3147;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82364B8C;
	sub_82391350(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82364ba0
	if (!ctx.cr6.eq) goto loc_82364BA0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,17672
	ctx.r29.s64 = ctx.r11.s64 + 17672;
	// b 0x82364ba8
	goto loc_82364BA8;
loc_82364BA0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,17656
	ctx.r29.s64 = ctx.r11.s64 + 17656;
loc_82364BA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823867a0
	ctx.lr = 0x82364BB4;
	sub_823867A0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823831c8
	ctx.lr = 0x82364BC0;
	sub_823831C8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,36
	ctx.r7.s64 = 36;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82364BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r9,17632
	ctx.r7.s64 = ctx.r9.s64 + 17632;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r6,3160
	ctx.r6.s64 = 3160;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82364C10;
	sub_82391350(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82385a18
	ctx.lr = 0x82364C18;
	sub_82385A18(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82383420
	ctx.lr = 0x82364C20;
	sub_82383420(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x82364C2C;
	sub_82362B98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r8,17612
	ctx.r7.s64 = ctx.r8.s64 + 17612;
	// li r6,3167
	ctx.r6.s64 = 3167;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364C48;
	sub_823911B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364AC8) {
	__imp__sub_82364AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82364C58;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82364c74
	if (!ctx.cr6.eq) goto loc_82364C74;
	// lwz r30,60(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
loc_82364C74:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82364c88
	if (!ctx.cr6.eq) goto loc_82364C88;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,17672
	ctx.r29.s64 = ctx.r11.s64 + 17672;
	// b 0x82364c90
	goto loc_82364C90;
loc_82364C88:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,17656
	ctx.r29.s64 = ctx.r11.s64 + 17656;
loc_82364C90:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235b930
	ctx.lr = 0x82364C98;
	sub_8235B930(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r27,r11,16836
	ctx.r27.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,17772
	ctx.r7.s64 = ctx.r10.s64 + 17772;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,3217
	ctx.r6.s64 = 3217;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364CBC;
	sub_823911B8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,800
	ctx.r4.s64 = ctx.r11.s64 + 800;
	// bl 0x8235b958
	ctx.lr = 0x82364CCC;
	sub_8235B958(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r9,17752
	ctx.r7.s64 = ctx.r9.s64 + 17752;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// li r6,3229
	ctx.r6.s64 = 3229;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82364CF0;
	sub_82391350(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235c828
	ctx.lr = 0x82364CFC;
	sub_8235C828(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235b940
	ctx.lr = 0x82364D04;
	sub_8235B940(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82364D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r9,17632
	ctx.r7.s64 = ctx.r9.s64 + 17632;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,3239
	ctx.r6.s64 = 3239;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82364D54;
	sub_82391350(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x82364D60;
	sub_82362B98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r8,17612
	ctx.r7.s64 = ctx.r8.s64 + 17612;
	// li r6,3243
	ctx.r6.s64 = 3243;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364D7C;
	sub_823911B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364C50) {
	__imp__sub_82364C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364D84) {
	__imp__sub_82364D84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82364D90;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82364dac
	if (!ctx.cr6.eq) goto loc_82364DAC;
	// lwz r30,60(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
loc_82364DAC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82364dc0
	if (!ctx.cr6.eq) goto loc_82364DC0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,17672
	ctx.r29.s64 = ctx.r11.s64 + 17672;
	// b 0x82364dc8
	goto loc_82364DC8;
loc_82364DC0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,17656
	ctx.r29.s64 = ctx.r11.s64 + 17656;
loc_82364DC8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82380fe0
	ctx.lr = 0x82364DD0;
	sub_82380FE0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r27,r11,16836
	ctx.r27.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,17828
	ctx.r7.s64 = ctx.r10.s64 + 17828;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,3292
	ctx.r6.s64 = 3292;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364DF4;
	sub_823911B8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,912
	ctx.r4.s64 = ctx.r11.s64 + 912;
	// bl 0x82381008
	ctx.lr = 0x82364E04;
	sub_82381008(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r9,17804
	ctx.r7.s64 = ctx.r9.s64 + 17804;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r6,3304
	ctx.r6.s64 = 3304;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82364E28;
	sub_82391350(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82381930
	ctx.lr = 0x82364E34;
	sub_82381930(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82380ff0
	ctx.lr = 0x82364E3C;
	sub_82380FF0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82364E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r9,17632
	ctx.r7.s64 = ctx.r9.s64 + 17632;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,3326
	ctx.r6.s64 = 3326;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82364E8C;
	sub_82391350(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x82364E98;
	sub_82362B98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r8,17612
	ctx.r7.s64 = ctx.r8.s64 + 17612;
	// li r6,3330
	ctx.r6.s64 = 3330;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364EB4;
	sub_823911B8(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364D88) {
	__imp__sub_82364D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364EBC) {
	__imp__sub_82364EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82364EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,16836
	ctx.r29.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,17984
	ctx.r7.s64 = ctx.r10.s64 + 17984;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,3421
	ctx.r6.s64 = 3421;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364EF0;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8236ac80
	ctx.lr = 0x82364EFC;
	sub_8236AC80(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lbz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82364F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x82364F50;
	sub_82635430(ctx, base);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// li r9,22
	ctx.r9.s64 = 22;
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// stb r8,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82364fa8
	if (ctx.cr6.eq) goto loc_82364FA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82364f94
	if (!ctx.cr6.eq) goto loc_82364F94;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82364F94:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82364fb4
	if (!ctx.cr6.eq) goto loc_82364FB4;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82364fb0
	goto loc_82364FB0;
loc_82364FA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82364FB0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82364FB4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,17932
	ctx.r7.s64 = ctx.r11.s64 + 17932;
	// li r6,3467
	ctx.r6.s64 = 3467;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82364FD0;
	sub_823911B8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82365074
	if (!ctx.cr6.eq) goto loc_82365074;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r8,604(r9)
	PPC_STORE_U32(ctx.r9.u32 + 604, ctx.r8.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r7,608(r9)
	PPC_STORE_U32(ctx.r9.u32 + 608, ctx.r7.u32);
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r6,612(r9)
	PPC_STORE_U32(ctx.r9.u32 + 612, ctx.r6.u32);
	// sth r11,222(r31)
	PPC_STORE_U16(ctx.r31.u32 + 222, ctx.r11.u16);
	// sth r11,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r11.u16);
	// sth r11,226(r31)
	PPC_STORE_U16(ctx.r31.u32 + 226, ctx.r11.u16);
loc_82365014:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r11,219
	ctx.r9.s64 = ctx.r11.s64 + 219;
	// lbz r9,219(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 219);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,219(r11)
	PPC_STORE_U8(ctx.r11.u32 + 219, ctx.r8.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82365044
	if (!ctx.cr6.eq) goto loc_82365044;
	// addi r11,r10,255
	ctx.r11.s64 = ctx.r10.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82365014
	if (!ctx.cr6.eq) goto loc_82365014;
loc_82365044:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236507c
	if (!ctx.cr6.eq) goto loc_8236507C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,17908
	ctx.r7.s64 = ctx.r11.s64 + 17908;
	// li r6,3489
	ctx.r6.s64 = 3489;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365068;
	sub_823911B8(ctx, base);
	// li r3,-27520
	ctx.r3.s64 = -27520;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82365074:
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
loc_8236507C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lbz r8,5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x823650a4
	if (!ctx.cr6.eq) goto loc_823650A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369b98
	ctx.lr = 0x823650A4;
	sub_82369B98(ctx, base);
loc_823650A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ce40
	ctx.lr = 0x823650AC;
	sub_8236CE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823650e4
	if (ctx.cr6.eq) goto loc_823650E4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,17284
	ctx.r7.s64 = ctx.r11.s64 + 17284;
	// li r6,3515
	ctx.r6.s64 = 3515;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823650D8;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823650E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82365134
	if (!ctx.cr6.eq) goto loc_82365134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c988
	ctx.lr = 0x823650FC;
	sub_8236C988(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82365134
	if (ctx.cr6.eq) goto loc_82365134;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,17880
	ctx.r7.s64 = ctx.r11.s64 + 17880;
	// li r6,3522
	ctx.r6.s64 = 3522;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82365128;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82365134:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,17860
	ctx.r7.s64 = ctx.r11.s64 + 17860;
	// li r6,3527
	ctx.r6.s64 = 3527;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365150;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364EC0) {
	__imp__sub_82364EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236515C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236515C) {
	__imp__sub_8236515C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82365168;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r11,16836
	ctx.r30.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,18072
	ctx.r7.s64 = ctx.r10.s64 + 18072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,3544
	ctx.r6.s64 = 3544;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365190;
	sub_823911B8(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lbz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823651B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x823651C0;
	sub_8236E1E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823651f0
	if (ctx.cr6.eq) goto loc_823651F0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// li r6,3557
	ctx.r6.s64 = 3557;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823651EC;
	sub_823912A0(ctx, base);
	// b 0x8236537c
	goto loc_8236537C;
loc_823651F0:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82365230
	if (ctx.cr6.eq) goto loc_82365230;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,18024
	ctx.r7.s64 = ctx.r11.s64 + 18024;
	// li r6,3562
	ctx.r6.s64 = 3562;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365218;
	sub_823911B8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82365228;
	sub_8236C3F8(ctx, base);
	// li r29,-30464
	ctx.r29.s64 = -30464;
	// b 0x8236537c
	goto loc_8236537C;
loc_82365230:
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x8236534c
	if (!ctx.cr6.eq) goto loc_8236534C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82365258
	if (ctx.cr6.eq) goto loc_82365258;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82365258:
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8236534c
	if (!ctx.cr6.eq) goto loc_8236534C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x82365278
	if (ctx.cr6.eq) goto loc_82365278;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82365278:
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x823869c8
	ctx.lr = 0x82365288;
	sub_823869C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823652b4
	if (ctx.cr6.eq) goto loc_823652B4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,18024
	ctx.r7.s64 = ctx.r11.s64 + 18024;
	// li r6,3580
	ctx.r6.s64 = 3580;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823652AC;
	sub_823911B8(ctx, base);
	// li r5,51
	ctx.r5.s64 = 51;
	// b 0x8236536c
	goto loc_8236536C;
loc_823652B4:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x82635430
	ctx.lr = 0x823652CC;
	sub_82635430(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82365308
	if (ctx.cr6.eq) goto loc_82365308;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823652f4
	if (!ctx.cr6.eq) goto loc_823652F4;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_823652F4:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82365314
	if (!ctx.cr6.eq) goto loc_82365314;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82365310
	goto loc_82365310;
loc_82365308:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82365310:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82365314:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236532c
	if (!ctx.cr6.eq) goto loc_8236532C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236cd90
	ctx.lr = 0x8236532C;
	sub_8236CD90(ctx, base);
loc_8236532C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,18004
	ctx.r7.s64 = ctx.r11.s64 + 18004;
	// li r6,3613
	ctx.r6.s64 = 3613;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365348;
	sub_823911B8(ctx, base);
	// b 0x8236537c
	goto loc_8236537C;
loc_8236534C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,18024
	ctx.r7.s64 = ctx.r11.s64 + 18024;
	// li r6,3571
	ctx.r6.s64 = 3571;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365368;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
loc_8236536C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82365378;
	sub_8236C3F8(ctx, base);
	// li r29,-32384
	ctx.r29.s64 = -32384;
loc_8236537C:
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x82365388;
	sub_82362B98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365160) {
	__imp__sub_82365160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365394) {
	__imp__sub_82365394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365398) {
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
	// li r5,276
	ctx.r5.s64 = 276;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x823653B8;
	sub_826344D0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8239db80
	ctx.lr = 0x823653C0;
	sub_8239DB80(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8239db80
	ctx.lr = 0x823653C8;
	sub_8239DB80(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8238dd80
	ctx.lr = 0x823653D0;
	sub_8238DD80(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8238dd80
	ctx.lr = 0x823653D8;
	sub_8238DD80(ctx, base);
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

PPC_WEAK_FUNC(sub_82365398) {
	__imp__sub_82365398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823653EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823653EC) {
	__imp__sub_823653EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823653F0) {
	PPC_FUNC_PROLOGUE();
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823653F0) {
	__imp__sub_823653F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823653FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823653FC) {
	__imp__sub_823653FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365400) {
	PPC_FUNC_PROLOGUE();
	// li r3,-28800
	ctx.r3.s64 = -28800;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365400) {
	__imp__sub_82365400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365408) {
	PPC_FUNC_PROLOGUE();
	// li r5,544
	ctx.r5.s64 = 544;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365408) {
	__imp__sub_82365408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365414) {
	__imp__sub_82365414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365418) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365418) {
	__imp__sub_82365418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365424) {
	__imp__sub_82365424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365428) {
	PPC_FUNC_PROLOGUE();
	// stb r4,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365428) {
	__imp__sub_82365428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365430) {
	PPC_FUNC_PROLOGUE();
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// stw r5,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365430) {
	__imp__sub_82365430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236543C) {
	__imp__sub_8236543C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365440) {
	PPC_FUNC_PROLOGUE();
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365440) {
	__imp__sub_82365440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236544C) {
	__imp__sub_8236544C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365450) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365450) {
	__imp__sub_82365450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365464) {
	__imp__sub_82365464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365468) {
	PPC_FUNC_PROLOGUE();
	// sth r4,228(r3)
	PPC_STORE_U16(ctx.r3.u32 + 228, ctx.r4.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365468) {
	__imp__sub_82365468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365470) {
	PPC_FUNC_PROLOGUE();
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// b 0x82368450
	sub_82368450(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365470) {
	__imp__sub_82365470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365484) {
	__imp__sub_82365484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82365490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x826365a8
	ctx.lr = 0x823654AC;
	sub_826365A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823654c0
	if (!ctx.cr6.eq) goto loc_823654C0;
	// li r3,-32512
	ctx.r3.s64 = -32512;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823654C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823654ec
	if (!ctx.cr6.eq) goto loc_823654EC;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823654EC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365510
	if (ctx.cr6.eq) goto loc_82365510;
loc_823654FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823654fc
	if (!ctx.cr6.eq) goto loc_823654FC;
loc_82365510:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365488) {
	__imp__sub_82365488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365520) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// b 0x82365488
	sub_82365488(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365520) {
	__imp__sub_82365520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365528) {
	PPC_FUNC_PROLOGUE();
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// stw r5,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365528) {
	__imp__sub_82365528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365534) {
	__imp__sub_82365534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82365540;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,180
	ctx.r29.s64 = ctx.r3.s64 + 180;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x823706c0
	ctx.lr = 0x82365564;
	sub_823706C0(ctx, base);
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823706c0
	ctx.lr = 0x82365570;
	sub_823706C0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370f18
	ctx.lr = 0x82365580;
	sub_82370F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823655b0
	if (!ctx.cr6.eq) goto loc_823655B0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370f18
	ctx.lr = 0x8236559C;
	sub_82370F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823655b0
	if (!ctx.cr6.eq) goto loc_823655B0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_823655B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823706c0
	ctx.lr = 0x823655B8;
	sub_823706C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823706c0
	ctx.lr = 0x823655C0;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365538) {
	__imp__sub_82365538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823655CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823655CC) {
	__imp__sub_823655CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823655D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x823655D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x82365628
	if (ctx.cr6.eq) goto loc_82365628;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823655F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823655f8
	if (!ctx.cr6.eq) goto loc_823655F8;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// ble cr6,0x82365628
	if (!ctx.cr6.gt) goto loc_82365628;
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82365628:
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365660
	if (ctx.cr6.eq) goto loc_82365660;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82365638:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82365638
	if (!ctx.cr6.eq) goto loc_82365638;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82362b98
	ctx.lr = 0x82365658;
	sub_82362B98(ctx, base);
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// bl 0x82634d40
	ctx.lr = 0x82365660;
	sub_82634D40(ctx, base);
loc_82365660:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82365678
	if (!ctx.cr6.eq) goto loc_82365678;
	// stw r28,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82365678:
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82365684;
	sub_826365A8(ctx, base);
	// stw r3,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236569c
	if (!ctx.cr6.eq) goto loc_8236569C;
	// li r3,-32512
	ctx.r3.s64 = -32512;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236569C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x823656A8;
	sub_82635430(ctx, base);
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r28,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823655D0) {
	__imp__sub_823655D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823656BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823656BC) {
	__imp__sub_823656BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823656C0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823656C0) {
	__imp__sub_823656C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823656C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236575c
	if (ctx.cr6.eq) goto loc_8236575C;
loc_823656E4:
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bgt cr6,0x8236574c
	if (ctx.cr6.gt) goto loc_8236574C;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x82365720
	if (ctx.cr6.gt) goto loc_82365720;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82365724
	if (ctx.cr6.eq) goto loc_82365724;
	// bdz 0x82365724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365724;
	// bdz 0x82365720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365720;
	// bdz 0x82365720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365720;
	// bdz 0x82365724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365724;
	// b 0x82365724
	goto loc_82365724;
loc_82365720:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82365724:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365738
	if (!ctx.cr6.eq) goto loc_82365738;
	// li r8,5
	ctx.r8.s64 = 5;
loc_82365738:
	// lhzu r11,2(r9)
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823656e4
	if (!ctx.cr6.eq) goto loc_823656E4;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// ble cr6,0x8236575c
	if (!ctx.cr6.gt) goto loc_8236575C;
loc_8236574C:
	// stw r6,224(r7)
	PPC_STORE_U32(ctx.r7.u32 + 224, ctx.r6.u32);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// stw r6,228(r7)
	PPC_STORE_U32(ctx.r7.u32 + 228, ctx.r6.u32);
	// blr 
	return;
loc_8236575C:
	// stw r4,224(r7)
	PPC_STORE_U32(ctx.r7.u32 + 224, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,228(r7)
	PPC_STORE_U32(ctx.r7.u32 + 228, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823656C8) {
	__imp__sub_823656C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236576C) {
	__imp__sub_8236576C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365770) {
	PPC_FUNC_PROLOGUE();
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// stb r5,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365770) {
	__imp__sub_82365770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236577C) {
	__imp__sub_8236577C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365780) {
	PPC_FUNC_PROLOGUE();
	// stb r4,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// stb r5,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365780) {
	__imp__sub_82365780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236578C) {
	__imp__sub_8236578C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365790) {
	PPC_FUNC_PROLOGUE();
	// stb r4,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365790) {
	__imp__sub_82365790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365798) {
	PPC_FUNC_PROLOGUE();
	// stw r4,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r4.u32);
	// stw r5,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365798) {
	__imp__sub_82365798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823657A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823657A4) {
	__imp__sub_823657A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823657A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823657bc
	if (ctx.cr6.eq) goto loc_823657BC;
loc_823657B4:
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// blr 
	return;
loc_823657BC:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823657b4
	if (!ctx.cr6.eq) goto loc_823657B4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823657A8) {
	__imp__sub_823657A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823657D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823657ec
	if (ctx.cr6.eq) goto loc_823657EC;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823657ec
	if (ctx.cr6.eq) goto loc_823657EC;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82391bd0
	sub_82391BD0(ctx, base);
	return;
loc_823657EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823657D0) {
	__imp__sub_823657D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823657F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823657F4) {
	__imp__sub_823657F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823657F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r11,9(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82365848
	if (ctx.cr6.gt) goto loc_82365848;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365848
	if (ctx.cr6.eq) goto loc_82365848;
	// bdz 0x82365828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365828;
	// bdz 0x82365830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365830;
	// bdz 0x82365838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365838;
	// b 0x82365840
	goto loc_82365840;
loc_82365828:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x8236584c
	goto loc_8236584C;
loc_82365830:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// b 0x8236584c
	goto loc_8236584C;
loc_82365838:
	// li r3,2048
	ctx.r3.s64 = 2048;
	// b 0x8236584c
	goto loc_8236584C;
loc_82365840:
	// li r3,4096
	ctx.r3.s64 = 4096;
	// b 0x8236584c
	goto loc_8236584C;
loc_82365848:
	// li r3,16384
	ctx.r3.s64 = 16384;
loc_8236584C:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823658f4
	if (ctx.cr6.eq) goto loc_823658F4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x823658a0
	if (ctx.cr6.gt) goto loc_823658A0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823658a0
	if (ctx.cr6.eq) goto loc_823658A0;
	// bdz 0x82365880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365880;
	// bdz 0x82365888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365888;
	// bdz 0x82365890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365890;
	// b 0x82365898
	goto loc_82365898;
loc_82365880:
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x823658a4
	goto loc_823658A4;
loc_82365888:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x823658a4
	goto loc_823658A4;
loc_82365890:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x823658a4
	goto loc_823658A4;
loc_82365898:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// b 0x823658a4
	goto loc_823658A4;
loc_823658A0:
	// li r11,16384
	ctx.r11.s64 = 16384;
loc_823658A4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823658f4
	if (!ctx.cr6.lt) goto loc_823658F4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x823658f0
	if (ctx.cr6.gt) goto loc_823658F0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823658f0
	if (ctx.cr6.eq) goto loc_823658F0;
	// bdz 0x823658d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823658D0;
	// bdz 0x823658d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823658D8;
	// bdz 0x823658e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823658E0;
	// b 0x823658e8
	goto loc_823658E8;
loc_823658D0:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x823658f4
	goto loc_823658F4;
loc_823658D8:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// b 0x823658f4
	goto loc_823658F4;
loc_823658E0:
	// li r3,2048
	ctx.r3.s64 = 2048;
	// b 0x823658f4
	goto loc_823658F4;
loc_823658E8:
	// li r3,4096
	ctx.r3.s64 = 4096;
	// b 0x823658f4
	goto loc_823658F4;
loc_823658F0:
	// li r3,16384
	ctx.r3.s64 = 16384;
loc_823658F4:
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82365948
	if (ctx.cr6.gt) goto loc_82365948;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82365948
	if (ctx.cr6.eq) goto loc_82365948;
	// bdz 0x82365928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365928;
	// bdz 0x82365930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365930;
	// bdz 0x82365938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365938;
	// b 0x82365940
	goto loc_82365940;
loc_82365928:
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x8236594c
	goto loc_8236594C;
loc_82365930:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x8236594c
	goto loc_8236594C;
loc_82365938:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x8236594c
	goto loc_8236594C;
loc_82365940:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// b 0x8236594c
	goto loc_8236594C;
loc_82365948:
	// li r11,16384
	ctx.r11.s64 = 16384;
loc_8236594C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82365998
	if (ctx.cr6.gt) goto loc_82365998;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82365998
	if (ctx.cr6.eq) goto loc_82365998;
	// bdz 0x82365978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365978;
	// bdz 0x82365980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365980;
	// bdz 0x82365988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82365988;
	// b 0x82365990
	goto loc_82365990;
loc_82365978:
	// li r3,512
	ctx.r3.s64 = 512;
	// blr 
	return;
loc_82365980:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
loc_82365988:
	// li r3,2048
	ctx.r3.s64 = 2048;
	// blr 
	return;
loc_82365990:
	// li r3,4096
	ctx.r3.s64 = 4096;
	// blr 
	return;
loc_82365998:
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823657F8) {
	__imp__sub_823657F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823659A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823659cc
	if (!ctx.cr6.eq) goto loc_823659CC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823659c4
	if (ctx.cr6.eq) goto loc_823659C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823659cc
	if (!ctx.cr6.eq) goto loc_823659CC;
loc_823659C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823659CC:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365a0c
	if (ctx.cr6.eq) goto loc_82365A0C;
	// lhz r10,616(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365a0c
	if (ctx.cr6.eq) goto loc_82365A0C;
	// lhz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823659f8
	if (!ctx.cr6.eq) goto loc_823659F8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_823659F8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82365a04
	if (ctx.cr6.lt) goto loc_82365A04;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82365A04:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82365A0C:
	// lhz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 228);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823659A0) {
	__imp__sub_823659A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365A14) {
	__imp__sub_82365A14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82365A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,16384
	ctx.r29.s64 = 16384;
	// bl 0x823657f8
	ctx.lr = 0x82365A30;
	sub_823657F8(ctx, base);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// bge cr6,0x82365a3c
	if (!ctx.cr6.lt) goto loc_82365A3C;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82365A3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823659a0
	ctx.lr = 0x82365A44;
	sub_823659A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365aac
	if (ctx.cr6.eq) goto loc_82365AAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823659a0
	ctx.lr = 0x82365A54;
	sub_823659A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ae40
	ctx.lr = 0x82365A60;
	sub_8236AE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82365ab0
	if (ctx.cr6.lt) goto loc_82365AB0;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82365a9c
	if (ctx.cr6.gt) goto loc_82365A9C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,18092
	ctx.r7.s64 = ctx.r11.s64 + 18092;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,5128
	ctx.r6.s64 = 5128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365A90;
	sub_823911B8(ctx, base);
	// li r3,-28800
	ctx.r3.s64 = -28800;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82365A9C:
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82365aac
	if (!ctx.cr6.gt) goto loc_82365AAC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82365AAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82365AB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365A18) {
	__imp__sub_82365A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365AB8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365ad4
	if (ctx.cr6.eq) goto loc_82365AD4;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365ad4
	if (ctx.cr6.eq) goto loc_82365AD4;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// blr 
	return;
loc_82365AD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365AB8) {
	__imp__sub_82365AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365ADC) {
	__imp__sub_82365ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365AE0) {
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
	// li r3,-28800
	ctx.r3.s64 = -28800;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82365b4c
	if (ctx.cr6.eq) goto loc_82365B4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365b4c
	if (ctx.cr6.eq) goto loc_82365B4C;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365b20
	if (!ctx.cr6.eq) goto loc_82365B20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82397c00
	ctx.lr = 0x82365B20;
	sub_82397C00(ctx, base);
loc_82365B20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82365b50
	if (!ctx.cr6.eq) goto loc_82365B50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d968
	ctx.lr = 0x82365B38;
	sub_8237D968(ctx, base);
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
loc_82365B4C:
	// li r3,-28928
	ctx.r3.s64 = -28928;
loc_82365B50:
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

PPC_WEAK_FUNC(sub_82365AE0) {
	__imp__sub_82365AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365B64) {
	__imp__sub_82365B64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82365B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365bd4
	if (ctx.cr6.eq) goto loc_82365BD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365bd4
	if (ctx.cr6.eq) goto loc_82365BD4;
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82365be0
	if (!ctx.cr6.eq) goto loc_82365BE0;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365bb4
	if (ctx.cr6.eq) goto loc_82365BB4;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365be0
	if (!ctx.cr6.eq) goto loc_82365BE0;
loc_82365BB4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,18160
	ctx.r7.s64 = ctx.r11.s64 + 18160;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,5812
	ctx.r6.s64 = 5812;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365BD4;
	sub_823911B8(ctx, base);
loc_82365BD4:
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82365BE0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,16836
	ctx.r29.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,18144
	ctx.r7.s64 = ctx.r10.s64 + 18144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,5817
	ctx.r6.s64 = 5817;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365C04;
	sub_823911B8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// beq cr6,0x82365c6c
	if (ctx.cr6.eq) goto loc_82365C6C;
loc_82365C10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,-28800
	ctx.r3.s64 = -28800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365c68
	if (ctx.cr6.eq) goto loc_82365C68;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365c34
	if (!ctx.cr6.eq) goto loc_82365C34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82397c00
	ctx.lr = 0x82365C34;
	sub_82397C00(ctx, base);
loc_82365C34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82365c4c
	if (!ctx.cr6.eq) goto loc_82365C4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d968
	ctx.lr = 0x82365C4C;
	sub_8237D968(ctx, base);
loc_82365C4C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82365c6c
	if (!ctx.cr6.eq) goto loc_82365C6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82365c10
	if (!ctx.cr6.eq) goto loc_82365C10;
	// b 0x82365c6c
	goto loc_82365C6C;
loc_82365C68:
	// li r30,-28928
	ctx.r30.s64 = -28928;
loc_82365C6C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,18128
	ctx.r7.s64 = ctx.r11.s64 + 18128;
	// li r6,5828
	ctx.r6.s64 = 5828;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365C88;
	sub_823911B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365B68) {
	__imp__sub_82365B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365C94) {
	__imp__sub_82365C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82365CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,16836
	ctx.r29.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,18236
	ctx.r7.s64 = ctx.r10.s64 + 18236;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,5843
	ctx.r6.s64 = 5843;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365CC8;
	sub_823911B8(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,22
	ctx.r8.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r7.u8);
	// bl 0x8236ce40
	ctx.lr = 0x82365CEC;
	sub_8236CE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82365d24
	if (ctx.cr6.eq) goto loc_82365D24;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,17284
	ctx.r7.s64 = ctx.r11.s64 + 17284;
	// li r6,5850
	ctx.r6.s64 = 5850;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82365D18;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82365D24:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,5854
	ctx.r6.s64 = 5854;
	// addi r7,r11,18212
	ctx.r7.s64 = ctx.r11.s64 + 18212;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82365D38;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365C98) {
	__imp__sub_82365C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365D44) {
	__imp__sub_82365D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82365D50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82365dfc
	if (ctx.cr6.eq) goto loc_82365DFC;
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// bl 0x82385a18
	ctx.lr = 0x82365D6C;
	sub_82385A18(ctx, base);
	// addi r3,r31,708
	ctx.r3.s64 = ctx.r31.s64 + 708;
	// bl 0x82383420
	ctx.lr = 0x82365D74;
	sub_82383420(ctx, base);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// bl 0x8235b940
	ctx.lr = 0x82365D7C;
	sub_8235B940(ctx, base);
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// bl 0x82380ff0
	ctx.lr = 0x82365D84;
	sub_82380FF0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82392c68
	ctx.lr = 0x82365D8C;
	sub_82392C68(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x82391f00
	ctx.lr = 0x82365D94;
	sub_82391F00(ctx, base);
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// bl 0x82634d40
	ctx.lr = 0x82365D9C;
	sub_82634D40(ctx, base);
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365db8
	if (ctx.cr6.eq) goto loc_82365DB8;
	// lwz r4,480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// bl 0x82362b98
	ctx.lr = 0x82365DB0;
	sub_82362B98(ctx, base);
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// bl 0x82634d40
	ctx.lr = 0x82365DB8;
	sub_82634D40(ctx, base);
loc_82365DB8:
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365dd8
	if (ctx.cr6.eq) goto loc_82365DD8;
loc_82365DC4:
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82365DCC;
	sub_82634D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82365dc4
	if (!ctx.cr6.eq) goto loc_82365DC4;
loc_82365DD8:
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// bl 0x82634d40
	ctx.lr = 0x82365DE0;
	sub_82634D40(ctx, base);
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// bl 0x82369b40
	ctx.lr = 0x82365DE8;
	sub_82369B40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236c908
	ctx.lr = 0x82365DF0;
	sub_8236C908(ctx, base);
	// li r4,2256
	ctx.r4.s64 = 2256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x82365DFC;
	sub_82362B98(ctx, base);
loc_82365DFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365D48) {
	__imp__sub_82365D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365E04) {
	__imp__sub_82365E04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365E08) {
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
	// beq cr6,0x82365e58
	if (ctx.cr6.eq) goto loc_82365E58;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365e44
	if (ctx.cr6.eq) goto loc_82365E44;
	// bl 0x82360410
	ctx.lr = 0x82365E34;
	sub_82360410(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82634d40
	ctx.lr = 0x82365E3C;
	sub_82634D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82365E44:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82634d40
	ctx.lr = 0x82365E4C;
	sub_82634D40(ctx, base);
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x82365E58;
	sub_82362B98(ctx, base);
loc_82365E58:
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

PPC_WEAK_FUNC(sub_82365E08) {
	__imp__sub_82365E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365E6C) {
	__imp__sub_82365E6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82365E78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365fc0
	if (ctx.cr6.eq) goto loc_82365FC0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,16836
	ctx.r29.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,18268
	ctx.r7.s64 = ctx.r10.s64 + 18268;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,6764
	ctx.r6.s64 = 6764;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82365EA8;
	sub_823911B8(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365ecc
	if (ctx.cr6.eq) goto loc_82365ECC;
	// li r4,16717
	ctx.r4.s64 = 16717;
	// bl 0x82362b98
	ctx.lr = 0x82365EC0;
	sub_82362B98(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82634d40
	ctx.lr = 0x82365EC8;
	sub_82634D40(ctx, base);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
loc_82365ECC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365eec
	if (ctx.cr6.eq) goto loc_82365EEC;
	// li r4,16717
	ctx.r4.s64 = 16717;
	// bl 0x82362b98
	ctx.lr = 0x82365EE0;
	sub_82362B98(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82634d40
	ctx.lr = 0x82365EE8;
	sub_82634D40(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_82365EEC:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365f04
	if (ctx.cr6.eq) goto loc_82365F04;
	// bl 0x8236b080
	ctx.lr = 0x82365EFC;
	sub_8236B080(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x82365F04;
	sub_82634D40(ctx, base);
loc_82365F04:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365f40
	if (ctx.cr6.eq) goto loc_82365F40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365d48
	ctx.lr = 0x82365F18;
	sub_82365D48(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8236b080
	ctx.lr = 0x82365F20;
	sub_8236B080(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82365e08
	ctx.lr = 0x82365F28;
	sub_82365E08(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82634d40
	ctx.lr = 0x82365F30;
	sub_82634D40(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82634d40
	ctx.lr = 0x82365F38;
	sub_82634D40(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82634d40
	ctx.lr = 0x82365F40;
	sub_82634D40(ctx, base);
loc_82365F40:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365f58
	if (ctx.cr6.eq) goto loc_82365F58;
	// bl 0x82365e08
	ctx.lr = 0x82365F50;
	sub_82365E08(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82634d40
	ctx.lr = 0x82365F58;
	sub_82634D40(ctx, base);
loc_82365F58:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365f90
	if (ctx.cr6.eq) goto loc_82365F90;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82365F68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82365f68
	if (!ctx.cr6.eq) goto loc_82365F68;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82362b98
	ctx.lr = 0x82365F88;
	sub_82362B98(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82634d40
	ctx.lr = 0x82365F90;
	sub_82634D40(ctx, base);
loc_82365F90:
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x82634d40
	ctx.lr = 0x82365F98;
	sub_82634D40(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,18260
	ctx.r7.s64 = ctx.r11.s64 + 18260;
	// li r6,6835
	ctx.r6.s64 = 6835;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82365FB4;
	sub_823911B8(ctx, base);
	// li r4,544
	ctx.r4.s64 = 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x82365FC0;
	sub_82362B98(ctx, base);
loc_82365FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365E70) {
	__imp__sub_82365E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365FC8) {
	PPC_FUNC_PROLOGUE();
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365FC8) {
	__imp__sub_82365FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365FD4) {
	__imp__sub_82365FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82365FE0;
	__savegprlr_14(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r5.u32);
	// stw r6,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r6.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r5,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r5.u8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82366010
	if (!ctx.cr6.eq) goto loc_82366010;
	// stb r28,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r28.u8);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
loc_82366010:
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// stb r11,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r11.u8);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// addi r7,r10,21504
	ctx.r7.s64 = ctx.r10.s64 + 21504;
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// addi r6,r9,21504
	ctx.r6.s64 = ctx.r9.s64 + 21504;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// ori r10,r8,60000
	ctx.r10.u64 = ctx.r8.u64 | 60000;
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r15,0
	ctx.r15.s64 = 0;
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// li r27,3
	ctx.r27.s64 = 3;
	// sth r15,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r15.u16);
	// sth r10,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r10.u16);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// sth r10,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r10.u16);
	// sth r10,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r10.u16);
	// bne cr6,0x823667a0
	if (!ctx.cr6.eq) goto loc_823667A0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r28,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r28.u8);
	// li r8,201
	ctx.r8.s64 = 201;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// li r6,104
	ctx.r6.s64 = 104;
	// stb r10,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r10.u8);
	// li r7,33
	ctx.r7.s64 = 33;
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// stb r6,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r6.u8);
	// li r10,196
	ctx.r10.s64 = 196;
	// li r8,139
	ctx.r8.s64 = 139;
	// stb r7,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r7.u8);
	// li r6,209
	ctx.r6.s64 = 209;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// li r7,128
	ctx.r7.s64 = 128;
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// li r27,220
	ctx.r27.s64 = 220;
	// stb r6,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r6.u8);
	// li r26,41
	ctx.r26.s64 = 41;
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// li r21,138
	ctx.r21.s64 = 138;
	// stb r27,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r27.u8);
	// li r10,78
	ctx.r10.s64 = 78;
	// stb r26,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r26.u8);
	// li r25,204
	ctx.r25.s64 = 204;
	// stb r21,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r21.u8);
	// li r8,103
	ctx.r8.s64 = 103;
	// stb r10,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r10.u8);
	// li r6,116
	ctx.r6.s64 = 116;
	// stb r25,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r25.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r8,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r8.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r6,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r6.u8);
	// li r9,52
	ctx.r9.s64 = 52;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r16,218
	ctx.r16.s64 = 218;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// li r29,162
	ctx.r29.s64 = 162;
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// li r30,194
	ctx.r30.s64 = 194;
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// li r22,198
	ctx.r22.s64 = 198;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// li r3,98
	ctx.r3.s64 = 98;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// li r4,28
	ctx.r4.s64 = 28;
	// stb r11,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// li r23,11
	ctx.r23.s64 = 11;
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// li r24,166
	ctx.r24.s64 = 166;
	// stb r16,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r16.u8);
	// li r7,81
	ctx.r7.s64 = 81;
	// stb r29,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r29.u8);
	// li r27,190
	ctx.r27.s64 = 190;
	// stb r30,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r30.u8);
	// li r26,19
	ctx.r26.s64 = 19;
	// stb r9,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r9.u8);
	// li r20,59
	ctx.r20.s64 = 59;
	// stb r22,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r22.u8);
	// li r21,34
	ctx.r21.s64 = 34;
	// stb r3,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r3.u8);
	// li r19,155
	ctx.r19.s64 = 155;
	// stb r4,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r4.u8);
	// li r18,74
	ctx.r18.s64 = 74;
	// stb r5,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r5.u8);
	// li r8,149
	ctx.r8.s64 = 149;
	// stb r23,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r23.u8);
	// li r10,109
	ctx.r10.s64 = 109;
	// stb r27,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r27.u8);
	// li r25,55
	ctx.r25.s64 = 55;
	// stb r24,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r24.u8);
	// stb r20,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r20.u8);
	// li r6,121
	ctx.r6.s64 = 121;
	// stb r26,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r26.u8);
	// stb r19,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r19.u8);
	// stb r21,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r21.u8);
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stb r18,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r18.u8);
	// stb r5,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r5.u8);
	// stb r9,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r9.u8);
	// li r9,142
	ctx.r9.s64 = 142;
	// stb r6,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r6.u8);
	// li r27,221
	ctx.r27.s64 = 221;
	// std r28,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r28.u64);
	// stb r9,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r9.u8);
	// li r6,239
	ctx.r6.s64 = 239;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r27,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r27.u8);
	// stb r6,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r6.u8);
	// li r27,25
	ctx.r27.s64 = 25;
	// stb r9,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r9.u8);
	// li r6,179
	ctx.r6.s64 = 179;
	// li r9,205
	ctx.r9.s64 = 205;
	// stb r27,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r27.u8);
	// li r20,79
	ctx.r20.s64 = 79;
	// stb r6,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r6.u8);
	// stb r9,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r9.u8);
	// li r21,20
	ctx.r21.s64 = 20;
	// stb r20,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r20.u8);
	// li r26,58
	ctx.r26.s64 = 58;
	// li r27,67
	ctx.r27.s64 = 67;
	// stb r21,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r21.u8);
	// li r6,27
	ctx.r6.s64 = 27;
	// stb r26,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r26.u8);
	// li r9,48
	ctx.r9.s64 = 48;
	// stb r27,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r27.u8);
	// li r20,53
	ctx.r20.s64 = 53;
	// stb r6,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r6.u8);
	// stb r9,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r9.u8);
	// li r21,225
	ctx.r21.s64 = 225;
	// li r19,69
	ctx.r19.s64 = 69;
	// stb r20,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r20.u8);
	// li r26,10
	ctx.r26.s64 = 10;
	// stb r21,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r21.u8);
	// li r27,43
	ctx.r27.s64 = 43;
	// stb r19,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r19.u8);
	// li r6,242
	ctx.r6.s64 = 242;
	// stb r26,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r26.u8);
	// li r9,95
	ctx.r9.s64 = 95;
	// stb r27,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r27.u8);
	// li r20,133
	ctx.r20.s64 = 133;
	// stb r6,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r6.u8);
	// li r21,118
	ctx.r21.s64 = 118;
	// stb r9,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r9.u8);
	// li r18,181
	ctx.r18.s64 = 181;
	// stb r20,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r20.u8);
	// li r19,94
	ctx.r19.s64 = 94;
	// stb r21,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r21.u8);
	// li r27,244
	ctx.r27.s64 = 244;
	// stb r18,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r18.u8);
	// li r6,237
	ctx.r6.s64 = 237;
	// stb r19,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r19.u8);
	// li r9,107
	ctx.r9.s64 = 107;
	// stb r8,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r8.u8);
	// li r26,228
	ctx.r26.s64 = 228;
	// stb r10,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r10.u8);
	// li r17,76
	ctx.r17.s64 = 76;
	// stb r25,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r25.u8);
	// li r14,126
	ctx.r14.s64 = 126;
	// stb r10,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, ctx.r10.u8);
	// li r28,66
	ctx.r28.s64 = 66;
	// stb r10,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r10.u8);
	// li r20,233
	ctx.r20.s64 = 233;
	// stb r7,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r7.u8);
	// stb r30,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r30.u8);
	// li r18,90
	ctx.r18.s64 = 90;
	// stb r26,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r26.u8);
	// li r21,92
	ctx.r21.s64 = 92;
	// stb r3,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r3.u8);
	// li r19,182
	ctx.r19.s64 = 182;
	// stb r14,174(r1)
	PPC_STORE_U8(ctx.r1.u32 + 174, ctx.r14.u8);
	// stb r22,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r22.u8);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
	// stb r17,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r17.u8);
	// stb r28,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r28.u8);
	// stb r20,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r20.u8);
	// stb r24,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r24.u8);
	// stb r25,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r25.u8);
	// stb r6,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r6.u8);
	// stb r9,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r9.u8);
	// stb r23,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r23.u8);
	// li r25,183
	ctx.r25.s64 = 183;
	// stb r27,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r27.u8);
	// li r27,159
	ctx.r27.s64 = 159;
	// stb r6,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r6.u8);
	// stb r25,190(r1)
	PPC_STORE_U8(ctx.r1.u32 + 190, ctx.r25.u8);
	// li r24,238
	ctx.r24.s64 = 238;
	// li r25,137
	ctx.r25.s64 = 137;
	// stb r27,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r27.u8);
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
	// li r24,174
	ctx.r24.s64 = 174;
	// stb r27,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r27.u8);
	// li r27,165
	ctx.r27.s64 = 165;
	// stb r25,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r25.u8);
	// li r25,17
	ctx.r25.s64 = 17;
	// stb r27,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r27.u8);
	// li r14,251
	ctx.r14.s64 = 251;
	// stb r24,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r24.u8);
	// li r27,75
	ctx.r27.s64 = 75;
	// stb r25,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, ctx.r25.u8);
	// li r24,31
	ctx.r24.s64 = 31;
	// li r25,230
	ctx.r25.s64 = 230;
	// stb r14,195(r1)
	PPC_STORE_U8(ctx.r1.u32 + 195, ctx.r14.u8);
	// stb r27,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r27.u8);
	// li r6,6
	ctx.r6.s64 = 6;
	// stb r24,206(r1)
	PPC_STORE_U8(ctx.r1.u32 + 206, ctx.r24.u8);
	// li r23,56
	ctx.r23.s64 = 56;
	// stb r25,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r25.u8);
	// li r14,40
	ctx.r14.s64 = 40;
	// li r27,102
	ctx.r27.s64 = 102;
	// stb r9,194(r1)
	PPC_STORE_U8(ctx.r1.u32 + 194, ctx.r9.u8);
	// li r24,91
	ctx.r24.s64 = 91;
	// stb r11,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r11.u8);
	// li r25,61
	ctx.r25.s64 = 61;
	// stb r21,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r21.u8);
	// stb r19,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r19.u8);
	// li r9,124
	ctx.r9.s64 = 124;
	// stb r6,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r6.u8);
	// li r19,36
	ctx.r19.s64 = 36;
	// stb r23,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r23.u8);
	// li r20,73
	ctx.r20.s64 = 73;
	// stb r14,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r14.u8);
	// li r21,236
	ctx.r21.s64 = 236;
	// stb r27,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r27.u8);
	// li r22,5
	ctx.r22.s64 = 5;
	// stb r7,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r7.u8);
	// li r6,152
	ctx.r6.s64 = 152;
	// std r11,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r11.u64);
	// li r23,54
	ctx.r23.s64 = 54;
	// stb r26,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r26.u8);
	// li r28,184
	ctx.r28.s64 = 184;
	// stb r24,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r24.u8);
	// li r14,161
	ctx.r14.s64 = 161;
	// stb r25,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r25.u8);
	// li r27,99
	ctx.r27.s64 = 99;
	// li r7,191
	ctx.r7.s64 = 191;
	// stb r30,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r30.u8);
	// li r11,72
	ctx.r11.s64 = 72;
	// stb r18,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r18.u8);
	// li r26,85
	ctx.r26.s64 = 85;
	// stb r19,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r19.u8);
	// li r24,211
	ctx.r24.s64 = 211;
	// stb r9,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r9.u8);
	// li r25,154
	ctx.r25.s64 = 154;
	// stb r20,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r20.u8);
	// stb r21,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r21.u8);
	// li r30,105
	ctx.r30.s64 = 105;
	// stb r15,217(r1)
	PPC_STORE_U8(ctx.r1.u32 + 217, ctx.r15.u8);
	// stb r9,218(r1)
	PPC_STORE_U8(ctx.r1.u32 + 218, ctx.r9.u8);
	// stb r28,219(r1)
	PPC_STORE_U8(ctx.r1.u32 + 219, ctx.r28.u8);
	// stb r14,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r14.u8);
	// stb r27,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r27.u8);
	// stb r7,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r7.u8);
	// stb r22,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r22.u8);
	// stb r6,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r6.u8);
	// stb r16,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r16.u8);
	// stb r11,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r11.u8);
	// stb r23,227(r1)
	PPC_STORE_U8(ctx.r1.u32 + 227, ctx.r23.u8);
	// stb r4,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r4.u8);
	// stb r26,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, ctx.r26.u8);
	// stb r24,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, ctx.r24.u8);
	// stb r25,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r25.u8);
	// stb r4,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r4.u8);
	// li r4,22
	ctx.r4.s64 = 22;
	// stb r3,249(r1)
	PPC_STORE_U8(ctx.r1.u32 + 249, ctx.r3.u8);
	// li r3,63
	ctx.r3.s64 = 63;
	// stb r4,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, ctx.r4.u8);
	// li r4,253
	ctx.r4.s64 = 253;
	// stb r10,263(r1)
	PPC_STORE_U8(ctx.r1.u32 + 263, ctx.r10.u8);
	// li r10,168
	ctx.r10.s64 = 168;
	// stb r3,234(r1)
	PPC_STORE_U8(ctx.r1.u32 + 234, ctx.r3.u8);
	// li r3,207
	ctx.r3.s64 = 207;
	// stb r4,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r4.u8);
	// li r4,95
	ctx.r4.s64 = 95;
	// stb r10,235(r1)
	PPC_STORE_U8(ctx.r1.u32 + 235, ctx.r10.u8);
	// li r10,101
	ctx.r10.s64 = 101;
	// stb r3,238(r1)
	PPC_STORE_U8(ctx.r1.u32 + 238, ctx.r3.u8);
	// li r3,35
	ctx.r3.s64 = 35;
	// stb r4,239(r1)
	PPC_STORE_U8(ctx.r1.u32 + 239, ctx.r4.u8);
	// li r4,173
	ctx.r4.s64 = 173;
	// stb r10,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r10.u8);
	// li r10,163
	ctx.r10.s64 = 163;
	// stb r3,243(r1)
	PPC_STORE_U8(ctx.r1.u32 + 243, ctx.r3.u8);
	// li r3,220
	ctx.r3.s64 = 220;
	// stb r4,246(r1)
	PPC_STORE_U8(ctx.r1.u32 + 246, ctx.r4.u8);
	// li r4,86
	ctx.r4.s64 = 86;
	// stb r10,245(r1)
	PPC_STORE_U8(ctx.r1.u32 + 245, ctx.r10.u8);
	// li r10,243
	ctx.r10.s64 = 243;
	// stb r3,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r3.u8);
	// li r3,32
	ctx.r3.s64 = 32;
	// stb r4,251(r1)
	PPC_STORE_U8(ctx.r1.u32 + 251, ctx.r4.u8);
	// li r4,133
	ctx.r4.s64 = 133;
	// stb r10,250(r1)
	PPC_STORE_U8(ctx.r1.u32 + 250, ctx.r10.u8);
	// li r10,187
	ctx.r10.s64 = 187;
	// stb r3,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r3.u8);
	// li r3,213
	ctx.r3.s64 = 213;
	// stb r4,253(r1)
	PPC_STORE_U8(ctx.r1.u32 + 253, ctx.r4.u8);
	// li r4,41
	ctx.r4.s64 = 41;
	// stb r10,255(r1)
	PPC_STORE_U8(ctx.r1.u32 + 255, ctx.r10.u8);
	// li r10,112
	ctx.r10.s64 = 112;
	// stb r19,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r19.u8);
	// li r7,150
	ctx.r7.s64 = 150;
	// stb r3,257(r1)
	PPC_STORE_U8(ctx.r1.u32 + 257, ctx.r3.u8);
	// li r19,12
	ctx.r19.s64 = 12;
	// stb r4,258(r1)
	PPC_STORE_U8(ctx.r1.u32 + 258, ctx.r4.u8);
	// li r3,103
	ctx.r3.s64 = 103;
	// li r4,53
	ctx.r4.s64 = 53;
	// stb r10,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r10.u8);
	// li r10,78
	ctx.r10.s64 = 78;
	// stb r30,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r30.u8);
	// stb r7,247(r1)
	PPC_STORE_U8(ctx.r1.u32 + 247, ctx.r7.u8);
	// li r24,131
	ctx.r24.s64 = 131;
	// stb r7,261(r1)
	PPC_STORE_U8(ctx.r1.u32 + 261, ctx.r7.u8);
	// li r25,93
	ctx.r25.s64 = 93;
	// stb r7,262(r1)
	PPC_STORE_U8(ctx.r1.u32 + 262, ctx.r7.u8);
	// li r26,82
	ctx.r26.s64 = 82;
	// stb r3,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r3.u8);
	// li r27,158
	ctx.r27.s64 = 158;
	// stb r19,265(r1)
	PPC_STORE_U8(ctx.r1.u32 + 265, ctx.r19.u8);
	// li r30,7
	ctx.r30.s64 = 7;
	// stb r4,266(r1)
	PPC_STORE_U8(ctx.r1.u32 + 266, ctx.r4.u8);
	// li r16,188
	ctx.r16.s64 = 188;
	// li r15,74
	ctx.r15.s64 = 74;
	// stb r10,267(r1)
	PPC_STORE_U8(ctx.r1.u32 + 267, ctx.r10.u8);
	// li r7,241
	ctx.r7.s64 = 241;
	// stb r24,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r24.u8);
	// li r3,4
	ctx.r3.s64 = 4;
	// stb r25,242(r1)
	PPC_STORE_U8(ctx.r1.u32 + 242, ctx.r25.u8);
	// li r19,108
	ctx.r19.s64 = 108;
	// stb r26,254(r1)
	PPC_STORE_U8(ctx.r1.u32 + 254, ctx.r26.u8);
	// li r4,116
	ctx.r4.s64 = 116;
	// stb r27,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r27.u8);
	// stb r30,259(r1)
	PPC_STORE_U8(ctx.r1.u32 + 259, ctx.r30.u8);
	// li r14,202
	ctx.r14.s64 = 202;
	// stb r15,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r15.u8);
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r16,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r16.u8);
	// stb r6,270(r1)
	PPC_STORE_U8(ctx.r1.u32 + 270, ctx.r6.u8);
	// stb r3,271(r1)
	PPC_STORE_U8(ctx.r1.u32 + 271, ctx.r3.u8);
	// stb r7,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r7.u8);
	// stb r4,273(r1)
	PPC_STORE_U8(ctx.r1.u32 + 273, ctx.r4.u8);
	// stb r19,274(r1)
	PPC_STORE_U8(ctx.r1.u32 + 274, ctx.r19.u8);
	// stb r5,275(r1)
	PPC_STORE_U8(ctx.r1.u32 + 275, ctx.r5.u8);
	// li r3,50
	ctx.r3.s64 = 50;
	// stb r23,285(r1)
	PPC_STORE_U8(ctx.r1.u32 + 285, ctx.r23.u8);
	// li r7,33
	ctx.r7.s64 = 33;
	// stb r27,289(r1)
	PPC_STORE_U8(ctx.r1.u32 + 289, ctx.r27.u8);
	// stb r3,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r3.u8);
	// li r3,94
	ctx.r3.s64 = 94;
	// li r5,144
	ctx.r5.s64 = 144;
	// stb r7,278(r1)
	PPC_STORE_U8(ctx.r1.u32 + 278, ctx.r7.u8);
	// stb r3,282(r1)
	PPC_STORE_U8(ctx.r1.u32 + 282, ctx.r3.u8);
	// li r4,70
	ctx.r4.s64 = 70;
	// li r3,59
	ctx.r3.s64 = 59;
	// stb r5,281(r1)
	PPC_STORE_U8(ctx.r1.u32 + 281, ctx.r5.u8);
	// stb r4,283(r1)
	PPC_STORE_U8(ctx.r1.u32 + 283, ctx.r4.u8);
	// li r7,46
	ctx.r7.s64 = 46;
	// stb r3,287(r1)
	PPC_STORE_U8(ctx.r1.u32 + 287, ctx.r3.u8);
	// li r5,206
	ctx.r5.s64 = 206;
	// li r4,227
	ctx.r4.s64 = 227;
	// stb r7,284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 284, ctx.r7.u8);
	// li r23,44
	ctx.r23.s64 = 44;
	// stb r5,286(r1)
	PPC_STORE_U8(ctx.r1.u32 + 286, ctx.r5.u8);
	// li r3,134
	ctx.r3.s64 = 134;
	// stb r4,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r4.u8);
	// li r7,119
	ctx.r7.s64 = 119;
	// stb r23,291(r1)
	PPC_STORE_U8(ctx.r1.u32 + 291, ctx.r23.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r3,294(r1)
	PPC_STORE_U8(ctx.r1.u32 + 294, ctx.r3.u8);
	// li r4,39
	ctx.r4.s64 = 39;
	// stb r7,290(r1)
	PPC_STORE_U8(ctx.r1.u32 + 290, ctx.r7.u8);
	// li r23,143
	ctx.r23.s64 = 143;
	// stb r5,293(r1)
	PPC_STORE_U8(ctx.r1.u32 + 293, ctx.r5.u8);
	// li r3,181
	ctx.r3.s64 = 181;
	// stb r4,297(r1)
	PPC_STORE_U8(ctx.r1.u32 + 297, ctx.r4.u8);
	// li r7,155
	ctx.r7.s64 = 155;
	// stb r24,298(r1)
	PPC_STORE_U8(ctx.r1.u32 + 298, ctx.r24.u8);
	// li r5,197
	ctx.r5.s64 = 197;
	// stb r29,299(r1)
	PPC_STORE_U8(ctx.r1.u32 + 299, ctx.r29.u8);
	// li r19,240
	ctx.r19.s64 = 240;
	// stb r21,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r21.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// li r27,3
	ctx.r27.s64 = 3;
	// stb r29,302(r1)
	PPC_STORE_U8(ctx.r1.u32 + 302, ctx.r29.u8);
	// li r16,111
	ctx.r16.s64 = 111;
	// stb r23,303(r1)
	PPC_STORE_U8(ctx.r1.u32 + 303, ctx.r23.u8);
	// li r4,222
	ctx.r4.s64 = 222;
	// stb r3,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r3.u8);
	// li r24,201
	ctx.r24.s64 = 201;
	// li r15,203
	ctx.r15.s64 = 203;
	// stb r7,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r7.u8);
	// li r21,246
	ctx.r21.s64 = 246;
	// stb r5,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r5.u8);
	// li r30,43
	ctx.r30.s64 = 43;
	// stb r25,306(r1)
	PPC_STORE_U8(ctx.r1.u32 + 306, ctx.r25.u8);
	// li r29,88
	ctx.r29.s64 = 88;
	// stb r19,307(r1)
	PPC_STORE_U8(ctx.r1.u32 + 307, ctx.r19.u8);
	// li r23,23
	ctx.r23.s64 = 23;
	// stb r14,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r14.u8);
	// li r3,57
	ctx.r3.s64 = 57;
	// stb r10,277(r1)
	PPC_STORE_U8(ctx.r1.u32 + 277, ctx.r10.u8);
	// stb r9,279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 279, ctx.r9.u8);
	// li r5,234
	ctx.r5.s64 = 234;
	// stb r10,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r10.u8);
	// li r7,21
	ctx.r7.s64 = 21;
	// stb r27,295(r1)
	PPC_STORE_U8(ctx.r1.u32 + 295, ctx.r27.u8);
	// li r25,106
	ctx.r25.s64 = 106;
	// stb r16,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r16.u8);
	// li r19,229
	ctx.r19.s64 = 229;
	// stb r17,309(r1)
	PPC_STORE_U8(ctx.r1.u32 + 309, ctx.r17.u8);
	// stb r26,310(r1)
	PPC_STORE_U8(ctx.r1.u32 + 310, ctx.r26.u8);
	// stb r24,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r24.u8);
	// stb r4,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r4.u8);
	// stb r30,313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 313, ctx.r30.u8);
	// stb r15,314(r1)
	PPC_STORE_U8(ctx.r1.u32 + 314, ctx.r15.u8);
	// stb r21,315(r1)
	PPC_STORE_U8(ctx.r1.u32 + 315, ctx.r21.u8);
	// stb r8,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, ctx.r8.u8);
	// stb r29,317(r1)
	PPC_STORE_U8(ctx.r1.u32 + 317, ctx.r29.u8);
	// stb r23,318(r1)
	PPC_STORE_U8(ctx.r1.u32 + 318, ctx.r23.u8);
	// stb r10,319(r1)
	PPC_STORE_U8(ctx.r1.u32 + 319, ctx.r10.u8);
	// stb r3,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r3.u8);
	// stb r8,321(r1)
	PPC_STORE_U8(ctx.r1.u32 + 321, ctx.r8.u8);
	// stb r20,322(r1)
	PPC_STORE_U8(ctx.r1.u32 + 322, ctx.r20.u8);
	// stb r9,323(r1)
	PPC_STORE_U8(ctx.r1.u32 + 323, ctx.r9.u8);
	// ld r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// li r4,210
	ctx.r4.s64 = 210;
	// ld r28,360(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// li r3,38
	ctx.r3.s64 = 38;
	// stb r5,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r5.u8);
	// li r9,250
	ctx.r9.s64 = 250;
	// stb r8,325(r1)
	PPC_STORE_U8(ctx.r1.u32 + 325, ctx.r8.u8);
	// li r5,114
	ctx.r5.s64 = 114;
	// stb r25,326(r1)
	PPC_STORE_U8(ctx.r1.u32 + 326, ctx.r25.u8);
	// li r8,16
	ctx.r8.s64 = 16;
	// stb r10,331(r1)
	PPC_STORE_U8(ctx.r1.u32 + 331, ctx.r10.u8);
	// li r10,104
	ctx.r10.s64 = 104;
	// li r30,142
	ctx.r30.s64 = 142;
	// stb r7,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r7.u8);
	// li r29,172
	ctx.r29.s64 = 172;
	// stb r6,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r6.u8);
	// li r26,170
	ctx.r26.s64 = 170;
	// stb r7,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r7.u8);
	// li r25,138
	ctx.r25.s64 = 138;
	// stb r4,329(r1)
	PPC_STORE_U8(ctx.r1.u32 + 329, ctx.r4.u8);
	// stb r3,330(r1)
	PPC_STORE_U8(ctx.r1.u32 + 330, ctx.r3.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r5,337(r1)
	PPC_STORE_U8(ctx.r1.u32 + 337, ctx.r5.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r19,327(r1)
	PPC_STORE_U8(ctx.r1.u32 + 327, ctx.r19.u8);
	// li r5,256
	ctx.r5.s64 = 256;
	// stb r9,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r9.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r22,334(r1)
	PPC_STORE_U8(ctx.r1.u32 + 334, ctx.r22.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,335(r1)
	PPC_STORE_U8(ctx.r1.u32 + 335, ctx.r8.u8);
	// stb r30,338(r1)
	PPC_STORE_U8(ctx.r1.u32 + 338, ctx.r30.u8);
	// stb r18,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, ctx.r18.u8);
	// stb r25,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r25.u8);
	// stb r29,341(r1)
	PPC_STORE_U8(ctx.r1.u32 + 341, ctx.r29.u8);
	// stb r26,342(r1)
	PPC_STORE_U8(ctx.r1.u32 + 342, ctx.r26.u8);
	// stb r10,343(r1)
	PPC_STORE_U8(ctx.r1.u32 + 343, ctx.r10.u8);
	// stb r11,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, ctx.r11.u8);
	// stb r11,345(r1)
	PPC_STORE_U8(ctx.r1.u32 + 345, ctx.r11.u8);
	// stb r11,346(r1)
	PPC_STORE_U8(ctx.r1.u32 + 346, ctx.r11.u8);
	// stb r11,347(r1)
	PPC_STORE_U8(ctx.r1.u32 + 347, ctx.r11.u8);
	// stb r11,348(r1)
	PPC_STORE_U8(ctx.r1.u32 + 348, ctx.r11.u8);
	// stb r11,349(r1)
	PPC_STORE_U8(ctx.r1.u32 + 349, ctx.r11.u8);
	// stb r11,350(r1)
	PPC_STORE_U8(ctx.r1.u32 + 350, ctx.r11.u8);
	// stb r11,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, ctx.r11.u8);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x82365538
	ctx.lr = 0x82366790;
	sub_82365538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236685c
	if (!ctx.cr6.eq) goto loc_8236685C;
	// lwz r5,564(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// li r11,1
	ctx.r11.s64 = 1;
loc_823667A0:
	// lwz r10,572(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// stb r27,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r27.u8);
	// beq cr6,0x82366810
	if (ctx.cr6.eq) goto loc_82366810;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// bne cr6,0x823667c8
	if (!ctx.cr6.eq) goto loc_823667C8;
	// stb r28,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r28.u8);
loc_823667C8:
	// bl 0x82391d18
	ctx.lr = 0x823667CC;
	sub_82391D18(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// addi r9,r11,14788
	ctx.r9.s64 = ctx.r11.s64 + 14788;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// addi r8,r10,16460
	ctx.r8.s64 = ctx.r10.s64 + 16460;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// bl 0x82374bc0
	ctx.lr = 0x823667F8;
	sub_82374BC0(ctx, base);
	// li r7,1024
	ctx.r7.s64 = 1024;
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82366810:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stb r27,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r27.u8);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,16460
	ctx.r11.s64 = ctx.r11.s64 + 16460;
	// addi r9,r10,14820
	ctx.r9.s64 = ctx.r10.s64 + 14820;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
loc_8236685C:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365FD8) {
	__imp__sub_82365FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366864) {
	__imp__sub_82366864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366868) {
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
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// bl 0x823706c0
	ctx.lr = 0x82366888;
	sub_823706C0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x823706c0
	ctx.lr = 0x82366890;
	sub_823706C0(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823668b8
	if (ctx.cr6.eq) goto loc_823668B8;
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x82362b98
	ctx.lr = 0x823668A8;
	sub_82362B98(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82634d40
	ctx.lr = 0x823668B0;
	sub_82634D40(ctx, base);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
loc_823668B8:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823668dc
	if (ctx.cr6.eq) goto loc_823668DC;
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x82362b98
	ctx.lr = 0x823668CC;
	sub_82362B98(ctx, base);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x82634d40
	ctx.lr = 0x823668D4;
	sub_82634D40(ctx, base);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
loc_823668DC:
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823668fc
	if (ctx.cr6.eq) goto loc_823668FC;
loc_823668E8:
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x823668F0;
	sub_82634D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823668e8
	if (!ctx.cr6.eq) goto loc_823668E8;
loc_823668FC:
	// li r4,232
	ctx.r4.s64 = 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x82366908;
	sub_82362B98(ctx, base);
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

PPC_WEAK_FUNC(sub_82366868) {
	__imp__sub_82366868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366920) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235d8d0
	ctx.lr = 0x8236693C;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236695c
	if (ctx.cr6.eq) goto loc_8236695C;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8236695C:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d8d0
	ctx.lr = 0x82366968;
	sub_8235D8D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,3
	ctx.r9.s64 = 3;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
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

PPC_WEAK_FUNC(sub_82366920) {
	__imp__sub_82366920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236698C) {
	__imp__sub_8236698C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366990) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823669b8
	if (ctx.cr6.eq) goto loc_823669B8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x823669b0
	if (ctx.cr6.eq) goto loc_823669B0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x823669b0
	if (ctx.cr6.eq) goto loc_823669B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823669B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_823669B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366990) {
	__imp__sub_82366990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823669C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823669e4
	if (ctx.cr6.eq) goto loc_823669E4;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r10,4
	ctx.r10.s64 = 4;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_823669E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823669C0) {
	__imp__sub_823669C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823669EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823669EC) {
	__imp__sub_823669EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823669F0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82366a10
	if (ctx.cr6.eq) goto loc_82366A10;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82366a08
	if (ctx.cr6.eq) goto loc_82366A08;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82366A08:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
loc_82366A10:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823669F0) {
	__imp__sub_823669F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366A18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82366a3c
	if (ctx.cr6.eq) goto loc_82366A3C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
loc_82366A3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366A18) {
	__imp__sub_82366A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366A50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366A50) {
	__imp__sub_82366A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366A5C) {
	__imp__sub_82366A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366A60) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82366abc
	if (ctx.cr6.gt) goto loc_82366ABC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82366a94
	// bdzf 4*cr6+eq,0x82366a9c
	// bdzf 4*cr6+eq,0x82366aa4
	// bdzf 4*cr6+eq,0x82366aac
	// bne cr6,0x82366ab4
	if (!ctx.cr6.eq) goto loc_82366AB4;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82366A94:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82366A9C:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82366AA4:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82366AAC:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82366AB4:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82366ABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366A60) {
	__imp__sub_82366A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366AC4) {
	__imp__sub_82366AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366AC8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82366b20
	if (ctx.cr6.gt) goto loc_82366B20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82366af8
	// bdzf 4*cr6+eq,0x82366b00
	// bdzf 4*cr6+eq,0x82366b08
	// bdzf 4*cr6+eq,0x82366b10
	// bne cr6,0x82366b18
	if (!ctx.cr6.eq) goto loc_82366B18;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82366AF8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82366B00:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82366B08:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82366B10:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82366B18:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82366B20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366AC8) {
	__imp__sub_82366AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82366b58
	if (ctx.cr6.eq) goto loc_82366B58;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366b58
	if (ctx.cr6.eq) goto loc_82366B58;
loc_82366B44:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82366b60
	if (ctx.cr6.eq) goto loc_82366B60;
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82366b44
	if (!ctx.cr6.eq) goto loc_82366B44;
loc_82366B58:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82366B60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366B28) {
	__imp__sub_82366B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82366b98
	if (ctx.cr6.eq) goto loc_82366B98;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366b98
	if (ctx.cr6.eq) goto loc_82366B98;
loc_82366B84:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82366ba0
	if (ctx.cr6.eq) goto loc_82366BA0;
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82366b84
	if (!ctx.cr6.eq) goto loc_82366B84;
loc_82366B98:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82366BA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366B68) {
	__imp__sub_82366B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82366BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82366c3c
	if (!ctx.cr6.eq) goto loc_82366C3C;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82366c40
	if (ctx.cr6.gt) goto loc_82366C40;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27636
	ctx.r12.s64 = ctx.r12.s64 + 27636;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,27700(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27700);
	// lwz r17,27684(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27684);
	// lwz r17,27708(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27708);
	// lwz r17,27708(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27708);
	// lwz r17,27708(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27708);
	// lwz r17,27700(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27700);
	// lwz r17,27700(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27700);
	// lwz r17,27684(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27684);
	// lwz r17,27700(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27700);
	// lwz r17,27692(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27692);
	// lwz r17,27692(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27692);
	// lwz r17,27700(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27700);
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82366c40
	goto loc_82366C40;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82366c40
	goto loc_82366C40;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82366c40
	goto loc_82366C40;
loc_82366C3C:
	// li r11,128
	ctx.r11.s64 = 128;
loc_82366C40:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235f8c8
	ctx.lr = 0x82366C4C;
	sub_8235F8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366c64
	if (ctx.cr6.eq) goto loc_82366C64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82366C64:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82366c78
	if (!ctx.cr6.eq) goto loc_82366C78;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,18288
	ctx.r4.s64 = ctx.r11.s64 + 18288;
	// b 0x82366c80
	goto loc_82366C80;
loc_82366C78:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,18276
	ctx.r4.s64 = ctx.r11.s64 + 18276;
loc_82366C80:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235f938
	ctx.lr = 0x82366C8C;
	sub_8235F938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366cac
	if (ctx.cr6.eq) goto loc_82366CAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82366CAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366BA8) {
	__imp__sub_82366BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82366d34
	if (!ctx.cr6.eq) goto loc_82366D34;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82366d34
	if (ctx.cr6.gt) goto loc_82366D34;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366d34
	if (ctx.cr6.eq) goto loc_82366D34;
	// bdz 0x82366cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82366CEC;
	// bdz 0x82366d34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82366D34;
	// bdz 0x82366d1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82366D1C;
	// b 0x82366d04
	goto loc_82366D04;
loc_82366CEC:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,15608
	ctx.r9.s64 = ctx.r10.s64 + 15608;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
loc_82366D04:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,16016
	ctx.r9.s64 = ctx.r10.s64 + 16016;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
loc_82366D1C:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,15832
	ctx.r9.s64 = ctx.r10.s64 + 15832;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
loc_82366D34:
	// li r3,-26112
	ctx.r3.s64 = -26112;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366CB8) {
	__imp__sub_82366CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366D3C) {
	__imp__sub_82366D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82366D48;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82385a08
	ctx.lr = 0x82366D64;
	sub_82385A08(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82381cf0
	ctx.lr = 0x82366D6C;
	sub_82381CF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82385a38
	ctx.lr = 0x82366D74;
	sub_82385A38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366d90
	if (ctx.cr6.eq) goto loc_82366D90;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7466
	ctx.r6.s64 = 7466;
	// addi r7,r11,18420
	ctx.r7.s64 = ctx.r11.s64 + 18420;
	// b 0x82366eb8
	goto loc_82366EB8;
loc_82366D90:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1128
	ctx.r4.s64 = ctx.r11.s64 + 1128;
	// bl 0x823866c0
	ctx.lr = 0x82366DA4;
	sub_823866C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366dc0
	if (ctx.cr6.eq) goto loc_82366DC0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7471
	ctx.r6.s64 = 7471;
	// addi r7,r11,18396
	ctx.r7.s64 = ctx.r11.s64 + 18396;
	// b 0x82366eb8
	goto loc_82366EB8;
loc_82366DC0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823866c0
	ctx.lr = 0x82366DD0;
	sub_823866C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366dec
	if (ctx.cr6.eq) goto loc_82366DEC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7475
	ctx.r6.s64 = 7475;
	// addi r7,r11,18396
	ctx.r7.s64 = ctx.r11.s64 + 18396;
	// b 0x82366eb8
	goto loc_82366EB8;
loc_82366DEC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823867a0
	ctx.lr = 0x82366DF8;
	sub_823867A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366e14
	if (ctx.cr6.eq) goto loc_82366E14;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7479
	ctx.r6.s64 = 7479;
	// addi r7,r11,18372
	ctx.r7.s64 = ctx.r11.s64 + 18372;
	// b 0x82366eb8
	goto loc_82366EB8;
loc_82366E14:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82383440
	ctx.lr = 0x82366E1C;
	sub_82383440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366e38
	if (ctx.cr6.eq) goto loc_82366E38;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7484
	ctx.r6.s64 = 7484;
	// addi r7,r11,18348
	ctx.r7.s64 = ctx.r11.s64 + 18348;
	// b 0x82366eb8
	goto loc_82366EB8;
loc_82366E38:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,1128
	ctx.r4.s64 = ctx.r11.s64 + 1128;
	// bl 0x823830e8
	ctx.lr = 0x82366E4C;
	sub_823830E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366e68
	if (ctx.cr6.eq) goto loc_82366E68;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7489
	ctx.r6.s64 = 7489;
	// addi r7,r11,18324
	ctx.r7.s64 = ctx.r11.s64 + 18324;
	// b 0x82366eb8
	goto loc_82366EB8;
loc_82366E68:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823830e8
	ctx.lr = 0x82366E78;
	sub_823830E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366e94
	if (ctx.cr6.eq) goto loc_82366E94;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7494
	ctx.r6.s64 = 7494;
	// addi r7,r11,18324
	ctx.r7.s64 = ctx.r11.s64 + 18324;
	// b 0x82366eb8
	goto loc_82366EB8;
loc_82366E94:
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823831c8
	ctx.lr = 0x82366EA0;
	sub_823831C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366ed0
	if (ctx.cr6.eq) goto loc_82366ED0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7499
	ctx.r6.s64 = 7499;
	// addi r7,r11,18300
	ctx.r7.s64 = ctx.r11.s64 + 18300;
loc_82366EB8:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823912a0
	ctx.lr = 0x82366ED0;
	sub_823912A0(ctx, base);
loc_82366ED0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82385a18
	ctx.lr = 0x82366ED8;
	sub_82385A18(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82383420
	ctx.lr = 0x82366EE0;
	sub_82383420(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82366ef8
	if (ctx.cr6.eq) goto loc_82366EF8;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82366EF8;
	sub_8236C3F8(ctx, base);
loc_82366EF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366D40) {
	__imp__sub_82366D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366F04) {
	__imp__sub_82366F04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82366F10;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8235cac8
	ctx.lr = 0x82366F30;
	sub_8235CAC8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8235d358
	ctx.lr = 0x82366F38;
	sub_8235D358(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r29,r11,16836
	ctx.r29.s64 = ctx.r11.s64 + 16836;
	// addi r7,r9,18504
	ctx.r7.s64 = ctx.r9.s64 + 18504;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,7588
	ctx.r6.s64 = 7588;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x82366F64;
	sub_823911B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238dd80
	ctx.lr = 0x82366F6C;
	sub_8238DD80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cd48
	ctx.lr = 0x82366F7C;
	sub_8235CD48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366f98
	if (ctx.cr6.eq) goto loc_82366F98;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7600
	ctx.r6.s64 = 7600;
	// addi r7,r11,16644
	ctx.r7.s64 = ctx.r11.s64 + 16644;
	// b 0x8236703c
	goto loc_8236703C;
loc_82366F98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235ce98
	ctx.lr = 0x82366FA0;
	sub_8235CE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366fbc
	if (ctx.cr6.eq) goto loc_82366FBC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7604
	ctx.r6.s64 = 7604;
	// addi r7,r11,18484
	ctx.r7.s64 = ctx.r11.s64 + 18484;
	// b 0x8236703c
	goto loc_8236703C;
loc_82366FBC:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1128
	ctx.r4.s64 = ctx.r11.s64 + 1128;
	// bl 0x8235cf30
	ctx.lr = 0x82366FD0;
	sub_8235CF30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366fec
	if (ctx.cr6.eq) goto loc_82366FEC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7608
	ctx.r6.s64 = 7608;
	// addi r7,r11,18464
	ctx.r7.s64 = ctx.r11.s64 + 18464;
	// b 0x8236703c
	goto loc_8236703C;
loc_82366FEC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cf30
	ctx.lr = 0x82366FFC;
	sub_8235CF30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367018
	if (ctx.cr6.eq) goto loc_82367018;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7612
	ctx.r6.s64 = 7612;
	// addi r7,r11,18464
	ctx.r7.s64 = ctx.r11.s64 + 18464;
	// b 0x8236703c
	goto loc_8236703C;
loc_82367018:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cfa8
	ctx.lr = 0x82367024;
	sub_8235CFA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367050
	if (ctx.cr6.eq) goto loc_82367050;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,7616
	ctx.r6.s64 = 7616;
	// addi r7,r11,18444
	ctx.r7.s64 = ctx.r11.s64 + 18444;
loc_8236703C:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823912a0
	ctx.lr = 0x82367050;
	sub_823912A0(ctx, base);
loc_82367050:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cb50
	ctx.lr = 0x82367058;
	sub_8235CB50(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82367070
	if (ctx.cr6.eq) goto loc_82367070;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82367070;
	sub_8236C3F8(ctx, base);
loc_82367070:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366F08) {
	__imp__sub_82366F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236707C) {
	__imp__sub_8236707C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82367088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823670d0
	if (ctx.cr6.eq) goto loc_823670D0;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823670bc
	if (ctx.cr6.eq) goto loc_823670BC;
	// bl 0x82360410
	ctx.lr = 0x823670B0;
	sub_82360410(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82634d40
	ctx.lr = 0x823670B8;
	sub_82634D40(ctx, base);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
loc_823670BC:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82634d40
	ctx.lr = 0x823670C4;
	sub_82634D40(ctx, base);
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x823670D0;
	sub_82362B98(ctx, base);
loc_823670D0:
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x823670E0;
	sub_82635430(ctx, base);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367150
	if (ctx.cr6.eq) goto loc_82367150;
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x823670FC;
	sub_826365A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// bne cr6,0x82367114
	if (!ctx.cr6.eq) goto loc_82367114;
loc_82367108:
	// li r3,-32512
	ctx.r3.s64 = -32512;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82367114:
	// bl 0x82360400
	ctx.lr = 0x82367118;
	sub_82360400(ctx, base);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82361268
	ctx.lr = 0x8236712C;
	sub_82361268(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367150
	if (ctx.cr6.eq) goto loc_82367150;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82634d40
	ctx.lr = 0x82367140;
	sub_82634D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82367150:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367180
	if (ctx.cr6.eq) goto loc_82367180;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x826365a8
	ctx.lr = 0x82367168;
	sub_826365A8(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367108
	if (ctx.cr6.eq) goto loc_82367108;
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82635430
	ctx.lr = 0x82367180;
	sub_82635430(ctx, base);
loc_82367180:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367080) {
	__imp__sub_82367080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236718C) {
	__imp__sub_8236718C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82367198;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r29,r11,16836
	ctx.r29.s64 = ctx.r11.s64 + 16836;
	// addi r7,r9,18656
	ctx.r7.s64 = ctx.r9.s64 + 18656;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1669
	ctx.r6.s64 = 1669;
	// lwz r30,20(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x823671C8;
	sub_823911B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8236724c
	if (!ctx.cr6.lt) goto loc_8236724C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r7,r11,11432
	ctx.r7.s64 = ctx.r11.s64 + 11432;
	// addi r6,r9,15608
	ctx.r6.s64 = ctx.r9.s64 + 15608;
	// addi r5,r8,19144
	ctx.r5.s64 = ctx.r8.s64 + 19144;
loc_823671F4:
	// stw r5,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x82363ba0
	ctx.lr = 0x82367214;
	sub_82363BA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823672bc
	if (ctx.cr6.eq) goto loc_823672BC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,18636
	ctx.r7.s64 = ctx.r11.s64 + 18636;
	// li r6,1685
	ctx.r6.s64 = 1685;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82367240;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236724C:
	// bne cr6,0x82367290
	if (!ctx.cr6.eq) goto loc_82367290;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x82367274
	if (!ctx.cr6.eq) goto loc_82367274;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r7,r11,13184
	ctx.r7.s64 = ctx.r11.s64 + 13184;
	// addi r6,r9,16016
	ctx.r6.s64 = ctx.r9.s64 + 16016;
	// addi r5,r8,19848
	ctx.r5.s64 = ctx.r8.s64 + 19848;
	// b 0x823671f4
	goto loc_823671F4;
loc_82367274:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r7,r11,13144
	ctx.r7.s64 = ctx.r11.s64 + 13144;
	// addi r6,r9,15832
	ctx.r6.s64 = ctx.r9.s64 + 15832;
	// addi r5,r8,19536
	ctx.r5.s64 = ctx.r8.s64 + 19536;
	// b 0x823671f4
	goto loc_823671F4;
loc_82367290:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,18612
	ctx.r7.s64 = ctx.r11.s64 + 18612;
	// li r8,-27648
	ctx.r8.s64 = -27648;
	// li r6,1676
	ctx.r6.s64 = 1676;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823672B0;
	sub_823912A0(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823672BC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r30,r11,1128
	ctx.r30.s64 = ctx.r11.s64 + 1128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x823672D4;
	sub_82635430(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x823672E4;
	sub_82635430(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82635430
	ctx.lr = 0x823672F8;
	sub_82635430(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x82367304;
	sub_82362B98(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r5,r11,60
	ctx.r5.s64 = ctx.r11.s64 + 60;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r8,1128
	ctx.r9.s64 = ctx.r8.s64 + 1128;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r7,128(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r6,132(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,36(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82363410
	ctx.lr = 0x82367340;
	sub_82363410(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367378
	if (ctx.cr6.eq) goto loc_82367378;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,18588
	ctx.r7.s64 = ctx.r11.s64 + 18588;
	// li r6,1721
	ctx.r6.s64 = 1721;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236736C;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82367378:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,1128
	ctx.r3.s64 = ctx.r11.s64 + 1128;
	// bl 0x82362b98
	ctx.lr = 0x82367388;
	sub_82362B98(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,18572
	ctx.r7.s64 = ctx.r11.s64 + 18572;
	// li r6,1743
	ctx.r6.s64 = 1743;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823673A4;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367190) {
	__imp__sub_82367190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823673B0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82367448
	if (!ctx.cr6.lt) goto loc_82367448;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// twllei r8,0
	// divwu r7,r9,r8
	ctx.r7.u32 = ctx.r9.u32 / ctx.r8.u32;
	// addic. r11,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r11.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367400
	if (ctx.cr0.eq) goto loc_82367400;
loc_823673E8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// bne cr6,0x823673e8
	if (!ctx.cr6.eq) goto loc_823673E8;
loc_82367400:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82367448
	if (!ctx.cr6.gt) goto loc_82367448;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,18672
	ctx.r7.s64 = ctx.r11.s64 + 18672;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,2067
	ctx.r6.s64 = 2067;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82367434;
	sub_823911B8(ctx, base);
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
loc_82367448:
	// bl 0x82365c98
	ctx.lr = 0x8236744C;
	sub_82365C98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823673B0) {
	__imp__sub_823673B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236745C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236745C) {
	__imp__sub_8236745C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82367468;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r26,20(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8236749c
	if (!ctx.cr6.eq) goto loc_8236749C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8236749C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r27,r11,16836
	ctx.r27.s64 = ctx.r11.s64 + 16836;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// beq cr6,0x823674d8
	if (ctx.cr6.eq) goto loc_823674D8;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r6,2543
	ctx.r6.s64 = 2543;
	// addi r7,r10,18948
	ctx.r7.s64 = ctx.r10.s64 + 18948;
	// bl 0x823911b8
	ctx.lr = 0x823674CC;
	sub_823911B8(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x823674f4
	goto loc_823674F4;
loc_823674D8:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r6,2547
	ctx.r6.s64 = 2547;
	// addi r7,r10,18896
	ctx.r7.s64 = ctx.r10.s64 + 18896;
	// bl 0x823911b8
	ctx.lr = 0x823674E8;
	sub_823911B8(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,104(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// lwz r10,108(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
loc_823674F4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r8,492(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82367514
	if (ctx.cr6.eq) goto loc_82367514;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,492(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// lwz r5,496(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// b 0x82367520
	goto loc_82367520;
loc_82367514:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r5,168(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
loc_82367520:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236752c
	if (ctx.cr6.eq) goto loc_8236752C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8236752C:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r6,156(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 156);
	// bl 0x823603f8
	ctx.lr = 0x8236754C;
	sub_823603F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367578
	if (ctx.cr6.eq) goto loc_82367578;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,18876
	ctx.r7.s64 = ctx.r11.s64 + 18876;
	// li r6,2600
	ctx.r6.s64 = 2600;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82367578;
	sub_823912A0(ctx, base);
loc_82367578:
	// addi r30,r28,204
	ctx.r30.s64 = ctx.r28.s64 + 204;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d8d0
	ctx.lr = 0x82367588;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367624
	if (ctx.cr6.eq) goto loc_82367624;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x823675A0;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x823675b4
	if (ctx.cr6.lt) goto loc_823675B4;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x823675b8
	if (!ctx.cr6.gt) goto loc_823675B8;
loc_823675B4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_823675B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823675ec
	if (ctx.cr6.eq) goto loc_823675EC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823675ec
	if (ctx.cr6.eq) goto loc_823675EC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_823675D8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82367624
	if (ctx.cr6.eq) goto loc_82367624;
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823675d8
	if (!ctx.cr6.eq) goto loc_823675D8;
loc_823675EC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r10,18844
	ctx.r7.s64 = ctx.r10.s64 + 18844;
	// li r6,2624
	ctx.r6.s64 = 2624;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 65536;
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// bl 0x823911b8
	ctx.lr = 0x82367618;
	sub_823911B8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82367624
	if (!ctx.cr6.eq) goto loc_82367624;
	// li r29,-31232
	ctx.r29.s64 = -31232;
loc_82367624:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// lbz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82366ba8
	ctx.lr = 0x82367648;
	sub_82366BA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367678
	if (ctx.cr6.eq) goto loc_82367678;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,18808
	ctx.r7.s64 = ctx.r11.s64 + 18808;
	// li r6,2636
	ctx.r6.s64 = 2636;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236766C;
	sub_823911B8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82367678
	if (!ctx.cr6.eq) goto loc_82367678;
	// li r29,-31232
	ctx.r29.s64 = -31232;
loc_82367678:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x82367694
	if (!ctx.cr6.eq) goto loc_82367694;
	// cmpwi cr6,r29,-9984
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -9984, ctx.xer);
	// beq cr6,0x82367690
	if (ctx.cr6.eq) goto loc_82367690;
	// cmpwi cr6,r29,-31232
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -31232, ctx.xer);
	// bne cr6,0x82367694
	if (!ctx.cr6.eq) goto loc_82367694;
loc_82367690:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82367694:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x823676c8
	if (!ctx.cr6.eq) goto loc_823676C8;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x823676c8
	if (!ctx.cr6.eq) goto loc_823676C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,18792
	ctx.r7.s64 = ctx.r11.s64 + 18792;
	// li r6,2655
	ctx.r6.s64 = 2655;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823676C0;
	sub_823911B8(ctx, base);
	// li r29,-30336
	ctx.r29.s64 = -30336;
	// b 0x823676d0
	goto loc_823676D0;
loc_823676C8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823677ac
	if (ctx.cr6.eq) goto loc_823677AC;
loc_823676D0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823676ec
	if (ctx.cr6.eq) goto loc_823676EC;
	// li r5,49
	ctx.r5.s64 = 49;
	// b 0x823677a0
	goto loc_823677A0;
loc_823676EC:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82367700
	if (ctx.cr6.eq) goto loc_82367700;
	// li r5,42
	ctx.r5.s64 = 42;
	// b 0x823677a0
	goto loc_823677A0;
loc_82367700:
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82367714
	if (ctx.cr6.eq) goto loc_82367714;
	// li r5,43
	ctx.r5.s64 = 43;
	// b 0x823677a0
	goto loc_823677A0;
loc_82367714:
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82367728
	if (ctx.cr6.eq) goto loc_82367728;
	// li r5,43
	ctx.r5.s64 = 43;
	// b 0x823677a0
	goto loc_823677A0;
loc_82367728:
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236773c
	if (ctx.cr6.eq) goto loc_8236773C;
	// li r5,43
	ctx.r5.s64 = 43;
	// b 0x823677a0
	goto loc_823677A0;
loc_8236773C:
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82367750
	if (ctx.cr6.eq) goto loc_82367750;
	// li r5,43
	ctx.r5.s64 = 43;
	// b 0x823677a0
	goto loc_823677A0;
loc_82367750:
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82367764
	if (ctx.cr6.eq) goto loc_82367764;
	// li r5,43
	ctx.r5.s64 = 43;
	// b 0x823677a0
	goto loc_823677A0;
loc_82367764:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82367778
	if (ctx.cr6.eq) goto loc_82367778;
	// li r5,45
	ctx.r5.s64 = 45;
	// b 0x823677a0
	goto loc_823677A0;
loc_82367778:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236778c
	if (ctx.cr6.eq) goto loc_8236778C;
	// li r5,44
	ctx.r5.s64 = 44;
	// b 0x823677a0
	goto loc_823677A0;
loc_8236778C:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r5,r11,46
	ctx.r5.s64 = ctx.r11.s64 + 46;
loc_823677A0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823677AC;
	sub_8236C3F8(ctx, base);
loc_823677AC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823677e4
	if (ctx.cr6.eq) goto loc_823677E4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,2695
	ctx.r6.s64 = 2695;
	// addi r7,r11,18752
	ctx.r7.s64 = ctx.r11.s64 + 18752;
	// bl 0x823911b8
	ctx.lr = 0x823677D8;
	sub_823911B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823677E4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,2697
	ctx.r6.s64 = 2697;
	// addi r7,r11,18712
	ctx.r7.s64 = ctx.r11.s64 + 18712;
	// bl 0x823911b8
	ctx.lr = 0x823677F4;
	sub_823911B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367460) {
	__imp__sub_82367460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82367808;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8236782c
	if (ctx.cr6.eq) goto loc_8236782C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x82367834
	goto loc_82367834;
loc_8236782C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r27,6(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
loc_82367834:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r28,r11,16836
	ctx.r28.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,19068
	ctx.r7.s64 = ctx.r10.s64 + 19068;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,2770
	ctx.r6.s64 = 2770;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367858;
	sub_823911B8(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823678dc
	if (ctx.cr6.gt) goto loc_823678DC;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30856
	ctx.r12.s64 = ctx.r12.s64 + 30856;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,30896(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30896);
	// lwz r17,30896(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30896);
	// lwz r17,30896(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30896);
	// lwz r17,30896(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30896);
	// lwz r17,30940(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30940);
	// lwz r17,30940(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30940);
	// lwz r17,30896(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30896);
	// lwz r17,30940(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30940);
	// lwz r17,30896(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30896);
	// lwz r17,30896(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30896);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823678ec
	if (!ctx.cr6.eq) goto loc_823678EC;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x823678dc
	if (ctx.cr6.eq) goto loc_823678DC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x823678ec
	if (!ctx.cr6.eq) goto loc_823678EC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_823678DC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,2774
	ctx.r6.s64 = 2774;
	// addi r7,r11,19040
	ctx.r7.s64 = ctx.r11.s64 + 19040;
	// b 0x82367a28
	goto loc_82367A28;
loc_823678EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x823678F8;
	sub_8236E1E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82367930
	if (ctx.cr6.eq) goto loc_82367930;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,2790
	ctx.r6.s64 = 2790;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82367924;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82367930:
	// bl 0x823648b8
	ctx.lr = 0x82367934;
	sub_823648B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236795c
	if (!ctx.cr6.eq) goto loc_8236795C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,64
	ctx.r10.s64 = 64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// beq cr6,0x82367a38
	if (ctx.cr6.eq) goto loc_82367A38;
	// li r3,-29824
	ctx.r3.s64 = -29824;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236795C:
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367980
	if (ctx.cr6.eq) goto loc_82367980;
	// bl 0x82360410
	ctx.lr = 0x82367970;
	sub_82360410(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82634d40
	ctx.lr = 0x82367978;
	sub_82634D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_82367980:
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8236798C;
	sub_826365A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823679d4
	if (!ctx.cr6.eq) goto loc_823679D4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,19016
	ctx.r7.s64 = ctx.r11.s64 + 19016;
	// li r8,344
	ctx.r8.s64 = 344;
	// li r6,2813
	ctx.r6.s64 = 2813;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823679B8;
	sub_823911B8(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823679C8;
	sub_8236C3F8(ctx, base);
	// li r3,-32512
	ctx.r3.s64 = -32512;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823679D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360400
	ctx.lr = 0x823679DC;
	sub_82360400(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364558
	ctx.lr = 0x823679E8;
	sub_82364558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367a50
	if (!ctx.cr6.eq) goto loc_82367A50;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367460
	ctx.lr = 0x82367A08;
	sub_82367460(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367a50
	if (!ctx.cr6.eq) goto loc_82367A50;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r6,2883
	ctx.r6.s64 = 2883;
	// addi r7,r10,18992
	ctx.r7.s64 = ctx.r10.s64 + 18992;
	// stw r30,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r30.u32);
loc_82367A28:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367A38;
	sub_823911B8(ctx, base);
loc_82367A38:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82367A50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360410
	ctx.lr = 0x82367A58;
	sub_82360410(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d40
	ctx.lr = 0x82367A60;
	sub_82634D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367800) {
	__imp__sub_82367800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82367A6C) {
	__imp__sub_82367A6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82367a90
	if (!ctx.cr6.lt) goto loc_82367A90;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r9,r10,19048
	ctx.r9.s64 = ctx.r10.s64 + 19048;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
loc_82367A90:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82367ab0
	if (!ctx.cr6.eq) goto loc_82367AB0;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r9,r10,19128
	ctx.r9.s64 = ctx.r10.s64 + 19128;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
loc_82367AB0:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r9,r10,19112
	ctx.r9.s64 = ctx.r10.s64 + 19112;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82367A70) {
	__imp__sub_82367A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82367AC4) {
	__imp__sub_82367AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82367AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r11,16836
	ctx.r30.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,19124
	ctx.r7.s64 = ctx.r10.s64 + 19124;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,3337
	ctx.r6.s64 = 3337;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367AF8;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365d48
	ctx.lr = 0x82367B00;
	sub_82365D48(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82634d40
	ctx.lr = 0x82367B08;
	sub_82634D40(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// beq cr6,0x82367b28
	if (ctx.cr6.eq) goto loc_82367B28;
	// bl 0x8236b080
	ctx.lr = 0x82367B20;
	sub_8236B080(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x82367B28;
	sub_82634D40(ctx, base);
loc_82367B28:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r10,19092
	ctx.r7.s64 = ctx.r10.s64 + 19092;
	// li r6,3356
	ctx.r6.s64 = 3356;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367B50;
	sub_823911B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367AC8) {
	__imp__sub_82367AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82367B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r29,r11,16836
	ctx.r29.s64 = ctx.r11.s64 + 16836;
	// addi r7,r9,19244
	ctx.r7.s64 = ctx.r9.s64 + 19244;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,3363
	ctx.r6.s64 = 3363;
	// lbz r28,2(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367B90;
	sub_823911B8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82367bac
	if (!ctx.cr6.eq) goto loc_82367BAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82367BAC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367bd4
	if (ctx.cr6.eq) goto loc_82367BD4;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// stw r9,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r9.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82365e08
	ctx.lr = 0x82367BCC;
	sub_82365E08(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82634d40
	ctx.lr = 0x82367BD4;
	sub_82634D40(ctx, base);
loc_82367BD4:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82367c38
	if (ctx.cr6.eq) goto loc_82367C38;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82367c38
	if (ctx.cr6.eq) goto loc_82367C38;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82367c38
	if (!ctx.cr6.eq) goto loc_82367C38;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82367C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367c38
	if (ctx.cr6.eq) goto loc_82367C38;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,19216
	ctx.r7.s64 = ctx.r11.s64 + 19216;
	// li r6,3395
	ctx.r6.s64 = 3395;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367C38;
	sub_823911B8(ctx, base);
loc_82367C38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82367c84
	if (!ctx.cr6.eq) goto loc_82367C84;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82367c84
	if (ctx.cr6.eq) goto loc_82367C84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368450
	ctx.lr = 0x82367C64;
	sub_82368450(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,19176
	ctx.r7.s64 = ctx.r11.s64 + 19176;
	// li r6,3407
	ctx.r6.s64 = 3407;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367C80;
	sub_823911B8(ctx, base);
	// b 0x82367c8c
	goto loc_82367C8C;
loc_82367C84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367ac8
	ctx.lr = 0x82367C8C;
	sub_82367AC8(ctx, base);
loc_82367C8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,19156
	ctx.r7.s64 = ctx.r10.s64 + 19156;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r6,3414
	ctx.r6.s64 = 3414;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367CB4;
	sub_823911B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367B58) {
	__imp__sub_82367B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82367CBC) {
	__imp__sub_82367CBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82367CC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367ce0
	if (ctx.cr6.eq) goto loc_82367CE0;
	// bl 0x8236b080
	ctx.lr = 0x82367CE0;
	sub_8236B080(ctx, base);
loc_82367CE0:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367cf0
	if (ctx.cr6.eq) goto loc_82367CF0;
	// bl 0x82365e08
	ctx.lr = 0x82367CF0;
	sub_82365E08(ctx, base);
loc_82367CF0:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367d04
	if (ctx.cr6.eq) goto loc_82367D04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365d48
	ctx.lr = 0x82367D04;
	sub_82365D48(ctx, base);
loc_82367D04:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82367d20
	if (!ctx.cr6.eq) goto loc_82367D20;
	// li r4,276
	ctx.r4.s64 = 276;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82367D1C;
	sub_826365A8(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
loc_82367D20:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82367d3c
	if (!ctx.cr6.eq) goto loc_82367D3C;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82367D38;
	sub_826365A8(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
loc_82367D3C:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82367d58
	if (!ctx.cr6.eq) goto loc_82367D58;
	// li r4,2256
	ctx.r4.s64 = 2256;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82367D54;
	sub_826365A8(ctx, base);
	// stw r3,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
loc_82367D58:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367e98
	if (ctx.cr6.eq) goto loc_82367E98;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367e98
	if (ctx.cr6.eq) goto loc_82367E98;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367e98
	if (ctx.cr6.eq) goto loc_82367E98;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x82367D88;
	sub_826344D0(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x82365398
	ctx.lr = 0x82367D90;
	sub_82365398(ctx, base);
	// li r5,2256
	ctx.r5.s64 = 2256;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,68(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x82367DA4;
	sub_826344D0(ctx, base);
	// addi r29,r31,620
	ctx.r29.s64 = ctx.r31.s64 + 620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82385a08
	ctx.lr = 0x82367DB0;
	sub_82385A08(ctx, base);
	// addi r28,r31,708
	ctx.r28.s64 = ctx.r31.s64 + 708;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82381cf0
	ctx.lr = 0x82367DBC;
	sub_82381CF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82385a38
	ctx.lr = 0x82367DC4;
	sub_82385A38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82383440
	ctx.lr = 0x82367DCC;
	sub_82383440(ctx, base);
	// addi r29,r31,800
	ctx.r29.s64 = ctx.r31.s64 + 800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235b930
	ctx.lr = 0x82367DD8;
	sub_8235B930(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235b960
	ctx.lr = 0x82367DE4;
	sub_8235B960(ctx, base);
	// addi r29,r31,912
	ctx.r29.s64 = ctx.r31.s64 + 912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380fe0
	ctx.lr = 0x82367DF0;
	sub_82380FE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82381010
	ctx.lr = 0x82367DFC;
	sub_82381010(ctx, base);
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,18944
	ctx.r10.s64 = ctx.r11.s64 + 18944;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x82392498
	ctx.lr = 0x82367E1C;
	sub_82392498(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x82391e60
	ctx.lr = 0x82367E24;
	sub_82391E60(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82367e8c
	if (!ctx.cr6.eq) goto loc_82367E8C;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r10,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82367e78
	if (!ctx.cr6.eq) goto loc_82367E78;
	// stb r29,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82368450
	ctx.lr = 0x82367E6C;
	sub_82368450(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82367E78:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82368450
	ctx.lr = 0x82367E8C;
	sub_82368450(ctx, base);
loc_82367E8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82367E98:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,19264
	ctx.r7.s64 = ctx.r11.s64 + 19264;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,3745
	ctx.r6.s64 = 3745;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367EB8;
	sub_823911B8(ctx, base);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x82634d40
	ctx.lr = 0x82367EC0;
	sub_82634D40(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x82634d40
	ctx.lr = 0x82367EC8;
	sub_82634D40(ctx, base);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82634d40
	ctx.lr = 0x82367ED0;
	sub_82634D40(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,-32512
	ctx.r3.s64 = -32512;
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367CC0) {
	__imp__sub_82367CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82367EEC) {
	__imp__sub_82367EEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82367EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,16717
	ctx.r4.s64 = 16717;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// bl 0x826365a8
	ctx.lr = 0x82367F18;
	sub_826365A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bne cr6,0x82367f50
	if (!ctx.cr6.eq) goto loc_82367F50;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,19016
	ctx.r7.s64 = ctx.r11.s64 + 19016;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r8,16717
	ctx.r8.s64 = 16717;
	// li r6,3844
	ctx.r6.s64 = 3844;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82367F48;
	sub_823911B8(ctx, base);
	// li r29,-32512
	ctx.r29.s64 = -32512;
	// b 0x82367fbc
	goto loc_82367FBC;
loc_82367F50:
	// li r4,16717
	ctx.r4.s64 = 16717;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82367F5C;
	sub_826365A8(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82367f94
	if (!ctx.cr6.eq) goto loc_82367F94;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,19016
	ctx.r7.s64 = ctx.r11.s64 + 19016;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r8,16717
	ctx.r8.s64 = 16717;
	// li r6,3854
	ctx.r6.s64 = 3854;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82367F8C;
	sub_823911B8(ctx, base);
	// li r29,-32512
	ctx.r29.s64 = -32512;
	// b 0x82367fbc
	goto loc_82367FBC;
loc_82367F94:
	// bl 0x8236ad70
	ctx.lr = 0x82367F98;
	sub_8236AD70(ctx, base);
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x826344d0
	ctx.lr = 0x82367FA8;
	sub_826344D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367cc0
	ctx.lr = 0x82367FB0;
	sub_82367CC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236800c
	if (ctx.cr6.eq) goto loc_8236800C;
loc_82367FBC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82634d40
	ctx.lr = 0x82367FC4;
	sub_82634D40(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82634d40
	ctx.lr = 0x82367FCC;
	sub_82634D40(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236800C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367EF0) {
	__imp__sub_82367EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82368020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82368450
	ctx.lr = 0x8236803C;
	sub_82368450(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// std r30,520(r31)
	PPC_STORE_U64(ctx.r31.u32 + 520, ctx.r30.u64);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// bl 0x8236ad70
	ctx.lr = 0x8236806C;
	sub_8236AD70(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// sth r30,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r30.u16);
	// bl 0x82369d98
	ctx.lr = 0x82368084;
	sub_82369D98(ctx, base);
	// lbz r11,230(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 230);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// beq cr6,0x823680ac
	if (ctx.cr6.eq) goto loc_823680AC;
	// stb r30,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r30.u8);
loc_823680AC:
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// li r5,16717
	ctx.r5.s64 = 16717;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x826344d0
	ctx.lr = 0x823680D4;
	sub_826344D0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823680f0
	if (!ctx.cr6.eq) goto loc_823680F0;
	// li r5,16717
	ctx.r5.s64 = 16717;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// bl 0x826344d0
	ctx.lr = 0x823680F0;
	sub_826344D0(ctx, base);
loc_823680F0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236810c
	if (ctx.cr6.eq) goto loc_8236810C;
	// bl 0x8236b080
	ctx.lr = 0x82368100;
	sub_8236B080(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x82368108;
	sub_82634D40(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_8236810C:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82368128
	if (ctx.cr6.eq) goto loc_82368128;
	// bl 0x82365e08
	ctx.lr = 0x8236811C;
	sub_82365E08(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82634d40
	ctx.lr = 0x82368124;
	sub_82634D40(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82368128:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// bne cr6,0x82368144
	if (!ctx.cr6.eq) goto loc_82368144;
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x82634d40
	ctx.lr = 0x8236813C;
	sub_82634D40(ctx, base);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
loc_82368144:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367cc0
	ctx.lr = 0x8236814C;
	sub_82367CC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368018) {
	__imp__sub_82368018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82368154) {
	__imp__sub_82368154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368158) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82368018
	sub_82368018(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368158) {
	__imp__sub_82368158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368160) {
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
	// beq cr6,0x823681cc
	if (ctx.cr6.eq) goto loc_823681CC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823681cc
	if (ctx.cr6.eq) goto loc_823681CC;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823681cc
	if (ctx.cr6.eq) goto loc_823681CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823681cc
	if (!ctx.cr6.eq) goto loc_823681CC;
	// bl 0x82367080
	ctx.lr = 0x823681A4;
	sub_82367080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823681d0
	if (!ctx.cr6.eq) goto loc_823681D0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
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
loc_823681CC:
	// li r3,-28928
	ctx.r3.s64 = -28928;
loc_823681D0:
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

PPC_WEAK_FUNC(sub_82368160) {
	__imp__sub_82368160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823681E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823681E4) {
	__imp__sub_823681E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823681E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368220
	if (ctx.cr6.eq) goto loc_82368220;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82368220
	if (ctx.cr6.eq) goto loc_82368220;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82368220
	if (ctx.cr6.eq) goto loc_82368220;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82368220
	if (!ctx.cr6.eq) goto loc_82368220;
	// b 0x82367080
	sub_82367080(ctx, base);
	return;
loc_82368220:
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823681E8) {
	__imp__sub_823681E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82368230;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,16836
	ctx.r29.s64 = ctx.r11.s64 + 16836;
	// addi r7,r10,19340
	ctx.r7.s64 = ctx.r10.s64 + 19340;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,5873
	ctx.r6.s64 = 5873;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82368258;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367cc0
	ctx.lr = 0x82368260;
	sub_82367CC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368308
	if (!ctx.cr6.eq) goto loc_82368308;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823682a4
	if (!ctx.cr6.eq) goto loc_823682A4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x823682a4
	if (!ctx.cr6.eq) goto loc_823682A4;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bne cr6,0x823682a0
	if (!ctx.cr6.eq) goto loc_823682A0;
	// stw r10,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
	// b 0x823682a4
	goto loc_823682A4;
loc_823682A0:
	// stw r10,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r10.u32);
loc_823682A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82365b68
	ctx.lr = 0x823682B8;
	sub_82365B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823682f0
	if (ctx.cr6.eq) goto loc_823682F0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,19316
	ctx.r7.s64 = ctx.r11.s64 + 19316;
	// li r6,5896
	ctx.r6.s64 = 5896;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x823682E4;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823682F0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,5900
	ctx.r6.s64 = 5900;
	// addi r7,r11,19300
	ctx.r7.s64 = ctx.r11.s64 + 19300;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82368304;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82368308:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368228) {
	__imp__sub_82368228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368310) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82368410
	if (ctx.cr6.eq) goto loc_82368410;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368410
	if (ctx.cr6.eq) goto loc_82368410;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82368378
	if (!ctx.cr6.eq) goto loc_82368378;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82368410
	if (!ctx.cr6.eq) goto loc_82368410;
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368370
	if (ctx.cr6.eq) goto loc_82368370;
	// bl 0x8236b2b0
	ctx.lr = 0x8236836C;
	sub_8236B2B0(ctx, base);
	// b 0x82368414
	goto loc_82368414;
loc_82368370:
	// bl 0x82365c98
	ctx.lr = 0x82368374;
	sub_82365C98(ctx, base);
	// b 0x82368414
	goto loc_82368414;
loc_82368378:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823683d0
	if (ctx.cr6.eq) goto loc_823683D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82368410
	if (!ctx.cr6.eq) goto loc_82368410;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368228
	ctx.lr = 0x82368398;
	sub_82368228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823683c8
	if (ctx.cr6.eq) goto loc_823683C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,19356
	ctx.r7.s64 = ctx.r11.s64 + 19356;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,5946
	ctx.r6.s64 = 5946;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823683C8;
	sub_823912A0(ctx, base);
loc_823683C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82368414
	goto loc_82368414;
loc_823683D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365b68
	ctx.lr = 0x823683D8;
	sub_82365B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823683c8
	if (ctx.cr6.eq) goto loc_823683C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,19316
	ctx.r7.s64 = ctx.r11.s64 + 19316;
	// addi r5,r10,16836
	ctx.r5.s64 = ctx.r10.s64 + 16836;
	// li r6,5951
	ctx.r6.s64 = 5951;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82368408;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82368414
	goto loc_82368414;
loc_82368410:
	// li r3,-28928
	ctx.r3.s64 = -28928;
loc_82368414:
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

PPC_WEAK_FUNC(sub_82368310) {
	__imp__sub_82368310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236842C) {
	__imp__sub_8236842C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82368430) {
	__imp__sub_82368430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236844C) {
	__imp__sub_8236844C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368450) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823684b0
	if (ctx.cr6.eq) goto loc_823684B0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r7,r11,19452
	ctx.r7.s64 = ctx.r11.s64 + 19452;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,55
	ctx.r6.s64 = 55;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823911b8
	ctx.lr = 0x82368498;
	sub_823911B8(ctx, base);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r4,r30,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823684B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823684B0:
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

PPC_WEAK_FUNC(sub_82368450) {
	__imp__sub_82368450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823684C8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368534
	if (ctx.cr6.eq) goto loc_82368534;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823684F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82368534
	if (!ctx.cr6.eq) goto loc_82368534;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,19472
	ctx.r7.s64 = ctx.r11.s64 + 19472;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,69
	ctx.r6.s64 = 69;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236851C;
	sub_823911B8(ctx, base);
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
loc_82368534:
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

PPC_WEAK_FUNC(sub_823684C8) {
	__imp__sub_823684C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236854C) {
	__imp__sub_8236854C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368550) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 584);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82368588
	if (ctx.cr6.lt) goto loc_82368588;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82368628
	goto loc_82368628;
loc_82368588:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// addi r30,r11,19388
	ctx.r30.s64 = ctx.r11.s64 + 19388;
	// beq cr6,0x823685cc
	if (ctx.cr6.eq) goto loc_823685CC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,508
	ctx.r10.s64 = 508;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r9,19528
	ctx.r7.s64 = ctx.r9.s64 + 19528;
	// li r6,265
	ctx.r6.s64 = 265;
	// sth r10,616(r11)
	PPC_STORE_U16(ctx.r11.u32 + 616, ctx.r10.u16);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lhz r8,616(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 616);
	// bl 0x823911b8
	ctx.lr = 0x823685CC;
	sub_823911B8(ctx, base);
loc_823685CC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823685f0
	if (ctx.cr6.lt) goto loc_823685F0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823685f8
	if (!ctx.cr6.gt) goto loc_823685F8;
loc_823685F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_823685F8:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r9,19488
	ctx.r7.s64 = ctx.r9.s64 + 19488;
	// li r6,278
	ctx.r6.s64 = 278;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 584, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r8,584(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 584);
	// bl 0x823911b8
	ctx.lr = 0x82368624;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82368628:
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

PPC_WEAK_FUNC(sub_82368550) {
	__imp__sub_82368550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82368648;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x826344d0
	ctx.lr = 0x82368670;
	sub_826344D0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x82368680;
	sub_82635430(ctx, base);
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x823686b4
	if (ctx.cr6.eq) goto loc_823686B4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82368698:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82368698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368698;
loc_823686B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368640) {
	__imp__sub_82368640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823686BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823686BC) {
	__imp__sub_823686BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823686C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634430
	ctx.lr = 0x823686C8;
	__savegprlr_18(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r25,r11,19388
	ctx.r25.s64 = ctx.r11.s64 + 19388;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// addi r7,r10,20292
	ctx.r7.s64 = ctx.r10.s64 + 20292;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,630
	ctx.r6.s64 = 630;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// bl 0x823911b8
	ctx.lr = 0x82368704;
	sub_823911B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236871c
	if (!ctx.cr6.eq) goto loc_8236871C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,633
	ctx.r6.s64 = 633;
	// addi r7,r11,20252
	ctx.r7.s64 = ctx.r11.s64 + 20252;
	// b 0x82369044
	goto loc_82369044;
loc_8236871C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82369038
	if (ctx.cr6.eq) goto loc_82369038;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82369038
	if (ctx.cr6.eq) goto loc_82369038;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82369038
	if (ctx.cr6.lt) goto loc_82369038;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82369038
	if (ctx.cr6.lt) goto loc_82369038;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20220
	ctx.r7.s64 = ctx.r11.s64 + 20220;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,651
	ctx.r6.s64 = 651;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82391350
	ctx.lr = 0x82368778;
	sub_82391350(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r21,r31,80
	ctx.r21.s64 = ctx.r31.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r22,0
	ctx.r22.s64 = 0;
	// beq cr6,0x82368790
	if (ctx.cr6.eq) goto loc_82368790;
	// lwz r22,4(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82368790:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// ble cr6,0x823687c8
	if (!ctx.cr6.gt) goto loc_823687C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20176
	ctx.r7.s64 = ctx.r11.s64 + 20176;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// li r6,659
	ctx.r6.s64 = 659;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823911b8
	ctx.lr = 0x823687BC;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_823687C8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 7, ctx.xer);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r23,r10,r9
	ctx.r23.s64 = ctx.r9.s64 - ctx.r10.s64;
	// beq cr6,0x823687f4
	if (ctx.cr6.eq) goto loc_823687F4;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x82368954
	if (!ctx.cr6.eq) goto loc_82368954;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82368a18
	if (!ctx.cr6.eq) goto loc_82368A18;
loc_823687F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82368828
	if (!ctx.cr6.lt) goto loc_82368828;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20120
	ctx.r7.s64 = ctx.r11.s64 + 20120;
	// li r6,736
	ctx.r6.s64 = 736;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236881C;
	sub_823911B8(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368828:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82369028
	if (ctx.cr6.lt) goto loc_82369028;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lbz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// lhz r8,9(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 9);
	// addi r24,r31,52
	ctx.r24.s64 = ctx.r31.s64 + 52;
	// lbz r7,26(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r10,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r10.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r9,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r9.u8);
	// sth r8,153(r1)
	PPC_STORE_U16(ctx.r1.u32 + 153, ctx.r8.u16);
	// stb r7,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r7.u8);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// bl 0x8235d1f8
	ctx.lr = 0x82368870;
	sub_8235D1F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823688d8
	if (!ctx.cr6.eq) goto loc_823688D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x8236888C;
	sub_8235D1F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823688d8
	if (!ctx.cr6.eq) goto loc_823688D8;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235d228
	ctx.lr = 0x823688A4;
	sub_8235D228(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823688d8
	if (!ctx.cr6.eq) goto loc_823688D8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235d2e0
	ctx.lr = 0x823688B8;
	sub_8235D2E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823688d8
	if (!ctx.cr6.eq) goto loc_823688D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x823688D8;
	sub_82635430(ctx, base);
loc_823688D8:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362b98
	ctx.lr = 0x823688E4;
	sub_82362B98(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x82368918
	if (ctx.cr6.eq) goto loc_82368918;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r11,20100
	ctx.r7.s64 = ctx.r11.s64 + 20100;
	// li r6,789
	ctx.r6.s64 = 789;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x8236890C;
	sub_823912A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368918:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r6,800
	ctx.r6.s64 = 800;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r10,20084
	ctx.r7.s64 = ctx.r10.s64 + 20084;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82391350
	ctx.lr = 0x82368938;
	sub_82391350(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r18,1
	ctx.r18.s64 = 1;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r23,r8,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r8.s64;
loc_82368954:
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 7, ctx.xer);
	// bne cr6,0x823689f8
	if (!ctx.cr6.eq) goto loc_823689F8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20024
	ctx.r7.s64 = ctx.r11.s64 + 20024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,817
	ctx.r6.s64 = 817;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823911b8
	ctx.lr = 0x82368980;
	sub_823911B8(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82390d50
	ctx.lr = 0x823689A0;
	sub_82390D50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823689d8
	if (ctx.cr6.eq) goto loc_823689D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20000
	ctx.r7.s64 = ctx.r11.s64 + 20000;
	// li r6,823
	ctx.r6.s64 = 823;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823912a0
	ctx.lr = 0x823689CC;
	sub_823912A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_823689D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82368fd8
	if (ctx.cr6.eq) goto loc_82368FD8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,828
	ctx.r6.s64 = 828;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x82369044
	goto loc_82369044;
loc_823689F8:
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 6, ctx.xer);
	// beq cr6,0x82368da4
	if (ctx.cr6.eq) goto loc_82368DA4;
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 8, ctx.xer);
	// beq cr6,0x82368da4
	if (ctx.cr6.eq) goto loc_82368DA4;
	// cmpwi cr6,r22,10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 10, ctx.xer);
	// beq cr6,0x82368da4
	if (ctx.cr6.eq) goto loc_82368DA4;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x82368d94
	if (!ctx.cr6.eq) goto loc_82368D94;
loc_82368A18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// twllei r10,0
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// subfic r3,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r4.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82368a7c
	if (!ctx.cr6.lt) goto loc_82368A7C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20120
	ctx.r7.s64 = ctx.r11.s64 + 20120;
	// li r6,944
	ctx.r6.s64 = 944;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823911b8
	ctx.lr = 0x82368A70;
	sub_823911B8(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368A7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
loc_82368A88:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r9,r28
	PPC_STORE_U8(ctx.r9.u32 + ctx.r28.u32, ctx.r8.u8);
	// bdnz 0x82368a88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368A88;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r10.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r23,r9,-1
	ctx.r23.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82368b40
	if (ctx.cr6.lt) goto loc_82368B40;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82368ad8
	if (!ctx.cr6.eq) goto loc_82368AD8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,962
	ctx.r6.s64 = 962;
	// addi r7,r11,19956
	ctx.r7.s64 = ctx.r11.s64 + 19956;
	// b 0x82369044
	goto loc_82369044;
loc_82368AD8:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82368b10
	if (!ctx.cr6.lt) goto loc_82368B10;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20120
	ctx.r7.s64 = ctx.r11.s64 + 20120;
	// li r6,967
	ctx.r6.s64 = 967;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823911b8
	ctx.lr = 0x82368B04;
	sub_823911B8(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368B10:
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82368B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369058
	if (!ctx.cr6.eq) goto loc_82369058;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// subf r3,r11,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x82635430
	ctx.lr = 0x82368B40;
	sub_82635430(ctx, base);
loc_82368B40:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,19872
	ctx.r7.s64 = ctx.r11.s64 + 19872;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r6,990
	ctx.r6.s64 = 990;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823911b8
	ctx.lr = 0x82368B68;
	sub_823911B8(ctx, base);
	// addi r24,r31,20
	ctx.r24.s64 = ctx.r31.s64 + 20;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82390d50
	ctx.lr = 0x82368B8C;
	sub_82390D50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82368bc4
	if (ctx.cr6.eq) goto loc_82368BC4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20000
	ctx.r7.s64 = ctx.r11.s64 + 20000;
	// li r6,997
	ctx.r6.s64 = 997;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823912a0
	ctx.lr = 0x82368BB8;
	sub_823912A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368BC4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82368be4
	if (ctx.cr6.eq) goto loc_82368BE4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1002
	ctx.r6.s64 = 1002;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x82369044
	goto loc_82369044;
loc_82368BE4:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82368c04
	if (!ctx.cr6.lt) goto loc_82368C04;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82635430
	ctx.lr = 0x82368C00;
	sub_82635430(ctx, base);
	// b 0x82368c28
	goto loc_82368C28;
loc_82368C04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r28,r8,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r8.s64;
	// stw r7,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
loc_82368C28:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82368fd8
	if (!ctx.cr6.eq) goto loc_82368FD8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82368c64
	if (!ctx.cr6.lt) goto loc_82368C64;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1035
	ctx.r6.s64 = 1035;
	// addi r7,r11,20120
	ctx.r7.s64 = ctx.r11.s64 + 20120;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82368C58;
	sub_823911B8(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368C64:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// li r6,1042
	ctx.r6.s64 = 1042;
	// addi r7,r10,19848
	ctx.r7.s64 = ctx.r10.s64 + 19848;
	// lhz r11,9(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 9);
	// lbz r10,26(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26);
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stb r4,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r4.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r8,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r8.u8);
	// sth r11,153(r1)
	PPC_STORE_U16(ctx.r1.u32 + 153, ctx.r11.u16);
	// stb r10,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r10.u8);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// bl 0x823911b8
	ctx.lr = 0x82368CA0;
	sub_823911B8(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r9,19832
	ctx.r7.s64 = ctx.r9.s64 + 19832;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r6,1044
	ctx.r6.s64 = 1044;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82391350
	ctx.lr = 0x82368CC4;
	sub_82391350(ctx, base);
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x82368CD8;
	sub_8235D1F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368d54
	if (!ctx.cr6.eq) goto loc_82368D54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x82368CF4;
	sub_8235D1F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368d54
	if (!ctx.cr6.eq) goto loc_82368D54;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d228
	ctx.lr = 0x82368D0C;
	sub_8235D228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368d54
	if (!ctx.cr6.eq) goto loc_82368D54;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d2e0
	ctx.lr = 0x82368D20;
	sub_8235D2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368d54
	if (!ctx.cr6.eq) goto loc_82368D54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x82368D40;
	sub_82635430(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r18,1
	ctx.r18.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82368D54:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362b98
	ctx.lr = 0x82368D60;
	sub_82362B98(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82368fd8
	if (ctx.cr6.eq) goto loc_82368FD8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,19808
	ctx.r7.s64 = ctx.r11.s64 + 19808;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,1074
	ctx.r6.s64 = 1074;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823912a0
	ctx.lr = 0x82368D88;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368D94:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1082
	ctx.r6.s64 = 1082;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x82369044
	goto loc_82369044;
loc_82368DA4:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r24,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r24.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bge cr6,0x82368dec
	if (!ctx.cr6.lt) goto loc_82368DEC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20120
	ctx.r7.s64 = ctx.r11.s64 + 20120;
	// li r6,849
	ctx.r6.s64 = 849;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823911b8
	ctx.lr = 0x82368DE0;
	sub_823911B8(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368DEC:
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82368640
	ctx.lr = 0x82368E04;
	sub_82368640(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,19788
	ctx.r7.s64 = ctx.r11.s64 + 19788;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stb r10,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r10.u8);
	// li r6,882
	ctx.r6.s64 = 882;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r27,8(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// lhz r23,9(r29)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r29.u32 + 9);
	// lbz r22,26(r29)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26);
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stb r27,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r27.u8);
	// sth r23,153(r1)
	PPC_STORE_U16(ctx.r1.u32 + 153, ctx.r23.u16);
	// stb r22,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r22.u8);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// bl 0x82391350
	ctx.lr = 0x82368E50;
	sub_82391350(ctx, base);
	// subfic r9,r24,0
	ctx.xer.ca = ctx.r24.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r24.s64;
	// li r5,8
	ctx.r5.s64 = 8;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// and r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r7,r7,19764
	ctx.r7.s64 = ctx.r7.s64 + 19764;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,885
	ctx.r6.s64 = 885;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82391350
	ctx.lr = 0x82368E80;
	sub_82391350(ctx, base);
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r4,19732
	ctx.r7.s64 = ctx.r4.s64 + 19732;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r6,887
	ctx.r6.s64 = 887;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82391350
	ctx.lr = 0x82368EA4;
	sub_82391350(ctx, base);
	// lis r3,-32239
	ctx.r3.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r3,19672
	ctx.r7.s64 = ctx.r3.s64 + 19672;
	// li r6,890
	ctx.r6.s64 = 890;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823911b8
	ctx.lr = 0x82368EC4;
	sub_823911B8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r27,16(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r23,16(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r27,r28,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r28.s64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82391040
	ctx.lr = 0x82368F08;
	sub_82391040(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x82368f40
	if (ctx.cr6.eq) goto loc_82368F40;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r11,19644
	ctx.r7.s64 = ctx.r11.s64 + 19644;
	// li r6,903
	ctx.r6.s64 = 903;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82368F34;
	sub_823912A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368F40:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,908
	ctx.r6.s64 = 908;
	// addi r7,r11,19624
	ctx.r7.s64 = ctx.r11.s64 + 19624;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r4,4
	ctx.r4.s64 = 4;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82391350
	ctx.lr = 0x82368F64;
	sub_82391350(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82368fd4
	if (ctx.cr6.eq) goto loc_82368FD4;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82368fa0
	if (!ctx.cr6.lt) goto loc_82368FA0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,20120
	ctx.r7.s64 = ctx.r11.s64 + 20120;
	// li r6,917
	ctx.r6.s64 = 917;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823911b8
	ctx.lr = 0x82368F94;
	sub_823911B8(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82368FA0:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// addi r10,r28,-9
	ctx.r10.s64 = ctx.r28.s64 + -9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368FB0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82368fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368FB0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82368FD4:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82368FD8:
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x82369008
	if (ctx.cr6.eq) goto loc_82369008;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1088
	ctx.r6.s64 = 1088;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82368FFC;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82369008:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1092
	ctx.r6.s64 = 1092;
	// addi r7,r11,19608
	ctx.r7.s64 = ctx.r11.s64 + 19608;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x8236901C;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82369028:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,795
	ctx.r6.s64 = 795;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x82369044
	goto loc_82369044;
loc_82369038:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,644
	ctx.r6.s64 = 644;
	// addi r7,r11,19560
	ctx.r7.s64 = ctx.r11.s64 + 19560;
loc_82369044:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82369054;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
loc_82369058:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823686C0) {
	__imp__sub_823686C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634430
	ctx.lr = 0x82369068;
	__savegprlr_18(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r21,r11,19388
	ctx.r21.s64 = ctx.r11.s64 + 19388;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r7,r10,20732
	ctx.r7.s64 = ctx.r10.s64 + 20732;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r6,1116
	ctx.r6.s64 = 1116;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x823690A4;
	sub_823911B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823699a4
	if (ctx.cr6.eq) goto loc_823699A4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823699a4
	if (ctx.cr6.eq) goto loc_823699A4;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823699a4
	if (ctx.cr6.lt) goto loc_823699A4;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823699a4
	if (ctx.cr6.lt) goto loc_823699A4;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r26,r30,144
	ctx.r26.s64 = ctx.r30.s64 + 144;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823696cc
	if (ctx.cr6.eq) goto loc_823696CC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x823691ac
	if (!ctx.cr6.eq) goto loc_823691AC;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82369130
	if (!ctx.cr6.lt) goto loc_82369130;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r10,20696
	ctx.r7.s64 = ctx.r10.s64 + 20696;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r6,1144
	ctx.r6.s64 = 1144;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369124;
	sub_823911B8(ctx, base);
loc_82369124:
	// li r3,-29056
	ctx.r3.s64 = -29056;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82369130:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// bl 0x82390d50
	ctx.lr = 0x82369154;
	sub_82390D50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236918c
	if (ctx.cr6.eq) goto loc_8236918C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,20000
	ctx.r7.s64 = ctx.r11.s64 + 20000;
	// li r6,1154
	ctx.r6.s64 = 1154;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823912a0
	ctx.lr = 0x82369180;
	sub_823912A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_8236918C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823695c0
	if (ctx.cr6.eq) goto loc_823695C0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1159
	ctx.r6.s64 = 1159;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x823699b0
	goto loc_823699B0;
loc_823691AC:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x823696dc
	if (ctx.cr6.eq) goto loc_823696DC;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x823696dc
	if (ctx.cr6.eq) goto loc_823696DC;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x823696dc
	if (ctx.cr6.eq) goto loc_823696DC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823696cc
	if (!ctx.cr6.eq) goto loc_823696CC;
	// lwz r9,208(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x823691e0
	if (ctx.cr6.lt) goto loc_823691E0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823691E0:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8236969c
	if (ctx.cr6.lt) goto loc_8236969C;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236969c
	if (ctx.cr6.lt) goto loc_8236969C;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823693c8
	if (!ctx.cr6.eq) goto loc_823693C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,19848
	ctx.r7.s64 = ctx.r11.s64 + 19848;
	// li r6,1318
	ctx.r6.s64 = 1318;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236922C;
	sub_823911B8(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r10,19832
	ctx.r7.s64 = ctx.r10.s64 + 19832;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r6,1336
	ctx.r6.s64 = 1336;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9);
	// ld r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// stb r27,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r27.u8);
	// sth r10,137(r1)
	PPC_STORE_U16(ctx.r1.u32 + 137, ctx.r10.u16);
	// stb r25,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r25.u8);
	// stb r11,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// std r28,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r28.u64);
	// bl 0x82391350
	ctx.lr = 0x82369288;
	sub_82391350(ctx, base);
	// addi r27,r30,64
	ctx.r27.s64 = ctx.r30.s64 + 64;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x8236929C;
	sub_8235D1F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369380
	if (!ctx.cr6.eq) goto loc_82369380;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x823692B8;
	sub_8235D1F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369380
	if (!ctx.cr6.eq) goto loc_82369380;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d228
	ctx.lr = 0x823692D0;
	sub_8235D228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369380
	if (!ctx.cr6.eq) goto loc_82369380;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d2e0
	ctx.lr = 0x823692E4;
	sub_8235D2E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369380
	if (!ctx.cr6.eq) goto loc_82369380;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r7,r10,20680
	ctx.r7.s64 = ctx.r10.s64 + 20680;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r6,1357
	ctx.r6.s64 = 1357;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82391350
	ctx.lr = 0x82369318;
	sub_82391350(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r7,r8,20664
	ctx.r7.s64 = ctx.r8.s64 + 20664;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// li r6,1359
	ctx.r6.s64 = 1359;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82391350
	ctx.lr = 0x8236933C;
	sub_82391350(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x823869c8
	ctx.lr = 0x82369350;
	sub_823869C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236937c
	if (ctx.cr6.eq) goto loc_8236937C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,20636
	ctx.r7.s64 = ctx.r11.s64 + 20636;
	// li r6,1364
	ctx.r6.s64 = 1364;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369374;
	sub_823911B8(ctx, base);
	// li r28,-29056
	ctx.r28.s64 = -29056;
	// b 0x82369380
	goto loc_82369380;
loc_8236937C:
	// li r19,1
	ctx.r19.s64 = 1;
loc_82369380:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82362b98
	ctx.lr = 0x8236938C;
	sub_82362B98(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823693c8
	if (ctx.cr6.eq) goto loc_823693C8;
	// cmpwi cr6,r28,-29056
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -29056, ctx.xer);
	// beq cr6,0x823693bc
	if (ctx.cr6.eq) goto loc_823693BC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,20616
	ctx.r7.s64 = ctx.r11.s64 + 20616;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,1374
	ctx.r6.s64 = 1374;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823912a0
	ctx.lr = 0x823693BC;
	sub_823912A0(ctx, base);
loc_823693BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_823693C8:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// twllei r9,0
	// divwu r11,r8,r9
	ctx.r11.u32 = ctx.r8.u32 / ctx.r9.u32;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf. r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8236940c
	if (ctx.cr0.eq) goto loc_8236940C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,20580
	ctx.r7.s64 = ctx.r11.s64 + 20580;
	// li r6,1391
	ctx.r6.s64 = 1391;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369400;
	sub_823911B8(ctx, base);
	// li r3,-29056
	ctx.r3.s64 = -29056;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_8236940C:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82369450
	if (ctx.cr6.lt) goto loc_82369450;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82635430
	ctx.lr = 0x82369428;
	sub_82635430(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
loc_82369450:
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82390d50
	ctx.lr = 0x82369474;
	sub_82390D50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823694ac
	if (ctx.cr6.eq) goto loc_823694AC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,20000
	ctx.r7.s64 = ctx.r11.s64 + 20000;
	// li r6,1414
	ctx.r6.s64 = 1414;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823912a0
	ctx.lr = 0x823694A0;
	sub_823912A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_823694AC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823694cc
	if (ctx.cr6.eq) goto loc_823694CC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1420
	ctx.r6.s64 = 1420;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x823699b0
	goto loc_823699B0;
loc_823694CC:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x823694e8
	if (!ctx.cr6.lt) goto loc_823694E8;
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x823694E8;
	sub_82635430(ctx, base);
loc_823694E8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lbz r28,-1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// bne cr6,0x82369504
	if (!ctx.cr6.eq) goto loc_82369504;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// b 0x82369514
	goto loc_82369514;
loc_82369504:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82369514:
	// bl 0x82386a30
	ctx.lr = 0x82369518;
	sub_82386A30(ctx, base);
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// and r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 & ctx.r28.u64;
	// clrlwi r23,r3,31
	ctx.r23.u64 = ctx.r3.u32 & 0x1;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8236968c
	if (!ctx.cr6.gt) goto loc_8236968C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// subf r25,r24,r11
	ctx.r25.s64 = ctx.r11.s64 - ctx.r24.s64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ble cr6,0x8236954c
	if (!ctx.cr6.gt) goto loc_8236954C;
	// li r10,256
	ctx.r10.s64 = 256;
loc_8236954C:
	// subf r28,r10,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82369590
	if (!ctx.cr6.lt) goto loc_82369590;
	// addi r26,r24,-1
	ctx.r26.s64 = ctx.r24.s64 + -1;
loc_8236955C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82386a30
	ctx.lr = 0x82369568;
	sub_82386A30(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lbzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x82386a50
	ctx.lr = 0x82369578;
	sub_82386A50(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// and r11,r3,r18
	ctx.r11.u64 = ctx.r3.u64 & ctx.r18.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// blt cr6,0x8236955c
	if (ctx.cr6.lt) goto loc_8236955C;
loc_82369590:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82386a50
	ctx.lr = 0x8236959C;
	sub_82386A50(ctx, base);
	// and r25,r3,r23
	ctx.r25.u64 = ctx.r3.u64 & ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82386a18
	ctx.lr = 0x823695A8;
	sub_82386A18(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// and r27,r3,r24
	ctx.r27.u64 = ctx.r3.u64 & ctx.r24.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x8236995c
	if (!ctx.cr6.eq) goto loc_8236995C;
loc_823695C0:
	// li r5,47
	ctx.r5.s64 = 47;
	// stb r20,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r20.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,193
	ctx.r3.s64 = ctx.r1.s64 + 193;
	// bl 0x826344d0
	ctx.lr = 0x823695D4;
	sub_826344D0(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r20,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r20.u8);
	// addi r3,r1,241
	ctx.r3.s64 = ctx.r1.s64 + 241;
	// bl 0x826344d0
	ctx.lr = 0x823695E8;
	sub_826344D0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lbz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lhz r6,9(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lbz r3,26(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// stb r8,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r8.u8);
	// sth r6,137(r1)
	PPC_STORE_U16(ctx.r1.u32 + 137, ctx.r6.u16);
	// stb r7,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r7.u8);
	// stb r3,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r3.u8);
	// ble cr6,0x8236994c
	if (!ctx.cr6.gt) goto loc_8236994C;
	// add r28,r7,r27
	ctx.r28.u64 = ctx.r7.u64 + ctx.r27.u64;
	// cmplwi cr6,r28,256
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 256, ctx.xer);
	// addi r27,r28,-256
	ctx.r27.s64 = ctx.r28.s64 + -256;
	// bgt cr6,0x8236963c
	if (ctx.cr6.gt) goto loc_8236963C;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_8236963C:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82386d38
	ctx.lr = 0x8236965C;
	sub_82386D38(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823698e4
	if (ctx.cr6.eq) goto loc_823698E4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,20564
	ctx.r7.s64 = ctx.r11.s64 + 20564;
	// li r6,1615
	ctx.r6.s64 = 1615;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823912a0
	ctx.lr = 0x82369688;
	sub_823912A0(ctx, base);
	// b 0x82369920
	goto loc_82369920;
loc_8236968C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1530
	ctx.r6.s64 = 1530;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x823699b0
	goto loc_823699B0;
loc_8236969C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r11,20496
	ctx.r7.s64 = ctx.r11.s64 + 20496;
	// li r6,1307
	ctx.r6.s64 = 1307;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823911b8
	ctx.lr = 0x823696C0;
	sub_823911B8(ctx, base);
	// li r3,-29056
	ctx.r3.s64 = -29056;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_823696CC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1542
	ctx.r6.s64 = 1542;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x823699b0
	goto loc_823699B0;
loc_823696DC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82369744
	if (ctx.cr6.eq) goto loc_82369744;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82369724
	if (!ctx.cr6.lt) goto loc_82369724;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r10,20452
	ctx.r7.s64 = ctx.r10.s64 + 20452;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r6,1188
	ctx.r6.s64 = 1188;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369718;
	sub_823911B8(ctx, base);
	// li r3,-29056
	ctx.r3.s64 = -29056;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82369724:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x82369748
	goto loc_82369748;
loc_82369744:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82369748:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82369780
	if (!ctx.cr6.lt) goto loc_82369780;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,20420
	ctx.r7.s64 = ctx.r11.s64 + 20420;
	// li r6,1205
	ctx.r6.s64 = 1205;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369774;
	sub_823911B8(ctx, base);
	// li r3,-29056
	ctx.r3.s64 = -29056;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82369780:
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82368640
	ctx.lr = 0x823697A0;
	sub_82368640(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r10,19732
	ctx.r7.s64 = ctx.r10.s64 + 19732;
	// lbz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lhz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9);
	// li r9,13
	ctx.r9.s64 = 13;
	// lbz r28,26(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r6,1226
	ctx.r6.s64 = 1226;
	// stb r3,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r3.u8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// sth r10,137(r1)
	PPC_STORE_U16(ctx.r1.u32 + 137, ctx.r10.u16);
	// stb r28,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r28.u8);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82391350
	ctx.lr = 0x823697EC;
	sub_82391350(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r8,20412
	ctx.r7.s64 = ctx.r8.s64 + 20412;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r6,1234
	ctx.r6.s64 = 1234;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82391350
	ctx.lr = 0x82369810;
	sub_82391350(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r7,20400
	ctx.r7.s64 = ctx.r7.s64 + 20400;
	// li r6,1236
	ctx.r6.s64 = 1236;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82391350
	ctx.lr = 0x82369838;
	sub_82391350(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x823910b0
	ctx.lr = 0x82369884;
	sub_823910B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823698c4
	if (ctx.cr6.eq) goto loc_823698C4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,20372
	ctx.r7.s64 = ctx.r11.s64 + 20372;
	// li r6,1247
	ctx.r6.s64 = 1247;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823912a0
	ctx.lr = 0x823698B0;
	sub_823912A0(ctx, base);
	// cmpwi cr6,r30,-25344
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -25344, ctx.xer);
	// beq cr6,0x82369124
	if (ctx.cr6.eq) goto loc_82369124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_823698C4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8236997c
	if (ctx.cr6.eq) goto loc_8236997C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1259
	ctx.r6.s64 = 1259;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x823699b0
	goto loc_823699B0;
loc_823698E4:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82386ca0
	ctx.lr = 0x82369900;
	sub_82386CA0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x823869c8
	ctx.lr = 0x82369910;
	sub_823869C8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r19,1
	ctx.r19.s64 = 1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r25,r9,r25
	ctx.r25.u64 = ctx.r9.u64 & ctx.r25.u64;
loc_82369920:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82362b98
	ctx.lr = 0x8236992C;
	sub_82362B98(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82362b98
	ctx.lr = 0x82369938;
	sub_82362B98(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8236995c
	if (ctx.cr6.eq) goto loc_8236995C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_8236994C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1627
	ctx.r6.s64 = 1627;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x823699b0
	goto loc_823699B0;
loc_8236995C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82369124
	if (ctx.cr6.eq) goto loc_82369124;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// beq cr6,0x8236997c
	if (ctx.cr6.eq) goto loc_8236997C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1663
	ctx.r6.s64 = 1663;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// b 0x823699b0
	goto loc_823699B0;
loc_8236997C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,20356
	ctx.r7.s64 = ctx.r11.s64 + 20356;
	// li r6,1689
	ctx.r6.s64 = 1689;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369998;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_823699A4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,1121
	ctx.r6.s64 = 1121;
	// addi r7,r11,20308
	ctx.r7.s64 = ctx.r11.s64 + 20308;
loc_823699B0:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823911b8
	ctx.lr = 0x823699C0;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369060) {
	__imp__sub_82369060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823699CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823699CC) {
	__imp__sub_823699CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823699D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x823699D8;
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
	// addi r7,r10,20824
	ctx.r7.s64 = ctx.r10.s64 + 20824;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2096
	ctx.r6.s64 = 2096;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369A00;
	sub_823911B8(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r7,r7,20796
	ctx.r7.s64 = ctx.r7.s64 + 20796;
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r6,2098
	ctx.r6.s64 = 2098;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82369A24;
	sub_82391350(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82369A30;
	sub_826365A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82369a68
	if (!ctx.cr6.eq) goto loc_82369A68;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,20772
	ctx.r7.s64 = ctx.r11.s64 + 20772;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r6,2103
	ctx.r6.s64 = 2103;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369A5C;
	sub_823911B8(ctx, base);
	// li r3,-32512
	ctx.r3.s64 = -32512;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82369A68:
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x826365a8
	ctx.lr = 0x82369A74;
	sub_826365A8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82369ab4
	if (!ctx.cr6.eq) goto loc_82369AB4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,20772
	ctx.r7.s64 = ctx.r11.s64 + 20772;
	// li r6,2109
	ctx.r6.s64 = 2109;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369AA0;
	sub_823911B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d40
	ctx.lr = 0x82369AA8;
	sub_82634D40(ctx, base);
	// li r3,-32512
	ctx.r3.s64 = -32512;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82369AB4:
	// lwz r5,212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82635430
	ctx.lr = 0x82369AC0;
	sub_82635430(ctx, base);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stb r9,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r9.u8);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82369af0
	if (!ctx.cr6.eq) goto loc_82369AF0;
	// stw r30,588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 588, ctx.r30.u32);
	// b 0x82369b18
	goto loc_82369B18;
loc_82369AF0:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82369b14
	if (ctx.cr6.eq) goto loc_82369B14;
loc_82369B00:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82369b00
	if (!ctx.cr6.eq) goto loc_82369B00;
loc_82369B14:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82369B18:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,20748
	ctx.r7.s64 = ctx.r11.s64 + 20748;
	// li r6,2131
	ctx.r6.s64 = 2131;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369B34;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823699D0) {
	__imp__sub_823699D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369B40) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82369b80
	if (ctx.cr6.eq) goto loc_82369B80;
loc_82369B60:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82634d40
	ctx.lr = 0x82369B6C;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82369B74;
	sub_82634D40(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82369b60
	if (!ctx.cr6.eq) goto loc_82369B60;
loc_82369B80:
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

PPC_WEAK_FUNC(sub_82369B40) {
	__imp__sub_82369B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369B98) {
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
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r7,r10,19488
	ctx.r7.s64 = ctx.r10.s64 + 19488;
	// addi r5,r8,19388
	ctx.r5.s64 = ctx.r8.s64 + 19388;
	// li r6,287
	ctx.r6.s64 = 287;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,584(r9)
	PPC_STORE_U32(ctx.r9.u32 + 584, ctx.r11.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r8,584(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 584);
	// bl 0x823911b8
	ctx.lr = 0x82369BE0;
	sub_823911B8(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,584(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 584);
	// bl 0x82368450
	ctx.lr = 0x82369BF0;
	sub_82368450(ctx, base);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r8,22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 22, ctx.xer);
	// bne cr6,0x82369c10
	if (!ctx.cr6.eq) goto loc_82369C10;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// li r10,3
	ctx.r10.s64 = 3;
	// beq cr6,0x82369c14
	if (ctx.cr6.eq) goto loc_82369C14;
loc_82369C10:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82369C14:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_82369B98) {
	__imp__sub_82369B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82369cb8
	if (ctx.cr6.lt) goto loc_82369CB8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_82369C54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82369c74
	if (!ctx.cr0.eq) goto loc_82369C74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82369c54
	if (!ctx.cr6.eq) goto loc_82369C54;
loc_82369C74:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82369cb8
	if (!ctx.cr6.eq) goto loc_82369CB8;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_82369C8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82369cac
	if (!ctx.cr0.eq) goto loc_82369CAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82369c8c
	if (!ctx.cr6.eq) goto loc_82369C8C;
loc_82369CAC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82369CB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82369C30) {
	__imp__sub_82369C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369CC0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r11,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82369d44
	if (ctx.cr6.eq) goto loc_82369D44;
	// rlwinm r10,r4,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82369d10
	if (ctx.cr6.gt) goto loc_82369D10;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_82369CF0:
	// lbzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u8);
	// bdnz 0x82369cf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369CF0;
	// blr 
	return;
loc_82369D10:
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82369d44
	if (ctx.cr6.eq) goto loc_82369D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82369D24:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lbzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// or r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u8);
	// bdnz 0x82369d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369D24;
loc_82369D44:
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82369d80
	if (ctx.cr6.eq) goto loc_82369D80;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subfic r11,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
loc_82369D64:
	// lbzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// stbx r8,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u8);
	// bdnz 0x82369d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369D64;
loc_82369D80:
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r5,r5,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// li r4,255
	ctx.r4.s64 = 255;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369CC0) {
	__imp__sub_82369CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82369D94) {
	__imp__sub_82369D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369D98) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r11.u64);
	// std r11,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82369D98) {
	__imp__sub_82369D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369DA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rldicr r7,r9,8,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rldicr r7,r4,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rldicr r10,r11,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rldicr r7,r8,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rldicr r5,r6,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// beq cr6,0x82369e38
	if (ctx.cr6.eq) goto loc_82369E38;
	// ld r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 152);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x82369e38
	if (ctx.cr6.gt) goto loc_82369E38;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpldi cr6,r11,64
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 64, ctx.xer);
	// blt cr6,0x82369e1c
	if (ctx.cr6.lt) goto loc_82369E1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82369E1C:
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// li r3,-1
	ctx.r3.s64 = -1;
	// sld r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82369E38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82369DA8) {
	__imp__sub_82369DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rldicr r7,r9,8,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rldicr r7,r4,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rldicr r10,r11,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rldicr r7,r8,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rldicr r5,r6,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 152);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82369ed4
	if (!ctx.cr6.gt) goto loc_82369ED4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpldi cr6,r11,64
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 64, ctx.xer);
	// blt cr6,0x82369ebc
	if (ctx.cr6.lt) goto loc_82369EBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r10.u64);
	// std r11,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r11.u64);
	// blr 
	return;
loc_82369EBC:
	// ld r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// std r10,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r10.u64);
	// sld r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// std r7,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r7.u64);
	// blr 
	return;
loc_82369ED4:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpldi cr6,r11,64
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 64, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// sld r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// std r7,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82369E40) {
	__imp__sub_82369E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x82369F00;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r11,19388
	ctx.r29.s64 = ctx.r11.s64 + 19388;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r10,21116
	ctx.r7.s64 = ctx.r10.s64 + 21116;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r6,3183
	ctx.r6.s64 = 3183;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369F48;
	sub_823911B8(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r9,21108
	ctx.r7.s64 = ctx.r9.s64 + 21108;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r6,3184
	ctx.r6.s64 = 3184;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82391350
	ctx.lr = 0x82369F6C;
	sub_82391350(ctx, base);
	// cmplwi cr6,r27,61
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 61, ctx.xer);
	// bge cr6,0x82369f9c
	if (!ctx.cr6.lt) goto loc_82369F9C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,21076
	ctx.r7.s64 = ctx.r11.s64 + 21076;
	// li r6,3186
	ctx.r6.s64 = 3186;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x82369F90;
	sub_823911B8(ctx, base);
	// li r3,-30976
	ctx.r3.s64 = -30976;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82369F9C:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x8236a1ec
	if (!ctx.cr6.eq) goto loc_8236A1EC;
	// lbz r11,3(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236a1ec
	if (!ctx.cr6.eq) goto loc_8236A1EC;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236a1ec
	if (!ctx.cr6.eq) goto loc_8236A1EC;
	// lbz r11,19(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 19);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236a1ec
	if (!ctx.cr6.eq) goto loc_8236A1EC;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236a1ec
	if (!ctx.cr6.eq) goto loc_8236A1EC;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236a1ec
	if (!ctx.cr6.eq) goto loc_8236A1EC;
	// lbz r26,59(r28)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r28.u32 + 59);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r26,61
	ctx.r11.s64 = ctx.r26.s64 + 61;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8236a024
	if (!ctx.cr6.gt) goto loc_8236A024;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r9,r27,-61
	ctx.r9.s64 = ctx.r27.s64 + -61;
	// addi r7,r11,21044
	ctx.r7.s64 = ctx.r11.s64 + 21044;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r6,3204
	ctx.r6.s64 = 3204;
	// bl 0x823911b8
	ctx.lr = 0x8236A018;
	sub_823911B8(ctx, base);
	// li r3,-30976
	ctx.r3.s64 = -30976;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_8236A024:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r7,r11,21016
	ctx.r7.s64 = ctx.r11.s64 + 21016;
	// addi r8,r28,60
	ctx.r8.s64 = ctx.r28.s64 + 60;
	// li r6,3208
	ctx.r6.s64 = 3208;
	// bl 0x82391350
	ctx.lr = 0x8236A03C;
	sub_82391350(ctx, base);
	// add r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 + ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r25,60(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// add r10,r25,r26
	ctx.r10.u64 = ctx.r25.u64 + ctx.r26.u64;
	// addi r10,r10,61
	ctx.r10.s64 = ctx.r10.s64 + 61;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8236a088
	if (!ctx.cr6.gt) goto loc_8236A088;
	// subf r11,r26,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r26.s64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-61
	ctx.r9.s64 = ctx.r11.s64 + -61;
	// addi r7,r10,20980
	ctx.r7.s64 = ctx.r10.s64 + 20980;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r6,3214
	ctx.r6.s64 = 3214;
	// bl 0x823911b8
	ctx.lr = 0x8236A07C;
	sub_823911B8(ctx, base);
	// li r3,-30976
	ctx.r3.s64 = -30976;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_8236A088:
	// addi r27,r11,61
	ctx.r27.s64 = ctx.r11.s64 + 61;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r11,20948
	ctx.r7.s64 = ctx.r11.s64 + 20948;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r6,3219
	ctx.r6.s64 = 3219;
	// bl 0x82391350
	ctx.lr = 0x8236A0A4;
	sub_82391350(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r3,128(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8236A0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a0f8
	if (!ctx.cr6.eq) goto loc_8236A0F8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,20928
	ctx.r7.s64 = ctx.r11.s64 + 20928;
	// li r6,3223
	ctx.r6.s64 = 3223;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A0EC;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_8236A0F8:
	// cmplwi cr6,r21,28
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 28, ctx.xer);
	// bge cr6,0x8236a10c
	if (!ctx.cr6.lt) goto loc_8236A10C;
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_8236A10C:
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x8236A11C;
	sub_82635430(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,254
	ctx.r10.s64 = 254;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// stb r10,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r10.u8);
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// stb r9,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r9.u8);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// add r5,r31,r21
	ctx.r5.u64 = ctx.r31.u64 + ctx.r21.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236A160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236a174
	if (ctx.cr6.eq) goto loc_8236A174;
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_8236A174:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,-27264
	ctx.r3.s64 = -27264;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r10,r11,228
	ctx.r10.s64 = ctx.r11.s64 + 228;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stb r10,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r10.u8);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r8,r11,-25
	ctx.r8.s64 = ctx.r11.s64 + -25;
	// rlwinm r7,r8,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// stb r7,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r7.u8);
	// stb r7,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r7.u8);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r6,r11,-25
	ctx.r6.s64 = ctx.r11.s64 + -25;
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stb r5,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r5.u8);
	// stb r5,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r5.u8);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r11,231
	ctx.r4.s64 = ctx.r11.s64 + 231;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r10,r11,-13
	ctx.r10.s64 = ctx.r11.s64 + -13;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r9,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r9.u8);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r8,r11,243
	ctx.r8.s64 = ctx.r11.s64 + 243;
	// stb r8,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r8.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_8236A1EC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,20888
	ctx.r7.s64 = ctx.r11.s64 + 20888;
	// li r6,3192
	ctx.r6.s64 = 3192;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A208;
	sub_823911B8(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lbz r9,19(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 19);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r10,20848
	ctx.r7.s64 = ctx.r10.s64 + 20848;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r6,3196
	ctx.r6.s64 = 3196;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,3(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// lbz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r31,21(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A254;
	sub_823911B8(ctx, base);
	// li r3,-30976
	ctx.r3.s64 = -30976;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369EF8) {
	__imp__sub_82369EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8236A268;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236a3dc
	if (ctx.cr6.eq) goto loc_8236A3DC;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236a3dc
	if (ctx.cr6.eq) goto loc_8236A3DC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,136(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// lwz r6,100(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r5,508(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// lwz r4,504(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// lwz r8,184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x82369ef8
	ctx.lr = 0x8236A2AC;
	sub_82369EF8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,19388
	ctx.r30.s64 = ctx.r11.s64 + 19388;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,21308
	ctx.r7.s64 = ctx.r11.s64 + 21308;
	// li r6,3320
	ctx.r6.s64 = 3320;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236A2D8;
	sub_823912A0(ctx, base);
	// cmpwi cr6,r29,-27264
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -27264, ctx.xer);
	// bne cr6,0x8236a368
	if (!ctx.cr6.eq) goto loc_8236A368;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,21280
	ctx.r7.s64 = ctx.r11.s64 + 21280;
	// li r6,3324
	ctx.r6.s64 = 3324;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A2FC;
	sub_823911B8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r8,184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r7,r10,21248
	ctx.r7.s64 = ctx.r10.s64 + 21248;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,3326
	ctx.r6.s64 = 3326;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x8236A324;
	sub_82391350(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8236A33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r7,21236
	ctx.r7.s64 = ctx.r7.s64 + 21236;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,3331
	ctx.r6.s64 = 3331;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236A35C;
	sub_823912A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236A368:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8236a3c4
	if (!ctx.cr6.eq) goto loc_8236A3C4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,21200
	ctx.r7.s64 = ctx.r11.s64 + 21200;
	// li r6,3338
	ctx.r6.s64 = 3338;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A38C;
	sub_823911B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368018
	ctx.lr = 0x8236A398;
	sub_82368018(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236a3d0
	if (ctx.cr6.eq) goto loc_8236A3D0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,21192
	ctx.r7.s64 = ctx.r11.s64 + 21192;
	// li r6,3340
	ctx.r6.s64 = 3340;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236A3C4;
	sub_823912A0(ctx, base);
loc_8236A3C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236A3D0:
	// li r3,-26496
	ctx.r3.s64 = -26496;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8236A3DC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,21140
	ctx.r7.s64 = ctx.r11.s64 + 21140;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,3310
	ctx.r6.s64 = 3310;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A3FC;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236A260) {
	__imp__sub_8236A260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8236A410;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r27,r11,19388
	ctx.r27.s64 = ctx.r11.s64 + 19388;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r7,r10,21644
	ctx.r7.s64 = ctx.r10.s64 + 21644;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,3646
	ctx.r6.s64 = 3646;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82391350
	ctx.lr = 0x8236A444;
	sub_82391350(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236a630
	if (ctx.cr6.eq) goto loc_8236A630;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369060
	ctx.lr = 0x8236A460;
	sub_82369060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236a498
	if (ctx.cr6.eq) goto loc_8236A498;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,21628
	ctx.r7.s64 = ctx.r11.s64 + 21628;
	// li r6,3668
	ctx.r6.s64 = 3668;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8236A48C;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236A498:
	// lbz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8236a4c4
	if (ctx.cr6.eq) goto loc_8236A4C4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,21584
	ctx.r7.s64 = ctx.r11.s64 + 21584;
	// li r6,3684
	ctx.r6.s64 = 3684;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A4C4;
	sub_823911B8(ctx, base);
loc_8236A4C4:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r9,21556
	ctx.r7.s64 = ctx.r9.s64 + 21556;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,3688
	ctx.r6.s64 = 3688;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x8236A4F0;
	sub_82391350(ctx, base);
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8236a57c
	if (!ctx.cr6.eq) goto loc_8236A57C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236a540
	if (!ctx.cr6.eq) goto loc_8236A540;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x8236a540
	if (ctx.cr6.eq) goto loc_8236A540;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,21516
	ctx.r7.s64 = ctx.r11.s64 + 21516;
	// li r6,3709
	ctx.r6.s64 = 3709;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A534;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236A540:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x8236a584
	if (!ctx.cr6.gt) goto loc_8236A584;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,21452
	ctx.r7.s64 = ctx.r11.s64 + 21452;
	// li r6,3722
	ctx.r6.s64 = 3722;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A570;
	sub_823911B8(ctx, base);
	// li r3,-29056
	ctx.r3.s64 = -29056;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236A57C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_8236A584:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8236a630
	if (ctx.cr6.eq) goto loc_8236A630;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8236A59C:
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
	// ble cr6,0x8236a5e8
	if (!ctx.cr6.gt) goto loc_8236A5E8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8236a5e8
	if (!ctx.cr6.eq) goto loc_8236A5E8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x8236a59c
	goto loc_8236A59C;
loc_8236A5E8:
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
	// bne cr6,0x8236a630
	if (!ctx.cr6.eq) goto loc_8236A630;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,21416
	ctx.r7.s64 = ctx.r11.s64 + 21416;
	// li r6,3747
	ctx.r6.s64 = 3747;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A624;
	sub_823911B8(ctx, base);
	// li r3,-27520
	ctx.r3.s64 = -27520;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236A630:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236a648
	if (!ctx.cr6.eq) goto loc_8236A648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369e40
	ctx.lr = 0x8236A648;
	sub_82369E40(ctx, base);
loc_8236A648:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// ble cr6,0x8236a67c
	if (!ctx.cr6.gt) goto loc_8236A67C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,21396
	ctx.r7.s64 = ctx.r11.s64 + 21396;
	// li r6,3763
	ctx.r6.s64 = 3763;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A670;
	sub_823911B8(ctx, base);
	// li r3,-29184
	ctx.r3.s64 = -29184;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236A67C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236A408) {
	__imp__sub_8236A408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x8236A690;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,68(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8236a6b8
	if (!ctx.cr6.eq) goto loc_8236A6B8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236A6B8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r28,r11,19388
	ctx.r28.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,21996
	ctx.r7.s64 = ctx.r10.s64 + 21996;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,3886
	ctx.r6.s64 = 3886;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A6DC;
	sub_823911B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8236a868
	if (ctx.cr6.eq) goto loc_8236A868;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8236a868
	if (ctx.cr6.eq) goto loc_8236A868;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r26,r27,520
	ctx.r26.s64 = ctx.r27.s64 + 520;
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
	// addi r29,r11,21944
	ctx.r29.s64 = ctx.r11.s64 + 21944;
	// addi r24,r10,21932
	ctx.r24.s64 = ctx.r10.s64 + 21932;
	// addi r23,r9,21924
	ctx.r23.s64 = ctx.r9.s64 + 21924;
loc_8236A714:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8236a758
	if (!ctx.cr6.eq) goto loc_8236A758;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236a738
	if (!ctx.cr6.eq) goto loc_8236A738;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_8236A738:
	// lwz r11,572(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 572);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r6,3920
	ctx.r6.s64 = 3920;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A758;
	sub_823911B8(ctx, base);
loc_8236A758:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8236a714
	if (ctx.cr6.lt) goto loc_8236A714;
	// lwz r11,508(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 508);
	// addi r29,r27,508
	ctx.r29.s64 = ctx.r27.s64 + 508;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8236a840
	if (!ctx.cr6.eq) goto loc_8236A840;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8236a840
	if (!ctx.cr6.eq) goto loc_8236A840;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 | ctx.r7.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// ble cr6,0x8236a7e0
	if (!ctx.cr6.gt) goto loc_8236A7E0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,3938
	ctx.r6.s64 = 3938;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236A7D4;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8236A7E0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,3942
	ctx.r6.s64 = 3942;
	// addi r7,r11,21876
	ctx.r7.s64 = ctx.r11.s64 + 21876;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x8236A7F4;
	sub_823911B8(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r7,r10,21832
	ctx.r7.s64 = ctx.r10.s64 + 21832;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r6,3944
	ctx.r6.s64 = 3944;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x8236A818;
	sub_82391350(ctx, base);
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82635430
	ctx.lr = 0x8236A838;
	sub_82635430(ctx, base);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x8236a8cc
	goto loc_8236A8CC;
loc_8236A840:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r8,572(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 572);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,21772
	ctx.r7.s64 = ctx.r11.s64 + 21772;
	// li r6,3955
	ctx.r6.s64 = 3955;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A860;
	sub_823911B8(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x8236a8cc
	goto loc_8236A8CC;
loc_8236A868:
	// lbz r11,504(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 504);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8236a898
	if (!ctx.cr6.eq) goto loc_8236A898;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,3893
	ctx.r6.s64 = 3893;
	// addi r7,r11,21736
	ctx.r7.s64 = ctx.r11.s64 + 21736;
	// bl 0x823911b8
	ctx.lr = 0x8236A890;
	sub_823911B8(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x8236a8cc
	goto loc_8236A8CC;
loc_8236A898:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,3898
	ctx.r6.s64 = 3898;
	// addi r7,r11,21704
	ctx.r7.s64 = ctx.r11.s64 + 21704;
	// bl 0x823911b8
	ctx.lr = 0x8236A8A8;
	sub_823911B8(ctx, base);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stw r22,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r22.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stb r22,504(r27)
	PPC_STORE_U8(ctx.r27.u32 + 504, ctx.r22.u8);
loc_8236A8CC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,21672
	ctx.r7.s64 = ctx.r11.s64 + 21672;
	// li r6,3962
	ctx.r6.s64 = 3962;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236A8E8;
	sub_823911B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236A688) {
	__imp__sub_8236A688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236A8F4) {
	__imp__sub_8236A8F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A8F8) {
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
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236a9ac
	if (ctx.cr6.eq) goto loc_8236A9AC;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236a94c
	if (ctx.cr6.eq) goto loc_8236A94C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,4239
	ctx.r6.s64 = 4239;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236A944;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// b 0x8236a9c0
	goto loc_8236A9C0;
loc_8236A94C:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8236a9a0
	if (!ctx.cr6.lt) goto loc_8236A9A0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r5,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r5.u32);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x82634bc0
	ctx.lr = 0x8236A970;
	sub_82634BC0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r7,r11,22028
	ctx.r7.s64 = ctx.r11.s64 + 22028;
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,4270
	ctx.r6.s64 = 4270;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x8236A998;
	sub_82391350(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// b 0x8236a9bc
	goto loc_8236A9BC;
loc_8236A9A0:
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// b 0x8236a9bc
	goto loc_8236A9BC;
loc_8236A9AC:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236a9bc
	if (!ctx.cr6.eq) goto loc_8236A9BC;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_8236A9BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A9C0:
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

PPC_WEAK_FUNC(sub_8236A8F8) {
	__imp__sub_8236A8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A9D8) {
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
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236aa1c
	if (ctx.cr6.eq) goto loc_8236AA1C;
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236aa1c
	if (ctx.cr6.eq) goto loc_8236AA1C;
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// bl 0x82634d40
	ctx.lr = 0x8236AA14;
	sub_82634D40(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r8.u32);
loc_8236AA1C:
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

PPC_WEAK_FUNC(sub_8236A9D8) {
	__imp__sub_8236A9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8236AA38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8236ab58
	if (!ctx.cr6.eq) goto loc_8236AB58;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236ab58
	if (ctx.cr6.eq) goto loc_8236AB58;
	// lwz r27,556(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// lwz r29,560(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// lwz r28,564(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8236ab58
	if (ctx.cr6.eq) goto loc_8236AB58;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236ab58
	if (ctx.cr6.gt) goto loc_8236AB58;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r11,19388
	ctx.r30.s64 = ctx.r11.s64 + 19388;
	// addi r7,r10,22172
	ctx.r7.s64 = ctx.r10.s64 + 22172;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,4351
	ctx.r6.s64 = 4351;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x8236AAA0;
	sub_823911B8(ctx, base);
	// lhz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236aacc
	if (ctx.cr6.eq) goto loc_8236AACC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4354
	ctx.r6.s64 = 4354;
	// addi r7,r11,22132
	ctx.r7.s64 = ctx.r11.s64 + 22132;
	// bl 0x823911b8
	ctx.lr = 0x8236AAC8;
	sub_823911B8(ctx, base);
	// b 0x8236ab3c
	goto loc_8236AB3C;
loc_8236AACC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,4358
	ctx.r6.s64 = 4358;
	// addi r7,r11,22084
	ctx.r7.s64 = ctx.r11.s64 + 22084;
	// bl 0x823911b8
	ctx.lr = 0x8236AADC;
	sub_823911B8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r9,r11,16717
	ctx.r9.s64 = ctx.r11.s64 + 16717;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236ab1c
	if (!ctx.cr6.gt) goto loc_8236AB1C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,4362
	ctx.r6.s64 = 4362;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236AB10;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8236AB1C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x8236AB28;
	sub_82635430(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x8236a9d8
	ctx.lr = 0x8236AB3C;
	sub_8236A9D8(ctx, base);
loc_8236AB3C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r11,22056
	ctx.r7.s64 = ctx.r11.s64 + 22056;
	// li r6,4373
	ctx.r6.s64 = 4373;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236AB58;
	sub_823911B8(ctx, base);
loc_8236AB58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236AA30) {
	__imp__sub_8236AA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236AB64) {
	__imp__sub_8236AB64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8236AB70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,68(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236ac70
	if (ctx.cr6.eq) goto loc_8236AC70;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x8236ac70
	if (!ctx.cr6.eq) goto loc_8236AC70;
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236ac70
	if (!ctx.cr6.eq) goto loc_8236AC70;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,500(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8236abe4
	if (!ctx.cr6.gt) goto loc_8236ABE4;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r5,r6,19388
	ctx.r5.s64 = ctx.r6.s64 + 19388;
	// addi r7,r11,22248
	ctx.r7.s64 = ctx.r11.s64 + 22248;
	// li r6,4407
	ctx.r6.s64 = 4407;
	// bl 0x823911b8
	ctx.lr = 0x8236ABD8;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8236ABE4:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lhz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 140);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r28,r10,19388
	ctx.r28.s64 = ctx.r10.s64 + 19388;
	// addi r7,r9,22216
	ctx.r7.s64 = ctx.r9.s64 + 22216;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r6,4413
	ctx.r6.s64 = 4413;
	// bl 0x823911b8
	ctx.lr = 0x8236AC08;
	sub_823911B8(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r8,22200
	ctx.r7.s64 = ctx.r8.s64 + 22200;
	// li r6,4414
	ctx.r6.s64 = 4414;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82391350
	ctx.lr = 0x8236AC2C;
	sub_82391350(ctx, base);
	// lhz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 140);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r7.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r4,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r4.u32);
	// bl 0x826365a8
	ctx.lr = 0x8236AC48;
	sub_826365A8(ctx, base);
	// stw r3,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236ac70
	if (ctx.cr6.eq) goto loc_8236AC70;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82635430
	ctx.lr = 0x8236AC60;
	sub_82635430(ctx, base);
	// lwz r10,500(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r11.u32);
loc_8236AC70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236AB68) {
	__imp__sub_8236AB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236AC7C) {
	__imp__sub_8236AC7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AC80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236acb0
	if (!ctx.cr6.eq) goto loc_8236ACB0;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// b 0x8236acc8
	goto loc_8236ACC8;
loc_8236ACB0:
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// stw r8,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r8.u32);
loc_8236ACC8:
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8236acf4
	if (!ctx.cr6.lt) goto loc_8236ACF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// blr 
	return;
loc_8236ACF4:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236AC80) {
	__imp__sub_8236AC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236AD0C) {
	__imp__sub_8236AD0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AD10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236ad48
	if (!ctx.cr6.eq) goto loc_8236AD48;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// blr 
	return;
loc_8236AD48:
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// stw r7,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236AD10) {
	__imp__sub_8236AD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236AD6C) {
	__imp__sub_8236AD6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AD70) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// beq cr6,0x8236ad90
	if (ctx.cr6.eq) goto loc_8236AD90;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8236AD90:
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bne cr6,0x8236adc4
	if (!ctx.cr6.eq) goto loc_8236ADC4;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// b 0x8236addc
	goto loc_8236ADDC;
loc_8236ADC4:
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stw r8,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
loc_8236ADDC:
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lbz r10,5(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8236ae18
	if (!ctx.cr6.eq) goto loc_8236AE18;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// blr 
	return;
loc_8236AE18:
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// stw r7,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236AD70) {
	__imp__sub_8236AD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236AE3C) {
	__imp__sub_8236AE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AE40) {
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
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x8236ae78
	if (!ctx.cr6.eq) goto loc_8236AE78;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8236AE78:
	// lwz r10,80(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236ae8c
	if (ctx.cr6.eq) goto loc_8236AE8C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8236AE8C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8236af10
	if (ctx.cr6.gt) goto loc_8236AF10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236aed8
	if (ctx.cr6.eq) goto loc_8236AED8;
	// bdz 0x8236af10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8236AF10;
	// bdz 0x8236af10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8236AF10;
	// bdz 0x8236af10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8236AF10;
	// bdz 0x8236aec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8236AEC0;
	// bdz 0x8236aec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8236AEC0;
	// bdz 0x8236aec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8236AEC0;
	// bdz 0x8236af10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8236AF10;
loc_8236AEC0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8236AED8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236aee4
	if (ctx.cr6.eq) goto loc_8236AEE4;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_8236AEE4:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8236aefc
	if (ctx.cr6.lt) goto loc_8236AEFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8236AEFC:
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8236AF10:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,5125
	ctx.r6.s64 = 5125;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8236AF2C;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236AE40) {
	__imp__sub_8236AE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AF40) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 & ctx.r9.u64;
	// bne cr6,0x8236b064
	if (!ctx.cr6.eq) goto loc_8236B064;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8236b064
	if (ctx.cr6.eq) goto loc_8236B064;
	// lbz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8236b064
	if (ctx.cr6.eq) goto loc_8236B064;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// addi r6,r11,36
	ctx.r6.s64 = ctx.r11.s64 + 36;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236afdc
	if (ctx.cr6.eq) goto loc_8236AFDC;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8236AFBC:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8236afdc
	if (!ctx.cr0.eq) goto loc_8236AFDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8236afbc
	if (!ctx.cr6.eq) goto loc_8236AFBC;
loc_8236AFDC:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 + 220;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236b018
	if (ctx.cr6.eq) goto loc_8236B018;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8236AFF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8236b018
	if (!ctx.cr0.eq) goto loc_8236B018;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8236aff8
	if (!ctx.cr6.eq) goto loc_8236AFF8;
loc_8236B018:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x8236b028
	if (ctx.cr6.gt) goto loc_8236B028;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8236b064
	if (!ctx.cr6.gt) goto loc_8236B064;
loc_8236B028:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r11,22376
	ctx.r7.s64 = ctx.r11.s64 + 22376;
	// addi r5,r10,19388
	ctx.r5.s64 = ctx.r10.s64 + 19388;
	// li r6,5164
	ctx.r6.s64 = 5164;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8236B048;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368310
	ctx.lr = 0x8236B050;
	sub_82368310(ctx, base);
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
loc_8236B064:
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

PPC_WEAK_FUNC(sub_8236AF40) {
	__imp__sub_8236AF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B07C) {
	__imp__sub_8236B07C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B080) {
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
	// beq cr6,0x8236b0c8
	if (ctx.cr6.eq) goto loc_8236B0C8;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x82390078
	ctx.lr = 0x8236B0A4;
	sub_82390078(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82390078
	ctx.lr = 0x8236B0AC;
	sub_82390078(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8235cb50
	ctx.lr = 0x8236B0B4;
	sub_8235CB50(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8235cb50
	ctx.lr = 0x8236B0BC;
	sub_8235CB50(ctx, base);
	// li r4,276
	ctx.r4.s64 = 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x8236B0C8;
	sub_82362B98(ctx, base);
loc_8236B0C8:
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

PPC_WEAK_FUNC(sub_8236B080) {
	__imp__sub_8236B080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B0DC) {
	__imp__sub_8236B0DC(ctx, base);
}

