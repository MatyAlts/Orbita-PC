#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822C6C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-32484
	ctx.r10.s64 = -2128871424;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// ori r10,r10,40389
	ctx.r10.u64 = ctx.r10.u64 | 40389;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c6cd0
	if (ctx.cr6.eq) goto loc_822C6CD0;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// ori r8,r8,403
	ctx.r8.u64 = ctx.r8.u64 | 403;
loc_822C6CB4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// xor r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// mullw r10,r6,r8
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x822c6cb4
	if (!ctx.cr6.eq) goto loc_822C6CB4;
loc_822C6CD0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r7,r10,20
	ctx.r7.u64 = ctx.r10.u32 & 0xFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r11,44311
	ctx.r6.u64 = ctx.r11.u64 | 44311;
loc_822C6CE0:
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822c6d3c
	if (ctx.cr6.eq) goto loc_822C6D3C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822C6CFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x822c6d20
	if (ctx.cr6.eq) goto loc_822C6D20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c6cfc
	if (ctx.cr6.eq) goto loc_822C6CFC;
loc_822C6D20:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c6d48
	if (ctx.cr6.eq) goto loc_822C6D48;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// clrlwi r7,r11,20
	ctx.r7.u64 = ctx.r11.u32 & 0xFFF;
	// blt cr6,0x822c6ce0
	if (ctx.cr6.lt) goto loc_822C6CE0;
loc_822C6D3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822C6D48:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6C90) {
	__imp__sub_822C6C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C6D54) {
	__imp__sub_822C6D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6D58) {
	PPC_FUNC_PROLOGUE();
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,64520
	ctx.r5.u64 = ctx.r5.u64 | 64520;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C6D58) {
	__imp__sub_822C6D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6D68) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c6d98
	if (ctx.cr6.eq) goto loc_822C6D98;
	// bl 0x822c6c90
	ctx.lr = 0x822C6D80;
	sub_822C6C90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c6d98
	if (ctx.cr6.eq) goto loc_822C6D98;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c6d9c
	if (!ctx.cr6.eq) goto loc_822C6D9C;
loc_822C6D98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C6D9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6D68) {
	__imp__sub_822C6D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C6DAC) {
	__imp__sub_822C6DAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822C6DB8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822c0fd8
	ctx.lr = 0x822C6DCC;
	sub_822C0FD8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c1010
	ctx.lr = 0x822C6DD8;
	sub_822C1010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c6de8
	if (!ctx.cr6.eq) goto loc_822C6DE8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822C6DE8:
	// addis r3,r23,3
	ctx.r3.s64 = ctx.r23.s64 + 196608;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-19364
	ctx.r3.s64 = ctx.r3.s64 + -19364;
	// bl 0x826344d0
	ctx.lr = 0x822C6DFC;
	sub_826344D0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r3,r23,36
	ctx.r3.s64 = ctx.r23.s64 + 36;
	// li r21,0
	ctx.r21.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32484
	ctx.r11.s64 = -2128871424;
	// ori r31,r10,403
	ctx.r31.u64 = ctx.r10.u64 | 403;
	// ori r30,r11,40389
	ctx.r30.u64 = ctx.r11.u64 | 40389;
	// ori r5,r9,44311
	ctx.r5.u64 = ctx.r9.u64 | 44311;
loc_822C6E24:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c6eec
	if (!ctx.cr6.gt) goto loc_822C6EEC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822C6E38:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c6e70
	if (ctx.cr6.eq) goto loc_822C6E70;
loc_822C6E54:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// mullw r10,r6,r31
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822c6e54
	if (!ctx.cr6.eq) goto loc_822C6E54;
loc_822C6E70:
	// clrlwi r8,r10,20
	ctx.r8.u64 = ctx.r10.u32 & 0xFFF;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_822C6E78:
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c6ed4
	if (ctx.cr6.eq) goto loc_822C6ED4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_822C6E90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// beq cr6,0x822c6eb4
	if (ctx.cr6.eq) goto loc_822C6EB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c6e90
	if (ctx.cr6.eq) goto loc_822C6E90;
loc_822C6EB4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c6ed8
	if (ctx.cr6.eq) goto loc_822C6ED8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r6,4096
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4096, ctx.xer);
	// clrlwi r8,r11,20
	ctx.r8.u64 = ctx.r11.u32 & 0xFFF;
	// blt cr6,0x822c6e78
	if (ctx.cr6.lt) goto loc_822C6E78;
	// b 0x822c6ed8
	goto loc_822C6ED8;
loc_822C6ED4:
	// stwx r7,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r7.u32);
loc_822C6ED8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r4,r4,140
	ctx.r4.s64 = ctx.r4.s64 + 140;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c6e38
	if (ctx.cr6.lt) goto loc_822C6E38;
loc_822C6EEC:
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bdnz 0x822c6e24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C6E24;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822b9930
	ctx.lr = 0x822C6EFC;
	sub_822B9930(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r24,r11,5228
	ctx.r24.s64 = ctx.r11.s64 + 5228;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_822C6F0C:
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c6f90
	if (!ctx.cr6.gt) goto loc_822C6F90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822b9970
	ctx.lr = 0x822C6F3C;
	sub_822B9970(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c6fa0
	if (ctx.cr6.lt) goto loc_822C6FA0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c6f84
	if (!ctx.cr6.gt) goto loc_822C6F84;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_822C6F5C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822b99f8
	ctx.lr = 0x822C6F70;
	sub_822B99F8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c6f5c
	if (ctx.cr6.lt) goto loc_822C6F5C;
loc_822C6F84:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x822c6f90
	if (!ctx.cr6.eq) goto loc_822C6F90;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_822C6F90:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r11,r24,28
	ctx.r11.s64 = ctx.r24.s64 + 28;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c6f0c
	if (ctx.cr6.lt) goto loc_822C6F0C;
loc_822C6FA0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822ba138
	ctx.lr = 0x822C6FA8;
	sub_822BA138(ctx, base);
	// addis r10,r23,3
	ctx.r10.s64 = ctx.r23.s64 + 196608;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r10,r10,-1020
	ctx.r10.s64 = ctx.r10.s64 + -1020;
	// ori r31,r11,25236
	ctx.r31.u64 = ctx.r11.u64 | 25236;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822c701c
	if (!ctx.cr6.eq) goto loc_822C701C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x822c701c
	if (ctx.cr6.lt) goto loc_822C701C;
	// lwzx r11,r22,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822c701c
	if (!ctx.cr6.lt) goto loc_822C701C;
	// mulli r11,r25,2104
	ctx.r11.s64 = ctx.r25.s64 * 2104;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// ori r8,r9,10500
	ctx.r8.u64 = ctx.r9.u64 | 10500;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822c701c
	if (!ctx.cr6.gt) goto loc_822C701C;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r7,r9,25240
	ctx.r7.u64 = ctx.r9.u64 | 25240;
	// ori r6,r8,10504
	ctx.r6.u64 = ctx.r8.u64 | 10504;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stwx r25,r22,r7
	PPC_STORE_U32(ctx.r22.u32 + ctx.r7.u32, ctx.r25.u32);
	// stwx r21,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r21.u32);
	// bl 0x822b9ad8
	ctx.lr = 0x822C701C;
	sub_822B9AD8(ctx, base);
loc_822C701C:
	// lwzx r11,r22,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c7030
	if (!ctx.cr6.eq) goto loc_822C7030;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822ba430
	ctx.lr = 0x822C7030;
	sub_822BA430(ctx, base);
loc_822C7030:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r11,62720
	ctx.r10.u64 = ctx.r11.u64 | 62720;
	// stwx r21,r23,r10
	PPC_STORE_U32(ctx.r23.u32 + ctx.r10.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C6DB0) {
	__imp__sub_822C6DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7048) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c70d0
	if (ctx.cr6.eq) goto loc_822C70D0;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c70d0
	if (ctx.cr6.eq) goto loc_822C70D0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c70d0
	if (!ctx.cr6.gt) goto loc_822C70D0;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c70d0
	if (!ctx.cr6.gt) goto loc_822C70D0;
	// addis r8,r3,3
	ctx.r8.s64 = ctx.r3.s64 + 196608;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,-2820
	ctx.r8.s64 = ctx.r8.s64 + -2820;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 196608;
	// addi r3,r3,-2980
	ctx.r3.s64 = ctx.r3.s64 + -2980;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
loc_822C70D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C7048) {
	__imp__sub_822C7048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C70D8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c713c
	if (ctx.cr6.eq) goto loc_822C713C;
	// bl 0x822c6c90
	ctx.lr = 0x822C70F8;
	sub_822C6C90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c713c
	if (ctx.cr6.eq) goto loc_822C713C;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c713c
	if (ctx.cr6.eq) goto loc_822C713C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c713c
	if (ctx.cr6.eq) goto loc_822C713C;
	// bl 0x822c12b8
	ctx.lr = 0x822C711C;
	sub_822C12B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7048
	ctx.lr = 0x822C7128;
	sub_822C7048(ctx, base);
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
loc_822C713C:
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

PPC_WEAK_FUNC(sub_822C70D8) {
	__imp__sub_822C70D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C7154) {
	__imp__sub_822C7154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7158) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c71bc
	if (ctx.cr6.eq) goto loc_822C71BC;
	// bl 0x822c6c90
	ctx.lr = 0x822C7178;
	sub_822C6C90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c71bc
	if (ctx.cr6.eq) goto loc_822C71BC;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c71bc
	if (ctx.cr6.eq) goto loc_822C71BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c71bc
	if (ctx.cr6.eq) goto loc_822C71BC;
	// bl 0x822c12c8
	ctx.lr = 0x822C719C;
	sub_822C12C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7048
	ctx.lr = 0x822C71A8;
	sub_822C7048(ctx, base);
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
loc_822C71BC:
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

PPC_WEAK_FUNC(sub_822C7158) {
	__imp__sub_822C7158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C71D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C71D4) {
	__imp__sub_822C71D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C71D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32212
	ctx.r11.s64 = -2111045632;
	// stw r3,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r3.u32);
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// addi r9,r11,28888
	ctx.r9.s64 = ctx.r11.s64 + 28888;
	// addi r8,r10,29016
	ctx.r8.s64 = ctx.r10.s64 + 29016;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// stw r8,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C71D8) {
	__imp__sub_822C71D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C71F8) {
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
	// bl 0x822cc540
	ctx.lr = 0x822C7208;
	sub_822CC540(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c7258
	if (ctx.cr6.eq) goto loc_822C7258;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x822c7258
	if (!ctx.cr6.eq) goto loc_822C7258;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// bne cr6,0x822c7240
	if (!ctx.cr6.eq) goto loc_822C7240;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C7240:
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x822c7258
	if (!ctx.cr6.eq) goto loc_822C7258;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r3,4
	ctx.r3.s64 = 4;
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// beq cr6,0x822c725c
	if (ctx.cr6.eq) goto loc_822C725C;
loc_822C7258:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C725C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C71F8) {
	__imp__sub_822C71F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C726C) {
	__imp__sub_822C726C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7270) {
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
	// bl 0x822c71f8
	ctx.lr = 0x822C7280;
	sub_822C71F8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822c72a0
	if (!ctx.cr6.eq) goto loc_822C72A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,5264
	ctx.r3.s64 = ctx.r11.s64 + 5264;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C72A0:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822c72c0
	if (!ctx.cr6.eq) goto loc_822C72C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,5260
	ctx.r3.s64 = ctx.r11.s64 + 5260;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C72C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,5256
	ctx.r3.s64 = ctx.r11.s64 + 5256;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C7270) {
	__imp__sub_822C7270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C72D8) {
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
	// bl 0x822c6c90
	ctx.lr = 0x822C72F0;
	sub_822C6C90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c7334
	if (ctx.cr6.eq) goto loc_822C7334;
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x822c71f8
	ctx.lr = 0x822C7304;
	sub_822C71F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x822c0418
	ctx.lr = 0x822C7310;
	sub_822C0418(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// rlwimi r9,r30,29,27,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 29) & 0x18) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// li r8,16
	ctx.r8.s64 = 16;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r5,r9,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xF;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// rlwinm r5,r5,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
loc_822C7334:
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

PPC_WEAK_FUNC(sub_822C72D8) {
	__imp__sub_822C72D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C734C) {
	__imp__sub_822C734C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822C7358;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32484
	ctx.r11.s64 = -2128871424;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r23,r11,40389
	ctx.r23.u64 = ctx.r11.u64 | 40389;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r20,r10,64260
	ctx.r20.u64 = ctx.r10.u64 | 64260;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822c7448
	if (!ctx.cr6.gt) goto loc_822C7448;
	// addis r30,r3,3
	ctx.r30.s64 = ctx.r3.s64 + 196608;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// add r28,r3,r20
	ctx.r28.u64 = ctx.r3.u64 + ctx.r20.u64;
	// addi r30,r30,-2812
	ctx.r30.s64 = ctx.r30.s64 + -2812;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// ori r29,r10,403
	ctx.r29.u64 = ctx.r10.u64 | 403;
	// addi r24,r11,8796
	ctx.r24.s64 = ctx.r11.s64 + 8796;
loc_822C73A8:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c743c
	if (ctx.cr6.eq) goto loc_822C743C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c6c90
	ctx.lr = 0x822C73C0;
	sub_822C6C90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c743c
	if (ctx.cr6.eq) goto loc_822C743C;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c743c
	if (ctx.cr6.eq) goto loc_822C743C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c743c
	if (ctx.cr6.eq) goto loc_822C743C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C73F4;
	sub_822ECA80(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c7428
	if (ctx.cr6.eq) goto loc_822C7428;
loc_822C740C:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// mullw r11,r7,r29
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822c740c
	if (!ctx.cr6.eq) goto loc_822C740C;
loc_822C7428:
	// xor r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mullw r25,r11,r29
	ctx.r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
loc_822C743C:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// bne 0x822c73a8
	if (!ctx.cr0.eq) goto loc_822C73A8;
loc_822C7448:
	// subfic r11,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r19.s64;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addis r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 196608;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r11,r11,-2816
	ctx.r11.s64 = ctx.r11.s64 + -2816;
	// xor r6,r7,r25
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r25.u64;
	// xor r10,r6,r27
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r27.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822c74ac
	if (ctx.cr6.eq) goto loc_822C74AC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// add r31,r26,r20
	ctx.r31.u64 = ctx.r26.u64 + ctx.r20.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c10a0
	ctx.lr = 0x822C748C;
	sub_822C10A0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822c74ac
	if (!ctx.cr6.gt) goto loc_822C74AC;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x822c74ac
	if (ctx.cr6.eq) goto loc_822C74AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822c10a0
	ctx.lr = 0x822C74AC;
	sub_822C10A0(ctx, base);
loc_822C74AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C7350) {
	__imp__sub_822C7350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C74B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C74B4) {
	__imp__sub_822C74B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C74B8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ae998
	ctx.lr = 0x822C74E8;
	sub_822AE998(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// xori r6,r10,1
	ctx.r6.u64 = ctx.r10.u64 ^ 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7350
	ctx.lr = 0x822C7504;
	sub_822C7350(ctx, base);
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

PPC_WEAK_FUNC(sub_822C74B8) {
	__imp__sub_822C74B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C751C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C751C) {
	__imp__sub_822C751C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822b69a0
	ctx.lr = 0x822C7548;
	sub_822B69A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c7350
	ctx.lr = 0x822C755C;
	sub_822C7350(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C7520) {
	__imp__sub_822C7520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822C7578;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r15,r3,2
	ctx.r15.s64 = ctx.r3.s64 + 131072;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r15,r15,104
	ctx.r15.s64 = ctx.r15.s64 + 104;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// lwz r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// ori r16,r11,8396
	ctx.r16.u64 = ctx.r11.u64 | 8396;
	// ori r14,r10,100
	ctx.r14.u64 = ctx.r10.u64 | 100;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c75e4
	if (ctx.cr6.eq) goto loc_822C75E4;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,25256
	ctx.r9.u64 = ctx.r11.u64 | 25256;
	// ori r8,r10,96
	ctx.r8.u64 = ctx.r10.u64 | 96;
	// lwzx r7,r4,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822c75e4
	if (!ctx.cr6.eq) goto loc_822C75E4;
	// lwzx r11,r4,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// lwzx r10,r3,r14
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r14.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c76f0
	if (ctx.cr6.eq) goto loc_822C76F0;
loc_822C75E4:
	// addis r19,r28,3
	ctx.r19.s64 = ctx.r28.s64 + 196608;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r19,r19,25236
	ctx.r19.s64 = ctx.r19.s64 + 25236;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c76bc
	if (!ctx.cr6.gt) goto loc_822C76BC;
	// addis r25,r28,3
	ctx.r25.s64 = ctx.r28.s64 + 196608;
	// li r26,6
	ctx.r26.s64 = 6;
	// addi r23,r27,-4
	ctx.r23.s64 = ctx.r27.s64 + -4;
	// addi r22,r27,96
	ctx.r22.s64 = ctx.r27.s64 + 96;
	// addi r25,r25,10500
	ctx.r25.s64 = ctx.r25.s64 + 10500;
loc_822C7610:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r21,r25,-2096
	ctx.r21.s64 = ctx.r25.s64 + -2096;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c7690
	if (!ctx.cr6.gt) goto loc_822C7690;
	// addi r30,r25,-2048
	ctx.r30.s64 = ctx.r25.s64 + -2048;
loc_822C7628:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// add r10,r26,r29
	ctx.r10.u64 = ctx.r26.u64 + ctx.r29.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r10,r9,100
	ctx.r10.s64 = ctx.r9.s64 * 100;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// stwx r4,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r4.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// beq cr6,0x822c7674
	if (ctx.cr6.eq) goto loc_822C7674;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x822C7670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822c7678
	goto loc_822C7678;
loc_822C7674:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C7678:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c7628
	if (ctx.cr6.lt) goto loc_822C7628;
loc_822C7690:
	// stw r22,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r22.u32);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stw r21,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r21.u32);
	// addi r25,r25,2104
	ctx.r25.s64 = ctx.r25.s64 + 2104;
	// lwz r11,2096(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2096);
	// addi r26,r26,1024
	ctx.r26.s64 = ctx.r26.s64 + 1024;
	// stwu r11,12(r23)
	ea = 12 + ctx.r23.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r23.u32 = ea;
	// addi r22,r22,16384
	ctx.r22.s64 = ctx.r22.s64 + 16384;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c7610
	if (ctx.cr6.lt) goto loc_822C7610;
loc_822C76BC:
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// stw r7,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r7.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,25256
	ctx.r9.u64 = ctx.r11.u64 | 25256;
	// ori r8,r10,96
	ctx.r8.u64 = ctx.r10.u64 | 96;
	// lwzx r6,r28,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// stwx r6,r27,r8
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwzx r5,r28,r16
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// stwx r5,r27,r14
	PPC_STORE_U32(ctx.r27.u32 + ctx.r14.u32, ctx.r5.u32);
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r4.u32);
loc_822C76F0:
	// addis r8,r28,3
	ctx.r8.s64 = ctx.r28.s64 + 196608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,25236
	ctx.r8.s64 = ctx.r8.s64 + 25236;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c7728
	if (!ctx.cr6.gt) goto loc_822C7728;
	// addi r9,r27,-4
	ctx.r9.s64 = ctx.r27.s64 + -4;
	// add r10,r28,r16
	ctx.r10.u64 = ctx.r28.u64 + ctx.r16.u64;
loc_822C7710:
	// lwzu r7,2104(r10)
	ea = 2104 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r7,12(r9)
	ea = 12 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822c7710
	if (ctx.cr6.lt) goto loc_822C7710;
loc_822C7728:
	// stw r27,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r27.u32);
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// addi r11,r11,25240
	ctx.r11.s64 = ctx.r11.s64 + 25240;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r9.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x822c7768
	if (!ctx.cr6.eq) goto loc_822C7768;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,25244
	ctx.r10.u64 = ctx.r11.u64 | 25244;
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stw r9,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822C7768:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822c7798
	if (!ctx.cr6.lt) goto loc_822C7798;
	// mulli r11,r11,2104
	ctx.r11.s64 = ctx.r11.s64 * 2104;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// ori r8,r10,10504
	ctx.r8.u64 = ctx.r10.u64 | 10504;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r7.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822C7798:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C7570) {
	__imp__sub_822C7570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C77A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,3
	ctx.r10.s64 = 196608;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,25248
	ctx.r9.u64 = ctx.r10.u64 | 25248;
	// lwzx r10,r4,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c77c8
	if (!ctx.cr6.eq) goto loc_822C77C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822C77C8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c77e8
	if (ctx.cr6.eq) goto loc_822C77E8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-14948
	ctx.r10.s64 = ctx.r10.s64 + -14948;
	// b 0x822c77f0
	goto loc_822C77F0;
loc_822C77E8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-15012
	ctx.r10.s64 = ctx.r10.s64 + -15012;
loc_822C77F0:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// ori r7,r8,112
	ctx.r7.u64 = ctx.r8.u64 | 112;
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r5,r6,-15128
	ctx.r5.s64 = ctx.r6.s64 + -15128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stwx r5,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// beq cr6,0x822c7824
	if (ctx.cr6.eq) goto loc_822C7824;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-28776
	ctx.r10.s64 = ctx.r10.s64 + -28776;
	// b 0x822c782c
	goto loc_822C782C;
loc_822C7824:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-28764
	ctx.r10.s64 = ctx.r10.s64 + -28764;
loc_822C782C:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r5,r9,116
	ctx.r5.u64 = ctx.r9.u64 | 116;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r9,r8,120
	ctx.r9.u64 = ctx.r8.u64 | 120;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// ori r7,r7,25252
	ctx.r7.u64 = ctx.r7.u64 | 25252;
	// stwx r10,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
	// ori r6,r6,124
	ctx.r6.u64 = ctx.r6.u64 | 124;
	// addi r8,r8,-15292
	ctx.r8.s64 = ctx.r8.s64 + -15292;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwzx r7,r4,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// stwx r7,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C77A8) {
	__imp__sub_822C77A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7868) {
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822C7888;
	sub_826344D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

PPC_WEAK_FUNC(sub_822C7868) {
	__imp__sub_822C7868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C78A4) {
	__imp__sub_822C78A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C78A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822c78c8
	if (ctx.cr6.lt) goto loc_822C78C8;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x822c78cc
	if (ctx.cr6.lt) goto loc_822C78CC;
loc_822C78C8:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_822C78CC:
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C78A8) {
	__imp__sub_822C78A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C78F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C78F4) {
	__imp__sub_822C78F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C78F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C78F8) {
	__imp__sub_822C78F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7920) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x822c7944
	if (!ctx.cr6.lt) goto loc_822C7944;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// b 0x822c7950
	goto loc_822C7950;
loc_822C7944:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// ble cr6,0x822c7950
	if (!ctx.cr6.gt) goto loc_822C7950;
	// li r5,8
	ctx.r5.s64 = 8;
loc_822C7950:
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822c7978
	if (!ctx.cr6.eq) goto loc_822C7978;
	// addi r10,r4,17
	ctx.r10.s64 = ctx.r4.s64 + 17;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822c7984
	if (ctx.cr6.eq) goto loc_822C7984;
loc_822C7978:
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
loc_822C7984:
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// addi r8,r4,17
	ctx.r8.s64 = ctx.r4.s64 + 17;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stwx r6,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r6.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822c79bc
	if (ctx.cr6.lt) goto loc_822C79BC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// bgt cr6,0x822c79b8
	if (ctx.cr6.gt) goto loc_822C79B8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_822C79B8:
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_822C79BC:
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822c79cc
	if (!ctx.cr6.lt) goto loc_822C79CC;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
loc_822C79CC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C7920) {
	__imp__sub_822C7920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C7A04) {
	__imp__sub_822C7A04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7A08) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822c7a1c
	if (ctx.cr6.eq) goto loc_822C7A1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_822C7A1C:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C7A08) {
	__imp__sub_822C7A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C7A2C) {
	__imp__sub_822C7A2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C7A30) {
	__imp__sub_822C7A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C7A4C) {
	__imp__sub_822C7A4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822c7a68
	if (ctx.cr6.lt) goto loc_822C7A68;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_822C7A68:
	// add. r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge 0x822c7a7c
	if (!ctx.cr0.lt) goto loc_822C7A7C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x822c7a88
	goto loc_822C7A88;
loc_822C7A7C:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x822c7a88
	if (ctx.cr6.lt) goto loc_822C7A88;
	// li r10,5
	ctx.r10.s64 = 5;
loc_822C7A88:
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// lwz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// subfic r31,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r31.s64 = 0 - ctx.r6.s64;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// subfe r31,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// rlwinm r7,r31,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// std r11,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r11.u64);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stw r31,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r31.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwzx r4,r30,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// stw r4,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r4.u32);
	// stw r5,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r5.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
loc_822C7AF8:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7AF8;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C7A50) {
	__imp__sub_822C7A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C7B14) {
	__imp__sub_822C7B14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C7B18) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwzx r8,r7,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bne cr6,0x822c7b94
	if (!ctx.cr6.eq) goto loc_822C7B94;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C7B84:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7B84;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7B94:
	// lwz r3,92(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c7d34
	if (ctx.cr6.eq) goto loc_822C7D34;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x822c7cd0
	if (ctx.cr6.eq) goto loc_822C7CD0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x822c7cd0
	if (ctx.cr6.eq) goto loc_822C7CD0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x822c7be0
	if (ctx.cr6.eq) goto loc_822C7BE0;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x822c7be0
	if (ctx.cr6.eq) goto loc_822C7BE0;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C7BD0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7BD0;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7BE0:
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x822c7bfc
	if (!ctx.cr6.eq) goto loc_822C7BFC;
	// lwz r6,96(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bne cr6,0x822c7c00
	if (!ctx.cr6.eq) goto loc_822C7C00;
loc_822C7BFC:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_822C7C00:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,100(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r11.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r11,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r11.u32);
	// stw r6,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r6.u32);
	// bne cr6,0x822c7c64
	if (!ctx.cr6.eq) goto loc_822C7C64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r7,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_822C7C54:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x822c7c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7C54;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7C64:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822c7c74
	if (!ctx.cr6.eq) goto loc_822C7C74;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x822c7c88
	goto loc_822C7C88;
loc_822C7C74:
	// addi r8,r3,-2
	ctx.r8.s64 = ctx.r3.s64 + -2;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r8,r5,1
	ctx.r8.u64 = ctx.r5.u64 ^ 1;
	// addi r5,r8,6
	ctx.r5.s64 = ctx.r8.s64 + 6;
loc_822C7C88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r7,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,-4
	ctx.r6.s64 = ctx.r31.s64 + -4;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_822C7CC0:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x822c7cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7CC0;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7CD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,100(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// addi r5,r5,-3
	ctx.r5.s64 = ctx.r5.s64 + -3;
	// li r8,6
	ctx.r8.s64 = 6;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// stw r5,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r5.u32);
	// stw r6,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r6.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwzx r4,r7,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_822C7D24:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7D24;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7D34:
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x822c7da4
	if (!ctx.cr6.eq) goto loc_822C7DA4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,100(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r11.u32);
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// std r11,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r11.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// stw r11,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r11.u32);
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r3,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r3.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_822C7D94:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7d94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7D94;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7DA4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c7f14
	if (ctx.cr6.eq) goto loc_822C7F14;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x822c7eb4
	if (ctx.cr6.eq) goto loc_822C7EB4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822c7e10
	if (!ctx.cr6.eq) goto loc_822C7E10;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x822c7eb4
	if (ctx.cr6.eq) goto loc_822C7EB4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822c7e10
	if (!ctx.cr6.eq) goto loc_822C7E10;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x822c7e08
	if (ctx.cr6.eq) goto loc_822C7E08;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bne cr6,0x822c7e10
	if (!ctx.cr6.eq) goto loc_822C7E10;
	// li r5,1
	ctx.r5.s64 = 1;
loc_822C7DE0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c7a50
	ctx.lr = 0x822C7DE8;
	sub_822C7A50(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C7DF8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7DF8;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7E08:
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x822c7de0
	goto loc_822C7DE0;
loc_822C7E10:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x822c7e48
	if (!ctx.cr6.eq) goto loc_822C7E48;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x822c7e28
	if (ctx.cr6.eq) goto loc_822C7E28;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bne cr6,0x822c7e48
	if (!ctx.cr6.eq) goto loc_822C7E48;
loc_822C7E28:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C7E38:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7E38;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7E48:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r30,8
	ctx.r30.s64 = 8;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_822C7E84:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7e84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7E84;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C7EA4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7EA4;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7EB4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,100(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// li r3,9
	ctx.r3.s64 = 9;
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// std r11,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r11.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_822C7F04:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7f04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7F04;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7F14:
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x822c8470
	if (ctx.cr6.eq) goto loc_822C8470;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x822c8478
	if (ctx.cr6.eq) goto loc_822C8478;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822c81ec
	if (!ctx.cr6.eq) goto loc_822C81EC;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// bgt cr6,0x822c81cc
	if (ctx.cr6.gt) goto loc_822C81CC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822c7f54
	// bdzf 4*cr6+eq,0x822c81cc
	// bdzf 4*cr6+eq,0x822c8020
	// bdzf 4*cr6+eq,0x822c8020
	// bne cr6,0x822c8164
	if (!ctx.cr6.eq) goto loc_822C8164;
loc_822C7F54:
	// subfic r10,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r5.s64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x822c7f78
	if (!ctx.cr0.lt) goto loc_822C7F78;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x822c7f84
	goto loc_822C7F84;
loc_822C7F78:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x822c7f84
	if (ctx.cr6.lt) goto loc_822C7F84;
	// li r10,7
	ctx.r10.s64 = 7;
loc_822C7F84:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822c7fac
	if (!ctx.cr6.eq) goto loc_822C7FAC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C7F9C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c7f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C7F9C;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C7FAC:
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x822c7fbc
	if (!ctx.cr6.lt) goto loc_822C7FBC;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
loc_822C7FBC:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r6,r10,5
	ctx.r6.s64 = ctx.r10.s64 + 5;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r11,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r11.u64);
	// stw r5,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r5.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwzx r5,r3,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_822C8010:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c8010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8010;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C8020:
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x822c80c8
	if (ctx.cr6.lt) goto loc_822C80C8;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x822c8054
	if (ctx.cr6.eq) goto loc_822C8054;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C8044:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c8044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8044;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C8054:
	// addi r9,r9,-6
	ctx.r9.s64 = ctx.r9.s64 + -6;
	// stw r11,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,100(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// cntlzw r3,r9
	ctx.r3.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// rlwinm r8,r3,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r30,r8,1
	ctx.r30.s64 = ctx.r8.s64 + 1;
	// std r11,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r11.u64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r6,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r6.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwzx r9,r7,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_822C80B8:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822c80b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C80B8;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C80C8:
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bgt cr6,0x822c80fc
	if (ctx.cr6.gt) goto loc_822C80FC;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
loc_822C80EC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c80ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C80EC;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C80FC:
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// stwx r11,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r7,100(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// stw r3,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r3.u32);
	// addi r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 5;
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// std r11,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r11.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lwzx r10,r3,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_822C8154:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822c8154
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8154;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C8164:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,100(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r11.u32);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// std r11,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r11.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// stw r11,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r11.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r5,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r5.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_822C81BC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822c81bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C81BC;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C81CC:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C81DC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c81dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C81DC;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C81EC:
	// addi r9,r10,17
	ctx.r9.s64 = ctx.r10.s64 + 17;
	// lwzx r6,r7,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r3,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// srw r3,r9,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// bgt cr6,0x822c8450
	if (ctx.cr6.gt) goto loc_822C8450;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822c8228
	// bdzf 4*cr6+eq,0x822c82fc
	// bdzf 4*cr6+eq,0x822c82fc
	// bdzf 4*cr6+eq,0x822c8408
	// bne cr6,0x822c83a8
	if (!ctx.cr6.eq) goto loc_822C83A8;
loc_822C8228:
	// subfic r9,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r5.s64;
	// addi r8,r10,11
	ctx.r8.s64 = ctx.r10.s64 + 11;
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwzx r9,r3,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822c8260
	if (ctx.cr6.lt) goto loc_822C8260;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_822C8260:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822c82dc
	if (ctx.cr6.lt) goto loc_822C82DC;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x822c82dc
	if (ctx.cr6.eq) goto loc_822C82DC;
	// stwx r10,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// std r11,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r11.u64);
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// addi r5,r10,5
	ctx.r5.s64 = ctx.r10.s64 + 5;
	// addi r30,r8,1
	ctx.r30.s64 = ctx.r8.s64 + 1;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r30.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// lwzx r4,r3,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
loc_822C82CC:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822c82cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C82CC;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C82DC:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C82EC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c82ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C82EC;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C82FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8380
	if (ctx.cr6.eq) goto loc_822C8380;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r3,4
	ctx.r3.s64 = 4;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// std r11,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// std r11,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r11.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_822C8340:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822c8340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8340;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x822c835c
	if (ctx.cr6.eq) goto loc_822C835C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C835C:
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C8370:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c8370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8370;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C8380:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x822c83a8
	if (!ctx.cr6.eq) goto loc_822C83A8;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C8398:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c8398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8398;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C83A8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r5.u32);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// std r11,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r11.u64);
	// lwzx r9,r7,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_822C83F8:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822c83f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C83F8;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C8408:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// std r11,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r11.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_822C8440:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822c8440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8440;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C8450:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C8460:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c8460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8460;
	// b 0x822c84a0
	goto loc_822C84A0;
loc_822C8470:
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x822c847c
	goto loc_822C847C;
loc_822C8478:
	// li r5,1
	ctx.r5.s64 = 1;
loc_822C847C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c7a50
	ctx.lr = 0x822C8484;
	sub_822C7A50(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C8494:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c8494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8494;
loc_822C84A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C7B18) {
	__imp__sub_822C7B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C84BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C84BC) {
	__imp__sub_822C84BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C84C0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c8514
	if (ctx.cr6.eq) goto loc_822C8514;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c8508
	if (ctx.cr6.eq) goto loc_822C8508;
loc_822C84F4:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c84f4
	if (!ctx.cr6.eq) goto loc_822C84F4;
loc_822C8508:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82634d40
	ctx.lr = 0x822C8510;
	sub_82634D40(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_822C8514:
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

PPC_WEAK_FUNC(sub_822C84C0) {
	__imp__sub_822C84C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C852C) {
	__imp__sub_822C852C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C8530) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// b 0x822c84c0
	sub_822C84C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C8530) {
	__imp__sub_822C8530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C8538) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x822c84c0
	sub_822C84C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C8538) {
	__imp__sub_822C8538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C8540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C8548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C8554:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c8554
	if (!ctx.cr6.eq) goto loc_822C8554;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634da0
	ctx.lr = 0x822C857C;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c8598
	if (ctx.cr6.eq) goto loc_822C8598;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822C8594;
	sub_82635430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822C8598:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C8540) {
	__imp__sub_822C8540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C85A0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C85B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c85b8
	if (!ctx.cr6.eq) goto loc_822C85B8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82634da0
	ctx.lr = 0x822C85E4;
	sub_82634DA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c8604
	if (!ctx.cr6.eq) goto loc_822C8604;
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
loc_822C8604:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c86a8
	if (ctx.cr6.eq) goto loc_822C86A8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r7,37
	ctx.r7.s64 = 37;
	// addi r8,r10,5540
	ctx.r8.s64 = ctx.r10.s64 + 5540;
loc_822C861C:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// blt cr6,0x822c8630
	if (ctx.cr6.lt) goto loc_822C8630;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// ble cr6,0x822c8690
	if (!ctx.cr6.gt) goto loc_822C8690;
loc_822C8630:
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// blt cr6,0x822c8640
	if (ctx.cr6.lt) goto loc_822C8640;
	// cmplwi cr6,r10,122
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 122, ctx.xer);
	// ble cr6,0x822c8690
	if (!ctx.cr6.gt) goto loc_822C8690;
loc_822C8640:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// blt cr6,0x822c8650
	if (ctx.cr6.lt) goto loc_822C8650;
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// ble cr6,0x822c8690
	if (!ctx.cr6.gt) goto loc_822C8690;
loc_822C8650:
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// beq cr6,0x822c8690
	if (ctx.cr6.eq) goto loc_822C8690;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// beq cr6,0x822c8690
	if (ctx.cr6.eq) goto loc_822C8690;
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x822c8690
	if (ctx.cr6.eq) goto loc_822C8690;
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// beq cr6,0x822c8690
	if (ctx.cr6.eq) goto loc_822C8690;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// lbzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// lbzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stbu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// b 0x822c8694
	goto loc_822C8694;
loc_822C8690:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_822C8694:
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c861c
	if (!ctx.cr6.eq) goto loc_822C861C;
loc_822C86A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_822C85A0) {
	__imp__sub_822C85A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C86C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C86C4) {
	__imp__sub_822C86C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C86C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x822C8714;
	sub_822ECA20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C86C8) {
	__imp__sub_822C86C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C8724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C8724) {
	__imp__sub_822C8724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C8728) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c8750
	if (!ctx.cr6.eq) goto loc_822C8750;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
loc_822C8750:
	// bl 0x822dfcd8
	ctx.lr = 0x822C8754;
	sub_822DFCD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c8788
	if (ctx.cr6.eq) goto loc_822C8788;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,5780
	ctx.r4.s64 = ctx.r11.s64 + 5780;
	// bl 0x822dcc40
	ctx.lr = 0x822C876C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822C8774;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c8788
	if (ctx.cr6.eq) goto loc_822C8788;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c878c
	if (!ctx.cr6.eq) goto loc_822C878C;
loc_822C8788:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C878C:
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c8978
	if (ctx.cr6.eq) goto loc_822C8978;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,5756
	ctx.r9.s64 = ctx.r9.s64 + 5756;
loc_822C87A4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x822c87c8
	if (ctx.cr6.eq) goto loc_822C87C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c87a4
	if (ctx.cr6.eq) goto loc_822C87A4;
loc_822C87C8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822c87d8
	if (!ctx.cr6.eq) goto loc_822C87D8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x822c8978
	goto loc_822C8978;
loc_822C87D8:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,5744
	ctx.r9.s64 = ctx.r9.s64 + 5744;
loc_822C87E4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x822c8808
	if (ctx.cr6.eq) goto loc_822C8808;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c87e4
	if (ctx.cr6.eq) goto loc_822C87E4;
loc_822C8808:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822c8818
	if (!ctx.cr6.eq) goto loc_822C8818;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x822c8978
	goto loc_822C8978;
loc_822C8818:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,5728
	ctx.r9.s64 = ctx.r9.s64 + 5728;
loc_822C8824:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x822c8848
	if (ctx.cr6.eq) goto loc_822C8848;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c8824
	if (ctx.cr6.eq) goto loc_822C8824;
loc_822C8848:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c8974
	if (ctx.cr6.eq) goto loc_822C8974;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,5704
	ctx.r9.s64 = ctx.r9.s64 + 5704;
loc_822C885C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x822c8880
	if (ctx.cr6.eq) goto loc_822C8880;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c885c
	if (ctx.cr6.eq) goto loc_822C885C;
loc_822C8880:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c8974
	if (ctx.cr6.eq) goto loc_822C8974;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,5688
	ctx.r9.s64 = ctx.r9.s64 + 5688;
loc_822C8894:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x822c88b8
	if (ctx.cr6.eq) goto loc_822C88B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c8894
	if (ctx.cr6.eq) goto loc_822C8894;
loc_822C88B8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c8974
	if (ctx.cr6.eq) goto loc_822C8974;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,5664
	ctx.r9.s64 = ctx.r9.s64 + 5664;
loc_822C88CC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x822c88f0
	if (ctx.cr6.eq) goto loc_822C88F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c88cc
	if (ctx.cr6.eq) goto loc_822C88CC;
loc_822C88F0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c896c
	if (ctx.cr6.eq) goto loc_822C896C;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,5648
	ctx.r9.s64 = ctx.r9.s64 + 5648;
loc_822C8904:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x822c8928
	if (ctx.cr6.eq) goto loc_822C8928;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c8904
	if (ctx.cr6.eq) goto loc_822C8904;
loc_822C8928:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c896c
	if (ctx.cr6.eq) goto loc_822C896C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,5632
	ctx.r10.s64 = ctx.r10.s64 + 5632;
loc_822C8938:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822c895c
	if (ctx.cr6.eq) goto loc_822C895C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8938
	if (ctx.cr6.eq) goto loc_822C8938;
loc_822C895C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822c8978
	if (!ctx.cr6.eq) goto loc_822C8978;
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x822c8978
	goto loc_822C8978;
loc_822C896C:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x822c8978
	goto loc_822C8978;
loc_822C8974:
	// li r31,3
	ctx.r31.s64 = 3;
loc_822C8978:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822C8980;
	sub_822DBAD0(ctx, base);
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

PPC_WEAK_FUNC(sub_822C8728) {
	__imp__sub_822C8728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C899C) {
	__imp__sub_822C899C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C89A0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c8a1c
	if (ctx.cr6.eq) goto loc_822C8A1C;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c8a1c
	if (ctx.cr6.eq) goto loc_822C8A1C;
loc_822C89CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de140
	ctx.lr = 0x822C89D4;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c8a10
	if (ctx.cr6.eq) goto loc_822C8A10;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_822C89E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822c8a08
	if (ctx.cr6.eq) goto loc_822C8A08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c89e4
	if (ctx.cr6.eq) goto loc_822C89E4;
loc_822C8A08:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8a38
	if (ctx.cr6.eq) goto loc_822C8A38;
loc_822C8A10:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822c89cc
	if (!ctx.cr6.eq) goto loc_822C89CC;
loc_822C8A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C8A20:
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
loc_822C8A38:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822c8a20
	goto loc_822C8A20;
}

PPC_WEAK_FUNC(sub_822C89A0) {
	__imp__sub_822C89A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C8A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822C8A48;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// bl 0x822dfcd8
	ctx.lr = 0x822C8A64;
	sub_822DFCD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c8ab0
	if (ctx.cr6.eq) goto loc_822C8AB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,6104
	ctx.r4.s64 = ctx.r11.s64 + 6104;
	// bl 0x822dcc40
	ctx.lr = 0x822C8A80;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dca68
	ctx.lr = 0x822C8A88;
	sub_822DCA68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822c8a94
	if (ctx.cr6.gt) goto loc_822C8A94;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C8A94:
	// li r4,140
	ctx.r4.s64 = 140;
	// bl 0x826365a8
	ctx.lr = 0x822C8A9C;
	sub_826365A8(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c8abc
	if (!ctx.cr6.eq) goto loc_822C8ABC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822C8AB0;
	sub_822DBAD0(ctx, base);
loc_822C8AB0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822C8ABC:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c9094
	if (ctx.cr6.eq) goto loc_822C9094;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x822c9094
	if (ctx.cr6.eq) goto loc_822C9094;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r21,-32242
	ctx.r21.s64 = -2113011712;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// addi r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 + 136;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r10,r21,6092
	ctx.r10.s64 = ctx.r21.s64 + 6092;
	// addi r7,r29,6076
	ctx.r7.s64 = ctx.r29.s64 + 6076;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r27,r27,6064
	ctx.r27.s64 = ctx.r27.s64 + 6064;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r26,r26,6060
	ctx.r26.s64 = ctx.r26.s64 + 6060;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r5,r5,6040
	ctx.r5.s64 = ctx.r5.s64 + 6040;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r25,r25,6020
	ctx.r25.s64 = ctx.r25.s64 + 6020;
	// addi r27,r23,28368
	ctx.r27.s64 = ctx.r23.s64 + 28368;
	// addi r26,r22,5988
	ctx.r26.s64 = ctx.r22.s64 + 5988;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// addi r28,r28,5976
	ctx.r28.s64 = ctx.r28.s64 + 5976;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r6,r6,5964
	ctx.r6.s64 = ctx.r6.s64 + 5964;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r8,r8,5952
	ctx.r8.s64 = ctx.r8.s64 + 5952;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r5,r9,5944
	ctx.r5.s64 = ctx.r9.s64 + 5944;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addi r11,r11,5936
	ctx.r11.s64 = ctx.r11.s64 + 5936;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r16,r30,5924
	ctx.r16.s64 = ctx.r30.s64 + 5924;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r19,-32020
	ctx.r19.s64 = -2098462720;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r17,r24,5832
	ctx.r17.s64 = ctx.r24.s64 + 5832;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r15,r31,5816
	ctx.r15.s64 = ctx.r31.s64 + 5816;
	// addi r14,r3,5808
	ctx.r14.s64 = ctx.r3.s64 + 5808;
	// addi r21,r4,5804
	ctx.r21.s64 = ctx.r4.s64 + 5804;
	// addi r20,r7,5788
	ctx.r20.s64 = ctx.r7.s64 + 5788;
	// addi r18,r10,8796
	ctx.r18.s64 = ctx.r10.s64 + 8796;
loc_822C8BC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x822dcc40
	ctx.lr = 0x822C8BD0;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822C8BD8;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c9084
	if (ctx.cr6.eq) goto loc_822C9084;
	// lwz r22,16(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822c9084
	if (ctx.cr6.eq) goto loc_822C9084;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9084
	if (ctx.cr6.eq) goto loc_822C9084;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_822C8BFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c8bfc
	if (!ctx.cr6.eq) goto loc_822C8BFC;
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bge cr6,0x822c9084
	if (!ctx.cr6.lt) goto loc_822C9084;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822c8c74
	if (!ctx.cr6.gt) goto loc_822C8C74;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_822C8C30:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822C8C38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822c8c5c
	if (ctx.cr6.eq) goto loc_822C8C5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8c38
	if (ctx.cr6.eq) goto loc_822C8C38;
loc_822C8C5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c9084
	if (ctx.cr6.eq) goto loc_822C9084;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,140
	ctx.r8.s64 = ctx.r8.s64 + 140;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822c8c30
	if (ctx.cr6.lt) goto loc_822C8C30;
loc_822C8C74:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r23,r11,-136
	ctx.r23.s64 = ctx.r11.s64 + -136;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C8C90;
	sub_822ECA80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x822dcc40
	ctx.lr = 0x822C8C9C;
	sub_822DCC40(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9064
	if (ctx.cr6.eq) goto loc_822C9064;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822dcc40
	ctx.lr = 0x822C8CB0;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822C8CB8;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c8ce4
	if (ctx.cr6.eq) goto loc_822C8CE4;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822c8ce4
	if (ctx.cr6.eq) goto loc_822C8CE4;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r31,-88
	ctx.r3.s64 = ctx.r31.s64 + -88;
	// bl 0x822eca80
	ctx.lr = 0x822C8CE0;
	sub_822ECA80(ctx, base);
	// b 0x822c8ce8
	goto loc_822C8CE8;
loc_822C8CE4:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822C8CE8:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822C8CF4;
	sub_822DCC40(ctx, base);
	// bl 0x822de0a8
	ctx.lr = 0x822C8CF8;
	sub_822DE0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c8d0c
	if (ctx.cr6.eq) goto loc_822C8D0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822C8D0C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822dcc40
	ctx.lr = 0x822C8D18;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822dcc40
	ctx.lr = 0x822C8D28;
	sub_822DCC40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c8e64
	if (ctx.cr6.eq) goto loc_822C8E64;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c8e64
	if (ctx.cr6.eq) goto loc_822C8E64;
loc_822C8D40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de140
	ctx.lr = 0x822C8D48;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c8e58
	if (ctx.cr6.eq) goto loc_822C8E58;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822C8D5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822c8d80
	if (ctx.cr6.eq) goto loc_822C8D80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8d5c
	if (ctx.cr6.eq) goto loc_822C8D5C;
loc_822C8D80:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822c8d94
	if (!ctx.cr6.eq) goto loc_822C8D94;
	// lwz r11,136(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// b 0x822c8e38
	goto loc_822C8E38;
loc_822C8D94:
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822C8D9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822c8dc0
	if (ctx.cr6.eq) goto loc_822C8DC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8d9c
	if (ctx.cr6.eq) goto loc_822C8D9C;
loc_822C8DC0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8e3c
	if (ctx.cr6.eq) goto loc_822C8E3C;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822C8DD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822c8df4
	if (ctx.cr6.eq) goto loc_822C8DF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8dd0
	if (ctx.cr6.eq) goto loc_822C8DD0;
loc_822C8DF4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8e3c
	if (ctx.cr6.eq) goto loc_822C8E3C;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822C8E04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822c8e28
	if (ctx.cr6.eq) goto loc_822C8E28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8e04
	if (ctx.cr6.eq) goto loc_822C8E04;
loc_822C8E28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c8e3c
	if (ctx.cr6.eq) goto loc_822C8E3C;
	// lwz r11,136(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
loc_822C8E38:
	// stw r10,136(r23)
	PPC_STORE_U32(ctx.r23.u32 + 136, ctx.r10.u32);
loc_822C8E3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c89a0
	ctx.lr = 0x822C8E44;
	sub_822C89A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c8e58
	if (ctx.cr6.eq) goto loc_822C8E58;
	// lwz r11,136(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,136(r23)
	PPC_STORE_U32(ctx.r23.u32 + 136, ctx.r10.u32);
loc_822C8E58:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822c8d40
	if (!ctx.cr6.eq) goto loc_822C8D40;
loc_822C8E64:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822dcc40
	ctx.lr = 0x822C8E70;
	sub_822DCC40(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x822c89a0
	ctx.lr = 0x822C8E78;
	sub_822C89A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c8e8c
	if (ctx.cr6.eq) goto loc_822C8E8C;
	// lwz r11,136(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,136(r23)
	PPC_STORE_U32(ctx.r23.u32 + 136, ctx.r10.u32);
loc_822C8E8C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82634c80
	ctx.lr = 0x822C8E98;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c8ed0
	if (!ctx.cr6.eq) goto loc_822C8ED0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82634c80
	ctx.lr = 0x822C8EAC;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c8ed0
	if (!ctx.cr6.eq) goto loc_822C8ED0;
	// lwz r11,136(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c8ff8
	if (ctx.cr6.eq) goto loc_822C8FF8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c8ff8
	if (!ctx.cr6.eq) goto loc_822C8FF8;
loc_822C8ED0:
	// lwz r11,-22888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -22888);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x822c8ff8
	if (!ctx.cr6.lt) goto loc_822C8FF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c8ef4
	if (ctx.cr6.eq) goto loc_822C8EF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dfb18
	ctx.lr = 0x822C8EEC;
	sub_822DFB18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x822c8ef8
	goto loc_822C8EF8;
loc_822C8EF4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_822C8EF8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822dcc40
	ctx.lr = 0x822C8F04;
	sub_822DCC40(ctx, base);
	// bl 0x822dfb18
	ctx.lr = 0x822C8F08;
	sub_822DFB18(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822c8f24
	if (ctx.cr6.eq) goto loc_822C8F24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dfb18
	ctx.lr = 0x822C8F1C;
	sub_822DFB18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x822c8f28
	goto loc_822C8F28;
loc_822C8F24:
	// li r26,0
	ctx.r26.s64 = 0;
loc_822C8F28:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822dcc40
	ctx.lr = 0x822C8F34;
	sub_822DCC40(ctx, base);
	// lwz r11,-22888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -22888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-22888(r19)
	PPC_STORE_U32(ctx.r19.u32 + -22888, ctx.r11.u32);
	// bl 0x822de118
	ctx.lr = 0x822C8F48;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c8f64
	if (ctx.cr6.eq) goto loc_822C8F64;
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// b 0x822c8f68
	goto loc_822C8F68;
loc_822C8F64:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_822C8F68:
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bne cr6,0x822c8f7c
	if (!ctx.cr6.eq) goto loc_822C8F7C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_822C8F7C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bne cr6,0x822c8f8c
	if (!ctx.cr6.eq) goto loc_822C8F8C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_822C8F8C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822c8f98
	if (ctx.cr6.eq) goto loc_822C8F98;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_822C8F98:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822C8FA4;
	sub_822DCC40(ctx, base);
	// bl 0x822de0a8
	ctx.lr = 0x822C8FA8;
	sub_822DE0A8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C8FC8;
	sub_822EBBC8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822c8fd8
	if (ctx.cr6.eq) goto loc_822C8FD8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822de480
	ctx.lr = 0x822C8FD8;
	sub_822DE480(ctx, base);
loc_822C8FD8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822c8fe8
	if (ctx.cr6.eq) goto loc_822C8FE8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822de480
	ctx.lr = 0x822C8FE8;
	sub_822DE480(ctx, base);
loc_822C8FE8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822c8ff8
	if (ctx.cr6.eq) goto loc_822C8FF8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822de480
	ctx.lr = 0x822C8FF8;
	sub_822DE480(ctx, base);
loc_822C8FF8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x822dcc40
	ctx.lr = 0x822C9004;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de168
	ctx.lr = 0x822C900C;
	sub_822DE168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c9064
	if (ctx.cr6.eq) goto loc_822C9064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dca68
	ctx.lr = 0x822C901C;
	sub_822DCA68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822c9064
	if (!ctx.cr6.gt) goto loc_822C9064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x822c89a0
	ctx.lr = 0x822C9030;
	sub_822C89A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c9044
	if (ctx.cr6.eq) goto loc_822C9044;
	// lwz r11,136(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,136(r23)
	PPC_STORE_U32(ctx.r23.u32 + 136, ctx.r10.u32);
loc_822C9044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x822c89a0
	ctx.lr = 0x822C9050;
	sub_822C89A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c9064
	if (!ctx.cr6.eq) goto loc_822C9064;
	// lwz r11,136(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,136(r23)
	PPC_STORE_U32(ctx.r23.u32 + 136, ctx.r10.u32);
loc_822C9064:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r10,140
	ctx.r8.s64 = ctx.r10.s64 + 140;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rotlwi r30,r9,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_822C9084:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bne cr6,0x822c8bc4
	if (!ctx.cr6.eq) goto loc_822C8BC4;
loc_822C9094:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x822dbad0
	ctx.lr = 0x822C909C;
	sub_822DBAD0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C8A40) {
	__imp__sub_822C8A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C90C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r12,37
	ctx.r12.s64 = 37;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C90C0) {
	__imp__sub_822C90C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C90D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822C90E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822c912c
	if (!ctx.cr6.gt) goto loc_822C912C;
	// addi r10,r5,136
	ctx.r10.s64 = ctx.r5.s64 + 136;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_822C910C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r12,21
	ctx.r12.s64 = 21;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822c9124
	if (ctx.cr6.eq) goto loc_822C9124;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822C9124:
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// bdnz 0x822c910c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C910C;
loc_822C912C:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r4,r11,140
	ctx.r4.s64 = ctx.r11.s64 * 140;
	// bl 0x82636a08
	ctx.lr = 0x822C9140;
	sub_82636A08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c9158
	if (!ctx.cr6.eq) goto loc_822C9158;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822C9158:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822c9250
	if (!ctx.cr6.gt) goto loc_822C9250;
	// mulli r11,r27,140
	ctx.r11.s64 = ctx.r27.s64 * 140;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_822C916C:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r12,21
	ctx.r12.s64 = 21;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c9244
	if (ctx.cr6.eq) goto loc_822C9244;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822c91e0
	if (!ctx.cr6.gt) goto loc_822C91E0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_822C9190:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822C9198:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822c91bc
	if (ctx.cr6.eq) goto loc_822C91BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c9198
	if (ctx.cr6.eq) goto loc_822C9198;
loc_822C91BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c91d8
	if (ctx.cr6.eq) goto loc_822C91D8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,140
	ctx.r8.s64 = ctx.r8.s64 + 140;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822c9190
	if (ctx.cr6.lt) goto loc_822C9190;
	// b 0x822c91e0
	goto loc_822C91E0;
loc_822C91D8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x822c9210
	if (!ctx.cr6.lt) goto loc_822C9210;
loc_822C91E0:
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822C91F0;
	sub_82635430(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// ori r9,r10,40
	ctx.r9.u64 = ctx.r10.u64 | 40;
	// stw r9,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r9.u32);
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// b 0x822c9244
	goto loc_822C9244;
loc_822C9210:
	// mulli r11,r7,140
	ctx.r11.s64 = ctx.r7.s64 * 140;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// ori r10,r10,40
	ctx.r10.u64 = ctx.r10.u64 | 40;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822c923c
	if (ctx.cr6.eq) goto loc_822C923C;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x822c9240
	goto loc_822C9240;
loc_822C923C:
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_822C9240:
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
loc_822C9244:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// bne 0x822c916c
	if (!ctx.cr0.eq) goto loc_822C916C;
loc_822C9250:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C90D8) {
	__imp__sub_822C90D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C9264) {
	__imp__sub_822C9264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9268) {
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
	// lbz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c9298
	if (!ctx.cr6.eq) goto loc_822C9298;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C9298:
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c92ac
	if (!ctx.cr6.eq) goto loc_822C92AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_822C92AC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826369b0
	ctx.lr = 0x822C92B4;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c92e8
	if (!ctx.cr6.eq) goto loc_822C92E8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822C92C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822c92e8
	if (ctx.cr6.eq) goto loc_822C92E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c92c4
	if (ctx.cr6.eq) goto loc_822C92C4;
loc_822C92E8:
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

PPC_WEAK_FUNC(sub_822C9268) {
	__imp__sub_822C9268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822C9308;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822c9360
	if (!ctx.cr6.gt) goto loc_822C9360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
loc_822C9328:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r12,37
	ctx.r12.s64 = 37;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c9354
	if (ctx.cr6.eq) goto loc_822C9354;
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822C934C;
	sub_82635430(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
loc_822C9354:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// bne 0x822c9328
	if (!ctx.cr0.eq) goto loc_822C9328;
loc_822C9360:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r6,r11,-28056
	ctx.r6.s64 = ctx.r11.s64 + -28056;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82636610
	ctx.lr = 0x822C9378;
	sub_82636610(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C9300) {
	__imp__sub_822C9300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C9384) {
	__imp__sub_822C9384(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822C9390;
	__savegprlr_24(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c941c
	if (ctx.cr6.eq) goto loc_822C941C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r28,50
	ctx.r28.s64 = 50;
	// li r29,51
	ctx.r29.s64 = 51;
	// li r30,49
	ctx.r30.s64 = 49;
	// li r31,46
	ctx.r31.s64 = 46;
	// addi r4,r11,5568
	ctx.r4.s64 = ctx.r11.s64 + 5568;
loc_822C93D4:
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// bge cr6,0x822c941c
	if (!ctx.cr6.lt) goto loc_822C941C;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x822c952c
	if (!ctx.cr6.lt) goto loc_822C952C;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x822c93fc
	if (ctx.cr6.lt) goto loc_822C93FC;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// bne cr6,0x822c9400
	if (!ctx.cr6.eq) goto loc_822C9400;
loc_822C93FC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C9400:
	// stb r11,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r11.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_822C940C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_822C9410:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c93d4
	if (!ctx.cr6.eq) goto loc_822C93D4;
loc_822C941C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stbx r25,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r25.u8);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c9498
	if (ctx.cr6.eq) goto loc_822C9498;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_822C9438:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x822c9460
	if (!ctx.cr6.eq) goto loc_822C9460;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c946c
	if (ctx.cr6.eq) goto loc_822C946C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,-1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x822c946c
	if (ctx.cr6.eq) goto loc_822C946C;
loc_822C9460:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822C946C:
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c9438
	if (!ctx.cr6.eq) goto loc_822C9438;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9498
	if (ctx.cr6.eq) goto loc_822C9498;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
loc_822C9484:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x822c9498
	if (!ctx.cr6.eq) goto loc_822C9498;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c9484
	if (!ctx.cr0.eq) goto loc_822C9484;
loc_822C9498:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stbx r25,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u8);
	// beq cr6,0x822c967c
	if (ctx.cr6.eq) goto loc_822C967C;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x822c9670
	if (!ctx.cr6.gt) goto loc_822C9670;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// ble cr6,0x822c9668
	if (!ctx.cr6.gt) goto loc_822C9668;
	// addi r31,r27,-4
	ctx.r31.s64 = ctx.r27.s64 + -4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c94e0
	if (ctx.cr6.eq) goto loc_822C94E0;
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
loc_822C94CC:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x822c94e0
	if (!ctx.cr6.eq) goto loc_822C94E0;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822c94cc
	if (!ctx.cr0.eq) goto loc_822C94CC;
loc_822C94E0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82635430
	ctx.lr = 0x822C94F0;
	sub_82635430(ctx, base);
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// ble cr6,0x822c9520
	if (!ctx.cr6.gt) goto loc_822C9520;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// addi r9,r10,6112
	ctx.r9.s64 = ctx.r10.s64 + 6112;
	// lbz r8,6112(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6112);
	// stbx r8,r31,r26
	PPC_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u8);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_822C9520:
	// stbx r25,r31,r26
	PPC_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r25.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822C952C:
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 192, ctx.xer);
	// bne cr6,0x822c9544
	if (!ctx.cr6.eq) goto loc_822C9544;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x822c9570
	goto loc_822C9570;
loc_822C9544:
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// bne cr6,0x822c955c
	if (!ctx.cr6.eq) goto loc_822C955C;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// li r8,3
	ctx.r8.s64 = 3;
	// b 0x822c9570
	goto loc_822C9570;
loc_822C955C:
	// rlwinm r10,r11,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	// cmplwi cr6,r10,240
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 240, ctx.xer);
	// bne cr6,0x822c940c
	if (!ctx.cr6.eq) goto loc_822C940C;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// li r8,4
	ctx.r8.s64 = 4;
loc_822C9570:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x822c95a0
	if (!ctx.cr6.gt) goto loc_822C95A0;
loc_822C957C:
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r24,r10,0,0,25
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r24,128
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 128, ctx.xer);
	// bne cr6,0x822c95a0
	if (!ctx.cr6.eq) goto loc_822C95A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r9,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// blt cr6,0x822c957c
	if (ctx.cr6.lt) goto loc_822C957C;
loc_822C95A0:
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822c9410
	if (ctx.cr6.lt) goto loc_822C9410;
	// cmplwi cr6,r9,192
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 192, ctx.xer);
	// blt cr6,0x822c95dc
	if (ctx.cr6.lt) goto loc_822C95DC;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bgt cr6,0x822c95dc
	if (ctx.cr6.gt) goto loc_822C95DC;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lbz r11,-192(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9410
	if (ctx.cr6.eq) goto loc_822C9410;
	// stb r11,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r11.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x822c9410
	goto loc_822C9410;
loc_822C95DC:
	// cmplwi cr6,r9,160
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 160, ctx.xer);
	// beq cr6,0x822c965c
	if (ctx.cr6.eq) goto loc_822C965C;
	// cmplwi cr6,r9,8194
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8194, ctx.xer);
	// beq cr6,0x822c965c
	if (ctx.cr6.eq) goto loc_822C965C;
	// cmplwi cr6,r9,8195
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8195, ctx.xer);
	// beq cr6,0x822c965c
	if (ctx.cr6.eq) goto loc_822C965C;
	// cmplwi cr6,r9,8201
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8201, ctx.xer);
	// beq cr6,0x822c965c
	if (ctx.cr6.eq) goto loc_822C965C;
	// cmplwi cr6,r9,178
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 178, ctx.xer);
	// bne cr6,0x822c9614
	if (!ctx.cr6.eq) goto loc_822C9614;
	// stb r28,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r28.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x822c9410
	goto loc_822C9410;
loc_822C9614:
	// cmplwi cr6,r9,179
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 179, ctx.xer);
	// bne cr6,0x822c962c
	if (!ctx.cr6.eq) goto loc_822C962C;
	// stb r29,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r29.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x822c9410
	goto loc_822C9410;
loc_822C962C:
	// cmplwi cr6,r9,185
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 185, ctx.xer);
	// bne cr6,0x822c9644
	if (!ctx.cr6.eq) goto loc_822C9644;
	// stb r30,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r30.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x822c9410
	goto loc_822C9410;
loc_822C9644:
	// cmplwi cr6,r9,8228
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8228, ctx.xer);
	// bne cr6,0x822c9410
	if (!ctx.cr6.eq) goto loc_822C9410;
	// stb r31,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r31.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x822c9410
	goto loc_822C9410;
loc_822C965C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbu r3,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r7.u32 = ea;
	// b 0x822c9410
	goto loc_822C9410;
loc_822C9668:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x822c94e0
	goto loc_822C94E0;
loc_822C9670:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82635430
	ctx.lr = 0x822C967C;
	sub_82635430(ctx, base);
loc_822C967C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C9388) {
	__imp__sub_822C9388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C9684) {
	__imp__sub_822C9684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822C9690;
	__savegprlr_23(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// beq cr6,0x822c96b4
	if (ctx.cr6.eq) goto loc_822C96B4;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x822c96bc
	goto loc_822C96BC;
loc_822C96B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,8828
	ctx.r30.s64 = ctx.r11.s64 + 8828;
loc_822C96BC:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9724
	if (ctx.cr6.eq) goto loc_822C9724;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r27,32
	ctx.r27.s64 = 32;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_822C96D8:
	// addi r10,r29,5
	ctx.r10.s64 = ctx.r29.s64 + 5;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x822c9724
	if (!ctx.cr6.lt) goto loc_822C9724;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x822c97f8
	if (!ctx.cr6.lt) goto loc_822C97F8;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x822c9700
	if (ctx.cr6.lt) goto loc_822C9700;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// bne cr6,0x822c9704
	if (!ctx.cr6.eq) goto loc_822C9704;
loc_822C9700:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822C9704:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stbx r9,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_822C9714:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822C9718:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c96d8
	if (!ctx.cr6.eq) goto loc_822C96D8;
loc_822C9724:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stbx r23,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r23.u8);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c97a0
	if (ctx.cr6.eq) goto loc_822C97A0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_822C9740:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x822c9768
	if (!ctx.cr6.eq) goto loc_822C9768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9774
	if (ctx.cr6.eq) goto loc_822C9774;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,-1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x822c9774
	if (ctx.cr6.eq) goto loc_822C9774;
loc_822C9768:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822C9774:
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c9740
	if (!ctx.cr6.eq) goto loc_822C9740;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c97a0
	if (ctx.cr6.eq) goto loc_822C97A0;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
loc_822C978C:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x822c97a0
	if (!ctx.cr6.eq) goto loc_822C97A0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c978c
	if (!ctx.cr0.eq) goto loc_822C978C;
loc_822C97A0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stbx r23,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u8);
	// beq cr6,0x822c99d0
	if (ctx.cr6.eq) goto loc_822C99D0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x822c99c4
	if (!ctx.cr6.gt) goto loc_822C99C4;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x822c9950
	if (!ctx.cr6.gt) goto loc_822C9950;
	// addi r31,r25,-4
	ctx.r31.s64 = ctx.r25.s64 + -4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c9978
	if (ctx.cr6.eq) goto loc_822C9978;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_822C97D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bne cr6,0x822c9958
	if (!ctx.cr6.eq) goto loc_822C9958;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x822c97d8
	if (!ctx.cr0.eq) goto loc_822C97D8;
	// b 0x822c9978
	goto loc_822C9978;
loc_822C97F8:
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 192, ctx.xer);
	// bne cr6,0x822c9810
	if (!ctx.cr6.eq) goto loc_822C9810;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x822c983c
	goto loc_822C983C;
loc_822C9810:
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// bne cr6,0x822c9828
	if (!ctx.cr6.eq) goto loc_822C9828;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x822c983c
	goto loc_822C983C;
loc_822C9828:
	// rlwinm r10,r11,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	// cmplwi cr6,r10,240
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 240, ctx.xer);
	// bne cr6,0x822c9714
	if (!ctx.cr6.eq) goto loc_822C9714;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// li r31,4
	ctx.r31.s64 = 4;
loc_822C983C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x822c986c
	if (!ctx.cr6.gt) goto loc_822C986C;
loc_822C9848:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r8,r10,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x822c987c
	if (!ctx.cr6.eq) goto loc_822C987C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r9,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// blt cr6,0x822c9848
	if (ctx.cr6.lt) goto loc_822C9848;
loc_822C986C:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x822c988c
	if (!ctx.cr6.eq) goto loc_822C988C;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// b 0x822c98a8
	goto loc_822C98A8;
loc_822C987C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x822c986c
	if (!ctx.cr6.lt) goto loc_822C986C;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x822c9718
	goto loc_822C9718;
loc_822C988C:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bne cr6,0x822c989c
	if (!ctx.cr6.eq) goto loc_822C989C;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// b 0x822c98a8
	goto loc_822C98A8;
loc_822C989C:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x822c98ac
	if (!ctx.cr6.eq) goto loc_822C98AC;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
loc_822C98A8:
	// blt cr6,0x822c98c4
	if (ctx.cr6.lt) goto loc_822C98C4;
loc_822C98AC:
	// cmplwi cr6,r9,55296
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 55296, ctx.xer);
	// blt cr6,0x822c98bc
	if (ctx.cr6.lt) goto loc_822C98BC;
	// cmplwi cr6,r9,57343
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57343, ctx.xer);
	// ble cr6,0x822c98c4
	if (!ctx.cr6.gt) goto loc_822C98C4;
loc_822C98BC:
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x822c98cc
	if (!ctx.cr6.gt) goto loc_822C98CC;
loc_822C98C4:
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// b 0x822c9718
	goto loc_822C9718;
loc_822C98CC:
	// cmplwi cr6,r9,160
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 160, ctx.xer);
	// beq cr6,0x822c993c
	if (ctx.cr6.eq) goto loc_822C993C;
	// cmplwi cr6,r9,8194
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8194, ctx.xer);
	// beq cr6,0x822c993c
	if (ctx.cr6.eq) goto loc_822C993C;
	// cmplwi cr6,r9,8195
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8195, ctx.xer);
	// beq cr6,0x822c993c
	if (ctx.cr6.eq) goto loc_822C993C;
	// cmplwi cr6,r9,8201
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8201, ctx.xer);
	// beq cr6,0x822c993c
	if (ctx.cr6.eq) goto loc_822C993C;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// blt cr6,0x822c98fc
	if (ctx.cr6.lt) goto loc_822C98FC;
	// cmplwi cr6,r9,160
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 160, ctx.xer);
	// blt cr6,0x822c993c
	if (ctx.cr6.lt) goto loc_822C993C;
loc_822C98FC:
	// cmplwi cr6,r9,8482
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8482, ctx.xer);
	// beq cr6,0x822c9948
	if (ctx.cr6.eq) goto loc_822C9948;
	// cmplwi cr6,r9,174
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 174, ctx.xer);
	// beq cr6,0x822c9948
	if (ctx.cr6.eq) goto loc_822C9948;
	// cmplwi cr6,r9,169
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 169, ctx.xer);
	// beq cr6,0x822c9948
	if (ctx.cr6.eq) goto loc_822C9948;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c9948
	if (ctx.cr6.eq) goto loc_822C9948;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826358b8
	ctx.lr = 0x822C9930;
	sub_826358B8(ctx, base);
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// b 0x822c9718
	goto loc_822C9718;
loc_822C993C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r27,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r27.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_822C9948:
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// b 0x822c9718
	goto loc_822C9718;
loc_822C9950:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x822c9978
	goto loc_822C9978;
loc_822C9958:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c9978
	if (ctx.cr6.eq) goto loc_822C9978;
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
loc_822C9964:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x822c9978
	if (!ctx.cr6.eq) goto loc_822C9978;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822c9964
	if (!ctx.cr0.eq) goto loc_822C9964;
loc_822C9978:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82635430
	ctx.lr = 0x822C9988;
	sub_82635430(ctx, base);
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x822c99b8
	if (!ctx.cr6.gt) goto loc_822C99B8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// addi r9,r10,6112
	ctx.r9.s64 = ctx.r10.s64 + 6112;
	// lbz r8,6112(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6112);
	// stbx r8,r31,r24
	PPC_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r8.u8);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_822C99B8:
	// stbx r23,r31,r24
	PPC_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r23.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822C99C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82635430
	ctx.lr = 0x822C99D0;
	sub_82635430(ctx, base);
loc_822C99D0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C9688) {
	__imp__sub_822C9688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C99D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822C99E0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// beq cr6,0x822c9b98
	if (ctx.cr6.eq) goto loc_822C9B98;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,6116
	ctx.r4.s64 = ctx.r11.s64 + 6116;
	// bl 0x82635190
	ctx.lr = 0x822C9A10;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c9b98
	if (!ctx.cr6.eq) goto loc_822C9B98;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822c9a30
	if (ctx.cr6.eq) goto loc_822C9A30;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x822c9b98
	if (!ctx.cr6.eq) goto loc_822C9B98;
loc_822C9A30:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d00
	ctx.lr = 0x822C9A3C;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9b8c
	if (ctx.cr6.eq) goto loc_822C9B8C;
	// addi r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822c9b8c
	if (ctx.cr6.eq) goto loc_822C9B8C;
loc_822C9A50:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9b8c
	if (ctx.cr6.eq) goto loc_822C9B8C;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82634d00
	ctx.lr = 0x822C9A68;
	sub_82634D00(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9a7c
	if (ctx.cr6.eq) goto loc_822C9A7C;
	// subf r31,r26,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r26.s64;
	// b 0x822c9a9c
	goto loc_822C9A9C;
loc_822C9A7C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822C9A80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c9a80
	if (!ctx.cr6.eq) goto loc_822C9A80;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_822C9A9C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82635150
	ctx.lr = 0x822C9AAC;
	sub_82635150(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9b7c
	if (ctx.cr6.eq) goto loc_822C9B7C;
	// subf r27,r26,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r26.s64;
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// addic. r24,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r24.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x822c9adc
	if (ctx.cr0.eq) goto loc_822C9ADC;
	// add r11,r24,r27
	ctx.r11.u64 = ctx.r24.u64 + ctx.r27.u64;
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x822c9adc
	if (!ctx.cr6.eq) goto loc_822C9ADC;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
loc_822C9ADC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x822c9b7c
	if (!ctx.cr6.gt) goto loc_822C9B7C;
	// addi r30,r22,72
	ctx.r30.s64 = ctx.r22.s64 + 72;
	// subfic r29,r22,-72
	ctx.xer.ca = ctx.r22.u32 <= 4294967224;
	ctx.r29.s64 = -72 - ctx.r22.s64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
loc_822C9AF0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c9b70
	if (!ctx.cr6.eq) goto loc_822C9B70;
	// addi r3,r30,-24
	ctx.r3.s64 = ctx.r30.s64 + -24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C9B04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c9b04
	if (!ctx.cr6.eq) goto loc_822C9B04;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822c9b70
	if (!ctx.cr6.eq) goto loc_822C9B70;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82635190
	ctx.lr = 0x822C9B34;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c9b70
	if (!ctx.cr6.eq) goto loc_822C9B70;
	// cmplwi cr6,r24,63
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 63, ctx.xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// blt cr6,0x822c9b4c
	if (ctx.cr6.lt) goto loc_822C9B4C;
	// li r31,63
	ctx.r31.s64 = 63;
loc_822C9B4C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822C9B5C;
	sub_82635430(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stb r21,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r21.u8);
loc_822C9B70:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// bne 0x822c9af0
	if (!ctx.cr0.eq) goto loc_822C9AF0;
loc_822C9B7C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x822c9b8c
	if (ctx.cr6.eq) goto loc_822C9B8C;
	// addic. r26,r20,1
	ctx.xer.ca = ctx.r20.u32 > 4294967294;
	ctx.r26.s64 = ctx.r20.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x822c9a50
	if (!ctx.cr0.eq) goto loc_822C9A50;
loc_822C9B8C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822C9B98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C99D8) {
	__imp__sub_822C99D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C9BA4) {
	__imp__sub_822C9BA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822C9BB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,90
	ctx.r11.s64 = ctx.r4.s64 * 90;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82634da0
	ctx.lr = 0x822C9BCC;
	sub_82634DA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c9be0
	if (!ctx.cr6.eq) goto loc_822C9BE0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822C9BE0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,6116
	ctx.r6.s64 = ctx.r11.s64 + 6116;
	// addi r5,r10,9504
	ctx.r5.s64 = ctx.r10.s64 + 9504;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C9BFC;
	sub_822ECA80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x822c9cc0
	if (!ctx.cr6.gt) goto loc_822C9CC0;
	// addi r24,r31,48
	ctx.r24.s64 = ctx.r31.s64 + 48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r26,r11,13280
	ctx.r26.s64 = ctx.r11.s64 + 13280;
loc_822C9C1C:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9cb0
	if (ctx.cr6.eq) goto loc_822C9CB0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9cb0
	if (ctx.cr6.eq) goto loc_822C9CB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822c9c98
	if (!ctx.cr6.gt) goto loc_822C9C98;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_822C9C48:
	// lbz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9c88
	if (ctx.cr6.eq) goto loc_822C9C88;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822C9C5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822c9c80
	if (ctx.cr6.eq) goto loc_822C9C80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c9c5c
	if (ctx.cr6.eq) goto loc_822C9C5C;
loc_822C9C80:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c9cb0
	if (ctx.cr6.eq) goto loc_822C9CB0;
loc_822C9C88:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,140
	ctx.r8.s64 = ctx.r8.s64 + 140;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822c9c48
	if (ctx.cr6.lt) goto loc_822C9C48;
loc_822C9C98:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// subf r4,r30,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C9CAC;
	sub_822ECA80(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_822C9CB0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822c9c1c
	if (ctx.cr6.lt) goto loc_822C9C1C;
loc_822C9CC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stbx r11,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C9BA8) {
	__imp__sub_822C9BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C9CD4) {
	__imp__sub_822C9CD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822C9CE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c9d04
	if (!ctx.cr6.eq) goto loc_822C9D04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8828
	ctx.r11.s64 = ctx.r11.s64 + 8828;
loc_822C9D04:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822dfcd8
	ctx.lr = 0x822C9D0C;
	sub_822DFCD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9dd4
	if (ctx.cr6.eq) goto loc_822C9DD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,5780
	ctx.r4.s64 = ctx.r11.s64 + 5780;
	// bl 0x822dcc40
	ctx.lr = 0x822C9D24;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822C9D2C;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c9d40
	if (ctx.cr6.eq) goto loc_822C9D40;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822c9d98
	if (!ctx.cr6.eq) goto loc_822C9D98;
loc_822C9D40:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,6192
	ctx.r4.s64 = ctx.r11.s64 + 6192;
	// bl 0x822dcc40
	ctx.lr = 0x822C9D50;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de118
	ctx.lr = 0x822C9D58;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c9dd4
	if (ctx.cr6.eq) goto loc_822C9DD4;
	// lfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// addi r5,r11,6164
	ctx.r5.s64 = ctx.r11.s64 + 6164;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,-90
	ctx.r4.s64 = -90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822C9D88;
	sub_822C86C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822C9D90;
	sub_822DBAD0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822C9D98:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822c9388
	ctx.lr = 0x822C9DA4;
	sub_822C9388(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,6144
	ctx.r5.s64 = ctx.r11.s64 + 6144;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,-90
	ctx.r4.s64 = -90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822C9DC4;
	sub_822C86C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822C9DCC;
	sub_822DBAD0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822C9DD4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r5,r11,6128
	ctx.r5.s64 = ctx.r11.s64 + 6128;
	// li r4,-90
	ctx.r4.s64 = -90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822C9DF0;
	sub_822C86C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822C9DF8;
	sub_822DBAD0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C9CD8) {
	__imp__sub_822C9CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C9E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822c9e74
	if (!ctx.cr6.eq) goto loc_822C9E74;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822c9e68
	if (ctx.cr6.lt) goto loc_822C9E68;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// bgt cr6,0x822c9e68
	if (ctx.cr6.gt) goto loc_822C9E68;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x822dfcd8
	ctx.lr = 0x822C9E38;
	sub_822DFCD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c9e5c
	if (!ctx.cr6.eq) goto loc_822C9E5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6200
	ctx.r5.s64 = ctx.r11.s64 + 6200;
	// li r4,-94
	ctx.r4.s64 = -94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822C9E5C;
	sub_822C86C8(ctx, base);
loc_822C9E5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C9E68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c9cd8
	ctx.lr = 0x822C9E74;
	sub_822C9CD8(ctx, base);
loc_822C9E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C9E00) {
	__imp__sub_822C9E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C9E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822C9E88;
	__savegprlr_26(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822C9EA0;
	sub_826344D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,6528
	ctx.r3.s64 = ctx.r11.s64 + 6528;
	// bl 0x822c85a0
	ctx.lr = 0x822C9EAC;
	sub_822C85A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9ec0
	if (ctx.cr6.eq) goto loc_822C9EC0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x822c9ec8
	goto loc_822C9EC8;
loc_822C9EC0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r11,8828
	ctx.r7.s64 = ctx.r11.s64 + 8828;
loc_822C9EC8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,6488
	ctx.r6.s64 = ctx.r11.s64 + 6488;
	// addi r5,r10,6464
	ctx.r5.s64 = ctx.r10.s64 + 6464;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822eca80
	ctx.lr = 0x822C9EE4;
	sub_822ECA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822C9EEC;
	sub_82634D40(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822C9EF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c9ef4
	if (!ctx.cr6.eq) goto loc_822C9EF4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r31,r10,6452
	ctx.r31.s64 = ctx.r10.s64 + 6452;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r7,r8,6376
	ctx.r7.s64 = ctx.r8.s64 + 6376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r6,6340
	ctx.r6.s64 = ctx.r6.s64 + 6340;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r5,r5,6312
	ctx.r5.s64 = ctx.r5.s64 + 6312;
	// addi r4,r4,-4048
	ctx.r4.s64 = ctx.r4.s64 + -4048;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// bl 0x822d79a8
	ctx.lr = 0x822C9F54;
	sub_822D79A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x822c9e00
	ctx.lr = 0x822C9F68;
	sub_822C9E00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822C9F74;
	sub_822D7E48(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822ca114
	if (ctx.cr6.eq) goto loc_822CA114;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,6300
	ctx.r4.s64 = ctx.r11.s64 + 6300;
	// bl 0x822dcc40
	ctx.lr = 0x822C9F8C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822C9F94;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c9fac
	if (ctx.cr6.eq) goto loc_822C9FAC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x822c9fb0
	if (!ctx.cr6.eq) goto loc_822C9FB0;
loc_822C9FAC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822C9FB0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,6288
	ctx.r4.s64 = ctx.r11.s64 + 6288;
	// bl 0x822dcc40
	ctx.lr = 0x822C9FC0;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822C9FC8;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c9fe0
	if (ctx.cr6.eq) goto loc_822C9FE0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x822c9fe4
	if (!ctx.cr6.eq) goto loc_822C9FE4;
loc_822C9FE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822C9FE4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,6268
	ctx.r4.s64 = ctx.r11.s64 + 6268;
	// bl 0x822dcc40
	ctx.lr = 0x822C9FF4;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822C9FFC;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ca010
	if (ctx.cr6.eq) goto loc_822CA010;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822ca014
	if (!ctx.cr6.eq) goto loc_822CA014;
loc_822CA010:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822CA014:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ca0f8
	if (ctx.cr6.eq) goto loc_822CA0F8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ca0f8
	if (ctx.cr6.eq) goto loc_822CA0F8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822ca0f8
	if (ctx.cr6.eq) goto loc_822CA0F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r28,r11,8796
	ctx.r28.s64 = ctx.r11.s64 + 8796;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CA048;
	sub_822ECA80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// bl 0x822eca80
	ctx.lr = 0x822CA05C;
	sub_822ECA80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c8540
	ctx.lr = 0x822CA064;
	sub_822C8540(ctx, base);
	// stw r3,160(r27)
	PPC_STORE_U32(ctx.r27.u32 + 160, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,6256
	ctx.r4.s64 = ctx.r10.s64 + 6256;
	// bl 0x822dcc40
	ctx.lr = 0x822CA078;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de118
	ctx.lr = 0x822CA080;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ca090
	if (ctx.cr6.eq) goto loc_822CA090;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x822ca094
	goto loc_822CA094;
loc_822CA090:
	// li r11,5
	ctx.r11.s64 = 5;
loc_822CA094:
	// stw r11,164(r27)
	PPC_STORE_U32(ctx.r27.u32 + 164, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,6244
	ctx.r4.s64 = ctx.r11.s64 + 6244;
	// bl 0x822dcc40
	ctx.lr = 0x822CA0A8;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de118
	ctx.lr = 0x822CA0B0;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ca0c0
	if (ctx.cr6.eq) goto loc_822CA0C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x822ca0c4
	goto loc_822CA0C4;
loc_822CA0C0:
	// li r11,900
	ctx.r11.s64 = 900;
loc_822CA0C4:
	// lwz r10,164(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// stw r11,168(r27)
	PPC_STORE_U32(ctx.r27.u32 + 168, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x822ca0dc
	if (!ctx.cr6.lt) goto loc_822CA0DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,164(r27)
	PPC_STORE_U32(ctx.r27.u32 + 164, ctx.r11.u32);
loc_822CA0DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA0E4;
	sub_822DBAD0(ctx, base);
	// lwz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CA0F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA100;
	sub_822DBAD0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,6220
	ctx.r5.s64 = ctx.r11.s64 + 6220;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CA114;
	sub_822C86C8(ctx, base);
loc_822CA114:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C9E80) {
	__imp__sub_822C9E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CA120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822CA128;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r29,160(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822CA144:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ca144
	if (!ctx.cr6.eq) goto loc_822CA144;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,160
	ctx.r30.s64 = ctx.r11.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CA16C;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ca19c
	if (!ctx.cr6.eq) goto loc_822CA19C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CA190;
	sub_822C86C8(ctx, base);
loc_822CA190:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CA19C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,6488
	ctx.r6.s64 = ctx.r11.s64 + 6488;
	// addi r5,r10,6656
	ctx.r5.s64 = ctx.r10.s64 + 6656;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CA1BC;
	sub_822ECA80(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822CA1C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ca1c0
	if (!ctx.cr6.eq) goto loc_822CA1C0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r30,r10,6648
	ctx.r30.s64 = ctx.r10.s64 + 6648;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r7,r10,6376
	ctx.r7.s64 = ctx.r10.s64 + 6376;
	// addi r6,r9,6616
	ctx.r6.s64 = ctx.r9.s64 + 6616;
	// addi r5,r8,6312
	ctx.r5.s64 = ctx.r8.s64 + 6312;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r4,-4048
	ctx.r4.s64 = ctx.r4.s64 + -4048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x822d79a8
	ctx.lr = 0x822CA220;
	sub_822D79A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CA22C;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822ca190
	if (!ctx.cr6.eq) goto loc_822CA190;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822ca2dc
	if (ctx.cr6.lt) goto loc_822CA2DC;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// bgt cr6,0x822ca2dc
	if (ctx.cr6.gt) goto loc_822CA2DC;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x822dfcd8
	ctx.lr = 0x822CA250;
	sub_822DFCD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822d7e48
	ctx.lr = 0x822CA25C;
	sub_822D7E48(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822ca290
	if (ctx.cr6.eq) goto loc_822CA290;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6600
	ctx.r4.s64 = ctx.r11.s64 + 6600;
	// bl 0x822dcc40
	ctx.lr = 0x822CA274;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CA27C;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ca290
	if (ctx.cr6.eq) goto loc_822CA290;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ca2b8
	if (!ctx.cr6.eq) goto loc_822CA2B8;
loc_822CA290:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA298;
	sub_822DBAD0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,6576
	ctx.r5.s64 = ctx.r11.s64 + 6576;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CA2AC;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CA2B8:
	// bl 0x822c8540
	ctx.lr = 0x822CA2BC;
	sub_822C8540(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA2C8;
	sub_822DBAD0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CA2DC:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822c8728
	ctx.lr = 0x822CA2E4;
	sub_822C8728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ca2f8
	if (ctx.cr6.eq) goto loc_822CA2F8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x822ca30c
	if (!ctx.cr6.eq) goto loc_822CA30C;
loc_822CA2F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c9cd8
	ctx.lr = 0x822CA308;
	sub_822C9CD8(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822CA30C:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822d7e48
	ctx.lr = 0x822CA314;
	sub_822D7E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CA120) {
	__imp__sub_822CA120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CA320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822CA328;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r26,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r26,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x822c85a0
	ctx.lr = 0x822CA348;
	sub_822C85A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,6528
	ctx.r3.s64 = ctx.r11.s64 + 6528;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x822c85a0
	ctx.lr = 0x822CA35C;
	sub_822C85A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ca38c
	if (ctx.cr6.eq) goto loc_822CA38C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822CA36C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ca36c
	if (!ctx.cr6.eq) goto loc_822CA36C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x822ca390
	goto loc_822CA390;
loc_822CA38C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822CA390:
	// addi r29,r11,256
	ctx.r29.s64 = ctx.r11.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CA39C;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// beq cr6,0x822ca5a0
	if (ctx.cr6.eq) goto loc_822CA5A0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ca5a0
	if (ctx.cr6.eq) goto loc_822CA5A0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ca5a0
	if (ctx.cr6.eq) goto loc_822CA5A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,6488
	ctx.r6.s64 = ctx.r11.s64 + 6488;
	// addi r5,r10,6808
	ctx.r5.s64 = ctx.r10.s64 + 6808;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CA3DC;
	sub_822ECA80(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CA3E4;
	sub_822C84C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x822CA3EC;
	sub_82634D40(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822CA3F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ca3f0
	if (!ctx.cr6.eq) goto loc_822CA3F0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r30,r10,6796
	ctx.r30.s64 = ctx.r10.s64 + 6796;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r7,r10,6376
	ctx.r7.s64 = ctx.r10.s64 + 6376;
	// addi r6,r9,6616
	ctx.r6.s64 = ctx.r9.s64 + 6616;
	// addi r5,r8,6312
	ctx.r5.s64 = ctx.r8.s64 + 6312;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r4,-4048
	ctx.r4.s64 = ctx.r4.s64 + -4048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x822d79a8
	ctx.lr = 0x822CA450;
	sub_822D79A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822c84c0
	ctx.lr = 0x822CA45C;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822ca5cc
	if (!ctx.cr6.eq) goto loc_822CA5CC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822ca564
	if (ctx.cr6.lt) goto loc_822CA564;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// bgt cr6,0x822ca564
	if (ctx.cr6.gt) goto loc_822CA564;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x822dfcd8
	ctx.lr = 0x822CA480;
	sub_822DFCD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822d7e48
	ctx.lr = 0x822CA48C;
	sub_822D7E48(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822ca500
	if (ctx.cr6.eq) goto loc_822CA500;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,6780
	ctx.r4.s64 = ctx.r11.s64 + 6780;
	// bl 0x822dcc40
	ctx.lr = 0x822CA4A4;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CA4AC;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ca4c4
	if (ctx.cr6.eq) goto loc_822CA4C4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x822ca4c8
	if (!ctx.cr6.eq) goto loc_822CA4C8;
loc_822CA4C4:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_822CA4C8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,6600
	ctx.r4.s64 = ctx.r11.s64 + 6600;
	// bl 0x822dcc40
	ctx.lr = 0x822CA4D8;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CA4E0;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ca4f4
	if (ctx.cr6.eq) goto loc_822CA4F4;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822ca4f8
	if (!ctx.cr6.eq) goto loc_822CA4F8;
loc_822CA4F4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822CA4F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822ca528
	if (!ctx.cr6.eq) goto loc_822CA528;
loc_822CA500:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA508;
	sub_822DBAD0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,6752
	ctx.r5.s64 = ctx.r11.s64 + 6752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CA51C;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822CA528:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c8540
	ctx.lr = 0x822CA530;
	sub_822C8540(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822ca548
	if (ctx.cr6.eq) goto loc_822CA548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c8540
	ctx.lr = 0x822CA544;
	sub_822C8540(ctx, base);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
loc_822CA548:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA550;
	sub_822DBAD0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822CA564:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822c8728
	ctx.lr = 0x822CA56C;
	sub_822C8728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c9cd8
	ctx.lr = 0x822CA580;
	sub_822C9CD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822d7e48
	ctx.lr = 0x822CA588;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// beq cr6,0x822ca5d0
	if (ctx.cr6.eq) goto loc_822CA5D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822CA5A0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CA5A8;
	sub_822C84C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x822CA5B0;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822CA5B8;
	sub_82634D40(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CA5CC;
	sub_822C86C8(ctx, base);
loc_822CA5CC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822CA5D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CA320) {
	__imp__sub_822CA320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CA5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822CA5E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x822dfb18
	ctx.lr = 0x822CA604;
	sub_822DFB18(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ca634
	if (!ctx.cr6.eq) goto loc_822CA634;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CA628;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CA634:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822CA638:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ca638
	if (!ctx.cr6.eq) goto loc_822CA638;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-4048
	ctx.r4.s64 = ctx.r10.s64 + -4048;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d79a8
	ctx.lr = 0x822CA680;
	sub_822D79A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822c84c0
	ctx.lr = 0x822CA68C;
	sub_822C84C0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c9e00
	ctx.lr = 0x822CA6A0;
	sub_822C9E00(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x822d7e48
	ctx.lr = 0x822CA6AC;
	sub_822D7E48(ctx, base);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CA5D8) {
	__imp__sub_822CA5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CA6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822CA6C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822CA6E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ca6e4
	if (!ctx.cr6.eq) goto loc_822CA6E4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CA70C;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ca73c
	if (!ctx.cr6.eq) goto loc_822CA73C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CA730;
	sub_822C86C8(ctx, base);
loc_822CA730:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CA73C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,7160
	ctx.r5.s64 = ctx.r11.s64 + 7160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CA754;
	sub_822ECA80(ctx, base);
	// bl 0x822dd968
	ctx.lr = 0x822CA758;
	sub_822DD968(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,7148
	ctx.r4.s64 = ctx.r10.s64 + 7148;
	// bl 0x822df4d0
	ctx.lr = 0x822CA768;
	sub_822DF4D0(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r5,r9,7144
	ctx.r5.s64 = ctx.r9.s64 + 7144;
	// addi r4,r8,7132
	ctx.r4.s64 = ctx.r8.s64 + 7132;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822df340
	ctx.lr = 0x822CA780;
	sub_822DF340(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r7,7120
	ctx.r4.s64 = ctx.r7.s64 + 7120;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822df340
	ctx.lr = 0x822CA794;
	sub_822DF340(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r31,r6,7096
	ctx.r31.s64 = ctx.r6.s64 + 7096;
	// addi r4,r5,7084
	ctx.r4.s64 = ctx.r5.s64 + 7084;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822df340
	ctx.lr = 0x822CA7B0;
	sub_822DF340(ctx, base);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r4,7056
	ctx.r5.s64 = ctx.r4.s64 + 7056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,7040
	ctx.r4.s64 = ctx.r11.s64 + 7040;
	// bl 0x822df340
	ctx.lr = 0x822CA7C8;
	sub_822DF340(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,7036
	ctx.r5.s64 = ctx.r10.s64 + 7036;
	// addi r4,r9,7024
	ctx.r4.s64 = ctx.r9.s64 + 7024;
	// bl 0x822df340
	ctx.lr = 0x822CA7E0;
	sub_822DF340(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CA7E8;
	sub_822C84C0(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r6,r8,6936
	ctx.r6.s64 = ctx.r8.s64 + 6936;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r5,6912
	ctx.r5.s64 = ctx.r5.s64 + 6912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,6900
	ctx.r3.s64 = ctx.r3.s64 + 6900;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// bl 0x822ca5d8
	ctx.lr = 0x822CA818;
	sub_822CA5D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA824;
	sub_822DBAD0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822ca730
	if (!ctx.cr6.eq) goto loc_822CA730;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,6892
	ctx.r4.s64 = ctx.r11.s64 + 6892;
	// bl 0x822dcc40
	ctx.lr = 0x822CA840;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CA848;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ca864
	if (ctx.cr6.eq) goto loc_822CA864;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ca864
	if (ctx.cr6.eq) goto loc_822CA864;
	// bl 0x822c8540
	ctx.lr = 0x822CA860;
	sub_822C8540(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_822CA864:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA86C;
	sub_822DBAD0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ca898
	if (!ctx.cr6.eq) goto loc_822CA898;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,6872
	ctx.r5.s64 = ctx.r11.s64 + 6872;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CA88C;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CA898:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CA6C0) {
	__imp__sub_822CA6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CA8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CA8A4) {
	__imp__sub_822CA8A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CA8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822CA8B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822dd968
	ctx.lr = 0x822CA8D0;
	sub_822DD968(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r11,7148
	ctx.r4.s64 = ctx.r11.s64 + 7148;
	// bl 0x822df4d0
	ctx.lr = 0x822CA8E0;
	sub_822DF4D0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r10,7256
	ctx.r5.s64 = ctx.r10.s64 + 7256;
	// addi r4,r9,7244
	ctx.r4.s64 = ctx.r9.s64 + 7244;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x822df340
	ctx.lr = 0x822CA8F8;
	sub_822DF340(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r8,7232
	ctx.r4.s64 = ctx.r8.s64 + 7232;
	// bl 0x822df5c8
	ctx.lr = 0x822CA908;
	sub_822DF5C8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dd6b8
	ctx.lr = 0x822CA914;
	sub_822DD6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822CA920;
	sub_822DCD28(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r7,7040
	ctx.r4.s64 = ctx.r7.s64 + 7040;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822df340
	ctx.lr = 0x822CA934;
	sub_822DF340(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r6,7036
	ctx.r5.s64 = ctx.r6.s64 + 7036;
	// addi r4,r4,7024
	ctx.r4.s64 = ctx.r4.s64 + 7024;
	// bl 0x822df340
	ctx.lr = 0x822CA94C;
	sub_822DF340(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r3,6936
	ctx.r6.s64 = ctx.r3.s64 + 6936;
	// addi r3,r9,7224
	ctx.r3.s64 = ctx.r9.s64 + 7224;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r5,r11,7208
	ctx.r5.s64 = ctx.r11.s64 + 7208;
	// addi r4,r10,7184
	ctx.r4.s64 = ctx.r10.s64 + 7184;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// bl 0x822ca5d8
	ctx.lr = 0x822CA980;
	sub_822CA5D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA98C;
	sub_822DBAD0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822ca9f4
	if (!ctx.cr6.eq) goto loc_822CA9F4;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,6892
	ctx.r4.s64 = ctx.r11.s64 + 6892;
	// bl 0x822dcc40
	ctx.lr = 0x822CA9A8;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CA9B0;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ca9cc
	if (ctx.cr6.eq) goto loc_822CA9CC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ca9cc
	if (ctx.cr6.eq) goto loc_822CA9CC;
	// bl 0x822c8540
	ctx.lr = 0x822CA9C8;
	sub_822C8540(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_822CA9CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CA9D4;
	sub_822DBAD0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822caa00
	if (!ctx.cr6.eq) goto loc_822CAA00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,7168
	ctx.r5.s64 = ctx.r11.s64 + 7168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CA9F4;
	sub_822C86C8(ctx, base);
loc_822CA9F4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822CAA00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CA8A8) {
	__imp__sub_822CA8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CAA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CAA0C) {
	__imp__sub_822CAA0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CAA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822CAA18;
	__savegprlr_19(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822caa50
	if (ctx.cr6.eq) goto loc_822CAA50;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
loc_822CAA50:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822caa5c
	if (ctx.cr6.eq) goto loc_822CAA5C;
	// stb r31,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r31.u8);
loc_822CAA5C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822caa68
	if (ctx.cr6.eq) goto loc_822CAA68;
	// stb r31,0(r22)
	PPC_STORE_U8(ctx.r22.u32 + 0, ctx.r31.u8);
loc_822CAA68:
	// bl 0x822dd968
	ctx.lr = 0x822CAA6C;
	sub_822DD968(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,7148
	ctx.r4.s64 = ctx.r11.s64 + 7148;
	// bl 0x822df4d0
	ctx.lr = 0x822CAA7C;
	sub_822DF4D0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r10,7256
	ctx.r5.s64 = ctx.r10.s64 + 7256;
	// addi r4,r9,7244
	ctx.r4.s64 = ctx.r9.s64 + 7244;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x822df340
	ctx.lr = 0x822CAA94;
	sub_822DF340(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r8,7232
	ctx.r4.s64 = ctx.r8.s64 + 7232;
	// bl 0x822df5c8
	ctx.lr = 0x822CAAA4;
	sub_822DF5C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd6b8
	ctx.lr = 0x822CAAB0;
	sub_822DD6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822CAABC;
	sub_822DCD28(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r7,7328
	ctx.r5.s64 = ctx.r7.s64 + 7328;
	// addi r4,r6,7040
	ctx.r4.s64 = ctx.r6.s64 + 7040;
	// bl 0x822df340
	ctx.lr = 0x822CAAD4;
	sub_822DF340(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,7036
	ctx.r5.s64 = ctx.r5.s64 + 7036;
	// addi r4,r4,7024
	ctx.r4.s64 = ctx.r4.s64 + 7024;
	// bl 0x822df340
	ctx.lr = 0x822CAAEC;
	sub_822DF340(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lwz r19,372(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r3,6936
	ctx.r6.s64 = ctx.r3.s64 + 6936;
	// addi r3,r9,7316
	ctx.r3.s64 = ctx.r9.s64 + 7316;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,7208
	ctx.r5.s64 = ctx.r11.s64 + 7208;
	// addi r4,r10,7184
	ctx.r4.s64 = ctx.r10.s64 + 7184;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// bl 0x822ca5d8
	ctx.lr = 0x822CAB24;
	sub_822CA5D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CAB30;
	sub_822DBAD0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822cacb4
	if (!ctx.cr6.eq) goto loc_822CACB4;
	// lwz r20,160(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r11,6892
	ctx.r4.s64 = ctx.r11.s64 + 6892;
	// bl 0x822dcc40
	ctx.lr = 0x822CAB4C;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CAB54;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cab6c
	if (ctx.cr6.eq) goto loc_822CAB6C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// bne cr6,0x822cab70
	if (!ctx.cr6.eq) goto loc_822CAB70;
loc_822CAB6C:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_822CAB70:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r11,7300
	ctx.r4.s64 = ctx.r11.s64 + 7300;
	// bl 0x822dcc40
	ctx.lr = 0x822CAB80;
	sub_822DCC40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cab98
	if (ctx.cr6.eq) goto loc_822CAB98;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,7296
	ctx.r4.s64 = ctx.r11.s64 + 7296;
	// bl 0x822dcc40
	ctx.lr = 0x822CAB94;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822CAB98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de168
	ctx.lr = 0x822CABA0;
	sub_822DE168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cac78
	if (ctx.cr6.eq) goto loc_822CAC78;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dcaa0
	ctx.lr = 0x822CABB4;
	sub_822DCAA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cac78
	if (ctx.cr6.eq) goto loc_822CAC78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,7292
	ctx.r4.s64 = ctx.r11.s64 + 7292;
	// bl 0x822dcc40
	ctx.lr = 0x822CABCC;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CABD4;
	sub_822DE140(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,8796
	ctx.r30.s64 = ctx.r11.s64 + 8796;
	// beq cr6,0x822cac00
	if (ctx.cr6.eq) goto loc_822CAC00;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822cac00
	if (ctx.cr6.eq) goto loc_822CAC00;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CAC00;
	sub_822ECA80(ctx, base);
loc_822CAC00:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,7288
	ctx.r4.s64 = ctx.r11.s64 + 7288;
	// bl 0x822dcc40
	ctx.lr = 0x822CAC10;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CAC18;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cac3c
	if (ctx.cr6.eq) goto loc_822CAC3C;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822cac3c
	if (ctx.cr6.eq) goto loc_822CAC3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CAC3C;
	sub_822ECA80(ctx, base);
loc_822CAC3C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,7284
	ctx.r4.s64 = ctx.r11.s64 + 7284;
	// bl 0x822dcc40
	ctx.lr = 0x822CAC4C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CAC54;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cac78
	if (ctx.cr6.eq) goto loc_822CAC78;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822cac78
	if (ctx.cr6.eq) goto loc_822CAC78;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CAC78;
	sub_822ECA80(ctx, base);
loc_822CAC78:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822cac8c
	if (ctx.cr6.eq) goto loc_822CAC8C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822c8540
	ctx.lr = 0x822CAC88;
	sub_822C8540(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
loc_822CAC8C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CAC94;
	sub_822DBAD0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cacc0
	if (!ctx.cr6.eq) goto loc_822CACC0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,7264
	ctx.r5.s64 = ctx.r11.s64 + 7264;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CACB4;
	sub_822C86C8(ctx, base);
loc_822CACB4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822CACC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CAA10) {
	__imp__sub_822CAA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CACCC) {
	__imp__sub_822CACCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CACD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822CACD8;
	__savegprlr_22(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,904
	ctx.r5.s64 = 904;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x826344d0
	ctx.lr = 0x822CACFC;
	sub_826344D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,7564
	ctx.r5.s64 = ctx.r11.s64 + 7564;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822eca80
	ctx.lr = 0x822CAD14;
	sub_822ECA80(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r10,7552
	ctx.r5.s64 = ctx.r10.s64 + 7552;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822eca80
	ctx.lr = 0x822CAD2C;
	sub_822ECA80(ctx, base);
	// bl 0x822dd968
	ctx.lr = 0x822CAD30;
	sub_822DD968(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,6648
	ctx.r4.s64 = ctx.r9.s64 + 6648;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822df340
	ctx.lr = 0x822CAD44;
	sub_822DF340(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r8,7540
	ctx.r4.s64 = ctx.r8.s64 + 7540;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822df340
	ctx.lr = 0x822CAD58;
	sub_822DF340(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r6,7448
	ctx.r6.s64 = ctx.r6.s64 + 7448;
	// addi r5,r5,7428
	ctx.r5.s64 = ctx.r5.s64 + 7428;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822ca5d8
	ctx.lr = 0x822CAD88;
	sub_822CA5D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CAD94;
	sub_822DBAD0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822cb04c
	if (!ctx.cr6.eq) goto loc_822CB04C;
	// lwz r22,112(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r11,7420
	ctx.r4.s64 = ctx.r11.s64 + 7420;
	// bl 0x822dcc40
	ctx.lr = 0x822CADB0;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CADB8;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cadd0
	if (ctx.cr6.eq) goto loc_822CADD0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// bne cr6,0x822cadd4
	if (!ctx.cr6.eq) goto loc_822CADD4;
loc_822CADD0:
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_822CADD4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r11,7400
	ctx.r4.s64 = ctx.r11.s64 + 7400;
	// bl 0x822dcc40
	ctx.lr = 0x822CADE4;
	sub_822DCC40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cae00
	if (ctx.cr6.eq) goto loc_822CAE00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,7392
	ctx.r4.s64 = ctx.r11.s64 + 7392;
	// bl 0x822dcc40
	ctx.lr = 0x822CADF8;
	sub_822DCC40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x822cae04
	goto loc_822CAE04;
loc_822CAE00:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_822CAE04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r26,r11,7384
	ctx.r26.s64 = ctx.r11.s64 + 7384;
	// addi r25,r10,7372
	ctx.r25.s64 = ctx.r10.s64 + 7372;
	// beq cr6,0x822cae80
	if (ctx.cr6.eq) goto loc_822CAE80;
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cae80
	if (ctx.cr6.eq) goto loc_822CAE80;
loc_822CAE2C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CAE38;
	sub_822DCC40(ctx, base);
	// bl 0x822de0a8
	ctx.lr = 0x822CAE3C;
	sub_822DE0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cae54
	if (!ctx.cr6.eq) goto loc_822CAE54;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822cae2c
	if (!ctx.cr6.eq) goto loc_822CAE2C;
	// b 0x822cae80
	goto loc_822CAE80;
loc_822CAE54:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CAE60;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CAE68;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cae7c
	if (ctx.cr6.eq) goto loc_822CAE7C;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822cae80
	if (!ctx.cr6.eq) goto loc_822CAE80;
loc_822CAE7C:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_822CAE80:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822cb02c
	if (ctx.cr6.eq) goto loc_822CB02C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cb02c
	if (ctx.cr6.eq) goto loc_822CB02C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r27,r11,1132
	ctx.r27.s64 = ctx.r11.s64 + 1132;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82634c80
	ctx.lr = 0x822CAEA4;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r6,r3,3
	ctx.r6.s64 = ctx.r3.s64 + 3;
	// bne cr6,0x822caeb4
	if (!ctx.cr6.eq) goto loc_822CAEB4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_822CAEB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r29,r11,8796
	ctx.r29.s64 = ctx.r11.s64 + 8796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CAECC;
	sub_822ECA80(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d00
	ctx.lr = 0x822CAED8;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822caee4
	if (ctx.cr6.eq) goto loc_822CAEE4;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
loc_822CAEE4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822cafc8
	if (ctx.cr6.eq) goto loc_822CAFC8;
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822cafc8
	if (ctx.cr6.eq) goto loc_822CAFC8;
loc_822CAEF8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CAF04;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CAF0C;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cafbc
	if (ctx.cr6.eq) goto loc_822CAFBC;
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cafbc
	if (ctx.cr6.eq) goto loc_822CAFBC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CAF2C;
	sub_822DCC40(ctx, base);
	// bl 0x822de0a8
	ctx.lr = 0x822CAF30;
	sub_822DE0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cafbc
	if (!ctx.cr6.eq) goto loc_822CAFBC;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x822cafbc
	if (!ctx.cr6.lt) goto loc_822CAFBC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634c80
	ctx.lr = 0x822CAF50;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r6,r3,3
	ctx.r6.s64 = ctx.r3.s64 + 3;
	// bne cr6,0x822caf60
	if (!ctx.cr6.eq) goto loc_822CAF60;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_822CAF60:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// bl 0x822eca80
	ctx.lr = 0x822CAF84;
	sub_822ECA80(ctx, base);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// li r4,47
	ctx.r4.s64 = 47;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// bl 0x82634d00
	ctx.lr = 0x822CAFA4;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cafb0
	if (ctx.cr6.eq) goto loc_822CAFB0;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
loc_822CAFB0:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
loc_822CAFBC:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822caef8
	if (!ctx.cr6.eq) goto loc_822CAEF8;
loc_822CAFC8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822CAFCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cafcc
	if (!ctx.cr6.eq) goto loc_822CAFCC;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CAFF4;
	sub_82634DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb00c
	if (ctx.cr6.eq) goto loc_822CB00C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82635430
	ctx.lr = 0x822CB00C;
	sub_82635430(ctx, base);
loc_822CB00C:
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CB018;
	sub_822DBAD0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822CB02C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CB034;
	sub_822DBAD0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,7348
	ctx.r5.s64 = ctx.r11.s64 + 7348;
	// li r4,-94
	ctx.r4.s64 = -94;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CB04C;
	sub_822C86C8(ctx, base);
loc_822CB04C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CACD0) {
	__imp__sub_822CACD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822CB060;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,128(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822CB088:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cb088
	if (!ctx.cr6.eq) goto loc_822CB088;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,761
	ctx.r29.s64 = ctx.r11.s64 + 761;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CB0B0;
	sub_82634DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cb0e0
	if (!ctx.cr6.eq) goto loc_822CB0E0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CB0D4;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822CB0E0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,7632
	ctx.r5.s64 = ctx.r11.s64 + 7632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CB0F8;
	sub_822ECA80(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r4,r10,-3692
	ctx.r4.s64 = ctx.r10.s64 + -3692;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d79a8
	ctx.lr = 0x822CB12C;
	sub_822D79A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822c84c0
	ctx.lr = 0x822CB138;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822cb1e8
	if (!ctx.cr6.eq) goto loc_822CB1E8;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822cb1d0
	if (ctx.cr6.lt) goto loc_822CB1D0;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// bgt cr6,0x822cb1d0
	if (ctx.cr6.gt) goto loc_822CB1D0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x822c8a40
	ctx.lr = 0x822CB164;
	sub_822C8A40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cb178
	if (!ctx.cr6.eq) goto loc_822CB178;
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// b 0x822cb17c
	goto loc_822CB17C;
loc_822CB178:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_822CB17C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,7596
	ctx.r3.s64 = ctx.r11.s64 + 7596;
	// bl 0x822ebbc8
	ctx.lr = 0x822CB190;
	sub_822EBBC8(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x822d7e48
	ctx.lr = 0x822CB198;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822cb1c4
	if (ctx.cr6.eq) goto loc_822CB1C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6200
	ctx.r5.s64 = ctx.r11.s64 + 6200;
	// li r4,-94
	ctx.r4.s64 = -94;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CB1B8;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822CB1C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822CB1D0:
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822c9cd8
	ctx.lr = 0x822CB1E0;
	sub_822C9CD8(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x822d7e48
	ctx.lr = 0x822CB1E8;
	sub_822D7E48(ctx, base);
loc_822CB1E8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CB058) {
	__imp__sub_822CB058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CB1F4) {
	__imp__sub_822CB1F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r5,r11,8260
	ctx.r5.s64 = ctx.r11.s64 + 8260;
	// addi r4,r10,8252
	ctx.r4.s64 = ctx.r10.s64 + 8252;
	// lis r6,256
	ctx.r6.s64 = 16777216;
	// b 0x822cb058
	sub_822CB058(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CB1F8) {
	__imp__sub_822CB1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CB21C) {
	__imp__sub_822CB21C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822CB228;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bge cr6,0x822cb24c
	if (!ctx.cr6.lt) goto loc_822CB24C;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822cb258
	goto loc_822CB258;
loc_822CB24C:
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// ble cr6,0x822cb258
	if (!ctx.cr6.gt) goto loc_822CB258;
	// li r4,100
	ctx.r4.s64 = 100;
loc_822CB258:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,8276
	ctx.r5.s64 = ctx.r11.s64 + 8276;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822eca80
	ctx.lr = 0x822CB270;
	sub_822ECA80(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r4,r10,8272
	ctx.r4.s64 = ctx.r10.s64 + 8272;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cb058
	ctx.lr = 0x822CB294;
	sub_822CB058(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CB220) {
	__imp__sub_822CB220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CB29C) {
	__imp__sub_822CB29C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822CB2A8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// bl 0x822dfcd8
	ctx.lr = 0x822CB2B8;
	sub_822DFCD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cb2d0
	if (!ctx.cr6.eq) goto loc_822CB2D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822CB2D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r31,r11,8348
	ctx.r31.s64 = ctx.r11.s64 + 8348;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CB2E8;
	sub_822DCC40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb404
	if (ctx.cr6.eq) goto loc_822CB404;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CB2FC;
	sub_822DCC40(ctx, base);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822cb404
	if (ctx.cr6.eq) goto loc_822CB404;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r25,r9,8332
	ctx.r25.s64 = ctx.r9.s64 + 8332;
	// addi r24,r10,8312
	ctx.r24.s64 = ctx.r10.s64 + 8312;
	// addi r23,r11,8300
	ctx.r23.s64 = ctx.r11.s64 + 8300;
loc_822CB320:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CB32C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CB334;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cb34c
	if (ctx.cr6.eq) goto loc_822CB34C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x822cb350
	if (!ctx.cr6.eq) goto loc_822CB350;
loc_822CB34C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822CB350:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CB35C;
	sub_822DCC40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dcaa0
	ctx.lr = 0x822CB364;
	sub_822DCAA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb394
	if (ctx.cr6.eq) goto loc_822CB394;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CB374;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CB37C;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cb394
	if (ctx.cr6.eq) goto loc_822CB394;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x822cb398
	if (!ctx.cr6.eq) goto loc_822CB398;
loc_822CB394:
	// li r29,0
	ctx.r29.s64 = 0;
loc_822CB398:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822cb3f8
	if (ctx.cr6.eq) goto loc_822CB3F8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cb3f8
	if (ctx.cr6.eq) goto loc_822CB3F8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x822cb3f8
	if (!ctx.cr6.gt) goto loc_822CB3F8;
	// addi r31,r20,72
	ctx.r31.s64 = ctx.r20.s64 + 72;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_822CB3B8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cb3ec
	if (!ctx.cr6.eq) goto loc_822CB3EC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// bl 0x826369b0
	ctx.lr = 0x822CB3D0;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cb3ec
	if (!ctx.cr6.eq) goto loc_822CB3EC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c9688
	ctx.lr = 0x822CB3E8;
	sub_822C9688(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_822CB3EC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// bne 0x822cb3b8
	if (!ctx.cr0.eq) goto loc_822CB3B8;
loc_822CB3F8:
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822cb320
	if (!ctx.cr6.eq) goto loc_822CB320;
loc_822CB404:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CB40C;
	sub_822DBAD0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CB2A0) {
	__imp__sub_822CB2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822CB420;
	__savegprlr_14(ctx, base);
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r4,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r4.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r5,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r5.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r6.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CB444;
	sub_82634DA0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cb45c
	if (!ctx.cr6.eq) goto loc_822CB45C;
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822CB45C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r17,r11,5560
	ctx.r17.s64 = ctx.r11.s64 + 5560;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r30,8492
	ctx.r30.s64 = ctx.r30.s64 + 8492;
	// addi r29,r29,8476
	ctx.r29.s64 = ctx.r29.s64 + 8476;
	// addi r11,r11,8424
	ctx.r11.s64 = ctx.r11.s64 + 8424;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r22,r31,8416
	ctx.r22.s64 = ctx.r31.s64 + 8416;
	// addi r21,r3,-3692
	ctx.r21.s64 = ctx.r3.s64 + -3692;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r20,r4,184
	ctx.r20.s64 = ctx.r4.s64 + 184;
	// addi r19,r5,8388
	ctx.r19.s64 = ctx.r5.s64 + 8388;
	// addi r18,r6,8360
	ctx.r18.s64 = ctx.r6.s64 + 8360;
	// addi r23,r7,19980
	ctx.r23.s64 = ctx.r7.s64 + 19980;
	// addi r15,r8,8828
	ctx.r15.s64 = ctx.r8.s64 + 8828;
	// addi r14,r9,264
	ctx.r14.s64 = ctx.r9.s64 + 264;
	// addi r16,r10,268
	ctx.r16.s64 = ctx.r10.s64 + 268;
loc_822CB4E0:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822cb770
	if (!ctx.cr6.gt) goto loc_822CB770;
	// addi r4,r25,-4
	ctx.r4.s64 = ctx.r25.s64 + -4;
	// addi r7,r24,48
	ctx.r7.s64 = ctx.r24.s64 + 48;
loc_822CB4F8:
	// lwz r11,88(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// li r12,37
	ctx.r12.s64 = 37;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cb58c
	if (ctx.cr6.eq) goto loc_822CB58C;
	// lbz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cb58c
	if (!ctx.cr6.eq) goto loc_822CB58C;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cb58c
	if (ctx.cr6.eq) goto loc_822CB58C;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822cb584
	if (!ctx.cr6.gt) goto loc_822CB584;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_822CB534:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mulli r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 * 140;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_822CB548:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x822cb56c
	if (ctx.cr6.eq) goto loc_822CB56C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cb548
	if (ctx.cr6.eq) goto loc_822CB548;
loc_822CB56C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cb58c
	if (ctx.cr6.eq) goto loc_822CB58C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822cb534
	if (ctx.cr6.lt) goto loc_822CB534;
loc_822CB584:
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_822CB58C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,140
	ctx.r7.s64 = ctx.r7.s64 + 140;
	// cmpw cr6,r5,r28
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822cb4f8
	if (ctx.cr6.lt) goto loc_822CB4F8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822cb770
	if (ctx.cr6.eq) goto loc_822CB770;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cb5bc
	if (ctx.cr6.eq) goto loc_822CB5BC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822ebbc8
	ctx.lr = 0x822CB5BC;
	sub_822EBBC8(ctx, base);
loc_822CB5BC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822cb744
	if (!ctx.cr6.gt) goto loc_822CB744;
loc_822CB5C8:
	// bl 0x822c1870
	ctx.lr = 0x822CB5CC;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cb740
	if (!ctx.cr6.eq) goto loc_822CB740;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,576
	ctx.r4.s64 = 576;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822eca80
	ctx.lr = 0x822CB5E4;
	sub_822ECA80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x822cb64c
	if (!ctx.cr6.lt) goto loc_822CB64C;
	// addi r28,r27,20
	ctx.r28.s64 = ctx.r27.s64 + 20;
	// addi r29,r25,-4
	ctx.r29.s64 = ctx.r25.s64 + -4;
loc_822CB5FC:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822cb648
	if (!ctx.cr6.lt) goto loc_822CB648;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// bgt cr6,0x822cb614
	if (ctx.cr6.gt) goto loc_822CB614;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_822CB614:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mulli r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 * 140;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subfic r4,r31,576
	ctx.xer.ca = ctx.r31.u32 <= 576;
	ctx.r4.s64 = 576 - ctx.r31.s64;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CB638;
	sub_822ECA80(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822cb5fc
	if (ctx.cr6.lt) goto loc_822CB5FC;
loc_822CB648:
	// lwz r28,1084(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
loc_822CB64C:
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lwz r6,0(r17)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// subfic r4,r31,576
	ctx.xer.ca = ctx.r31.u32 <= 576;
	ctx.r4.s64 = 576 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CB664;
	sub_822ECA80(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// bl 0x822d79a8
	ctx.lr = 0x822CB698;
	sub_822D79A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cb6d4
	if (!ctx.cr6.eq) goto loc_822CB6D4;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r4,200
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 200, ctx.xer);
	// bne cr6,0x822cb6f4
	if (!ctx.cr6.eq) goto loc_822CB6F4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822cb2a0
	ctx.lr = 0x822CB6BC;
	sub_822CB2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822cb6fc
	if (!ctx.cr6.gt) goto loc_822CB6FC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x822cb6fc
	goto loc_822CB6FC;
loc_822CB6D4:
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822ebbc8
	ctx.lr = 0x822CB6E0;
	sub_822EBBC8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,168
	ctx.r5.s64 = 168;
	// lwz r3,1100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// bl 0x82635430
	ctx.lr = 0x822CB6F0;
	sub_82635430(ctx, base);
	// b 0x822cb6fc
	goto loc_822CB6FC;
loc_822CB6F4:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x822ebbc8
	ctx.lr = 0x822CB6FC;
	sub_822EBBC8(ctx, base);
loc_822CB6FC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d7e48
	ctx.lr = 0x822CB704;
	sub_822D7E48(ctx, base);
	// lwz r10,1092(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cb730
	if (ctx.cr6.eq) goto loc_822CB730;
	// addi r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 + 20;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822cb720
	if (ctx.cr6.lt) goto loc_822CB720;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822CB720:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CB730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822CB730:
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// addi r25,r25,80
	ctx.r25.s64 = ctx.r25.s64 + 80;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822cb5c8
	if (ctx.cr6.lt) goto loc_822CB5C8;
loc_822CB740:
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_822CB744:
	// bl 0x822c1870
	ctx.lr = 0x822CB748;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cb770
	if (!ctx.cr6.eq) goto loc_822CB770;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cmpw cr6,r17,r8
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822cb4e0
	if (ctx.cr6.lt) goto loc_822CB4E0;
loc_822CB770:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82634d40
	ctx.lr = 0x822CB778;
	sub_82634D40(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CB418) {
	__imp__sub_822CB418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CB784) {
	__imp__sub_822CB784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822CB790;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cb7b4
	if (!ctx.cr6.eq) goto loc_822CB7B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8828
	ctx.r11.s64 = ctx.r11.s64 + 8828;
loc_822CB7B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822dfcd8
	ctx.lr = 0x822CB7BC;
	sub_822DFCD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb8a4
	if (ctx.cr6.eq) goto loc_822CB8A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,8604
	ctx.r30.s64 = ctx.r11.s64 + 8604;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CB7D8;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CB7E0;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cb7f4
	if (ctx.cr6.eq) goto loc_822CB7F4;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822cb868
	if (!ctx.cr6.eq) goto loc_822CB868;
loc_822CB7F4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,5780
	ctx.r4.s64 = ctx.r11.s64 + 5780;
	// bl 0x822dcc40
	ctx.lr = 0x822CB804;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CB80C;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cb820
	if (ctx.cr6.eq) goto loc_822CB820;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822cb868
	if (!ctx.cr6.eq) goto loc_822CB868;
loc_822CB820:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,8588
	ctx.r4.s64 = ctx.r11.s64 + 8588;
	// bl 0x822dcc40
	ctx.lr = 0x822CB830;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de190
	ctx.lr = 0x822CB838;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cb8a4
	if (ctx.cr6.eq) goto loc_822CB8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CB84C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CB854;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cb8a4
	if (ctx.cr6.eq) goto loc_822CB8A4;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822cb8a4
	if (ctx.cr6.eq) goto loc_822CB8A4;
loc_822CB868:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822c9388
	ctx.lr = 0x822CB874;
	sub_822C9388(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r11,6144
	ctx.r5.s64 = ctx.r11.s64 + 6144;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r4,-90
	ctx.r4.s64 = -90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CB894;
	sub_822C86C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CB89C;
	sub_822DBAD0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CB8A4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r5,r11,6128
	ctx.r5.s64 = ctx.r11.s64 + 6128;
	// li r4,-90
	ctx.r4.s64 = -90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CB8C0;
	sub_822C86C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CB8C8;
	sub_822DBAD0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CB788) {
	__imp__sub_822CB788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cb920
	if (ctx.cr6.eq) goto loc_822CB920;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cb920
	if (ctx.cr6.eq) goto loc_822CB920;
loc_822CB8F0:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822cb910
	if (ctx.cr6.eq) goto loc_822CB910;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822cb910
	if (ctx.cr6.eq) goto loc_822CB910;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822cb910
	if (ctx.cr6.eq) goto loc_822CB910;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822cb928
	if (!ctx.cr6.eq) goto loc_822CB928;
loc_822CB910:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822cb8f0
	if (!ctx.cr6.eq) goto loc_822CB8F0;
loc_822CB920:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822CB928:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CB8D0) {
	__imp__sub_822CB8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB930) {
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
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822CB958;
	sub_826344D0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cb974
	if (ctx.cr6.eq) goto loc_822CB974;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cb974
	if (ctx.cr6.eq) goto loc_822CB974;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// b 0x822cb97c
	goto loc_822CB97C;
loc_822CB974:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,2596
	ctx.r6.s64 = ctx.r11.s64 + 2596;
loc_822CB97C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CB990;
	sub_822ECA80(ctx, base);
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

PPC_WEAK_FUNC(sub_822CB930) {
	__imp__sub_822CB930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CB9A8) {
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
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb9d4
	if (ctx.cr6.eq) goto loc_822CB9D4;
	// bl 0x822d8088
	ctx.lr = 0x822CB9CC;
	sub_822D8088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_822CB9D4:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x822c84c0
	ctx.lr = 0x822CB9DC;
	sub_822C84C0(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x822c84c0
	ctx.lr = 0x822CB9E4;
	sub_822C84C0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x822c84c0
	ctx.lr = 0x822CB9EC;
	sub_822C84C0(ctx, base);
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

PPC_WEAK_FUNC(sub_822CB9A8) {
	__imp__sub_822CB9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CBA00) {
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
	// addi r30,r3,148
	ctx.r30.s64 = ctx.r3.s64 + 148;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c84c0
	ctx.lr = 0x822CBA24;
	sub_822C84C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cba38
	if (ctx.cr6.eq) goto loc_822CBA38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c8540
	ctx.lr = 0x822CBA34;
	sub_822C8540(ctx, base);
	// b 0x822cba3c
	goto loc_822CBA3C;
loc_822CBA38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CBA3C:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r9,-3
	ctx.r9.s64 = -3;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
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

PPC_WEAK_FUNC(sub_822CBA00) {
	__imp__sub_822CBA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CBA68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CBA8C;
	sub_82634DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cbab8
	if (!ctx.cr6.eq) goto loc_822CBAB8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CBAB0;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822cbb7c
	goto loc_822CBB7C;
loc_822CBAB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,16383
	ctx.r5.s64 = 16383;
	// addi r3,r11,13288
	ctx.r3.s64 = ctx.r11.s64 + 13288;
	// bl 0x822ebf30
	ctx.lr = 0x822CBAC8;
	sub_822EBF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822cbaf4
	if (ctx.cr6.gt) goto loc_822CBAF4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82634d40
	ctx.lr = 0x822CBAD8;
	sub_82634D40(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,8632
	ctx.r5.s64 = ctx.r11.s64 + 8632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CBAEC;
	sub_822C86C8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x822cbb7c
	goto loc_822CBB7C;
loc_822CBAF4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
loc_822CBB08:
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822cbb28
	if (ctx.cr6.eq) goto loc_822CBB28;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822cbb28
	if (ctx.cr6.eq) goto loc_822CBB28;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x822cbb3c
	if (!ctx.cr6.eq) goto loc_822CBB3C;
loc_822CBB28:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bgt 0x822cbb08
	if (ctx.cr0.gt) goto loc_822CBB08;
loc_822CBB3C:
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x822cbb68
	if (!ctx.cr6.lt) goto loc_822CBB68;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CBB4C;
	sub_822C84C0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,8612
	ctx.r5.s64 = ctx.r11.s64 + 8612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CBB60;
	sub_822C86C8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x822cbb7c
	goto loc_822CBB7C;
loc_822CBB68:
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x822c84c0
	ctx.lr = 0x822CBB70;
	sub_822C84C0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_822CBB7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CBA68) {
	__imp__sub_822CBA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CBB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CBB94) {
	__imp__sub_822CBB94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CBB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822CBBA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,148
	ctx.r31.s64 = ctx.r3.s64 + 148;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cbbdc
	if (!ctx.cr6.eq) goto loc_822CBBDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,8804
	ctx.r5.s64 = ctx.r11.s64 + 8804;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CBBD0;
	sub_822C86C8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CBBDC:
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822ca320
	ctx.lr = 0x822CBBF8;
	sub_822CA320(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x822cbc14
	if (!ctx.cr6.eq) goto loc_822CBC14;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CBC08;
	sub_822C84C0(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CBC14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cbc38
	if (ctx.cr6.eq) goto loc_822CBC38;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CBC24;
	sub_822C84C0(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822c84c0
	ctx.lr = 0x822CBC2C;
	sub_822C84C0(ctx, base);
loc_822CBC2C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CBC38:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cbce4
	if (ctx.cr6.eq) goto loc_822CBCE4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822CBC4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822cbc70
	if (ctx.cr6.eq) goto loc_822CBC70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cbc4c
	if (ctx.cr6.eq) goto loc_822CBC4C;
loc_822CBC70:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cbce4
	if (ctx.cr6.eq) goto loc_822CBCE4;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822cbcd0
	if (!ctx.cr6.eq) goto loc_822CBCD0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822CBC88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cbc88
	if (!ctx.cr6.eq) goto loc_822CBC88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,13288
	ctx.r3.s64 = ctx.r10.s64 + 13288;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x822ebfa8
	ctx.lr = 0x822CBCB0;
	sub_822EBFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cbcc4
	if (!ctx.cr6.eq) goto loc_822CBCC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,8760
	ctx.r3.s64 = ctx.r11.s64 + 8760;
	// b 0x822cbccc
	goto loc_822CBCCC;
loc_822CBCC4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,8704
	ctx.r3.s64 = ctx.r11.s64 + 8704;
loc_822CBCCC:
	// bl 0x822ebbc8
	ctx.lr = 0x822CBCD0;
	sub_822EBBC8(ctx, base);
loc_822CBCD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c84c0
	ctx.lr = 0x822CBCD8;
	sub_822C84C0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822CBCE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CBCEC;
	sub_822C84C0(ctx, base);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822ca6c0
	ctx.lr = 0x822CBD04;
	sub_822CA6C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822c84c0
	ctx.lr = 0x822CBD10;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822cbc2c
	if (!ctx.cr6.eq) goto loc_822CBC2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,2728
	ctx.r4.s64 = ctx.r11.s64 + 2728;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// bl 0x822ca8a8
	ctx.lr = 0x822CBD30;
	sub_822CA8A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822c84c0
	ctx.lr = 0x822CBD3C;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822cbc2c
	if (!ctx.cr6.eq) goto loc_822CBC2C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cacd0
	ctx.lr = 0x822CBD58;
	sub_822CACD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x822c84c0
	ctx.lr = 0x822CBD64;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822cbc2c
	if (!ctx.cr6.eq) goto loc_822CBC2C;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x822c84c0
	ctx.lr = 0x822CBD74;
	sub_822C84C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// addi r29,r11,8796
	ctx.r29.s64 = ctx.r11.s64 + 8796;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// stw r28,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r28.u32);
	// stw r11,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r11.u32);
	// bl 0x822eca80
	ctx.lr = 0x822CBDA0;
	sub_822ECA80(ctx, base);
	// addi r3,r30,152
	ctx.r3.s64 = ctx.r30.s64 + 152;
	// bl 0x822c84c0
	ctx.lr = 0x822CBDA8;
	sub_822C84C0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,8696
	ctx.r10.s64 = ctx.r10.s64 + 8696;
loc_822CBDB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822cbdd8
	if (ctx.cr6.eq) goto loc_822CBDD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cbdb4
	if (ctx.cr6.eq) goto loc_822CBDB4;
loc_822CBDD8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822cbe0c
	if (!ctx.cr6.eq) goto loc_822CBE0C;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822c34a8
	ctx.lr = 0x822CBDEC;
	sub_822C34A8(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cbe0c
	if (ctx.cr6.eq) goto loc_822CBE0C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CBE0C;
	sub_822ECA80(ctx, base);
loc_822CBE0C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,8660
	ctx.r3.s64 = ctx.r11.s64 + 8660;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822CBE20;
	sub_822EBBC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CBB98) {
	__imp__sub_822CBB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CBE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CBE2C) {
	__imp__sub_822CBE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CBE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822CBE38;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,152
	ctx.r28.s64 = ctx.r3.s64 + 152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822c84c0
	ctx.lr = 0x822CBE50;
	sub_822C84C0(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cbe7c
	if (!ctx.cr6.eq) goto loc_822CBE7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,8804
	ctx.r5.s64 = ctx.r11.s64 + 8804;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CBE70;
	sub_822C86C8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CBE7C:
	// bl 0x822c85a0
	ctx.lr = 0x822CBE80;
	sub_822C85A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cbed0
	if (ctx.cr6.eq) goto loc_822CBED0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822CBE94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cbe94
	if (!ctx.cr6.eq) goto loc_822CBE94;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,208
	ctx.r31.s64 = ctx.r11.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CBEBC;
	sub_82634DA0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cbef0
	if (!ctx.cr6.eq) goto loc_822CBEF0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CBED0;
	sub_822C84C0(ctx, base);
loc_822CBED0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CBEE4;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CBEF0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r7,r11,8960
	ctx.r7.s64 = ctx.r11.s64 + 8960;
	// addi r6,r10,6488
	ctx.r6.s64 = ctx.r10.s64 + 6488;
	// addi r5,r9,8896
	ctx.r5.s64 = ctx.r9.s64 + 8896;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CBF14;
	sub_822ECA80(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CBF1C;
	sub_822C84C0(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822CBF24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cbf24
	if (!ctx.cr6.eq) goto loc_822CBF24;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r30,r10,8884
	ctx.r30.s64 = ctx.r10.s64 + 8884;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r7,r10,6376
	ctx.r7.s64 = ctx.r10.s64 + 6376;
	// addi r6,r9,8864
	ctx.r6.s64 = ctx.r9.s64 + 8864;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r5,8848
	ctx.r5.s64 = ctx.r5.s64 + 8848;
	// addi r4,r4,-4048
	ctx.r4.s64 = ctx.r4.s64 + -4048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// bl 0x822d79a8
	ctx.lr = 0x822CBF80;
	sub_822D79A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822c84c0
	ctx.lr = 0x822CBF8C;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822cbfc0
	if (ctx.cr6.eq) goto loc_822CBFC0;
	// cmpwi cr6,r31,-95
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -95, ctx.xer);
	// bne cr6,0x822cbfa8
	if (!ctx.cr6.eq) goto loc_822CBFA8;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CBFA8:
	// cmpwi cr6,r31,-92
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -92, ctx.xer);
	// li r3,-6
	ctx.r3.s64 = -6;
	// beq cr6,0x822cc0b4
	if (ctx.cr6.eq) goto loc_822CC0B4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CBFC0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822cbfd4
	if (ctx.cr6.lt) goto loc_822CBFD4;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// ble cr6,0x822cc02c
	if (!ctx.cr6.gt) goto loc_822CC02C;
loc_822CBFD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CBFE4;
	sub_822CB788(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc008
	if (ctx.cr6.eq) goto loc_822CC008;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,5632
	ctx.r4.s64 = ctx.r11.s64 + 5632;
	// bl 0x82634c80
	ctx.lr = 0x822CBFFC;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x822cc00c
	if (!ctx.cr6.eq) goto loc_822CC00C;
loc_822CC008:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822CC00C:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822d7e48
	ctx.lr = 0x822CC014;
	sub_822D7E48(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CC02C:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x822dfcd8
	ctx.lr = 0x822CC034;
	sub_822DFCD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822d7e48
	ctx.lr = 0x822CC040;
	sub_822D7E48(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cc07c
	if (ctx.cr6.eq) goto loc_822CC07C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,6780
	ctx.r4.s64 = ctx.r11.s64 + 6780;
	// bl 0x822dcc40
	ctx.lr = 0x822CC058;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CC060;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cc07c
	if (ctx.cr6.eq) goto loc_822CC07C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc07c
	if (ctx.cr6.eq) goto loc_822CC07C;
	// bl 0x822c8540
	ctx.lr = 0x822CC078;
	sub_822C8540(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_822CC07C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CC084;
	sub_822DBAD0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cc0b0
	if (!ctx.cr6.eq) goto loc_822CC0B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,8820
	ctx.r5.s64 = ctx.r11.s64 + 8820;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CC0A4;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CC0B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CC0B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CBE30) {
	__imp__sub_822CBE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC0BC) {
	__imp__sub_822CC0BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CC0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822CC0D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cc0d4
	if (!ctx.cr6.eq) goto loc_822CC0D4;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,628
	ctx.r30.s64 = ctx.r11.s64 + 628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CC0FC;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc120
	if (ctx.cr6.eq) goto loc_822CC120;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,9040
	ctx.r5.s64 = ctx.r11.s64 + 9040;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CC11C;
	sub_822ECA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822CC120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC0C0) {
	__imp__sub_822CC0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263442c
	ctx.lr = 0x822CC130;
	__savegprlr_17(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r20,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r20.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r20,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r20.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r20,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r20.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// addi r17,r11,9040
	ctx.r17.s64 = ctx.r11.s64 + 9040;
	// addi r19,r10,9676
	ctx.r19.s64 = ctx.r10.s64 + 9676;
loc_822CC174:
	// lwz r29,144(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 144);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cc440
	if (ctx.cr6.eq) goto loc_822CC440;
	// lbz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 16);
	// addi r28,r24,16
	ctx.r28.s64 = ctx.r24.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc440
	if (ctx.cr6.eq) goto loc_822CC440;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822CC194:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cc194
	if (!ctx.cr6.eq) goto loc_822CC194;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,628
	ctx.r30.s64 = ctx.r11.s64 + 628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634da0
	ctx.lr = 0x822CC1BC;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc1d8
	if (ctx.cr6.eq) goto loc_822CC1D8;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CC1D8;
	sub_822ECA80(ctx, base);
loc_822CC1D8:
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cc3bc
	if (ctx.cr6.eq) goto loc_822CC3BC;
	// lwz r3,164(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc230
	if (ctx.cr6.eq) goto loc_822CC230;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x822d7f18
	ctx.lr = 0x822CC1F8;
	sub_822D7F18(ctx, base);
loc_822CC1F8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x822cc21c
	if (ctx.cr6.eq) goto loc_822CC21C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cc1f8
	if (ctx.cr6.eq) goto loc_822CC1F8;
loc_822CC21C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cc230
	if (ctx.cr6.eq) goto loc_822CC230;
	// lwz r3,164(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 164);
	// bl 0x822d8088
	ctx.lr = 0x822CC22C;
	sub_822D8088(ctx, base);
	// stw r20,164(r24)
	PPC_STORE_U32(ctx.r24.u32 + 164, ctx.r20.u32);
loc_822CC230:
	// lwz r11,164(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cc248
	if (!ctx.cr6.eq) goto loc_822CC248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d7e98
	ctx.lr = 0x822CC244;
	sub_822D7E98(ctx, base);
	// stw r3,164(r24)
	PPC_STORE_U32(ctx.r24.u32 + 164, ctx.r3.u32);
loc_822CC248:
	// lwz r3,164(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc2ac
	if (ctx.cr6.eq) goto loc_822CC2AC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822cc280
	if (ctx.cr6.eq) goto loc_822CC280;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822CC260:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cc260
	if (!ctx.cr6.eq) goto loc_822CC260;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x822cc284
	goto loc_822CC284;
loc_822CC280:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_822CC284:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822d8978
	ctx.lr = 0x822CC2A8;
	sub_822D8978(ctx, base);
	// b 0x822cc304
	goto loc_822CC304;
loc_822CC2AC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822cc2d8
	if (ctx.cr6.eq) goto loc_822CC2D8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822CC2B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cc2b8
	if (!ctx.cr6.eq) goto loc_822CC2B8;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x822cc2dc
	goto loc_822CC2DC;
loc_822CC2D8:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_822CC2DC:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d79a8
	ctx.lr = 0x822CC304;
	sub_822D79A8(ctx, base);
loc_822CC304:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822c84c0
	ctx.lr = 0x822CC310;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822cc3dc
	if (!ctx.cr6.eq) goto loc_822CC3DC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,401
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 401, ctx.xer);
	// bne cr6,0x822cc408
	if (!ctx.cr6.eq) goto loc_822CC408;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CC334;
	sub_822CB788(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822d7e48
	ctx.lr = 0x822CC33C;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bgt cr6,0x822cc454
	if (ctx.cr6.gt) goto loc_822CC454;
	// lwz r11,148(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc454
	if (ctx.cr6.eq) goto loc_822CC454;
	// lwz r11,156(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 156);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x822cc454
	if (!ctx.cr6.lt) goto loc_822CC454;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r5,156(r24)
	PPC_STORE_U32(ctx.r24.u32 + 156, ctx.r5.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822CC374;
	sub_822EBBC8(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822CC384:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822cc384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CC384;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822cbb98
	ctx.lr = 0x822CC398;
	sub_822CBB98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cc414
	if (!ctx.cr6.eq) goto loc_822CC414;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 2, ctx.xer);
	// blt cr6,0x822cc174
	if (ctx.cr6.lt) goto loc_822CC174;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822CC3BC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CC3D0;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822CC3DC:
	// cmpwi cr6,r31,-95
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -95, ctx.xer);
	// bne cr6,0x822cc3f0
	if (!ctx.cr6.eq) goto loc_822CC3F0;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822CC3F0:
	// cmpwi cr6,r31,-92
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -92, ctx.xer);
	// li r3,-6
	ctx.r3.s64 = -6;
	// beq cr6,0x822cc458
	if (ctx.cr6.eq) goto loc_822CC458;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822CC408:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822CC414:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,168
	ctx.r5.s64 = 168;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82635430
	ctx.lr = 0x822CC424;
	sub_82635430(ctx, base);
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,-3
	ctx.r3.s64 = ctx.r11.s64 + -3;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822CC440:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9660
	ctx.r5.s64 = ctx.r11.s64 + 9660;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CC454;
	sub_822C86C8(ctx, base);
loc_822CC454:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_822CC458:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC128) {
	__imp__sub_822CC128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC460) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cc4b4
	if (!ctx.cr6.eq) goto loc_822CC4B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9724
	ctx.r5.s64 = ctx.r11.s64 + 9724;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CC4A0;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822CC4B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r5,r11,19980
	ctx.r5.s64 = ctx.r11.s64 + 19980;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CC4C8;
	sub_822ECA80(ctx, base);
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
}

PPC_WEAK_FUNC(sub_822CC460) {
	__imp__sub_822CC460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC4DC) {
	__imp__sub_822CC4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC4E0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822CC4FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cc4fc
	if (!ctx.cr6.eq) goto loc_822CC4FC;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// addi r3,r10,416
	ctx.r3.s64 = ctx.r10.s64 + 416;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x822eca80
	sub_822ECA80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC4E0) {
	__imp__sub_822CC4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CC538) {
	__imp__sub_822CC538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC53C) {
	__imp__sub_822CC53C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,416
	ctx.r3.s64 = ctx.r11.s64 + 416;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CC540) {
	__imp__sub_822CC540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC54C) {
	__imp__sub_822CC54C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822CC558;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822dd968
	ctx.lr = 0x822CC56C;
	sub_822DD968(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,8828
	ctx.r28.s64 = ctx.r11.s64 + 8828;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,9992
	ctx.r4.s64 = ctx.r11.s64 + 9992;
	// bl 0x822df340
	ctx.lr = 0x822CC588;
	sub_822DF340(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,9972
	ctx.r4.s64 = ctx.r10.s64 + 9972;
	// bl 0x822df5c8
	ctx.lr = 0x822CC598;
	sub_822DF5C8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne cr6,0x822cc5a8
	if (!ctx.cr6.eq) goto loc_822CC5A8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_822CC5A8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,9960
	ctx.r4.s64 = ctx.r11.s64 + 9960;
	// bl 0x822df340
	ctx.lr = 0x822CC5B8;
	sub_822DF340(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,9948
	ctx.r4.s64 = ctx.r10.s64 + 9948;
	// bl 0x822df4d0
	ctx.lr = 0x822CC5C8;
	sub_822DF4D0(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r9,9916
	ctx.r4.s64 = ctx.r9.s64 + 9916;
	// bl 0x822df0b8
	ctx.lr = 0x822CC5D8;
	sub_822DF0B8(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,9896
	ctx.r4.s64 = ctx.r8.s64 + 9896;
	// bl 0x822df0b8
	ctx.lr = 0x822CC5E8;
	sub_822DF0B8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,9880
	ctx.r4.s64 = ctx.r6.s64 + 9880;
	// lfd f1,23400(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r7.u32 + 23400);
	// bl 0x822df278
	ctx.lr = 0x822CC600;
	sub_822DF278(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cc61c
	if (ctx.cr6.eq) goto loc_822CC61C;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cc61c
	if (ctx.cr6.eq) goto loc_822CC61C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x822cc624
	goto loc_822CC624;
loc_822CC61C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,6932
	ctx.r5.s64 = ctx.r11.s64 + 6932;
loc_822CC624:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9872
	ctx.r4.s64 = ctx.r11.s64 + 9872;
	// bl 0x822df340
	ctx.lr = 0x822CC634;
	sub_822DF340(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r10,9848
	ctx.r5.s64 = ctx.r10.s64 + 9848;
	// addi r4,r9,9836
	ctx.r4.s64 = ctx.r9.s64 + 9836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df340
	ctx.lr = 0x822CC64C;
	sub_822DF340(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r5,r8,9828
	ctx.r5.s64 = ctx.r8.s64 + 9828;
	// addi r4,r7,9820
	ctx.r4.s64 = ctx.r7.s64 + 9820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df340
	ctx.lr = 0x822CC664;
	sub_822DF340(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r5,r6,9816
	ctx.r5.s64 = ctx.r6.s64 + 9816;
	// addi r4,r4,9808
	ctx.r4.s64 = ctx.r4.s64 + 9808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df340
	ctx.lr = 0x822CC67C;
	sub_822DF340(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,9776
	ctx.r4.s64 = ctx.r10.s64 + 9776;
	// lfd f1,9800(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9800);
	// bl 0x822df278
	ctx.lr = 0x822CC694;
	sub_822DF278(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,9756
	ctx.r4.s64 = ctx.r9.s64 + 9756;
	// bl 0x822df0b8
	ctx.lr = 0x822CC6A4;
	sub_822DF0B8(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r8,9736
	ctx.r4.s64 = ctx.r8.s64 + 9736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822df340
	ctx.lr = 0x822CC6B8;
	sub_822DF340(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r7,5936
	ctx.r4.s64 = ctx.r7.s64 + 5936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822df340
	ctx.lr = 0x822CC6CC;
	sub_822DF340(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dfb18
	ctx.lr = 0x822CC6D4;
	sub_822DFB18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CC6E0;
	sub_822DBAD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC550) {
	__imp__sub_822CC550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CC6EC) {
	__imp__sub_822CC6EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822CC6F8;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dd968
	ctx.lr = 0x822CC70C;
	sub_822DD968(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,10308
	ctx.r4.s64 = ctx.r11.s64 + 10308;
	// bl 0x822df4d0
	ctx.lr = 0x822CC71C;
	sub_822DF4D0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r10,10300
	ctx.r4.s64 = ctx.r10.s64 + 10300;
	// bl 0x822df4d0
	ctx.lr = 0x822CC72C;
	sub_822DF4D0(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r27,r9,10032
	ctx.r27.s64 = ctx.r9.s64 + 10032;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfd f31,23408(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 23408);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822df278
	ctx.lr = 0x822CC74C;
	sub_822DF278(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r28,r7,10020
	ctx.r28.s64 = ctx.r7.s64 + 10020;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822df278
	ctx.lr = 0x822CC764;
	sub_822DF278(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r6,10280
	ctx.r4.s64 = ctx.r6.s64 + 10280;
	// bl 0x822df4d0
	ctx.lr = 0x822CC774;
	sub_822DF4D0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r4,10264
	ctx.r4.s64 = ctx.r4.s64 + 10264;
	// lfd f1,28632(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28632);
	// bl 0x822df278
	ctx.lr = 0x822CC78C;
	sub_822DF278(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,10240
	ctx.r4.s64 = ctx.r10.s64 + 10240;
	// lfd f1,28640(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28640);
	// bl 0x822df278
	ctx.lr = 0x822CC7A4;
	sub_822DF278(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r9,-2544
	ctx.r4.s64 = ctx.r9.s64 + -2544;
	// bl 0x822df4d0
	ctx.lr = 0x822CC7B4;
	sub_822DF4D0(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r5,r8,10232
	ctx.r5.s64 = ctx.r8.s64 + 10232;
	// addi r4,r7,10224
	ctx.r4.s64 = ctx.r7.s64 + 10224;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x822df340
	ctx.lr = 0x822CC7CC;
	sub_822DF340(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r5,r6,10216
	ctx.r5.s64 = ctx.r6.s64 + 10216;
	// addi r4,r4,10204
	ctx.r4.s64 = ctx.r4.s64 + 10204;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822df340
	ctx.lr = 0x822CC7E4;
	sub_822DF340(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,10192
	ctx.r4.s64 = ctx.r11.s64 + 10192;
	// bl 0x822df278
	ctx.lr = 0x822CC7F8;
	sub_822DF278(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r9,10160
	ctx.r4.s64 = ctx.r9.s64 + 10160;
	// lfd f1,10184(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 10184);
	// bl 0x822df278
	ctx.lr = 0x822CC810;
	sub_822DF278(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r8,10152
	ctx.r4.s64 = ctx.r8.s64 + 10152;
	// bl 0x822df4d0
	ctx.lr = 0x822CC820;
	sub_822DF4D0(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfd f1,10144(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r7.u32 + 10144);
	// bl 0x822df278
	ctx.lr = 0x822CC834;
	sub_822DF278(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822df278
	ctx.lr = 0x822CC844;
	sub_822DF278(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r6,10136
	ctx.r4.s64 = ctx.r6.s64 + 10136;
	// bl 0x822df4d0
	ctx.lr = 0x822CC854;
	sub_822DF4D0(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfd f30,10128(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10128);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822df278
	ctx.lr = 0x822CC86C;
	sub_822DF278(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822df278
	ctx.lr = 0x822CC87C;
	sub_822DF278(ctx, base);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r4,10116
	ctx.r4.s64 = ctx.r4.s64 + 10116;
	// bl 0x822df4d0
	ctx.lr = 0x822CC88C;
	sub_822DF4D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822df278
	ctx.lr = 0x822CC89C;
	sub_822DF278(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822df278
	ctx.lr = 0x822CC8AC;
	sub_822DF278(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,10100
	ctx.r4.s64 = ctx.r11.s64 + 10100;
	// bl 0x822df4d0
	ctx.lr = 0x822CC8BC;
	sub_822DF4D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822df278
	ctx.lr = 0x822CC8CC;
	sub_822DF278(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822df278
	ctx.lr = 0x822CC8DC;
	sub_822DF278(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,10084
	ctx.r4.s64 = ctx.r10.s64 + 10084;
	// bl 0x822df4d0
	ctx.lr = 0x822CC8EC;
	sub_822DF4D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822df278
	ctx.lr = 0x822CC8FC;
	sub_822DF278(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822df278
	ctx.lr = 0x822CC90C;
	sub_822DF278(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,10076
	ctx.r5.s64 = ctx.r9.s64 + 10076;
	// addi r4,r8,10064
	ctx.r4.s64 = ctx.r8.s64 + 10064;
	// bl 0x822df340
	ctx.lr = 0x822CC924;
	sub_822DF340(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,10060
	ctx.r5.s64 = ctx.r7.s64 + 10060;
	// addi r4,r6,10048
	ctx.r4.s64 = ctx.r6.s64 + 10048;
	// bl 0x822df340
	ctx.lr = 0x822CC93C;
	sub_822DF340(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r5,10044
	ctx.r4.s64 = ctx.r5.s64 + 10044;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822df340
	ctx.lr = 0x822CC950;
	sub_822DF340(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dfb18
	ctx.lr = 0x822CC958;
	sub_822DFB18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CC964;
	sub_822DBAD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC6F0) {
	__imp__sub_822CC6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CC978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822CC980;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822dd968
	ctx.lr = 0x822CC998;
	sub_822DD968(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r30,r11,10372
	ctx.r30.s64 = ctx.r11.s64 + 10372;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822df5c8
	ctx.lr = 0x822CC9AC;
	sub_822DF5C8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lfd f31,23400(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r6.u32 + 23400);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r23,r11,10324
	ctx.r23.s64 = ctx.r11.s64 + 10324;
	// addi r20,r10,8828
	ctx.r20.s64 = ctx.r10.s64 + 8828;
	// addi r27,r9,10344
	ctx.r27.s64 = ctx.r9.s64 + 10344;
	// addi r26,r8,10352
	ctx.r26.s64 = ctx.r8.s64 + 10352;
	// addi r25,r7,10356
	ctx.r25.s64 = ctx.r7.s64 + 10356;
	// ble cr6,0x822cca88
	if (!ctx.cr6.gt) goto loc_822CCA88;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
loc_822CC9F0:
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x822dd968
	ctx.lr = 0x822CC9F8;
	sub_822DD968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822df340
	ctx.lr = 0x822CCA08;
	sub_822DF340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822df278
	ctx.lr = 0x822CCA18;
	sub_822DF278(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df340
	ctx.lr = 0x822CCA28;
	sub_822DF340(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x822cca38
	if (!ctx.cr6.eq) goto loc_822CCA38;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_822CCA38:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df340
	ctx.lr = 0x822CCA44;
	sub_822DF340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dfb18
	ctx.lr = 0x822CCA4C;
	sub_822DFB18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CCA58;
	sub_822DBAD0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cca7c
	if (ctx.cr6.eq) goto loc_822CCA7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dd6b8
	ctx.lr = 0x822CCA68;
	sub_822DD6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822CCA74;
	sub_822DCD28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822de480
	ctx.lr = 0x822CCA7C;
	sub_822DE480(ctx, base);
loc_822CCA7C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x822cc9f0
	if (!ctx.cr0.eq) goto loc_822CC9F0;
loc_822CCA88:
	// bl 0x822dd968
	ctx.lr = 0x822CCA8C;
	sub_822DD968(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,10400
	ctx.r5.s64 = ctx.r11.s64 + 10400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822df340
	ctx.lr = 0x822CCAA0;
	sub_822DF340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822df278
	ctx.lr = 0x822CCAB0;
	sub_822DF278(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df340
	ctx.lr = 0x822CCAC0;
	sub_822DF340(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x822ccad0
	if (!ctx.cr6.eq) goto loc_822CCAD0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_822CCAD0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df340
	ctx.lr = 0x822CCADC;
	sub_822DF340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dfb18
	ctx.lr = 0x822CCAE4;
	sub_822DFB18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CCAF0;
	sub_822DBAD0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ccb14
	if (ctx.cr6.eq) goto loc_822CCB14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd6b8
	ctx.lr = 0x822CCB00;
	sub_822DD6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822CCB0C;
	sub_822DCD28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de480
	ctx.lr = 0x822CCB14;
	sub_822DE480(ctx, base);
loc_822CCB14:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,10384
	ctx.r5.s64 = ctx.r11.s64 + 10384;
	// addi r4,r10,10064
	ctx.r4.s64 = ctx.r10.s64 + 10064;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822df340
	ctx.lr = 0x822CCB2C;
	sub_822DF340(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822dfb18
	ctx.lr = 0x822CCB34;
	sub_822DFB18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CCB40;
	sub_822DBAD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CC978) {
	__imp__sub_822CC978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822CCB58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,8828
	ctx.r29.s64 = ctx.r11.s64 + 8828;
	// bne cr6,0x822ccb78
	if (!ctx.cr6.eq) goto loc_822CCB78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822CCB78:
	// bl 0x822dfcd8
	ctx.lr = 0x822CCB7C;
	sub_822DFCD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ccc00
	if (ctx.cr6.eq) goto loc_822CCC00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10424
	ctx.r4.s64 = ctx.r11.s64 + 10424;
	// bl 0x822dcc40
	ctx.lr = 0x822CCB94;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CCB9C;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ccc00
	if (ctx.cr6.eq) goto loc_822CCC00;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822ccc00
	if (ctx.cr6.eq) goto loc_822CCC00;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ccc00
	if (ctx.cr6.eq) goto loc_822CCC00;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_822CCBC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ccbc4
	if (!ctx.cr6.eq) goto loc_822CCBC4;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x822ccc00
	if (ctx.cr6.gt) goto loc_822CCC00;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// bne cr6,0x822ccc08
	if (!ctx.cr6.eq) goto loc_822CCC08;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x822ccc10
	goto loc_822CCC10;
loc_822CCC00:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822ccc24
	goto loc_822CCC24;
loc_822CCC08:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,10420
	ctx.r6.s64 = ctx.r11.s64 + 10420;
loc_822CCC10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,19980
	ctx.r5.s64 = ctx.r11.s64 + 19980;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CCC24;
	sub_822ECA80(ctx, base);
loc_822CCC24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CCC2C;
	sub_822DBAD0(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CCB50) {
	__imp__sub_822CCB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CCC3C) {
	__imp__sub_822CCC3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822CCC44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ccc44
	if (!ctx.cr6.eq) goto loc_822CCC44;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x822cccd0
	if (ctx.cr6.eq) goto loc_822CCCD0;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_822CCC74:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822cccb8
	if (ctx.cr6.eq) goto loc_822CCCB8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_822CCC84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822cccb8
	if (ctx.cr6.eq) goto loc_822CCCB8;
	// lbzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// ori r4,r10,32
	ctx.r4.u64 = ctx.r10.u64 | 32;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822cccb8
	if (!ctx.cr6.eq) goto loc_822CCCB8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822ccc84
	if (ctx.cr6.lt) goto loc_822CCC84;
loc_822CCCB8:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822cccd8
	if (ctx.cr6.eq) goto loc_822CCCD8;
	// lbzu r11,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ccc74
	if (!ctx.cr6.eq) goto loc_822CCC74;
loc_822CCCD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822CCCD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CCC40) {
	__imp__sub_822CCC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822CCCE8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cce84
	if (ctx.cr6.eq) goto loc_822CCE84;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cce84
	if (ctx.cr6.eq) goto loc_822CCE84;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r26,r7,10496
	ctx.r26.s64 = ctx.r7.s64 + 10496;
	// addi r25,r8,27388
	ctx.r25.s64 = ctx.r8.s64 + 27388;
	// addi r29,r9,10464
	ctx.r29.s64 = ctx.r9.s64 + 10464;
	// addi r24,r10,10448
	ctx.r24.s64 = ctx.r10.s64 + 10448;
	// addi r23,r11,10436
	ctx.r23.s64 = ctx.r11.s64 + 10436;
loc_822CCD34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de118
	ctx.lr = 0x822CCD3C;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cce44
	if (ctx.cr6.eq) goto loc_822CCE44;
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cce44
	if (ctx.cr6.eq) goto loc_822CCE44;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822ccd90
	if (!ctx.cr6.lt) goto loc_822CCD90;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ccc40
	ctx.lr = 0x822CCD68;
	sub_822CCC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ccd84
	if (!ctx.cr6.eq) goto loc_822CCD84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ccc40
	ctx.lr = 0x822CCD7C;
	sub_822CCC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ccd90
	if (ctx.cr6.eq) goto loc_822CCD90;
loc_822CCD84:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x822cce78
	goto loc_822CCE78;
loc_822CCD90:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ccdec
	if (ctx.cr6.eq) goto loc_822CCDEC;
loc_822CCDA8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822ccde4
	if (ctx.cr6.eq) goto loc_822CCDE4;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// ori r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 | 32;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822ccde4
	if (!ctx.cr6.eq) goto loc_822CCDE4;
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ccda8
	if (!ctx.cr6.eq) goto loc_822CCDA8;
loc_822CCDE4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822cce04
	if (!ctx.cr6.eq) goto loc_822CCE04;
loc_822CCDEC:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cce04
	if (!ctx.cr6.eq) goto loc_822CCE04;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x822cce78
	goto loc_822CCE78;
loc_822CCE04:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822cce78
	if (!ctx.cr6.lt) goto loc_822CCE78;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ccc40
	ctx.lr = 0x822CCE1C;
	sub_822CCC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cce78
	if (ctx.cr6.eq) goto loc_822CCE78;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ccc40
	ctx.lr = 0x822CCE30;
	sub_822CCC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cce78
	if (ctx.cr6.eq) goto loc_822CCE78;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x822cce78
	goto loc_822CCE78;
loc_822CCE44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de190
	ctx.lr = 0x822CCE4C;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cce64
	if (!ctx.cr6.eq) goto loc_822CCE64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de168
	ctx.lr = 0x822CCE5C;
	sub_822DE168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cce78
	if (ctx.cr6.eq) goto loc_822CCE78;
loc_822CCE64:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ccce0
	ctx.lr = 0x822CCE78;
	sub_822CCCE0(ctx, base);
loc_822CCE78:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822ccd34
	if (!ctx.cr6.eq) goto loc_822CCD34;
loc_822CCE84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CCCE0) {
	__imp__sub_822CCCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CCE8C) {
	__imp__sub_822CCE8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CCE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822CCE98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826344d0
	ctx.lr = 0x822CCEB4;
	sub_826344D0(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r26,r29,36
	ctx.r26.s64 = ctx.r29.s64 + 36;
	// stw r27,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r27,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r27.u32);
	// addi r30,r11,8828
	ctx.r30.s64 = ctx.r11.s64 + 8828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822ccedc
	if (!ctx.cr6.eq) goto loc_822CCEDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822CCEDC:
	// bl 0x822dfcd8
	ctx.lr = 0x822CCEE0;
	sub_822DFCD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ccf00
	if (!ctx.cr6.eq) goto loc_822CCF00;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CCF00:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,10588
	ctx.r4.s64 = ctx.r11.s64 + 10588;
	// bl 0x822dcc40
	ctx.lr = 0x822CCF10;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CCF18;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ccf38
	if (ctx.cr6.eq) goto loc_822CCF38;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ccf38
	if (ctx.cr6.eq) goto loc_822CCF38;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x822ccf40
	goto loc_822CCF40;
loc_822CCF38:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_822CCF40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x822eca80
	ctx.lr = 0x822CCF54;
	sub_822ECA80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822ccf68
	if (!ctx.cr6.eq) goto loc_822CCF68;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822cd20c
	goto loc_822CD20C;
loc_822CCF68:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,10584
	ctx.r10.s64 = ctx.r10.s64 + 10584;
loc_822CCF74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822ccf98
	if (ctx.cr6.eq) goto loc_822CCF98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ccf74
	if (ctx.cr6.eq) goto loc_822CCF74;
loc_822CCF98:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822ccfac
	if (!ctx.cr6.eq) goto loc_822CCFAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822cd20c
	goto loc_822CD20C;
loc_822CCFAC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,10568
	ctx.r10.s64 = ctx.r10.s64 + 10568;
loc_822CCFB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822ccfdc
	if (ctx.cr6.eq) goto loc_822CCFDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ccfb8
	if (ctx.cr6.eq) goto loc_822CCFB8;
loc_822CCFDC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822ccff0
	if (!ctx.cr6.eq) goto loc_822CCFF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822cd20c
	goto loc_822CD20C;
loc_822CCFF0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,10548
	ctx.r10.s64 = ctx.r10.s64 + 10548;
loc_822CCFFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822cd020
	if (ctx.cr6.eq) goto loc_822CD020;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ccffc
	if (ctx.cr6.eq) goto loc_822CCFFC;
loc_822CD020:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822cd034
	if (!ctx.cr6.eq) goto loc_822CD034;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822cd20c
	goto loc_822CD20C;
loc_822CD034:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,10532
	ctx.r10.s64 = ctx.r10.s64 + 10532;
loc_822CD040:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822cd064
	if (ctx.cr6.eq) goto loc_822CD064;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cd040
	if (ctx.cr6.eq) goto loc_822CD040;
loc_822CD064:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822cd078
	if (!ctx.cr6.eq) goto loc_822CD078;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822cd20c
	goto loc_822CD20C;
loc_822CD078:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,10520
	ctx.r10.s64 = ctx.r10.s64 + 10520;
loc_822CD084:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822cd0a8
	if (ctx.cr6.eq) goto loc_822CD0A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cd084
	if (ctx.cr6.eq) goto loc_822CD084;
loc_822CD0A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822cd0bc
	if (!ctx.cr6.eq) goto loc_822CD0BC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822cd20c
	goto loc_822CD20C;
loc_822CD0BC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,10512
	ctx.r10.s64 = ctx.r10.s64 + 10512;
loc_822CD0C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822cd0ec
	if (ctx.cr6.eq) goto loc_822CD0EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cd0c8
	if (ctx.cr6.eq) goto loc_822CD0C8;
loc_822CD0EC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cd138
	if (ctx.cr6.eq) goto loc_822CD138;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,10504
	ctx.r10.s64 = ctx.r10.s64 + 10504;
loc_822CD100:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822cd124
	if (ctx.cr6.eq) goto loc_822CD124;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cd100
	if (ctx.cr6.eq) goto loc_822CD100;
loc_822CD124:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cd138
	if (ctx.cr6.eq) goto loc_822CD138;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822cd20c
	goto loc_822CD20C;
loc_822CD138:
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,8588
	ctx.r4.s64 = ctx.r10.s64 + 8588;
	// bl 0x822dcc40
	ctx.lr = 0x822CD150;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de190
	ctx.lr = 0x822CD158;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822cd1f0
	if (ctx.cr6.eq) goto loc_822CD1F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,8604
	ctx.r4.s64 = ctx.r11.s64 + 8604;
	// bl 0x822dcc40
	ctx.lr = 0x822CD170;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CD178;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd190
	if (ctx.cr6.eq) goto loc_822CD190;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x822cd194
	if (!ctx.cr6.eq) goto loc_822CD194;
loc_822CD190:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822CD194:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10116
	ctx.r4.s64 = ctx.r11.s64 + 10116;
	// bl 0x822dcc40
	ctx.lr = 0x822CD1A4;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CD1AC;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd1c4
	if (ctx.cr6.eq) goto loc_822CD1C4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x822cd1c8
	if (!ctx.cr6.eq) goto loc_822CD1C8;
loc_822CD1C4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822CD1C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cd1e0
	if (ctx.cr6.eq) goto loc_822CD1E0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r29,44
	ctx.r3.s64 = ctx.r29.s64 + 44;
	// bl 0x822c9388
	ctx.lr = 0x822CD1E0;
	sub_822C9388(ctx, base);
loc_822CD1E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cd20c
	if (ctx.cr6.eq) goto loc_822CD20C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x822cd200
	goto loc_822CD200;
loc_822CD1F0:
	// bl 0x822de140
	ctx.lr = 0x822CD1F4;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd20c
	if (ctx.cr6.eq) goto loc_822CD20C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822CD200:
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x822c9388
	ctx.lr = 0x822CD20C;
	sub_822C9388(ctx, base);
loc_822CD20C:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ccce0
	ctx.lr = 0x822CD228;
	sub_822CCCE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822cd238
	if (!ctx.cr6.lt) goto loc_822CD238;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_822CD238:
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CD244;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CCE90) {
	__imp__sub_822CCE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822CD258;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r11,8588
	ctx.r31.s64 = ctx.r11.s64 + 8588;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CD274;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd2c4
	if (ctx.cr6.eq) goto loc_822CD2C4;
	// bl 0x822de0f0
	ctx.lr = 0x822CD284;
	sub_822DE0F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cd2c4
	if (!ctx.cr6.eq) goto loc_822CD2C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de190
	ctx.lr = 0x822CD294;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd3f8
	if (ctx.cr6.eq) goto loc_822CD3F8;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cd2c4
	if (ctx.cr6.eq) goto loc_822CD2C4;
loc_822CD2A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de0f0
	ctx.lr = 0x822CD2B0;
	sub_822DE0F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd2d0
	if (ctx.cr6.eq) goto loc_822CD2D0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822cd2a8
	if (!ctx.cr6.eq) goto loc_822CD2A8;
loc_822CD2C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CD2D0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822cd3ec
	if (ctx.cr6.eq) goto loc_822CD3EC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822cd3ec
	if (ctx.cr6.eq) goto loc_822CD3EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,8604
	ctx.r4.s64 = ctx.r11.s64 + 8604;
	// bl 0x822dcc40
	ctx.lr = 0x822CD2F0;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CD2F8;
	sub_822DE140(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd314
	if (ctx.cr6.eq) goto loc_822CD314;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x822cd318
	if (!ctx.cr6.eq) goto loc_822CD318;
loc_822CD314:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_822CD318:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,10116
	ctx.r4.s64 = ctx.r11.s64 + 10116;
	// bl 0x822dcc40
	ctx.lr = 0x822CD328;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CD330;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd348
	if (ctx.cr6.eq) goto loc_822CD348;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x822cd34c
	if (!ctx.cr6.eq) goto loc_822CD34C;
loc_822CD348:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_822CD34C:
	// li r5,47
	ctx.r5.s64 = 47;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x826344d0
	ctx.lr = 0x822CD360;
	sub_826344D0(ctx, base);
	// li r5,95
	ctx.r5.s64 = 95;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// bl 0x826344d0
	ctx.lr = 0x822CD374;
	sub_826344D0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cd38c
	if (ctx.cr6.eq) goto loc_822CD38C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9388
	ctx.lr = 0x822CD38C;
	sub_822C9388(ctx, base);
loc_822CD38C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cd3a4
	if (ctx.cr6.eq) goto loc_822CD3A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822c9388
	ctx.lr = 0x822CD3A4;
	sub_822C9388(ctx, base);
loc_822CD3A4:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd3c8
	if (ctx.cr6.eq) goto loc_822CD3C8;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd3c8
	if (ctx.cr6.eq) goto loc_822CD3C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,10596
	ctx.r7.s64 = ctx.r11.s64 + 10596;
	// b 0x822cd3d0
	goto loc_822CD3D0;
loc_822CD3C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r11,8828
	ctx.r7.s64 = ctx.r11.s64 + 8828;
loc_822CD3D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,3496
	ctx.r5.s64 = ctx.r11.s64 + 3496;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CD3EC;
	sub_822ECA80(ctx, base);
loc_822CD3EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CD3F8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822cd418
	if (ctx.cr6.eq) goto loc_822CD418;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822cd418
	if (ctx.cr6.eq) goto loc_822CD418;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CD418;
	sub_822ECA80(ctx, base);
loc_822CD418:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD250) {
	__imp__sub_822CD250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CD424) {
	__imp__sub_822CD424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CD430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cd454
	if (ctx.cr6.eq) goto loc_822CD454;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822cd454
	if (ctx.cr6.eq) goto loc_822CD454;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_822CD454:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cd464
	if (!ctx.cr6.eq) goto loc_822CD464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
loc_822CD464:
	// bl 0x822dfcd8
	ctx.lr = 0x822CD468;
	sub_822DFCD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd498
	if (ctx.cr6.eq) goto loc_822CD498;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822cd250
	ctx.lr = 0x822CD480;
	sub_822CD250(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CD48C;
	sub_822DBAD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CD498:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822dbad0
	ctx.lr = 0x822CD4A4;
	sub_822DBAD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD428) {
	__imp__sub_822CD428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822CD4B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822cd4e4
	if (ctx.cr6.eq) goto loc_822CD4E4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822cd4e4
	if (ctx.cr6.eq) goto loc_822CD4E4;
	// stb r30,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r30.u8);
loc_822CD4E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cd4f4
	if (!ctx.cr6.eq) goto loc_822CD4F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
loc_822CD4F4:
	// bl 0x822dfcd8
	ctx.lr = 0x822CD4F8;
	sub_822DFCD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cd52c
	if (!ctx.cr6.eq) goto loc_822CD52C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cd520
	if (ctx.cr6.eq) goto loc_822CD520;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,10636
	ctx.r5.s64 = ctx.r11.s64 + 10636;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CD520;
	sub_822ECA80(ctx, base);
loc_822CD520:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CD52C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822cd250
	ctx.lr = 0x822CD53C;
	sub_822CD250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x822cd558
	if (ctx.cr6.eq) goto loc_822CD558;
	// bl 0x822dbad0
	ctx.lr = 0x822CD54C;
	sub_822DBAD0(ctx, base);
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CD558:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10616
	ctx.r4.s64 = ctx.r11.s64 + 10616;
	// bl 0x822dcc40
	ctx.lr = 0x822CD564;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CD56C;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd5c4
	if (ctx.cr6.eq) goto loc_822CD5C4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd5c4
	if (ctx.cr6.eq) goto loc_822CD5C4;
	// bl 0x822dfcd8
	ctx.lr = 0x822CD584;
	sub_822DFCD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd5c4
	if (ctx.cr6.eq) goto loc_822CD5C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10044
	ctx.r4.s64 = ctx.r11.s64 + 10044;
	// bl 0x822dcc40
	ctx.lr = 0x822CD59C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CD5A4;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cd5c4
	if (ctx.cr6.eq) goto loc_822CD5C4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd5c4
	if (ctx.cr6.eq) goto loc_822CD5C4;
	// bl 0x822c8540
	ctx.lr = 0x822CD5BC;
	sub_822C8540(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// b 0x822cd5e0
	goto loc_822CD5E0;
loc_822CD5C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cd5e0
	if (ctx.cr6.eq) goto loc_822CD5E0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,10600
	ctx.r5.s64 = ctx.r11.s64 + 10600;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CD5E0;
	sub_822ECA80(ctx, base);
loc_822CD5E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CD5E8;
	sub_822DBAD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CD5F0;
	sub_822DBAD0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD4B0) {
	__imp__sub_822CD4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CD604) {
	__imp__sub_822CD604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822CD610;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_822CD630:
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d00
	ctx.lr = 0x822CD63C;
	sub_82634D00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd650
	if (ctx.cr6.eq) goto loc_822CD650;
	// subf r31,r30,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r30.s64;
	// b 0x822cd670
	goto loc_822CD670;
loc_822CD650:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822CD654:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cd654
	if (!ctx.cr6.eq) goto loc_822CD654;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_822CD670:
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// bge cr6,0x822cd7dc
	if (!ctx.cr6.lt) goto loc_822CD7DC;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bge cr6,0x822cd7dc
	if (!ctx.cr6.lt) goto loc_822CD7DC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x822CD694;
	sub_82635430(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stbx r26,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u8);
	// beq cr6,0x822cd6b8
	if (ctx.cr6.eq) goto loc_822CD6B8;
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// b 0x822cd630
	goto loc_822CD630;
loc_822CD6B8:
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// bne cr6,0x822cd7dc
	if (!ctx.cr6.eq) goto loc_822CD7DC;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,10652
	ctx.r10.s64 = ctx.r10.s64 + 10652;
loc_822CD6CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822cd6f0
	if (ctx.cr6.eq) goto loc_822CD6F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cd6cc
	if (ctx.cr6.eq) goto loc_822CD6CC;
loc_822CD6F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822cd7dc
	if (!ctx.cr6.eq) goto loc_822CD7DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
	// addi r5,r11,19980
	ctx.r5.s64 = ctx.r11.s64 + 19980;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822eca80
	ctx.lr = 0x822CD714;
	sub_822ECA80(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822CD71C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cd71c
	if (!ctx.cr6.eq) goto loc_822CD71C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x822cd7dc
	if (!ctx.cr6.eq) goto loc_822CD7DC;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82635148
	ctx.lr = 0x822CD750;
	sub_82635148(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,113
	ctx.r10.s64 = ctx.r1.s64 + 113;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// addi r31,r10,-2
	ctx.r31.s64 = ctx.r10.s64 + -2;
	// li r30,4
	ctx.r30.s64 = 4;
loc_822CD768:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r5,16
	ctx.r5.s64 = 16;
	// lbzu r10,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r26.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x82635148
	ctx.lr = 0x822CD78C;
	sub_82635148(ctx, base);
	// not r9,r3
	ctx.r9.u64 = ~ctx.r3.u64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stwu r8,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r29.u32 = ea;
	// bne 0x822cd768
	if (!ctx.cr0.eq) goto loc_822CD768;
	// not r11,r28
	ctx.r11.u64 = ~ctx.r28.u64;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r10,12812
	ctx.r5.s64 = ctx.r10.s64 + 12812;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r4,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r4.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CD7D0;
	sub_822ECA80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822CD7DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD608) {
	__imp__sub_822CD608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CD7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822CD7F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,10728
	ctx.r4.s64 = ctx.r11.s64 + 10728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822CD814;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cd820
	if (!ctx.cr6.eq) goto loc_822CD820;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_822CD820:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10708
	ctx.r4.s64 = ctx.r11.s64 + 10708;
	// bl 0x82634c80
	ctx.lr = 0x822CD830;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd848
	if (ctx.cr6.eq) goto loc_822CD848;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6148, ctx.r11.u32);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CD848:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,10696
	ctx.r4.s64 = ctx.r11.s64 + 10696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822CD85C;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cdaf0
	if (!ctx.cr6.eq) goto loc_822CDAF0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822CD868:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cd868
	if (!ctx.cr6.eq) goto loc_822CD868;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x822cdaf0
	if (!ctx.cr6.lt) goto loc_822CDAF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r27,r11,8796
	ctx.r27.s64 = ctx.r11.s64 + 8796;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822eca80
	ctx.lr = 0x822CD8A8;
	sub_822ECA80(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822CD8B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cd8b0
	if (!ctx.cr6.eq) goto loc_822CD8B0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd90c
	if (ctx.cr6.eq) goto loc_822CD90C;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_822CD8E8:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x822cd900
	if (ctx.cr6.eq) goto loc_822CD900;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bne cr6,0x822cd90c
	if (!ctx.cr6.eq) goto loc_822CD90C;
loc_822CD900:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbu r30,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r9.u32 = ea;
	// bne 0x822cd8e8
	if (!ctx.cr0.eq) goto loc_822CD8E8;
loc_822CD90C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CD924;
	sub_822ECA80(ctx, base);
	// lbz r10,480(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 480);
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cdaf0
	if (ctx.cr6.eq) goto loc_822CDAF0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_822CD93C:
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bge cr6,0x822cd9a8
	if (!ctx.cr6.lt) goto loc_822CD9A8;
loc_822CD944:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x822cd95c
	if (ctx.cr6.eq) goto loc_822CD95C;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x822cd968
	if (!ctx.cr6.eq) goto loc_822CD968;
loc_822CD95C:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x822cd944
	goto loc_822CD944;
loc_822CD968:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822cd9a8
	if (ctx.cr6.eq) goto loc_822CD9A8;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822CD978:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x822cd99c
	if (ctx.cr6.eq) goto loc_822CD99C;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x822cd99c
	if (ctx.cr6.eq) goto loc_822CD99C;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cd978
	if (!ctx.cr6.eq) goto loc_822CD978;
loc_822CD99C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cd93c
	if (!ctx.cr6.eq) goto loc_822CD93C;
loc_822CD9A8:
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x822cdaf0
	if (ctx.cr6.lt) goto loc_822CDAF0;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d00
	ctx.lr = 0x822CD9C0;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cda28
	if (!ctx.cr6.eq) goto loc_822CDA28;
	// lwz r10,6144(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6144);
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bge cr6,0x822cdaf0
	if (!ctx.cr6.lt) goto loc_822CDAF0;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822CD9DC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822cd9dc
	if (!ctx.cr6.eq) goto loc_822CD9DC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// bge cr6,0x822cdaf0
	if (!ctx.cr6.lt) goto loc_822CDAF0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r9,6144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6144, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x822eca80
	ctx.lr = 0x822CDA20;
	sub_822ECA80(ctx, base);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CDA28:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cd608
	ctx.lr = 0x822CDA40;
	sub_822CD608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdaf0
	if (ctx.cr6.eq) goto loc_822CDAF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,9002
	ctx.r10.s64 = 9002;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,10660
	ctx.r30.s64 = ctx.r11.s64 + 10660;
loc_822CDA68:
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822eca80
	ctx.lr = 0x822CDA8C;
	sub_822ECA80(ctx, base);
	// lwz r11,6144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6144);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x822cdae4
	if (!ctx.cr6.lt) goto loc_822CDAE4;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_822CDAA0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822cdaa0
	if (!ctx.cr6.eq) goto loc_822CDAA0;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// bge cr6,0x822cdae4
	if (!ctx.cr6.lt) goto loc_822CDAE4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,6144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6144, ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x822eca80
	ctx.lr = 0x822CDAE4;
	sub_822ECA80(ctx, base);
loc_822CDAE4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822cda68
	if (!ctx.cr0.eq) goto loc_822CDA68;
loc_822CDAF0:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CD7E8) {
	__imp__sub_822CD7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CDAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822CDB00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,6152
	ctx.r5.s64 = 6152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826344d0
	ctx.lr = 0x822CDB1C;
	sub_826344D0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cdb2c
	if (ctx.cr6.eq) goto loc_822CDB2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822cdb34
	goto loc_822CDB34;
loc_822CDB2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
loc_822CDB34:
	// bl 0x822dfcd8
	ctx.lr = 0x822CDB38;
	sub_822DFCD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cdb50
	if (!ctx.cr6.eq) goto loc_822CDB50;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CDB50:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,8588
	ctx.r4.s64 = ctx.r11.s64 + 8588;
	// bl 0x822dcc40
	ctx.lr = 0x822CDB60;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cdbb0
	if (ctx.cr6.eq) goto loc_822CDBB0;
	// bl 0x822de0f0
	ctx.lr = 0x822CDB70;
	sub_822DE0F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cdbb0
	if (!ctx.cr6.eq) goto loc_822CDBB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de190
	ctx.lr = 0x822CDB80;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdbe8
	if (ctx.cr6.eq) goto loc_822CDBE8;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cdbb0
	if (ctx.cr6.eq) goto loc_822CDBB0;
loc_822CDB94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de0f0
	ctx.lr = 0x822CDB9C;
	sub_822DE0F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdbe8
	if (ctx.cr6.eq) goto loc_822CDBE8;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822cdb94
	if (!ctx.cr6.eq) goto loc_822CDB94;
loc_822CDBB0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,10616
	ctx.r4.s64 = ctx.r11.s64 + 10616;
	// bl 0x822dcc40
	ctx.lr = 0x822CDBC0;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CDBC8;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdbfc
	if (ctx.cr6.eq) goto loc_822CDBFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cdbfc
	if (ctx.cr6.eq) goto loc_822CDBFC;
	// bl 0x822dfcd8
	ctx.lr = 0x822CDBE0;
	sub_822DFCD8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x822cdc00
	goto loc_822CDC00;
loc_822CDBE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CDBF0;
	sub_822DBAD0(ctx, base);
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CDBFC:
	// li r27,0
	ctx.r27.s64 = 0;
loc_822CDC00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CDC08;
	sub_822DBAD0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822cdcdc
	if (ctx.cr6.eq) goto loc_822CDCDC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822de168
	ctx.lr = 0x822CDC18;
	sub_822DE168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x822cdc30
	if (!ctx.cr6.eq) goto loc_822CDC30;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10732
	ctx.r4.s64 = ctx.r11.s64 + 10732;
	// bl 0x822dcc40
	ctx.lr = 0x822CDC30;
	sub_822DCC40(ctx, base);
loc_822CDC30:
	// li r11,20
	ctx.r11.s64 = 20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x822cdcd4
	if (ctx.cr6.eq) goto loc_822CDCD4;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cdcd4
	if (ctx.cr6.eq) goto loc_822CDCD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,10372
	ctx.r28.s64 = ctx.r11.s64 + 10372;
loc_822CDC54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x822de140
	ctx.lr = 0x822CDC64;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdc7c
	if (ctx.cr6.eq) goto loc_822CDC7C;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x822dfcd8
	ctx.lr = 0x822CDC74;
	sub_822DFCD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822CDC7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de190
	ctx.lr = 0x822CDC84;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdcc0
	if (ctx.cr6.eq) goto loc_822CDCC0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CDC98;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CDCA0;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdcc0
	if (ctx.cr6.eq) goto loc_822CDCC0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cdcc0
	if (ctx.cr6.eq) goto loc_822CDCC0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822cd7e8
	ctx.lr = 0x822CDCC0;
	sub_822CD7E8(ctx, base);
loc_822CDCC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CDCC8;
	sub_822DBAD0(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822cdc54
	if (!ctx.cr6.eq) goto loc_822CDC54;
loc_822CDCD4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CDCDC;
	sub_822DBAD0(ctx, base);
loc_822CDCDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CDAF8) {
	__imp__sub_822CDAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CDCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822CDCF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x822de190
	ctx.lr = 0x822CDD08;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdef0
	if (ctx.cr6.eq) goto loc_822CDEF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,10424
	ctx.r4.s64 = ctx.r11.s64 + 10424;
	// bl 0x822dcc40
	ctx.lr = 0x822CDD20;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CDD28;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdd3c
	if (ctx.cr6.eq) goto loc_822CDD3C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cdd68
	if (!ctx.cr6.eq) goto loc_822CDD68;
loc_822CDD3C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,10744
	ctx.r4.s64 = ctx.r11.s64 + 10744;
	// bl 0x822dcc40
	ctx.lr = 0x822CDD4C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CDD54;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdef0
	if (ctx.cr6.eq) goto loc_822CDEF0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cdef0
	if (ctx.cr6.eq) goto loc_822CDEF0;
loc_822CDD68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822cdef0
	if (ctx.cr6.eq) goto loc_822CDEF0;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x822cdef0
	if (!ctx.cr6.lt) goto loc_822CDEF0;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// bne cr6,0x822cdd98
	if (!ctx.cr6.eq) goto loc_822CDD98;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r10,8828
	ctx.r6.s64 = ctx.r10.s64 + 8828;
	// b 0x822cdda0
	goto loc_822CDDA0;
loc_822CDD98:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r10,10420
	ctx.r6.s64 = ctx.r10.s64 + 10420;
loc_822CDDA0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r5,r10,19980
	ctx.r5.s64 = ctx.r10.s64 + 19980;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822eca80
	ctx.lr = 0x822CDDB8;
	sub_822ECA80(ctx, base);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822cde14
	if (!ctx.cr6.gt) goto loc_822CDE14;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_822CDDCC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822CDDD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822cddf8
	if (ctx.cr6.eq) goto loc_822CDDF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cddd4
	if (ctx.cr6.eq) goto loc_822CDDD4;
loc_822CDDF8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cdef0
	if (ctx.cr6.eq) goto loc_822CDEF0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,272
	ctx.r8.s64 = ctx.r8.s64 + 272;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822cddcc
	if (ctx.cr6.lt) goto loc_822CDDCC;
loc_822CDE14:
	// mulli r11,r6,272
	ctx.r11.s64 = ctx.r6.s64 * 272;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,272
	ctx.r5.s64 = 272;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822CDE34;
	sub_826344D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,8796
	ctx.r29.s64 = ctx.r11.s64 + 8796;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822CDE50;
	sub_822ECA80(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,5936
	ctx.r4.s64 = ctx.r10.s64 + 5936;
	// bl 0x822dcc40
	ctx.lr = 0x822CDE60;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CDE68;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cde80
	if (ctx.cr6.eq) goto loc_822CDE80;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x822cde84
	if (!ctx.cr6.eq) goto loc_822CDE84;
loc_822CDE80:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822CDE84:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,10588
	ctx.r4.s64 = ctx.r11.s64 + 10588;
	// bl 0x822dcc40
	ctx.lr = 0x822CDE94;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822CDE9C;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdeb4
	if (ctx.cr6.eq) goto loc_822CDEB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x822cdeb8
	if (!ctx.cr6.eq) goto loc_822CDEB8;
loc_822CDEB4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822CDEB8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822cded4
	if (ctx.cr6.eq) goto loc_822CDED4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x822eca80
	ctx.lr = 0x822CDED4;
	sub_822ECA80(ctx, base);
loc_822CDED4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cdef0
	if (ctx.cr6.eq) goto loc_822CDEF0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// bl 0x822eca80
	ctx.lr = 0x822CDEF0;
	sub_822ECA80(ctx, base);
loc_822CDEF0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822de190
	ctx.lr = 0x822CDEF8;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cdf10
	if (!ctx.cr6.eq) goto loc_822CDF10;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822de168
	ctx.lr = 0x822CDF08;
	sub_822DE168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cdf44
	if (ctx.cr6.eq) goto loc_822CDF44;
loc_822CDF10:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822cdf44
	if (ctx.cr6.eq) goto loc_822CDF44;
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cdf44
	if (ctx.cr6.eq) goto loc_822CDF44;
loc_822CDF24:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cdce8
	ctx.lr = 0x822CDF38;
	sub_822CDCE8(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822cdf24
	if (!ctx.cr6.eq) goto loc_822CDF24;
loc_822CDF44:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CDCE8) {
	__imp__sub_822CDCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CDF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CDF4C) {
	__imp__sub_822CDF4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CDF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CDF58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cdf74
	if (!ctx.cr6.eq) goto loc_822CDF74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
loc_822CDF74:
	// bl 0x822dfcd8
	ctx.lr = 0x822CDF78;
	sub_822DFCD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cdf90
	if (!ctx.cr6.eq) goto loc_822CDF90;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CDF90:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cdce8
	ctx.lr = 0x822CDFAC;
	sub_822CDCE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CDFB4;
	sub_822DBAD0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CDF50) {
	__imp__sub_822CDF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CDFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822CDFC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cdfdc
	if (!ctx.cr6.eq) goto loc_822CDFDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
loc_822CDFDC:
	// bl 0x822dfcd8
	ctx.lr = 0x822CDFE0;
	sub_822DFCD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cdff8
	if (!ctx.cr6.eq) goto loc_822CDFF8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CDFF8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,10824
	ctx.r4.s64 = ctx.r11.s64 + 10824;
	// li r30,-1
	ctx.r30.s64 = -1;
	// bl 0x822dcc40
	ctx.lr = 0x822CE00C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de118
	ctx.lr = 0x822CE014;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ce034
	if (ctx.cr6.eq) goto loc_822CE034;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822dbad0
	ctx.lr = 0x822CE028;
	sub_822DBAD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CE034:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,10788
	ctx.r4.s64 = ctx.r11.s64 + 10788;
	// bl 0x822dcc40
	ctx.lr = 0x822CE044;
	sub_822DCC40(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,10752
	ctx.r4.s64 = ctx.r10.s64 + 10752;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822CE058;
	sub_822DCC40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de118
	ctx.lr = 0x822CE064;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ce07c
	if (!ctx.cr6.eq) goto loc_822CE07C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822de118
	ctx.lr = 0x822CE074;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ce0b8
	if (ctx.cr6.eq) goto loc_822CE0B8;
loc_822CE07C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de118
	ctx.lr = 0x822CE084;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ce094
	if (ctx.cr6.eq) goto loc_822CE094;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x822ce098
	goto loc_822CE098;
loc_822CE094:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822CE098:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822de118
	ctx.lr = 0x822CE0A0;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ce0b0
	if (ctx.cr6.eq) goto loc_822CE0B0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// b 0x822ce0b4
	goto loc_822CE0B4;
loc_822CE0B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CE0B4:
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822CE0B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CE0C0;
	sub_822DBAD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CDFC0) {
	__imp__sub_822CDFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE0CC) {
	__imp__sub_822CE0CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822CE0D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce100
	if (ctx.cr6.eq) goto loc_822CE100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10860
	ctx.r4.s64 = ctx.r11.s64 + 10860;
	// bl 0x82634c80
	ctx.lr = 0x822CE0FC;
	sub_82634C80(ctx, base);
	// b 0x822ce104
	goto loc_822CE104;
loc_822CE100:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822CE104:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ce150
	if (ctx.cr6.eq) goto loc_822CE150;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r27,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r27.u8);
	// beq cr6,0x822ce150
	if (ctx.cr6.eq) goto loc_822CE150;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,10856
	ctx.r4.s64 = ctx.r11.s64 + 10856;
	// bl 0x82635ac8
	ctx.lr = 0x822CE12C;
	sub_82635AC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822ce13c
	if (ctx.cr6.lt) goto loc_822CE13C;
	// addi r31,r28,-1
	ctx.r31.s64 = ctx.r28.s64 + -1;
loc_822CE13C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822CE14C;
	sub_82635430(ctx, base);
	// stbx r27,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r27.u8);
loc_822CE150:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE0D0) {
	__imp__sub_822CE0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE158) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822CE180;
	sub_826344D0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,416
	ctx.r6.s64 = ctx.r11.s64 + 416;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822eca80
	ctx.lr = 0x822CE1A0;
	sub_822ECA80(ctx, base);
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

PPC_WEAK_FUNC(sub_822CE158) {
	__imp__sub_822CE158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CE1C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// addi r29,r11,8828
	ctx.r29.s64 = ctx.r11.s64 + 8828;
	// bne cr6,0x822ce1ec
	if (!ctx.cr6.eq) goto loc_822CE1EC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x822ce1f4
	goto loc_822CE1F4;
loc_822CE1EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,10420
	ctx.r6.s64 = ctx.r11.s64 + 10420;
loc_822CE1F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r5,r11,19980
	ctx.r5.s64 = ctx.r11.s64 + 19980;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x822eca80
	ctx.lr = 0x822CE208;
	sub_822ECA80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bne cr6,0x822ce218
	if (!ctx.cr6.eq) goto loc_822CE218;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_822CE218:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// addi r3,r30,196
	ctx.r3.s64 = ctx.r30.s64 + 196;
	// bl 0x822eca80
	ctx.lr = 0x822CE22C;
	sub_822ECA80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE1B8) {
	__imp__sub_822CE1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE234) {
	__imp__sub_822CE234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822CE240;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// bl 0x822eca80
	ctx.lr = 0x822CE274;
	sub_822ECA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,8696
	ctx.r10.s64 = ctx.r11.s64 + 8696;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822CE280:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822ce2a4
	if (ctx.cr6.eq) goto loc_822CE2A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ce280
	if (ctx.cr6.eq) goto loc_822CE280;
loc_822CE2A4:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r5,r31,244
	ctx.r5.s64 = ctx.r31.s64 + 244;
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822ce2c8
	if (ctx.cr6.eq) goto loc_822CE2C8;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822ce2d0
	goto loc_822CE2D0;
loc_822CE2C8:
	// addi r4,r11,8828
	ctx.r4.s64 = ctx.r11.s64 + 8828;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822CE2D0:
	// bl 0x822cc550
	ctx.lr = 0x822CE2D4;
	sub_822CC550(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ce300
	if (!ctx.cr6.eq) goto loc_822CE300;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CE2F4;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CE300:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822ce314
	if (ctx.cr6.eq) goto loc_822CE314;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,10960
	ctx.r6.s64 = ctx.r11.s64 + 10960;
	// b 0x822ce31c
	goto loc_822CE31C;
loc_822CE314:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,10936
	ctx.r6.s64 = ctx.r11.s64 + 10936;
loc_822CE31C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r29,r11,10928
	ctx.r29.s64 = ctx.r11.s64 + 10928;
	// addi r5,r10,-4048
	ctx.r5.s64 = ctx.r10.s64 + -4048;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x822cc128
	ctx.lr = 0x822CE344;
	sub_822CC128(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de480
	ctx.lr = 0x822CE350;
	sub_822DE480(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822ce364
	if (ctx.cr6.eq) goto loc_822CE364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CE364:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822ce378
	if (ctx.cr6.lt) goto loc_822CE378;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// ble cr6,0x822ce39c
	if (!ctx.cr6.gt) goto loc_822CE39C;
loc_822CE378:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CE388;
	sub_822CB788(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CE390;
	sub_822D7E48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CE39C:
	// li r5,192
	ctx.r5.s64 = 192;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822ccb50
	ctx.lr = 0x822CE3AC;
	sub_822CCB50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CE3B8;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822ce3e0
	if (ctx.cr6.eq) goto loc_822CE3E0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,10904
	ctx.r5.s64 = ctx.r11.s64 + 10904;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CE3D4;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822CE3E0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,10876
	ctx.r3.s64 = ctx.r11.s64 + 10876;
	// bl 0x822ebbc8
	ctx.lr = 0x822CE3F0;
	sub_822EBBC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE238) {
	__imp__sub_822CE238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE3FC) {
	__imp__sub_822CE3FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CE408;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826344d0
	ctx.lr = 0x822CE428;
	sub_826344D0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ce464
	if (!ctx.cr6.eq) goto loc_822CE464;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9724
	ctx.r5.s64 = ctx.r11.s64 + 9724;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CE458;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CE464:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r11,11036
	ctx.r7.s64 = ctx.r11.s64 + 11036;
	// addi r5,r10,19980
	ctx.r5.s64 = ctx.r10.s64 + 19980;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822eca80
	ctx.lr = 0x822CE480;
	sub_822ECA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,10588
	ctx.r31.s64 = ctx.r11.s64 + 10588;
	// addi r5,r10,-3692
	ctx.r5.s64 = ctx.r10.s64 + -3692;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// bl 0x822cc128
	ctx.lr = 0x822CE4AC;
	sub_822CC128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ce5b4
	if (!ctx.cr6.eq) goto loc_822CE5B4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,404
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 404, ctx.xer);
	// bne cr6,0x822ce4e4
	if (!ctx.cr6.eq) goto loc_822CE4E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CE4D0;
	sub_822CB788(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CE4D8;
	sub_822D7E48(ctx, base);
	// li r3,-7
	ctx.r3.s64 = -7;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CE4E4:
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822ce4f4
	if (ctx.cr6.lt) goto loc_822CE4F4;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// ble cr6,0x822ce518
	if (!ctx.cr6.gt) goto loc_822CE518;
loc_822CE4F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CE504;
	sub_822CB788(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CE50C;
	sub_822D7E48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CE518:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822cce90
	ctx.lr = 0x822CE524;
	sub_822CCE90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ce580
	if (!ctx.cr6.eq) goto loc_822CE580;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822ce580
	if (!ctx.cr6.eq) goto loc_822CE580;
	// bl 0x822eac70
	ctx.lr = 0x822CE540;
	sub_822EAC70(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// ld r11,-22872(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -22872);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822ce55c
	if (ctx.cr6.eq) goto loc_822CE55C;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r11,60000
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 60000, ctx.xer);
	// blt cr6,0x822ce580
	if (ctx.cr6.lt) goto loc_822CE580;
loc_822CE55C:
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r3,-22872(r10)
	PPC_STORE_U64(ctx.r10.u32 + -22872, ctx.r3.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ce574
	if (!ctx.cr6.eq) goto loc_822CE574;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,8828
	ctx.r4.s64 = ctx.r11.s64 + 8828;
loc_822CE574:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,11008
	ctx.r3.s64 = ctx.r11.s64 + 11008;
	// bl 0x822ebbc8
	ctx.lr = 0x822CE580;
	sub_822EBBC8(ctx, base);
loc_822CE580:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CE588;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822ce5b0
	if (ctx.cr6.eq) goto loc_822CE5B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,10984
	ctx.r5.s64 = ctx.r11.s64 + 10984;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CE5A4;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CE5B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CE5B4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE400) {
	__imp__sub_822CE400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE5BC) {
	__imp__sub_822CE5BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CE5C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r6,r3,196
	ctx.r6.s64 = ctx.r3.s64 + 196;
	// addi r5,r10,11088
	ctx.r5.s64 = ctx.r10.s64 + 11088;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822eca80
	ctx.lr = 0x822CE5F8;
	sub_822ECA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r31,r11,11076
	ctx.r31.s64 = ctx.r11.s64 + 11076;
	// addi r5,r9,-3692
	ctx.r5.s64 = ctx.r9.s64 + -3692;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x822cc128
	ctx.lr = 0x822CE624;
	sub_822CC128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ce6a0
	if (!ctx.cr6.eq) goto loc_822CE6A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822ce640
	if (ctx.cr6.lt) goto loc_822CE640;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// ble cr6,0x822ce664
	if (!ctx.cr6.gt) goto loc_822CE664;
loc_822CE640:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CE650;
	sub_822CB788(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d7e48
	ctx.lr = 0x822CE658;
	sub_822D7E48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CE664:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822cdfc0
	ctx.lr = 0x822CE66C;
	sub_822CDFC0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ce684
	if (!ctx.cr6.eq) goto loc_822CE684;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,8828
	ctx.r4.s64 = ctx.r11.s64 + 8828;
loc_822CE684:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,11044
	ctx.r3.s64 = ctx.r11.s64 + 11044;
	// bl 0x822ebbc8
	ctx.lr = 0x822CE690;
	sub_822EBBC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d7e48
	ctx.lr = 0x822CE698;
	sub_822D7E48(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
loc_822CE6A0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE5C0) {
	__imp__sub_822CE5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822CE6B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ce6ec
	if (!ctx.cr6.eq) goto loc_822CE6EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9724
	ctx.r5.s64 = ctx.r11.s64 + 9724;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CE6E0;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822CE6E4:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822CE6EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r11,11112
	ctx.r7.s64 = ctx.r11.s64 + 11112;
	// addi r5,r10,19980
	ctx.r5.s64 = ctx.r10.s64 + 19980;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822eca80
	ctx.lr = 0x822CE708;
	sub_822ECA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,10008
	ctx.r25.s64 = ctx.r11.s64 + 10008;
	// addi r28,r10,11104
	ctx.r28.s64 = ctx.r10.s64 + 11104;
	// addi r26,r9,-4048
	ctx.r26.s64 = ctx.r9.s64 + -4048;
loc_822CE724:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ce744
	if (!ctx.cr6.eq) goto loc_822CE744;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822cbe30
	ctx.lr = 0x822CE73C;
	sub_822CBE30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ce6e4
	if (!ctx.cr6.eq) goto loc_822CE6E4;
loc_822CE744:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,152(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// bl 0x822dd968
	ctx.lr = 0x822CE750;
	sub_822DD968(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x822df340
	ctx.lr = 0x822CE760;
	sub_822DF340(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822dfb18
	ctx.lr = 0x822CE768;
	sub_822DFB18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822CE774;
	sub_822DBAD0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822ce804
	if (ctx.cr6.eq) goto loc_822CE804;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// bl 0x822cc128
	ctx.lr = 0x822CE7A0;
	sub_822CC128(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822CE7AC;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822ce824
	if (!ctx.cr6.eq) goto loc_822CE824;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822ce7c8
	if (ctx.cr6.lt) goto loc_822CE7C8;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// ble cr6,0x822ce830
	if (!ctx.cr6.gt) goto loc_822CE830;
loc_822CE7C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CE7D8;
	sub_822CB788(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822d7e48
	ctx.lr = 0x822CE7E0;
	sub_822D7E48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// bl 0x822c84c0
	ctx.lr = 0x822CE7EC;
	sub_822C84C0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x822ce724
	if (ctx.cr6.lt) goto loc_822CE724;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822CE804:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CE818;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822CE824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822CE830:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822d7e48
	ctx.lr = 0x822CE838;
	sub_822D7E48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE6A8) {
	__imp__sub_822CE6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CE844) {
	__imp__sub_822CE844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822CE850;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ce890
	if (!ctx.cr6.eq) goto loc_822CE890;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9724
	ctx.r5.s64 = ctx.r11.s64 + 9724;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CE884;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CE890:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r11,11124
	ctx.r7.s64 = ctx.r11.s64 + 11124;
	// addi r5,r10,19980
	ctx.r5.s64 = ctx.r10.s64 + 19980;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822eca80
	ctx.lr = 0x822CE8AC;
	sub_822ECA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc6f0
	ctx.lr = 0x822CE8B4;
	sub_822CC6F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ce8e0
	if (!ctx.cr6.eq) goto loc_822CE8E0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CE8D4;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CE8E0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r29,r11,10044
	ctx.r29.s64 = ctx.r11.s64 + 10044;
	// addi r5,r10,-4048
	ctx.r5.s64 = ctx.r10.s64 + -4048;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// bl 0x822cc128
	ctx.lr = 0x822CE90C;
	sub_822CC128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de480
	ctx.lr = 0x822CE918;
	sub_822DE480(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822ce92c
	if (ctx.cr6.eq) goto loc_822CE92C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CE92C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822ce940
	if (ctx.cr6.lt) goto loc_822CE940;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// ble cr6,0x822ce964
	if (!ctx.cr6.gt) goto loc_822CE964;
loc_822CE940:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CE950;
	sub_822CB788(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CE958;
	sub_822D7E48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CE964:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CE96C;
	sub_822D7E48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE848) {
	__imp__sub_822CE848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CE978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CE980;
	__savegprlr_29(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ce9c8
	if (!ctx.cr6.eq) goto loc_822CE9C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9724
	ctx.r5.s64 = ctx.r11.s64 + 9724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CE9BC;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CE9C8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r11,11124
	ctx.r7.s64 = ctx.r11.s64 + 11124;
	// addi r5,r10,19980
	ctx.r5.s64 = ctx.r10.s64 + 19980;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822eca80
	ctx.lr = 0x822CE9E4;
	sub_822ECA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,11140
	ctx.r31.s64 = ctx.r11.s64 + 11140;
	// addi r5,r10,-3692
	ctx.r5.s64 = ctx.r10.s64 + -3692;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// bl 0x822cc128
	ctx.lr = 0x822CEA10;
	sub_822CC128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ceac8
	if (!ctx.cr6.eq) goto loc_822CEAC8;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r8,204
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 204, ctx.xer);
	// beq cr6,0x822ceabc
	if (ctx.cr6.eq) goto loc_822CEABC;
	// cmpwi cr6,r8,200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 200, ctx.xer);
	// blt cr6,0x822cea4c
	if (ctx.cr6.lt) goto loc_822CEA4C;
	// cmpwi cr6,r8,299
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 299, ctx.xer);
	// bgt cr6,0x822cea4c
	if (ctx.cr6.gt) goto loc_822CEA4C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822cb8d0
	ctx.lr = 0x822CEA3C;
	sub_822CB8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ceabc
	if (!ctx.cr6.eq) goto loc_822CEABC;
	// cmpwi cr6,r8,299
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 299, ctx.xer);
	// ble cr6,0x822cea70
	if (!ctx.cr6.gt) goto loc_822CEA70;
loc_822CEA4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CEA5C;
	sub_822CB788(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CEA64;
	sub_822D7E48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CEA70:
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822cd4b0
	ctx.lr = 0x822CEA84;
	sub_822CD4B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CEA90;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822ceab0
	if (ctx.cr6.eq) goto loc_822CEAB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,11132
	ctx.r5.s64 = ctx.r11.s64 + 11132;
	// li r4,-94
	ctx.r4.s64 = -94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CEAB0;
	sub_822C86C8(ctx, base);
loc_822CEAB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CEABC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CEAC4;
	sub_822D7E48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CEAC8:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CE978) {
	__imp__sub_822CE978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CEAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822CEAD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ceb20
	if (!ctx.cr6.eq) goto loc_822CEB20;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9724
	ctx.r5.s64 = ctx.r11.s64 + 9724;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CEB14;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CEB20:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r11,11160
	ctx.r7.s64 = ctx.r11.s64 + 11160;
	// addi r5,r10,19980
	ctx.r5.s64 = ctx.r10.s64 + 19980;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822eca80
	ctx.lr = 0x822CEB3C;
	sub_822ECA80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cc978
	ctx.lr = 0x822CEB4C;
	sub_822CC978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ceb78
	if (!ctx.cr6.eq) goto loc_822CEB78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CEB6C;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CEB78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r29,r11,28408
	ctx.r29.s64 = ctx.r11.s64 + 28408;
	// addi r5,r10,-4048
	ctx.r5.s64 = ctx.r10.s64 + -4048;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// bl 0x822cc128
	ctx.lr = 0x822CEBA4;
	sub_822CC128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de480
	ctx.lr = 0x822CEBB0;
	sub_822DE480(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822cebc4
	if (ctx.cr6.eq) goto loc_822CEBC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CEBC4:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822cebd8
	if (ctx.cr6.lt) goto loc_822CEBD8;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// ble cr6,0x822cebfc
	if (!ctx.cr6.gt) goto loc_822CEBFC;
loc_822CEBD8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CEBE8;
	sub_822CB788(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d7e48
	ctx.lr = 0x822CEBF0;
	sub_822D7E48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CEBFC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822cb8d0
	ctx.lr = 0x822CEC04;
	sub_822CB8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cec28
	if (!ctx.cr6.eq) goto loc_822CEC28;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x822cd428
	ctx.lr = 0x822CEC1C;
	sub_822CD428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x822cec2c
	if (!ctx.cr6.eq) goto loc_822CEC2C;
loc_822CEC28:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822CEC2C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d7e48
	ctx.lr = 0x822CEC34;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822cec60
	if (ctx.cr6.eq) goto loc_822CEC60;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r11,11152
	ctx.r5.s64 = ctx.r11.s64 + 11152;
	// li r4,-94
	ctx.r4.s64 = -94;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CEC54;
	sub_822C86C8(ctx, base);
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CEC60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CEAD0) {
	__imp__sub_822CEAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CEC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CEC6C) {
	__imp__sub_822CEC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CEC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CEC78;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,6152
	ctx.r5.s64 = 6152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826344d0
	ctx.lr = 0x822CEC98;
	sub_826344D0(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cecc8
	if (!ctx.cr6.eq) goto loc_822CECC8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9724
	ctx.r5.s64 = ctx.r11.s64 + 9724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CECBC;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CECC8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r11,11160
	ctx.r7.s64 = ctx.r11.s64 + 11160;
	// addi r5,r10,19980
	ctx.r5.s64 = ctx.r10.s64 + 19980;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822eca80
	ctx.lr = 0x822CECE4;
	sub_822ECA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,11220
	ctx.r31.s64 = ctx.r11.s64 + 11220;
	// addi r5,r10,-3692
	ctx.r5.s64 = ctx.r10.s64 + -3692;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// bl 0x822cc128
	ctx.lr = 0x822CED10;
	sub_822CC128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cede4
	if (!ctx.cr6.eq) goto loc_822CEDE4;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r8,204
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 204, ctx.xer);
	// beq cr6,0x822cedd8
	if (ctx.cr6.eq) goto loc_822CEDD8;
	// cmpwi cr6,r8,200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 200, ctx.xer);
	// blt cr6,0x822ced4c
	if (ctx.cr6.lt) goto loc_822CED4C;
	// cmpwi cr6,r8,299
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 299, ctx.xer);
	// bgt cr6,0x822ced4c
	if (ctx.cr6.gt) goto loc_822CED4C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822cb8d0
	ctx.lr = 0x822CED3C;
	sub_822CB8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cedd8
	if (!ctx.cr6.eq) goto loc_822CEDD8;
	// cmpwi cr6,r8,299
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 299, ctx.xer);
	// ble cr6,0x822ced70
	if (!ctx.cr6.gt) goto loc_822CED70;
loc_822CED4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CED5C;
	sub_822CB788(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CED64;
	sub_822D7E48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CED70:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822cdaf8
	ctx.lr = 0x822CED7C;
	sub_822CDAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CED88;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,-8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -8, ctx.xer);
	// bne cr6,0x822cedb0
	if (!ctx.cr6.eq) goto loc_822CEDB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,11196
	ctx.r5.s64 = ctx.r11.s64 + 11196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CEDA4;
	sub_822C86C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CEDB0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822cedcc
	if (ctx.cr6.eq) goto loc_822CEDCC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,11168
	ctx.r5.s64 = ctx.r11.s64 + 11168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CEDCC;
	sub_822C86C8(ctx, base);
loc_822CEDCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CEDD8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CEDE0;
	sub_822D7E48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CEDE4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CEC70) {
	__imp__sub_822CEC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CEDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CEDEC) {
	__imp__sub_822CEDEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CEDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822CEDF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cee34
	if (!ctx.cr6.eq) goto loc_822CEE34;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9724
	ctx.r5.s64 = ctx.r11.s64 + 9724;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CEE28;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CEE34:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r11,11244
	ctx.r7.s64 = ctx.r11.s64 + 11244;
	// addi r5,r10,19980
	ctx.r5.s64 = ctx.r10.s64 + 19980;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822eca80
	ctx.lr = 0x822CEE50;
	sub_822ECA80(ctx, base);
	// bl 0x822eac70
	ctx.lr = 0x822CEE54;
	sub_822EAC70(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,11232
	ctx.r30.s64 = ctx.r11.s64 + 11232;
	// addi r5,r9,-4048
	ctx.r5.s64 = ctx.r9.s64 + -4048;
	// addi r7,r10,8828
	ctx.r7.s64 = ctx.r10.s64 + 8828;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822cc128
	ctx.lr = 0x822CEE88;
	sub_822CC128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cef20
	if (!ctx.cr6.eq) goto loc_822CEF20;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822ceec0
	if (ctx.cr6.lt) goto loc_822CEEC0;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// bgt cr6,0x822ceec0
	if (ctx.cr6.gt) goto loc_822CEEC0;
	// bl 0x822eac70
	ctx.lr = 0x822CEEA8;
	sub_822EAC70(ctx, base);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r29,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r7,424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 424, ctx.r7.u32);
loc_822CEEC0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822ceed4
	if (ctx.cr6.lt) goto loc_822CEED4;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// ble cr6,0x822ceee4
	if (!ctx.cr6.gt) goto loc_822CEEE4;
loc_822CEED4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CEEE4;
	sub_822CB788(ctx, base);
loc_822CEEE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CEEEC;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,404
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 404, ctx.xer);
	// bne cr6,0x822cef00
	if (!ctx.cr6.eq) goto loc_822CEF00;
	// li r3,-7
	ctx.r3.s64 = -7;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822CEF00:
	// cmpwi cr6,r31,200
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 200, ctx.xer);
	// blt cr6,0x822cef14
	if (ctx.cr6.lt) goto loc_822CEF14;
	// cmpwi cr6,r31,299
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 299, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822cef18
	if (!ctx.cr6.gt) goto loc_822CEF18;
loc_822CEF14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CEF18:
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822CEF20:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CEDF0) {
	__imp__sub_822CEDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CEF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CEF30;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x822cef58
	if (!ctx.cr6.eq) goto loc_822CEF58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
	// b 0x822cef60
	goto loc_822CEF60;
loc_822CEF58:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,10420
	ctx.r6.s64 = ctx.r11.s64 + 10420;
loc_822CEF60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r5,r11,19980
	ctx.r5.s64 = ctx.r11.s64 + 19980;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822eca80
	ctx.lr = 0x822CEF74;
	sub_822ECA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,11264
	ctx.r31.s64 = ctx.r11.s64 + 11264;
	// addi r5,r10,11256
	ctx.r5.s64 = ctx.r10.s64 + 11256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cc128
	ctx.lr = 0x822CEFA0;
	sub_822CC128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cefe8
	if (!ctx.cr6.eq) goto loc_822CEFE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x822cefbc
	if (ctx.cr6.lt) goto loc_822CEFBC;
	// cmpwi cr6,r11,299
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 299, ctx.xer);
	// ble cr6,0x822ceff0
	if (!ctx.cr6.gt) goto loc_822CEFF0;
loc_822CEFBC:
	// cmpwi cr6,r11,404
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 404, ctx.xer);
	// beq cr6,0x822ceff0
	if (ctx.cr6.eq) goto loc_822CEFF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822cb788
	ctx.lr = 0x822CEFD8;
	sub_822CB788(ctx, base);
loc_822CEFD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d7e48
	ctx.lr = 0x822CEFE0;
	sub_822D7E48(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822CEFE8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CEFF0:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x822cefd8
	goto loc_822CEFD8;
}

PPC_WEAK_FUNC(sub_822CEF28) {
	__imp__sub_822CEF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CEFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf070
	if (ctx.cr6.eq) goto loc_822CF070;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CF028:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822cf028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CF028;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822cef28
	ctx.lr = 0x822CF040;
	sub_822CEF28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cf05c
	if (ctx.cr6.eq) goto loc_822CF05C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,11308
	ctx.r3.s64 = ctx.r11.s64 + 11308;
	// bl 0x822ebbc8
	ctx.lr = 0x822CF058;
	sub_822EBBC8(ctx, base);
	// b 0x822cf068
	goto loc_822CF068;
loc_822CF05C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
	// bl 0x822ebbc8
	ctx.lr = 0x822CF068;
	sub_822EBBC8(ctx, base);
loc_822CF068:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_822CF070:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CEFF8) {
	__imp__sub_822CEFF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CF084) {
	__imp__sub_822CF084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822CF090;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,8696
	ctx.r10.s64 = ctx.r10.s64 + 8696;
loc_822CF0B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822cf0dc
	if (ctx.cr6.eq) goto loc_822CF0DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cf0b8
	if (ctx.cr6.eq) goto loc_822CF0B8;
loc_822CF0DC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cf0f0
	if (ctx.cr6.eq) goto loc_822CF0F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,11396
	ctx.r6.s64 = ctx.r11.s64 + 11396;
	// b 0x822cf0f8
	goto loc_822CF0F8;
loc_822CF0F0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,11368
	ctx.r6.s64 = ctx.r11.s64 + 11368;
loc_822CF0F8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,11360
	ctx.r31.s64 = ctx.r11.s64 + 11360;
	// addi r5,r10,-3692
	ctx.r5.s64 = ctx.r10.s64 + -3692;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822cc128
	ctx.lr = 0x822CF11C;
	sub_822CC128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cf1e4
	if (!ctx.cr6.eq) goto loc_822CF1E4;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r8,404
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 404, ctx.xer);
	// beq cr6,0x822cf1d8
	if (ctx.cr6.eq) goto loc_822CF1D8;
	// cmpwi cr6,r8,204
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 204, ctx.xer);
	// beq cr6,0x822cf1d8
	if (ctx.cr6.eq) goto loc_822CF1D8;
	// cmpwi cr6,r8,200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 200, ctx.xer);
	// blt cr6,0x822cf160
	if (ctx.cr6.lt) goto loc_822CF160;
	// cmpwi cr6,r8,299
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 299, ctx.xer);
	// bgt cr6,0x822cf160
	if (ctx.cr6.gt) goto loc_822CF160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822cb8d0
	ctx.lr = 0x822CF150;
	sub_822CB8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cf1d8
	if (!ctx.cr6.eq) goto loc_822CF1D8;
	// cmpwi cr6,r8,299
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 299, ctx.xer);
	// ble cr6,0x822cf184
	if (!ctx.cr6.gt) goto loc_822CF184;
loc_822CF160:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CF170;
	sub_822CB788(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d7e48
	ctx.lr = 0x822CF178;
	sub_822D7E48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF184:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822cdf50
	ctx.lr = 0x822CF194;
	sub_822CDF50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d7e48
	ctx.lr = 0x822CF1A0;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822cf1c8
	if (!ctx.cr6.lt) goto loc_822CF1C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,11336
	ctx.r5.s64 = ctx.r11.s64 + 11336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF1BC;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF1C8:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF1D8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d7e48
	ctx.lr = 0x822CF1E0;
	sub_822D7E48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CF1E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CF088) {
	__imp__sub_822CF088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CF1EC) {
	__imp__sub_822CF1EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF1F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf200
	if (ctx.cr6.eq) goto loc_822CF200;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// blr 
	return;
loc_822CF200:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CF1F0) {
	__imp__sub_822CF1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF208) {
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
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cf23c
	if (ctx.cr6.eq) goto loc_822CF23C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf23c
	if (ctx.cr6.eq) goto loc_822CF23C;
	// bl 0x822d8000
	ctx.lr = 0x822CF23C;
	sub_822D8000(ctx, base);
loc_822CF23C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822CF208) {
	__imp__sub_822CF208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822CF260;
	__savegprlr_21(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cf2ac
	if (ctx.cr6.eq) goto loc_822CF2AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-88
	ctx.r4.s64 = -88;
	// addi r5,r11,11464
	ctx.r5.s64 = ctx.r11.s64 + 11464;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF2A0;
	sub_822C86C8(ctx, base);
loc_822CF2A0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822CF2AC:
	// lwz r11,144(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf544
	if (ctx.cr6.eq) goto loc_822CF544;
	// lbz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 16);
	// addi r30,r23,16
	ctx.r30.s64 = ctx.r23.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf544
	if (ctx.cr6.eq) goto loc_822CF544;
	// lwz r3,164(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf520
	if (ctx.cr6.eq) goto loc_822CF520;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x822d7f18
	ctx.lr = 0x822CF2DC;
	sub_822D7F18(ctx, base);
loc_822CF2DC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x822cf300
	if (ctx.cr6.eq) goto loc_822CF300;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cf2dc
	if (ctx.cr6.eq) goto loc_822CF2DC;
loc_822CF300:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822cf520
	if (!ctx.cr6.eq) goto loc_822CF520;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r28,r11,-4048
	ctx.r28.s64 = ctx.r11.s64 + -4048;
	// addi r30,r10,11232
	ctx.r30.s64 = ctx.r10.s64 + 11232;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// bne cr6,0x822cf358
	if (!ctx.cr6.eq) goto loc_822CF358;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r4,r11,11244
	ctx.r4.s64 = ctx.r11.s64 + 11244;
	// li r6,224
	ctx.r6.s64 = 224;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822cc460
	ctx.lr = 0x822CF344;
	sub_822CC460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cf2a0
	if (!ctx.cr6.eq) goto loc_822CF2A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,8828
	ctx.r31.s64 = ctx.r11.s64 + 8828;
	// b 0x822cf3ec
	goto loc_822CF3EC;
loc_822CF358:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x822cf3b0
	if (!ctx.cr6.eq) goto loc_822CF3B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r4,r11,11160
	ctx.r4.s64 = ctx.r11.s64 + 11160;
	// li r6,224
	ctx.r6.s64 = 224;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822cc460
	ctx.lr = 0x822CF37C;
	sub_822CC460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cf2a0
	if (!ctx.cr6.eq) goto loc_822CF2A0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822cc978
	ctx.lr = 0x822CF394;
	sub_822CC978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf414
	if (ctx.cr6.eq) goto loc_822CF414;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r11,28408
	ctx.r30.s64 = ctx.r11.s64 + 28408;
	// b 0x822cf3ec
	goto loc_822CF3EC;
loc_822CF3B0:
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x822cf500
	if (!ctx.cr6.eq) goto loc_822CF500;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r4,r11,11160
	ctx.r4.s64 = ctx.r11.s64 + 11160;
	// li r6,224
	ctx.r6.s64 = 224;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822cc460
	ctx.lr = 0x822CF3D4;
	sub_822CC460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cf2a0
	if (!ctx.cr6.eq) goto loc_822CF2A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r28,r11,-3692
	ctx.r28.s64 = ctx.r11.s64 + -3692;
	// addi r30,r10,11220
	ctx.r30.s64 = ctx.r10.s64 + 11220;
loc_822CF3EC:
	// lwz r3,144(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 144);
	// bl 0x822cc0c0
	ctx.lr = 0x822CF3F4;
	sub_822CC0C0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822cf434
	if (!ctx.cr6.eq) goto loc_822CF434;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822cf414
	if (ctx.cr6.eq) goto loc_822CF414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de480
	ctx.lr = 0x822CF414;
	sub_822DE480(ctx, base);
loc_822CF414:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r5,r11,6740
	ctx.r5.s64 = ctx.r11.s64 + 6740;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF428;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822CF434:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822cf460
	if (ctx.cr6.eq) goto loc_822CF460;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822CF440:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cf440
	if (!ctx.cr6.eq) goto loc_822CF440;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x822cf464
	goto loc_822CF464;
loc_822CF460:
	// li r9,0
	ctx.r9.s64 = 0;
loc_822CF464:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lwz r3,164(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 164);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d8c08
	ctx.lr = 0x822CF484;
	sub_822D8C08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822c84c0
	ctx.lr = 0x822CF490;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822cf4a0
	if (ctx.cr6.eq) goto loc_822CF4A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de480
	ctx.lr = 0x822CF4A0;
	sub_822DE480(ctx, base);
loc_822CF4A0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822cf4dc
	if (ctx.cr6.eq) goto loc_822CF4DC;
	// cmpwi cr6,r30,-89
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -89, ctx.xer);
	// beq cr6,0x822cf558
	if (ctx.cr6.eq) goto loc_822CF558;
	// cmpwi cr6,r30,-95
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -95, ctx.xer);
	// bne cr6,0x822cf4c4
	if (!ctx.cr6.eq) goto loc_822CF4C4;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822CF4C4:
	// cmpwi cr6,r30,-92
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -92, ctx.xer);
	// li r3,-6
	ctx.r3.s64 = -6;
	// beq cr6,0x822cf55c
	if (ctx.cr6.eq) goto loc_822CF55C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822CF4DC:
	// stw r21,260(r22)
	PPC_STORE_U32(ctx.r22.u32 + 260, ctx.r21.u32);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// bne cr6,0x822cf4f4
	if (!ctx.cr6.eq) goto loc_822CF4F4;
	// bl 0x822eac70
	ctx.lr = 0x822CF4EC;
	sub_822EAC70(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// std r3,-22880(r11)
	PPC_STORE_U64(ctx.r11.u32 + -22880, ctx.r3.u64);
loc_822CF4F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822CF500:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,11444
	ctx.r5.s64 = ctx.r11.s64 + 11444;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF514;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822CF520:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,11424
	ctx.r5.s64 = ctx.r11.s64 + 11424;
	// li r4,-89
	ctx.r4.s64 = -89;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF538;
	sub_822C86C8(ctx, base);
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822CF544:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-90
	ctx.r4.s64 = -90;
	// addi r5,r11,9660
	ctx.r5.s64 = ctx.r11.s64 + 9660;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF558;
	sub_822C86C8(ctx, base);
loc_822CF558:
	// li r3,-9
	ctx.r3.s64 = -9;
loc_822CF55C:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CF258) {
	__imp__sub_822CF258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CF564) {
	__imp__sub_822CF564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822CF570;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822cf5ac
	if (!ctx.cr6.eq) goto loc_822CF5AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,11480
	ctx.r5.s64 = ctx.r11.s64 + 11480;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF5A0;
	sub_822C86C8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF5AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// bl 0x822d9660
	ctx.lr = 0x822CF5C0;
	sub_822D9660(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822cf5d4
	if (!ctx.cr6.eq) goto loc_822CF5D4;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF5D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r3,-89
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -89, ctx.xer);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// beq cr6,0x822cf678
	if (ctx.cr6.eq) goto loc_822CF678;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cf61c
	if (ctx.cr6.eq) goto loc_822CF61C;
	// cmpwi cr6,r3,-95
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -95, ctx.xer);
	// bne cr6,0x822cf604
	if (!ctx.cr6.eq) goto loc_822CF604;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF604:
	// cmpwi cr6,r3,-92
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -92, ctx.xer);
	// li r3,-6
	ctx.r3.s64 = -6;
	// beq cr6,0x822cf888
	if (ctx.cr6.eq) goto loc_822CF888;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF61C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// addi r4,r11,28408
	ctx.r4.s64 = ctx.r11.s64 + 28408;
	// addi r30,r10,11220
	ctx.r30.s64 = ctx.r10.s64 + 11220;
	// addi r29,r9,11232
	ctx.r29.s64 = ctx.r9.s64 + 11232;
	// bne cr6,0x822cf644
	if (!ctx.cr6.eq) goto loc_822CF644;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x822cf654
	goto loc_822CF654;
loc_822CF644:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// beq cr6,0x822cf654
	if (ctx.cr6.eq) goto loc_822CF654;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822CF654:
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r31,401
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 401, ctx.xer);
	// bne cr6,0x822cf684
	if (!ctx.cr6.eq) goto loc_822CF684;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CF670;
	sub_822CB788(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CF678;
	sub_822D7E48(ctx, base);
loc_822CF678:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF684:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x822cf728
	if (!ctx.cr6.eq) goto loc_822CF728;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,200
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 200, ctx.xer);
	// blt cr6,0x822cf6d4
	if (ctx.cr6.lt) goto loc_822CF6D4;
	// cmpwi cr6,r31,299
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 299, ctx.xer);
	// bgt cr6,0x822cf6cc
	if (ctx.cr6.gt) goto loc_822CF6CC;
	// lis r31,-32020
	ctx.r31.s64 = -2098462720;
	// ld r11,-22880(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -22880);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822cf6cc
	if (ctx.cr6.eq) goto loc_822CF6CC;
	// bl 0x822eac70
	ctx.lr = 0x822CF6B4;
	sub_822EAC70(ctx, base);
	// ld r11,-22880(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -22880);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r7,424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 424, ctx.r7.u32);
loc_822CF6CC:
	// cmpwi cr6,r30,299
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 299, ctx.xer);
	// ble cr6,0x822cf6e4
	if (!ctx.cr6.gt) goto loc_822CF6E4;
loc_822CF6D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CF6E4;
	sub_822CB788(ctx, base);
loc_822CF6E4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CF6EC;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r30,404
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 404, ctx.xer);
	// bne cr6,0x822cf700
	if (!ctx.cr6.eq) goto loc_822CF700;
	// li r3,-7
	ctx.r3.s64 = -7;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF700:
	// cmpwi cr6,r30,200
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 200, ctx.xer);
	// blt cr6,0x822cf714
	if (ctx.cr6.lt) goto loc_822CF714;
	// cmpwi cr6,r30,299
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 299, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822cf718
	if (!ctx.cr6.gt) goto loc_822CF718;
loc_822CF714:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CF718:
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF728:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x822cf7b0
	if (!ctx.cr6.eq) goto loc_822CF7B0;
	// cmpwi cr6,r31,200
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 200, ctx.xer);
	// blt cr6,0x822cf7f4
	if (ctx.cr6.lt) goto loc_822CF7F4;
	// cmpwi cr6,r31,299
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 299, ctx.xer);
	// bgt cr6,0x822cf7f4
	if (ctx.cr6.gt) goto loc_822CF7F4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822cb8d0
	ctx.lr = 0x822CF748;
	sub_822CB8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cf76c
	if (!ctx.cr6.eq) goto loc_822CF76C;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822cd428
	ctx.lr = 0x822CF760;
	sub_822CD428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x822cf770
	if (!ctx.cr6.eq) goto loc_822CF770;
loc_822CF76C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822CF770:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CF778;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822cf7a4
	if (ctx.cr6.eq) goto loc_822CF7A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,11152
	ctx.r5.s64 = ctx.r11.s64 + 11152;
	// li r4,-94
	ctx.r4.s64 = -94;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF798;
	sub_822C86C8(ctx, base);
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF7A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF7B0:
	// li r5,6152
	ctx.r5.s64 = 6152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826344d0
	ctx.lr = 0x822CF7C0;
	sub_826344D0(ctx, base);
	// cmpwi cr6,r31,204
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 204, ctx.xer);
	// beq cr6,0x822cf87c
	if (ctx.cr6.eq) goto loc_822CF87C;
	// cmpwi cr6,r31,200
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 200, ctx.xer);
	// blt cr6,0x822cf7f0
	if (ctx.cr6.lt) goto loc_822CF7F0;
	// cmpwi cr6,r31,299
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 299, ctx.xer);
	// bgt cr6,0x822cf7f0
	if (ctx.cr6.gt) goto loc_822CF7F0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822cb8d0
	ctx.lr = 0x822CF7E0;
	sub_822CB8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cf87c
	if (!ctx.cr6.eq) goto loc_822CF87C;
	// cmpwi cr6,r31,299
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 299, ctx.xer);
	// ble cr6,0x822cf814
	if (!ctx.cr6.gt) goto loc_822CF814;
loc_822CF7F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_822CF7F4:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822cb788
	ctx.lr = 0x822CF800;
	sub_822CB788(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CF808;
	sub_822D7E48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF814:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822cdaf8
	ctx.lr = 0x822CF820;
	sub_822CDAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CF82C;
	sub_822D7E48(ctx, base);
	// cmpwi cr6,r31,-8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -8, ctx.xer);
	// bne cr6,0x822cf854
	if (!ctx.cr6.eq) goto loc_822CF854;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,11196
	ctx.r5.s64 = ctx.r11.s64 + 11196;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF848;
	sub_822C86C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF854:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822cf870
	if (ctx.cr6.eq) goto loc_822CF870;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r5,r11,11168
	ctx.r5.s64 = ctx.r11.s64 + 11168;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c86c8
	ctx.lr = 0x822CF870;
	sub_822C86C8(ctx, base);
loc_822CF870:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822CF87C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7e48
	ctx.lr = 0x822CF884;
	sub_822D7E48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CF888:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CF568) {
	__imp__sub_822CF568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CF8A0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822cf8a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CF8A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822CF890) {
	__imp__sub_822CF890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF8C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822CF8E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cf8e4
	if (!ctx.cr6.eq) goto loc_822CF8E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822CF90C;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cf95c
	if (!ctx.cr6.eq) goto loc_822CF95C;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cf954
	if (ctx.cr6.eq) goto loc_822CF954;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822cf954
	if (ctx.cr6.eq) goto loc_822CF954;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822cf954
	if (ctx.cr6.eq) goto loc_822CF954;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822cf954
	if (ctx.cr6.eq) goto loc_822CF954;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822cf954
	if (ctx.cr6.eq) goto loc_822CF954;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x822cf954
	if (ctx.cr6.eq) goto loc_822CF954;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// bne cr6,0x822cf95c
	if (!ctx.cr6.eq) goto loc_822CF95C;
loc_822CF954:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822cf960
	goto loc_822CF960;
loc_822CF95C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CF960:
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

PPC_WEAK_FUNC(sub_822CF8C8) {
	__imp__sub_822CF8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CF978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822CF980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// bne cr6,0x822cfa7c
	if (!ctx.cr6.eq) goto loc_822CFA7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,11744
	ctx.r4.s64 = ctx.r11.s64 + 11744;
	// bl 0x82635190
	ctx.lr = 0x822CF9A8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfac4
	if (!ctx.cr6.eq) goto loc_822CFAC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11516
	ctx.r4.s64 = ctx.r11.s64 + 11516;
	// bl 0x822cf8c8
	ctx.lr = 0x822CF9C0;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfa68
	if (!ctx.cr6.eq) goto loc_822CFA68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16736
	ctx.r4.s64 = ctx.r11.s64 + -16736;
	// bl 0x822cf8c8
	ctx.lr = 0x822CF9D8;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfa68
	if (!ctx.cr6.eq) goto loc_822CFA68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11736
	ctx.r4.s64 = ctx.r11.s64 + 11736;
	// bl 0x822cf8c8
	ctx.lr = 0x822CF9F0;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfa68
	if (!ctx.cr6.eq) goto loc_822CFA68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11508
	ctx.r4.s64 = ctx.r11.s64 + 11508;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFA08;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfa24
	if (ctx.cr6.eq) goto loc_822CFA24;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFA24:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11504
	ctx.r4.s64 = ctx.r11.s64 + 11504;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFA34;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfa54
	if (!ctx.cr6.eq) goto loc_822CFA54;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16752
	ctx.r4.s64 = ctx.r11.s64 + -16752;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFA4C;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfd84
	if (ctx.cr6.eq) goto loc_822CFD84;
loc_822CFA54:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFA68:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFA7C:
	// cmplwi cr6,r5,10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10, ctx.xer);
	// bne cr6,0x822cfbe4
	if (!ctx.cr6.eq) goto loc_822CFBE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,11724
	ctx.r4.s64 = ctx.r11.s64 + 11724;
	// bl 0x82635190
	ctx.lr = 0x822CFA94;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfd84
	if (!ctx.cr6.eq) goto loc_822CFD84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635b80
	ctx.lr = 0x822CFAA4;
	sub_82635B80(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x822cfd84
	if (ctx.cr6.lt) goto loc_822CFD84;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bgt cr6,0x822cfd84
	if (ctx.cr6.gt) goto loc_822CFD84;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFAC4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,11716
	ctx.r4.s64 = ctx.r11.s64 + 11716;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822CFAD8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfb00
	if (!ctx.cr6.eq) goto loc_822CFB00;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFB00:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,11708
	ctx.r4.s64 = ctx.r11.s64 + 11708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822CFB14;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfca4
	if (!ctx.cr6.eq) goto loc_822CFCA4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11696
	ctx.r4.s64 = ctx.r11.s64 + 11696;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFB2C;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfbd0
	if (!ctx.cr6.eq) goto loc_822CFBD0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11688
	ctx.r4.s64 = ctx.r11.s64 + 11688;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFB44;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfbd0
	if (!ctx.cr6.eq) goto loc_822CFBD0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11680
	ctx.r4.s64 = ctx.r11.s64 + 11680;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFB5C;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfb78
	if (ctx.cr6.eq) goto loc_822CFB78;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFB78:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11672
	ctx.r4.s64 = ctx.r11.s64 + 11672;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFB88;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfba4
	if (ctx.cr6.eq) goto loc_822CFBA4;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFBA4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11664
	ctx.r4.s64 = ctx.r11.s64 + 11664;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFBB4;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfd84
	if (ctx.cr6.eq) goto loc_822CFD84;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFBD0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFBE4:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x822cfc5c
	if (!ctx.cr6.eq) goto loc_822CFC5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,11656
	ctx.r4.s64 = ctx.r11.s64 + 11656;
	// bl 0x82635190
	ctx.lr = 0x822CFBFC;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfce8
	if (!ctx.cr6.eq) goto loc_822CFCE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11652
	ctx.r4.s64 = ctx.r11.s64 + 11652;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFC14;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfc30
	if (ctx.cr6.eq) goto loc_822CFC30;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFC30:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11644
	ctx.r4.s64 = ctx.r11.s64 + 11644;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFC40;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfd84
	if (ctx.cr6.eq) goto loc_822CFD84;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFC5C:
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bne cr6,0x822cfd5c
	if (!ctx.cr6.eq) goto loc_822CFD5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,11632
	ctx.r4.s64 = ctx.r11.s64 + 11632;
	// bl 0x82635190
	ctx.lr = 0x822CFC74;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfd84
	if (!ctx.cr6.eq) goto loc_822CFD84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11628
	ctx.r4.s64 = ctx.r11.s64 + 11628;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFC8C;
	sub_822CF8C8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFCA4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,11620
	ctx.r4.s64 = ctx.r11.s64 + 11620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822CFCB8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfd84
	if (!ctx.cr6.eq) goto loc_822CFD84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11628
	ctx.r4.s64 = ctx.r11.s64 + 11628;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFCD0;
	sub_822CF8C8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFCE8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,11612
	ctx.r4.s64 = ctx.r11.s64 + 11612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822CFCFC;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfd84
	if (!ctx.cr6.eq) goto loc_822CFD84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11604
	ctx.r4.s64 = ctx.r11.s64 + 11604;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFD14;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfd30
	if (ctx.cr6.eq) goto loc_822CFD30;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFD30:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11736
	ctx.r4.s64 = ctx.r11.s64 + 11736;
	// bl 0x822cf8c8
	ctx.lr = 0x822CFD40;
	sub_822CF8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cfd84
	if (ctx.cr6.eq) goto loc_822CFD84;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822CFD5C:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x822cfd84
	if (!ctx.cr6.eq) goto loc_822CFD84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,11596
	ctx.r4.s64 = ctx.r11.s64 + 11596;
	// bl 0x82635190
	ctx.lr = 0x822CFD74;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfd84
	if (!ctx.cr6.eq) goto loc_822CFD84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
loc_822CFD84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CF978) {
	__imp__sub_822CF978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822CFD98;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cff74
	if (ctx.cr6.eq) goto loc_822CFF74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r22,r11,10856
	ctx.r22.s64 = ctx.r11.s64 + 10856;
loc_822CFDB8:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cff74
	if (ctx.cr6.eq) goto loc_822CFF74;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822CFDD0;
	sub_82635AC8(ctx, base);
	// add r25,r3,r27
	ctx.r25.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x822cfe04
	if (!ctx.cr6.lt) goto loc_822CFE04;
loc_822CFDDC:
	// bl 0x82636998
	ctx.lr = 0x822CFDE0;
	sub_82636998(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822cfe04
	if (ctx.cr6.eq) goto loc_822CFE04;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x822cfddc
	if (ctx.cr6.lt) goto loc_822CFDDC;
loc_822CFE04:
	// subf r5,r27,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r27.s64;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82635150
	ctx.lr = 0x822CFE14;
	sub_82635150(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cff58
	if (ctx.cr6.eq) goto loc_822CFF58;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// beq cr6,0x822cff58
	if (ctx.cr6.eq) goto loc_822CFF58;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x822cfe64
	if (!ctx.cr6.gt) goto loc_822CFE64;
loc_822CFE38:
	// addi r31,r26,-1
	ctx.r31.s64 = ctx.r26.s64 + -1;
	// bl 0x82636998
	ctx.lr = 0x822CFE40;
	sub_82636998(ctx, base);
	// lbz r11,-1(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + -1);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822cfe64
	if (ctx.cr6.eq) goto loc_822CFE64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x822cfe38
	if (ctx.cr6.gt) goto loc_822CFE38;
loc_822CFE64:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x822cfe94
	if (!ctx.cr6.lt) goto loc_822CFE94;
loc_822CFE70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x822cfe88
	if (ctx.cr6.eq) goto loc_822CFE88;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x822cfe94
	if (!ctx.cr6.eq) goto loc_822CFE94;
loc_822CFE88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x822cfe70
	if (ctx.cr6.lt) goto loc_822CFE70;
loc_822CFE94:
	// subf r28,r11,r25
	ctx.r28.s64 = ctx.r25.s64 - ctx.r11.s64;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// blt cr6,0x822cfea4
	if (ctx.cr6.lt) goto loc_822CFEA4;
	// li r28,23
	ctx.r28.s64 = 23;
loc_822CFEA4:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822cfedc
	if (ctx.cr6.eq) goto loc_822CFEDC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822CFEB8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82636c40
	ctx.lr = 0x822CFEC8;
	sub_82636C40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822cfeb8
	if (ctx.cr6.lt) goto loc_822CFEB8;
loc_822CFEDC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r29,r27,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r27.s64;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// stbx r24,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r24.u8);
	// bge cr6,0x822cff58
	if (!ctx.cr6.lt) goto loc_822CFF58;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822cff28
	if (ctx.cr6.eq) goto loc_822CFF28;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r28,r11,r27
	ctx.r28.s64 = ctx.r27.s64 - ctx.r11.s64;
loc_822CFF04:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// bl 0x82636c40
	ctx.lr = 0x822CFF14;
	sub_82636C40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822cff04
	if (ctx.cr6.lt) goto loc_822CFF04;
loc_822CFF28:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stbx r24,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r24.u8);
	// bl 0x822cf978
	ctx.lr = 0x822CFF44;
	sub_822CF978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822cff58
	if (ctx.cr6.eq) goto loc_822CFF58;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r23)
	PPC_STORE_U32(ctx.r23.u32 + 36, ctx.r11.u32);
loc_822CFF58:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r27,r25,1
	ctx.r27.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cff6c
	if (!ctx.cr6.eq) goto loc_822CFF6C;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_822CFF6C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822cfdb8
	if (!ctx.cr6.eq) goto loc_822CFDB8;
loc_822CFF74:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CFD90) {
	__imp__sub_822CFD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822CFF7C) {
	__imp__sub_822CFF7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822CFF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822CFF88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0024
	if (ctx.cr6.eq) goto loc_822D0024;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0024
	if (ctx.cr6.eq) goto loc_822D0024;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82634d00
	ctx.lr = 0x822CFFBC;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d0024
	if (!ctx.cr6.eq) goto loc_822D0024;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cffd4
	if (ctx.cr6.eq) goto loc_822CFFD4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// b 0x822cffdc
	goto loc_822CFFDC;
loc_822CFFD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,8828
	ctx.r9.s64 = ctx.r11.s64 + 8828;
loc_822CFFDC:
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(ctx.r29.s64, 0, ctx.xer);
	// li r7,-1
	ctx.r7.s64 = -1;
	// blt cr6,0x822cffec
	if (ctx.cr6.lt) goto loc_822CFFEC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_822CFFEC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r8,512
	ctx.r8.s64 = 512;
	// addi r5,r11,11892
	ctx.r5.s64 = ctx.r11.s64 + 11892;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D0008;
	sub_822ECA80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d0018
	if (ctx.cr6.lt) goto loc_822D0018;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822d0028
	if (ctx.cr6.lt) goto loc_822D0028;
loc_822D0018:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D0024:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822D0028:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822CFF80) {
	__imp__sub_822CFF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822D0038;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822d0064
	if (ctx.cr6.lt) goto loc_822D0064;
loc_822D0058:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822D0064:
	// subf r5,r3,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r3.s64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82635150
	ctx.lr = 0x822D0070;
	sub_82635150(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bne cr6,0x822d0084
	if (!ctx.cr6.eq) goto loc_822D0084;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822D0084:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf. r31,r4,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822d00a4
	if (ctx.cr0.eq) goto loc_822D00A4;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x822d00a4
	if (!ctx.cr6.eq) goto loc_822D00A4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_822D00A4:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822d0058
	if (!ctx.cr6.lt) goto loc_822D0058;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822D00B8;
	sub_82635430(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stbx r11,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x822d00d0
	if (!ctx.cr6.eq) goto loc_822D00D0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822D00D0:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D0030) {
	__imp__sub_822D0030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D00E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D00E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826344d0
	ctx.lr = 0x822D0108;
	sub_826344D0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// std r11,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
	// beq cr6,0x822d0270
	if (ctx.cr6.eq) goto loc_822D0270;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d0030
	ctx.lr = 0x822D0134;
	sub_822D0030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d0270
	if (ctx.cr6.eq) goto loc_822D0270;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,11912
	ctx.r10.s64 = ctx.r10.s64 + 11912;
loc_822D0148:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822d016c
	if (ctx.cr6.eq) goto loc_822D016C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d0148
	if (ctx.cr6.eq) goto loc_822D0148;
loc_822D016C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822d0270
	if (!ctx.cr6.eq) goto loc_822D0270;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d0030
	ctx.lr = 0x822D0188;
	sub_822D0030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d0270
	if (ctx.cr6.eq) goto loc_822D0270;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0270
	if (ctx.cr6.eq) goto loc_822D0270;
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d0030
	ctx.lr = 0x822D01B0;
	sub_822D0030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d0270
	if (ctx.cr6.eq) goto loc_822D0270;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f1110
	ctx.lr = 0x822D01D0;
	sub_822F1110(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822d0270
	if (ctx.cr6.eq) goto loc_822D0270;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d0270
	if (!ctx.cr6.eq) goto loc_822D0270;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bgt cr6,0x822d01fc
	if (ctx.cr6.gt) goto loc_822D01FC;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822D01FC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
	// subf r31,r4,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r4.s64;
	// cmplwi cr6,r31,512
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 512, ctx.xer);
	// ble cr6,0x822d0214
	if (!ctx.cr6.gt) goto loc_822D0214;
	// li r31,512
	ctx.r31.s64 = 512;
loc_822D0214:
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822D0224;
	sub_82635430(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stb r28,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r28.u8);
	// beq cr6,0x822d0264
	if (ctx.cr6.eq) goto loc_822D0264;
	// addi r10,r29,39
	ctx.r10.s64 = ctx.r29.s64 + 39;
loc_822D0238:
	// lbzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822d0258
	if (ctx.cr6.eq) goto loc_822D0258;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822d0258
	if (ctx.cr6.eq) goto loc_822D0258;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x822d0264
	if (!ctx.cr6.eq) goto loc_822D0264;
loc_822D0258:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbx r28,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u8);
	// bne 0x822d0238
	if (!ctx.cr0.eq) goto loc_822D0238;
loc_822D0264:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D0270:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D00E0) {
	__imp__sub_822D00E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D027C) {
	__imp__sub_822D027C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0280) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,320
	ctx.r4.s64 = 320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x822D02D0;
	sub_822ECA20(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d0308
	if (ctx.cr6.eq) goto loc_822D0308;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0308
	if (ctx.cr6.eq) goto loc_822D0308;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D02F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822D0308:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f0b58
	ctx.lr = 0x822D0310;
	sub_822F0B58(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D0280) {
	__imp__sub_822D0280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D0324) {
	__imp__sub_822D0324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0328) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x822d03b4
	if (ctx.cr6.gt) goto loc_822D03B4;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822d0360
	// bdzf 4*cr6+eq,0x822d036c
	// bdzf 4*cr6+eq,0x822d0378
	// bdzf 4*cr6+eq,0x822d0384
	// bdzf 4*cr6+eq,0x822d0390
	// bdzf 4*cr6+eq,0x822d039c
	// bne cr6,0x822d03a8
	if (!ctx.cr6.eq) goto loc_822D03A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,28412
	ctx.r3.s64 = ctx.r11.s64 + 28412;
	// blr 
	return;
loc_822D0360:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,12140
	ctx.r3.s64 = ctx.r11.s64 + 12140;
	// blr 
	return;
loc_822D036C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,12124
	ctx.r3.s64 = ctx.r11.s64 + 12124;
	// blr 
	return;
loc_822D0378:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,12108
	ctx.r3.s64 = ctx.r11.s64 + 12108;
	// blr 
	return;
loc_822D0384:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,12092
	ctx.r3.s64 = ctx.r11.s64 + 12092;
	// blr 
	return;
loc_822D0390:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,12080
	ctx.r3.s64 = ctx.r11.s64 + 12080;
	// blr 
	return;
loc_822D039C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,28380
	ctx.r3.s64 = ctx.r11.s64 + 28380;
	// blr 
	return;
loc_822D03A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,28372
	ctx.r3.s64 = ctx.r11.s64 + 28372;
	// blr 
	return;
loc_822D03B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,10904
	ctx.r3.s64 = ctx.r11.s64 + 10904;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D0328) {
	__imp__sub_822D0328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D03C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822D03C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d044c
	if (ctx.cr6.eq) goto loc_822D044C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822d044c
	if (ctx.cr6.lt) goto loc_822D044C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x822d044c
	if (!ctx.cr6.lt) goto loc_822D044C;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r10,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r10.u16);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r28,r9,12028
	ctx.r28.s64 = ctx.r9.s64 + 12028;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwzx r4,r27,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// bl 0x822fa9b8
	ctx.lr = 0x822D0424;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d0458
	if (ctx.cr6.eq) goto loc_822D0458;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwzx r5,r27,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12276
	ctx.r4.s64 = ctx.r11.s64 + 12276;
	// bl 0x822d0280
	ctx.lr = 0x822D0440;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r10.u32);
loc_822D044C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D0458:
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// beq cr6,0x822d0478
	if (ctx.cr6.eq) goto loc_822D0478;
	// bl 0x822f9c58
	ctx.lr = 0x822D0474;
	sub_822F9C58(ctx, base);
	// b 0x822d047c
	goto loc_822D047C;
loc_822D0478:
	// bl 0x822f9bc8
	ctx.lr = 0x822D047C;
	sub_822F9BC8(ctx, base);
loc_822D047C:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d0498
	if (!ctx.cr6.lt) goto loc_822D0498;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d04ac
	goto loc_822D04AC;
loc_822D0498:
	// addi r11,r30,1353
	ctx.r11.s64 = ctx.r30.s64 + 1353;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_822D04AC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x822d0530
	if (ctx.cr6.eq) goto loc_822D0530;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x822d0504
	if (ctx.cr6.eq) goto loc_822D0504;
	// cmplwi cr6,r29,180
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 180, ctx.xer);
	// ble cr6,0x822d04d0
	if (!ctx.cr6.gt) goto loc_822D04D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r11,6112
	ctx.r9.s64 = ctx.r11.s64 + 6112;
	// b 0x822d04d8
	goto loc_822D04D8;
loc_822D04D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,8828
	ctx.r9.s64 = ctx.r11.s64 + 8828;
loc_822D04D8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwzx r5,r27,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// addi r4,r10,12236
	ctx.r4.s64 = ctx.r10.s64 + 12236;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D04F8;
	sub_822D0280(ctx, base);
	// srawi r3,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 31;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D0504:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwzx r5,r27,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// addi r4,r10,12196
	ctx.r4.s64 = ctx.r10.s64 + 12196;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D0524;
	sub_822D0280(ctx, base);
	// srawi r3,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 31;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D0530:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x822d0554
	if (!ctx.cr6.lt) goto loc_822D0554;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lhz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r4,r10,12152
	ctx.r4.s64 = ctx.r10.s64 + 12152;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D0554;
	sub_822D0280(ctx, base);
loc_822D0554:
	// srawi r3,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 31;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D03C0) {
	__imp__sub_822D03C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D0568;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d06d0
	if (ctx.cr6.eq) goto loc_822D06D0;
	// lwz r11,3532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d06d0
	if (ctx.cr6.eq) goto loc_822D06D0;
	// bl 0x822eac70
	ctx.lr = 0x822D0590;
	sub_822EAC70(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822d05a8
	if (!ctx.cr6.eq) goto loc_822D05A8;
	// ld r11,3576(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3576);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,1000
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 1000, ctx.xer);
	// blt cr6,0x822d06d0
	if (ctx.cr6.lt) goto loc_822D06D0;
loc_822D05A8:
	// std r3,3576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3576, ctx.r3.u64);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9770
	ctx.lr = 0x822D05B4;
	sub_822F9770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d05c8
	if (ctx.cr6.lt) goto loc_822D05C8;
	// lwz r11,4960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4960);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4960, ctx.r11.u32);
loc_822D05C8:
	// bl 0x822d9f60
	ctx.lr = 0x822D05CC;
	sub_822D9F60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D05D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d05d4
	if (!ctx.cr6.eq) goto loc_822D05D4;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x822d06c4
	if (ctx.cr6.eq) goto loc_822D06C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,12028(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12028);
	// bl 0x822fa9b8
	ctx.lr = 0x822D0614;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d0650
	if (ctx.cr6.eq) goto loc_822D0650;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,12028(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12276
	ctx.r4.s64 = ctx.r11.s64 + 12276;
	// bl 0x822d0280
	ctx.lr = 0x822D0630;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r10.u32);
	// lwz r11,4964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4964);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4964, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D0650:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9c58
	ctx.lr = 0x822D0664;
	sub_822F9C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d067c
	if (!ctx.cr6.lt) goto loc_822D067C;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d0688
	goto loc_822D0688;
loc_822D067C:
	// lwz r11,5412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r11.u32);
loc_822D0688:
	// cmplwi cr6,r30,180
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 180, ctx.xer);
	// ble cr6,0x822d069c
	if (!ctx.cr6.gt) goto loc_822D069C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r11,6112
	ctx.r9.s64 = ctx.r11.s64 + 6112;
	// b 0x822d06a4
	goto loc_822D06A4;
loc_822D069C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,8828
	ctx.r9.s64 = ctx.r11.s64 + 8828;
loc_822D06A4:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,12028(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12028);
	// addi r4,r10,12236
	ctx.r4.s64 = ctx.r10.s64 + 12236;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D06C4;
	sub_822D0280(ctx, base);
loc_822D06C4:
	// lwz r11,4964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4964);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4964, ctx.r11.u32);
loc_822D06D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D0560) {
	__imp__sub_822D0560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D06D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822d0750
	if (!ctx.cr6.eq) goto loc_822D0750;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_822D06F4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822d0708
	if (ctx.cr6.lt) goto loc_822D0708;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// b 0x822d0738
	goto loc_822D0738;
loc_822D0708:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r5,r10,29
	ctx.r5.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r4,r10,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subfic r3,r5,7
	ctx.xer.ca = ctx.r5.u32 <= 7;
	ctx.r3.s64 = 7 - ctx.r5.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// srw r3,r4,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d0750
	if (!ctx.cr6.eq) goto loc_822D0750;
loc_822D0738:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// bgt cr6,0x822d0764
	if (ctx.cr6.gt) goto loc_822D0764;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d06f4
	if (ctx.cr6.eq) goto loc_822D06F4;
loc_822D0750:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d0770
	if (ctx.cr6.eq) goto loc_822D0770;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822D0764:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// blr 
	return;
loc_822D0770:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822d07d0
	if (!ctx.cr6.gt) goto loc_822D07D0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_822D0784:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822d079c
	if (ctx.cr6.lt) goto loc_822D079C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// b 0x822d07c4
	goto loc_822D07C4;
loc_822D079C:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r10,29
	ctx.r4.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r3,r10,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subfic r4,r4,7
	ctx.xer.ca = ctx.r4.u32 <= 7;
	ctx.r4.s64 = 7 - ctx.r4.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lbzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// srw r10,r3,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
loc_822D07C4:
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bdnz 0x822d0784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D0784;
loc_822D07D0:
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D06D8) {
	__imp__sub_822D06D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D07E4) {
	__imp__sub_822D07E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D07E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D07F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x822d085c
	if (!ctx.cr6.gt) goto loc_822D085C;
loc_822D0814:
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x822d085c
	if (!ctx.cr6.lt) goto loc_822D085C;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x822d0830
	if (ctx.cr6.lt) goto loc_822D0830;
	// lbzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// beq cr6,0x822d084c
	if (ctx.cr6.eq) goto loc_822D084C;
loc_822D0830:
	// lbzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stbx r7,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x822d0850
	if (ctx.cr6.eq) goto loc_822D0850;
loc_822D084C:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_822D0850:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x822d0814
	if (ctx.cr6.lt) goto loc_822D0814;
loc_822D085C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x822d06d8
	ctx.lr = 0x822D087C;
	sub_822D06D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d06d8
	ctx.lr = 0x822D0888;
	sub_822D06D8(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822d08c8
	if (!ctx.cr6.lt) goto loc_822D08C8;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subfic r5,r9,7
	ctx.xer.ca = ctx.r9.u32 <= 7;
	ctx.r5.s64 = 7 - ctx.r9.s64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// lbzx r3,r7,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// srw r11,r3,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// beq cr6,0x822d08e4
	if (ctx.cr6.eq) goto loc_822D08E4;
loc_822D08C8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,12488
	ctx.r4.s64 = ctx.r11.s64 + 12488;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D08DC;
	sub_822D0280(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D08E4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d08f8
	if (ctx.cr6.eq) goto loc_822D08F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,12480
	ctx.r6.s64 = ctx.r11.s64 + 12480;
	// b 0x822d0900
	goto loc_822D0900;
loc_822D08F8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,12472
	ctx.r6.s64 = ctx.r11.s64 + 12472;
loc_822D0900:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D0914;
	sub_822D0280(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D07E8) {
	__imp__sub_822D07E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D091C) {
	__imp__sub_822D091C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634428
	ctx.lr = 0x822D0928;
	__savegprlr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// blt cr6,0x822d0b8c
	if (ctx.cr6.lt) goto loc_822D0B8C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r22,r10,12312
	ctx.r22.s64 = ctx.r10.s64 + 12312;
	// addi r20,r9,12380
	ctx.r20.s64 = ctx.r9.s64 + 12380;
loc_822D0970:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x822d0b48
	if (ctx.cr6.gt) goto loc_822D0B48;
	// lbzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d0b48
	if (!ctx.cr6.eq) goto loc_822D0B48;
	// addi r6,r25,1
	ctx.r6.s64 = ctx.r25.s64 + 1;
	// lbzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d0b48
	if (!ctx.cr6.eq) goto loc_822D0B48;
	// addi r7,r25,2
	ctx.r7.s64 = ctx.r25.s64 + 2;
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822d0b48
	if (!ctx.cr6.eq) goto loc_822D0B48;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x822d0b58
	if (!ctx.cr6.lt) goto loc_822D0B58;
	// addi r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 3;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x822d09f8
	if (ctx.cr6.gt) goto loc_822D09F8;
	// addi r9,r25,-3
	ctx.r9.s64 = ctx.r25.s64 + -3;
loc_822D09C4:
	// lbzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d09e8
	if (!ctx.cr6.eq) goto loc_822D09E8;
	// lbzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d09e8
	if (!ctx.cr6.eq) goto loc_822D09E8;
	// lbzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x822d09f8
	if (ctx.cr6.eq) goto loc_822D09F8;
loc_822D09E8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x822d09c4
	if (!ctx.cr6.gt) goto loc_822D09C4;
loc_822D09F8:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x822d0a08
	if (!ctx.cr6.gt) goto loc_822D0A08;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822D0A08:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x822d0a38
	if (!ctx.cr6.gt) goto loc_822D0A38;
loc_822D0A14:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x822d0a38
	if (!ctx.cr6.lt) goto loc_822D0A38;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d0a38
	if (!ctx.cr6.eq) goto loc_822D0A38;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x822d0a14
	if (ctx.cr6.gt) goto loc_822D0A14;
loc_822D0A38:
	// lbzx r10,r8,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// add r29,r8,r25
	ctx.r29.u64 = ctx.r8.u64 + ctx.r25.u64;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x822d0abc
	if (!ctx.cr6.eq) goto loc_822D0ABC;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// bgt cr6,0x822d0a70
	if (ctx.cr6.gt) goto loc_822D0A70;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,4076
	ctx.r3.s64 = ctx.r30.s64 + 4076;
	// bl 0x82635430
	ctx.lr = 0x822D0A6C;
	sub_82635430(ctx, base);
	// stw r31,4588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4588, ctx.r31.u32);
loc_822D0A70:
	// lwz r11,4596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4596);
	// li r19,1
	ctx.r19.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0b18
	if (ctx.cr6.eq) goto loc_822D0B18;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// stw r16,4596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4596, ctx.r16.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge cr6,0x822d0aa0
	if (!ctx.cr6.lt) goto loc_822D0AA0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D0A9C;
	sub_822D0280(ctx, base);
	// b 0x822d0b18
	goto loc_822D0B18;
loc_822D0AA0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lbz r7,3(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lbz r6,2(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r5,1(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// bl 0x822d0280
	ctx.lr = 0x822D0AB8;
	sub_822D0280(ctx, base);
	// b 0x822d0b18
	goto loc_822D0B18;
loc_822D0ABC:
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// bne cr6,0x822d0b0c
	if (!ctx.cr6.eq) goto loc_822D0B0C;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// bgt cr6,0x822d0ae4
	if (ctx.cr6.gt) goto loc_822D0AE4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,4332
	ctx.r3.s64 = ctx.r30.s64 + 4332;
	// bl 0x82635430
	ctx.lr = 0x822D0AE0;
	sub_82635430(ctx, base);
	// stw r31,4592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4592, ctx.r31.u32);
loc_822D0AE4:
	// lwz r11,4600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// li r17,1
	ctx.r17.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0b18
	if (ctx.cr6.eq) goto loc_822D0B18;
	// stw r16,4600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4600, ctx.r16.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d07e8
	ctx.lr = 0x822D0B08;
	sub_822D07E8(ctx, base);
	// b 0x822d0b18
	goto loc_822D0B18;
loc_822D0B0C:
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// bne cr6,0x822d0b18
	if (!ctx.cr6.eq) goto loc_822D0B18;
	// li r24,1
	ctx.r24.s64 = 1;
loc_822D0B18:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// beq cr6,0x822d0b28
	if (ctx.cr6.eq) goto loc_822D0B28;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// bne cr6,0x822d0b40
	if (!ctx.cr6.eq) goto loc_822D0B40;
loc_822D0B28:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r23,1
	ctx.r23.s64 = 1;
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d0b40
	if (ctx.cr6.eq) goto loc_822D0B40;
	// li r21,1
	ctx.r21.s64 = 1;
loc_822D0B40:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x822d0b4c
	goto loc_822D0B4C;
loc_822D0B48:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822D0B4C:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x822d0970
	if (!ctx.cr6.gt) goto loc_822D0970;
loc_822D0B58:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x822d0b8c
	if (ctx.cr6.eq) goto loc_822D0B8C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x822d0b8c
	if (!ctx.cr6.eq) goto loc_822D0B8C;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d0b90
	if (ctx.cr6.eq) goto loc_822D0B90;
	// lwz r11,4916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4916);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4916(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4916, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_822D0B8C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_822D0B90:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x822d0cec
	if (ctx.cr6.eq) goto loc_822D0CEC;
	// stw r16,4068(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4068, ctx.r16.u32);
loc_822D0B9C:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// std r16,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r16.u64);
	// std r16,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r16.u64);
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// stb r24,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r24.u8);
	// stb r11,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r11.u8);
	// bl 0x822eac70
	ctx.lr = 0x822D0BB8;
	sub_822EAC70(ctx, base);
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x822d0cac
	if (ctx.cr6.eq) goto loc_822D0CAC;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x822d0be0
	if (!ctx.cr6.eq) goto loc_822D0BE0;
	// lwz r11,4588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0bf4
	if (!ctx.cr6.eq) goto loc_822D0BF4;
loc_822D0BE0:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x822d0ca0
	if (!ctx.cr6.eq) goto loc_822D0CA0;
	// lwz r11,4592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0ca0
	if (ctx.cr6.eq) goto loc_822D0CA0;
loc_822D0BF4:
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x822d0c38
	if (!ctx.cr6.eq) goto loc_822D0C38;
	// lwz r11,4588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0c38
	if (ctx.cr6.eq) goto loc_822D0C38;
	// lwz r11,12076(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12076);
	// addi r4,r30,4076
	ctx.r4.s64 = ctx.r30.s64 + 4076;
	// lwz r10,3512(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3512);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,4588(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4588);
	// lwz r11,3512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3512);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82635430
	ctx.lr = 0x822D0C30;
	sub_82635430(ctx, base);
	// lwz r11,4588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4588);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_822D0C38:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x822d0c7c
	if (!ctx.cr6.eq) goto loc_822D0C7C;
	// lwz r11,4592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0c7c
	if (ctx.cr6.eq) goto loc_822D0C7C;
	// lwz r11,3512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3512);
	// addi r4,r30,4332
	ctx.r4.s64 = ctx.r30.s64 + 4332;
	// lwz r10,12076(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12076);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,4592(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4592);
	// lwz r11,3512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3512);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x822D0C74;
	sub_82635430(ctx, base);
	// lwz r11,4592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4592);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822D0C7C:
	// lwz r11,3512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3512);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x822D0C90;
	sub_82635430(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,3512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3512);
	// add r5,r31,r27
	ctx.r5.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stb r11,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r11.u8);
loc_822D0CA0:
	// lwz r11,4912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4912);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4912, ctx.r11.u32);
loc_822D0CAC:
	// lwz r9,4904(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4904);
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// ld r10,4928(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4928);
	// lwz r8,4896(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4896);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,4908(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4908, ctx.r5.u32);
	// stw r7,4904(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4904, ctx.r7.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// std r6,4928(r30)
	PPC_STORE_U64(ctx.r30.u32 + 4928, ctx.r6.u64);
	// bne cr6,0x822d0d28
	if (!ctx.cr6.eq) goto loc_822D0D28;
	// ld r11,3544(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 3544);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822d0d0c
	if (!ctx.cr6.eq) goto loc_822D0D0C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// b 0x822d0d24
	goto loc_822D0D24;
loc_822D0CEC:
	// lwz r10,4068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4068);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d0b9c
	if (ctx.cr6.eq) goto loc_822D0B9C;
	// lwz r11,4920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4920);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4920, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_822D0D0C:
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf. r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d0d24
	if (!ctx.cr0.eq) goto loc_822D0D24;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D0D24:
	// stw r11,4896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4896, ctx.r11.u32);
loc_822D0D28:
	// lwz r11,4072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0d48
	if (ctx.cr6.eq) goto loc_822D0D48;
	// lwz r11,5472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5472);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5472, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_822D0D48:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0d64
	if (ctx.cr6.eq) goto loc_822D0D64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0D64:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D0920) {
	__imp__sub_822D0920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D0D6C) {
	__imp__sub_822D0D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0D70) {
	PPC_FUNC_PROLOGUE();
	// b 0x822d0920
	sub_822D0920(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D0D70) {
	__imp__sub_822D0D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D0D74) {
	__imp__sub_822D0D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D0D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0de4
	if (ctx.cr6.eq) goto loc_822D0DE4;
	// bl 0x822f9830
	ctx.lr = 0x822D0D9C;
	sub_822F9830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d0de4
	if (ctx.cr6.lt) goto loc_822D0DE4;
	// lwz r11,4864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4864);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,4956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4956);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r8,r11,4,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// addi r6,r9,288
	ctx.r6.s64 = ctx.r9.s64 + 288;
	// add r30,r8,r31
	ctx.r30.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r4,4956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4956, ctx.r4.u32);
	// stw r3,4864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4864, ctx.r3.u32);
	// sthx r29,r5,r31
	PPC_STORE_U16(ctx.r5.u32 + ctx.r31.u32, ctx.r29.u16);
	// stb r7,4610(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4610, ctx.r7.u8);
	// bl 0x822f0b38
	ctx.lr = 0x822D0DE0;
	sub_822F0B38(ctx, base);
	// std r3,4616(r30)
	PPC_STORE_U64(ctx.r30.u32 + 4616, ctx.r3.u64);
loc_822D0DE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D0D78) {
	__imp__sub_822D0D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D0DEC) {
	__imp__sub_822D0DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0DF0) {
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
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x822d0ec0
	if (ctx.cr6.lt) goto loc_822D0EC0;
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r11,r3,4608
	ctx.r11.s64 = ctx.r3.s64 + 4608;
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
loc_822D0E2C:
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822d0e48
	if (ctx.cr6.eq) goto loc_822D0E48;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822d0e5c
	if (ctx.cr6.eq) goto loc_822D0E5C;
loc_822D0E48:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x822d0e2c
	if (ctx.cr6.lt) goto loc_822D0E2C;
	// b 0x822d0ec0
	goto loc_822D0EC0;
loc_822D0E5C:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r10,4610(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4610, ctx.r10.u8);
	// bl 0x822f0b38
	ctx.lr = 0x822D0E70;
	sub_822F0B38(ctx, base);
	// ld r9,4616(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4616);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r6,30
	ctx.r6.s64 = 1966080;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// ori r5,r6,33920
	ctx.r5.u64 = ctx.r6.u64 | 33920;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x822d0ec0
	if (ctx.cr6.gt) goto loc_822D0EC0;
	// lwz r10,5448(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5448);
	// stw r11,5452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5452, ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,5456(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5456);
	// stw r9,5448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5448, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d0ebc
	if (ctx.cr6.eq) goto loc_822D0EBC;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
loc_822D0EBC:
	// stw r11,5456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5456, ctx.r11.u32);
loc_822D0EC0:
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

PPC_WEAK_FUNC(sub_822D0DF0) {
	__imp__sub_822D0DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D0EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d0f84
	if (ctx.cr6.eq) goto loc_822D0F84;
	// lwz r11,4900(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4900);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4900(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4900, ctx.r11.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D0F08;
	sub_822EAC70(ctx, base);
	// lwz r10,4956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4956);
	// std r3,4048(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4048, ctx.r3.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d0f28
	if (ctx.cr6.eq) goto loc_822D0F28;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0df0
	ctx.lr = 0x822D0F28;
	sub_822D0DF0(ctx, base);
loc_822D0F28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D0F34;
	sub_822EAC70(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r7,r10,3440
	ctx.r7.s64 = ctx.r10.s64 + 3440;
	// addi r8,r9,3448
	ctx.r8.s64 = ctx.r9.s64 + 3448;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1856
	ctx.r3.s64 = ctx.r31.s64 + 1856;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9958
	ctx.lr = 0x822D0F60;
	sub_822E9958(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d0f84
	if (ctx.cr6.eq) goto loc_822D0F84;
	// lwz r11,4072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d0f84
	if (!ctx.cr6.eq) goto loc_822D0F84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0560
	ctx.lr = 0x822D0F84;
	sub_822D0560(ctx, base);
loc_822D0F84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D0ED8) {
	__imp__sub_822D0ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D0F8C) {
	__imp__sub_822D0F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D0F90) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r11,r8,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r9,r8,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x822d0ff0
	if (ctx.cr6.eq) goto loc_822D0FF0;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x822d0ff0
	if (ctx.cr6.gt) goto loc_822D0FF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r6,3(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// rotlwi r4,r7,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 | ctx.r6.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_822D0FF0:
	// rlwinm r9,r8,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d101c
	if (ctx.cr6.eq) goto loc_822D101C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_822D101C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r6,4980(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4980);
	// ld r8,4984(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4984);
	// clrldi r9,r7,32
	ctx.r9.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,4980(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4980, ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r4,4984(r5)
	PPC_STORE_U64(ctx.r5.u32 + 4984, ctx.r4.u64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rotlwi r4,r9,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// lbz r4,3(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r9,7(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r3,60(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// or r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 | ctx.r4.u64;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822D0F90) {
	__imp__sub_822D0F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D109C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D109C) {
	__imp__sub_822D109C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D10A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5000, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D10A0) {
	__imp__sub_822D10A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D10B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// addi r6,r11,904
	ctx.r6.s64 = ctx.r11.s64 + 904;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// sync 
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,10
	ctx.r9.s64 = 10;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r4,-4
	ctx.r7.s64 = ctx.r4.s64 + -4;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,3632
	ctx.r9.s64 = ctx.r8.s64 + 3632;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
loc_822D1100:
	// lwzu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822d1100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D1100;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// sync 
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r3,3792
	ctx.r9.s64 = ctx.r3.s64 + 3792;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r5,3792(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3792);
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822D113C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// or r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_822D1144:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822d1168
	if (!ctx.cr6.eq) goto loc_822D1168;
	// stwcx. r5,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822d1144
	if (!ctx.cr0.eq) goto loc_822D1144;
	// b 0x822d1170
	goto loc_822D1170;
loc_822D1168:
	// stwcx. r7,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822D1170:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822d113c
	if (!ctx.cr6.eq) goto loc_822D113C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D10B0) {
	__imp__sub_822D10B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1180) {
	PPC_FUNC_PROLOGUE();
	// b 0x822fab78
	sub_822FAB78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1180) {
	__imp__sub_822D1180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1184) {
	__imp__sub_822D1184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1188) {
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
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822D11A8;
	sub_826344D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,3000
	ctx.r10.s64 = 3000;
	// addi r9,r11,27828
	ctx.r9.s64 = ctx.r11.s64 + 27828;
	// li r8,1280
	ctx.r8.s64 = 1280;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r7,720
	ctx.r7.s64 = 720;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// li r6,30
	ctx.r6.s64 = 30;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// li r4,12000
	ctx.r4.s64 = 12000;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822D1188) {
	__imp__sub_822D1188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1200) {
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
	// beq cr6,0x822d1254
	if (ctx.cr6.eq) goto loc_822D1254;
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d1234
	if (ctx.cr6.eq) goto loc_822D1234;
	// bl 0x822f9740
	ctx.lr = 0x822D122C;
	sub_822F9740(ctx, base);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f96f0
	ctx.lr = 0x822D1234;
	sub_822F96F0(ctx, base);
loc_822D1234:
	// addi r3,r31,1856
	ctx.r3.s64 = ctx.r31.s64 + 1856;
	// bl 0x822e92e8
	ctx.lr = 0x822D123C;
	sub_822E92E8(ctx, base);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// bl 0x82634d40
	ctx.lr = 0x822D1244;
	sub_82634D40(ctx, base);
	// lwz r3,3512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3512);
	// bl 0x82634d40
	ctx.lr = 0x822D124C;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D1254;
	sub_82634D40(ctx, base);
loc_822D1254:
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

PPC_WEAK_FUNC(sub_822D1200) {
	__imp__sub_822D1200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822D1270;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r26,244(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d130c
	if (ctx.cr6.eq) goto loc_822D130C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r11,12836
	ctx.r29.s64 = ctx.r11.s64 + 12836;
	// addi r27,r10,12820
	ctx.r27.s64 = ctx.r10.s64 + 12820;
loc_822D12A4:
	// cmplwi cr6,r28,12287
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 12287, ctx.xer);
	// bge cr6,0x822d130c
	if (!ctx.cr6.lt) goto loc_822D130C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822D12BC;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d12ec
	if (!ctx.cr6.eq) goto loc_822D12EC;
	// cmplwi cr6,r28,12273
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 12273, ctx.xer);
	// bge cr6,0x822d12ec
	if (!ctx.cr6.lt) goto loc_822D12EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822D12DC;
	sub_82635430(ctx, base);
	// addi r28,r28,15
	ctx.r28.s64 = ctx.r28.s64 + 15;
	// addi r30,r30,15
	ctx.r30.s64 = ctx.r30.s64 + 15;
	// addi r31,r31,15
	ctx.r31.s64 = ctx.r31.s64 + 15;
	// b 0x822d1300
	goto loc_822D1300;
loc_822D12EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822D1300:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d12a4
	if (!ctx.cr6.eq) goto loc_822D12A4;
loc_822D130C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stbx r11,r28,r26
	PPC_STORE_U8(ctx.r28.u32 + ctx.r26.u32, ctx.r11.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,12812
	ctx.r4.s64 = ctx.r10.s64 + 12812;
	// lwz r27,3612(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3612);
	// bl 0x82634c80
	ctx.lr = 0x822D1328;
	sub_82634C80(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d1358
	if (ctx.cr6.eq) goto loc_822D1358;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,12808
	ctx.r4.s64 = ctx.r11.s64 + 12808;
	// bl 0x82634c80
	ctx.lr = 0x822D1340;
	sub_82634C80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r25,1
	ctx.r3.s64 = ctx.r25.s64 + 1;
	// addi r4,r11,12804
	ctx.r4.s64 = ctx.r11.s64 + 12804;
	// bl 0x82634c80
	ctx.lr = 0x822D1354;
	sub_82634C80(ctx, base);
	// b 0x822d1360
	goto loc_822D1360;
loc_822D1358:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D1360:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r24,r11,10856
	ctx.r24.s64 = ctx.r11.s64 + 10856;
	// ble cr6,0x822d1454
	if (!ctx.cr6.gt) goto loc_822D1454;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d1454
	if (ctx.cr6.eq) goto loc_822D1454;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d1388
	if (ctx.cr6.eq) goto loc_822D1388;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x822d1454
	if (!ctx.cr6.lt) goto loc_822D1454;
loc_822D1388:
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x82634d00
	ctx.lr = 0x822D1394;
	sub_82634D00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d1464
	if (ctx.cr6.eq) goto loc_822D1464;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x822d13c0
	if (!ctx.cr6.gt) goto loc_822D13C0;
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x822d13c0
	if (!ctx.cr6.eq) goto loc_822D13C0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// b 0x822d13cc
	goto loc_822D13CC;
loc_822D13C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,10696
	ctx.r9.s64 = ctx.r11.s64 + 10696;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_822D13CC:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mulli r30,r11,1000
	ctx.r30.s64 = ctx.r11.s64 * 1000;
	// addi r5,r10,12780
	ctx.r5.s64 = ctx.r10.s64 + 12780;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822eca80
	ctx.lr = 0x822D13F0;
	sub_822ECA80(ctx, base);
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf r11,r26,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r26.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,12288
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12288, ctx.xer);
	// bge cr6,0x822d1464
	if (!ctx.cr6.lt) goto loc_822D1464;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82634bc0
	ctx.lr = 0x822D1428;
	sub_82634BC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822D1438;
	sub_82635430(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,12720
	ctx.r4.s64 = ctx.r11.s64 + 12720;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1450;
	sub_822D0280(ctx, base);
	// b 0x822d1464
	goto loc_822D1464;
loc_822D1454:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,12672
	ctx.r4.s64 = ctx.r11.s64 + 12672;
	// bl 0x822d0280
	ctx.lr = 0x822D1464;
	sub_822D0280(ctx, base);
loc_822D1464:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r31,r11,-22864
	ctx.r31.s64 = ctx.r11.s64 + -22864;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d151c
	if (ctx.cr6.eq) goto loc_822D151C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822d1500
	if (!ctx.cr6.eq) goto loc_822D1500;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822d1528
	if (ctx.cr6.eq) goto loc_822D1528;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,12652
	ctx.r4.s64 = ctx.r11.s64 + 12652;
	// bl 0x82634c80
	ctx.lr = 0x822D14A0;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d151c
	if (ctx.cr6.eq) goto loc_822D151C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D14AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d14ac
	if (!ctx.cr6.eq) goto loc_822D14AC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// blt cr6,0x822d151c
	if (ctx.cr6.lt) goto loc_822D151C;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r3,17
	ctx.r10.s64 = ctx.r3.s64 + 17;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D14E8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822d14e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D14E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,12604
	ctx.r4.s64 = ctx.r11.s64 + 12604;
	// b 0x822d1510
	goto loc_822D1510;
loc_822D1500:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d151c
	if (ctx.cr6.eq) goto loc_822D151C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,12556
	ctx.r4.s64 = ctx.r11.s64 + 12556;
loc_822D1510:
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D151C;
	sub_822D0280(ctx, base);
loc_822D151C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x822d152c
	if (!ctx.cr6.eq) goto loc_822D152C;
loc_822D1528:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_822D152C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,12548
	ctx.r4.s64 = ctx.r11.s64 + 12548;
	// bl 0x82634c80
	ctx.lr = 0x822D1538;
	sub_82634C80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d1578
	if (ctx.cr6.eq) goto loc_822D1578;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822D154C;
	sub_82635AC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,150
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 150, ctx.xer);
	// ble cr6,0x822d155c
	if (!ctx.cr6.gt) goto loc_822D155C;
	// li r6,150
	ctx.r6.s64 = 150;
loc_822D155C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,12540
	ctx.r5.s64 = ctx.r11.s64 + 12540;
	// addi r4,r10,12524
	ctx.r4.s64 = ctx.r10.s64 + 12524;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1578;
	sub_822D0280(ctx, base);
loc_822D1578:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1268) {
	__imp__sub_822D1268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822D1588;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// addi r4,r11,10860
	ctx.r4.s64 = ctx.r11.s64 + 10860;
	// bl 0x82634c80
	ctx.lr = 0x822D15A0;
	sub_82634C80(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r28,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r28.u8);
	// addi r27,r31,248
	ctx.r27.s64 = ctx.r31.s64 + 248;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,10856
	ctx.r26.s64 = ctx.r11.s64 + 10856;
	// beq cr6,0x822d15f4
	if (ctx.cr6.eq) goto loc_822D15F4;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822D15CC;
	sub_82635AC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// blt cr6,0x822d15dc
	if (ctx.cr6.lt) goto loc_822D15DC;
	// li r30,63
	ctx.r30.s64 = 63;
loc_822D15DC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x822D15EC;
	sub_82635430(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stb r28,248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 248, ctx.r28.u8);
loc_822D15F4:
	// stw r28,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r27,r11,12852
	ctx.r27.s64 = ctx.r11.s64 + 12852;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82634c80
	ctx.lr = 0x822D160C;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d16a0
	if (ctx.cr6.eq) goto loc_822D16A0;
loc_822D1614:
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x822d16a0
	if (!ctx.cr6.lt) goto loc_822D16A0;
	// addi r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822D1630;
	sub_82635AC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 192, ctx.xer);
	// blt cr6,0x822d1640
	if (ctx.cr6.lt) goto loc_822D1640;
	// li r30,191
	ctx.r30.s64 = 191;
loc_822D1640:
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// bl 0x82635430
	ctx.lr = 0x822D1664;
	sub_82635430(ctx, base);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,312(r9)
	PPC_STORE_U8(ctx.r9.u32 + 312, ctx.r28.u8);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r8.u32);
	// bl 0x82634c80
	ctx.lr = 0x822D1698;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1614
	if (!ctx.cr6.eq) goto loc_822D1614;
loc_822D16A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1580) {
	__imp__sub_822D1580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D16A8) {
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
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// bl 0x822fa720
	ctx.lr = 0x822D16C4;
	sub_822FA720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d16e4
	if (!ctx.cr6.eq) goto loc_822D16E4;
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
loc_822D16E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1268
	ctx.lr = 0x822D16EC;
	sub_822D1268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1580
	ctx.lr = 0x822D16F4;
	sub_822D1580(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822D16FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d16fc
	if (!ctx.cr6.eq) goto loc_822D16FC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r7,1848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,12868
	ctx.r4.s64 = ctx.r10.s64 + 12868;
	// addi r6,r31,248
	ctx.r6.s64 = ctx.r31.s64 + 248;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1730;
	sub_822D0280(ctx, base);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
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

PPC_WEAK_FUNC(sub_822D16A8) {
	__imp__sub_822D16A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1748) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1848(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1748) {
	__imp__sub_822D1748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1750) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822d177c
	if (ctx.cr6.lt) goto loc_822D177C;
	// lwz r11,1848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822d177c
	if (!ctx.cr6.lt) goto loc_822D177C;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// blr 
	return;
loc_822D177C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1750) {
	__imp__sub_822D1750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1784) {
	__imp__sub_822D1784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D1790;
	__savegprlr_29(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,10728
	ctx.r4.s64 = ctx.r11.s64 + 10728;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822D17B0;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d17bc
	if (!ctx.cr6.eq) goto loc_822D17BC;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_822D17BC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,10696
	ctx.r4.s64 = ctx.r11.s64 + 10696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822D17D0;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d17e4
	if (ctx.cr6.eq) goto loc_822D17E4;
loc_822D17D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D17E4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,10856
	ctx.r4.s64 = ctx.r11.s64 + 10856;
	// bl 0x82635ac8
	ctx.lr = 0x822D17F4;
	sub_82635AC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// bge cr6,0x822d17d8
	if (!ctx.cr6.lt) goto loc_822D17D8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82635430
	ctx.lr = 0x822D1810;
	sub_82635430(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x822faa98
	ctx.lr = 0x822D1828;
	sub_822FAA98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1840
	if (!ctx.cr6.eq) goto loc_822D1840;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,8828
	ctx.r5.s64 = ctx.r11.s64 + 8828;
	// b 0x822d1848
	goto loc_822D1848;
loc_822D1840:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,12948
	ctx.r5.s64 = ctx.r11.s64 + 12948;
loc_822D1848:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,12924
	ctx.r4.s64 = ctx.r11.s64 + 12924;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D185C;
	sub_822D0280(ctx, base);
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1788) {
	__imp__sub_822D1788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D186C) {
	__imp__sub_822D186C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822D1878;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x822eac70
	ctx.lr = 0x822D1888;
	sub_822EAC70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,3544(r30)
	PPC_STORE_U64(ctx.r30.u32 + 3544, ctx.r3.u64);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,3524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3524, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r31,r10,12812
	ctx.r31.s64 = ctx.r10.s64 + 12812;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82634c80
	ctx.lr = 0x822D18A8;
	sub_82634C80(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82634c80
	ctx.lr = 0x822D18B8;
	sub_82634C80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,12524
	ctx.r29.s64 = ctx.r11.s64 + 12524;
	// addi r27,r10,10856
	ctx.r27.s64 = ctx.r10.s64 + 10856;
	// addi r28,r9,13072
	ctx.r28.s64 = ctx.r9.s64 + 13072;
	// beq cr6,0x822d1908
	if (ctx.cr6.eq) goto loc_822D1908;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822D18E4;
	sub_82635AC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,150
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 150, ctx.xer);
	// ble cr6,0x822d18f4
	if (!ctx.cr6.gt) goto loc_822D18F4;
	// li r6,150
	ctx.r6.s64 = 150;
loc_822D18F4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1908;
	sub_822D0280(ctx, base);
loc_822D1908:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x822d1918
	if (!ctx.cr6.eq) goto loc_822D1918;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_822D1918:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,13060
	ctx.r4.s64 = ctx.r11.s64 + 13060;
	// bl 0x82634c80
	ctx.lr = 0x822D1924;
	sub_82634C80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d195c
	if (ctx.cr6.eq) goto loc_822D195C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822D1938;
	sub_82635AC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,150
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 150, ctx.xer);
	// ble cr6,0x822d1948
	if (!ctx.cr6.gt) goto loc_822D1948;
	// li r6,150
	ctx.r6.s64 = 150;
loc_822D1948:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D195C;
	sub_822D0280(ctx, base);
loc_822D195C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x822d196c
	if (!ctx.cr6.eq) goto loc_822D196C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_822D196C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,12548
	ctx.r4.s64 = ctx.r11.s64 + 12548;
	// bl 0x82634c80
	ctx.lr = 0x822D1978;
	sub_82634C80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d19b0
	if (ctx.cr6.eq) goto loc_822D19B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822D198C;
	sub_82635AC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,150
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 150, ctx.xer);
	// ble cr6,0x822d199c
	if (!ctx.cr6.gt) goto loc_822D199C;
	// li r6,150
	ctx.r6.s64 = 150;
loc_822D199C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D19B0;
	sub_822D0280(ctx, base);
loc_822D19B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822d1a10
	if (ctx.cr6.eq) goto loc_822D1A10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,13048
	ctx.r4.s64 = ctx.r11.s64 + 13048;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82635190
	ctx.lr = 0x822D19CC;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d1a10
	if (!ctx.cr6.eq) goto loc_822D1A10;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r11,r11,-22864
	ctx.r11.s64 = ctx.r11.s64 + -22864;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d1a10
	if (ctx.cr6.eq) goto loc_822D1A10;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822d1a10
	if (!ctx.cr6.eq) goto loc_822D1A10;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r4,r9,12960
	ctx.r4.s64 = ctx.r9.s64 + 12960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1A10;
	sub_822D0280(ctx, base);
loc_822D1A10:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822fa4f0
	ctx.lr = 0x822D1A20;
	sub_822FA4F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1870) {
	__imp__sub_822D1870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1A2C) {
	__imp__sub_822D1A2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1A30) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822d1a44
	if (ctx.cr6.eq) goto loc_822D1A44;
	// stw r11,3604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3604, ctx.r11.u32);
	// blr 
	return;
loc_822D1A44:
	// stw r11,3600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3600, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1A30) {
	__imp__sub_822D1A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1A4C) {
	__imp__sub_822D1A4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1A50) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3608, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1A50) {
	__imp__sub_822D1A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1A5C) {
	__imp__sub_822D1A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subfe r11,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4072(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4072);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,4072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4072, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4068, ctx.r11.u32);
	// stw r11,3604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3604, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1A60) {
	__imp__sub_822D1A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3516(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3516);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1A98) {
	__imp__sub_822D1A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D1AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,3516(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3516);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r7,3520(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3520);
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,4872
	ctx.r30.s64 = ctx.r3.s64 + 4872;
	// addi r11,r3,3460
	ctx.r11.s64 = ctx.r3.s64 + 3460;
	// stw r8,4872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4872, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r7,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r7.u32);
loc_822D1AD8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822d1ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D1AD8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,3432(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3432);
	// stw r11,4936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4936, ctx.r11.u32);
	// stw r10,4940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4940, ctx.r10.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,4944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4944, ctx.r9.u32);
	// stw r8,4948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4948, ctx.r8.u32);
	// stw r7,4952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4952, ctx.r7.u32);
	// bne cr6,0x822d1b28
	if (!ctx.cr6.eq) goto loc_822D1B28;
	// lwz r11,4068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822d1b2c
	if (ctx.cr6.eq) goto loc_822D1B2C;
loc_822D1B28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D1B2C:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stb r11,4976(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4976, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d1b44
	if (ctx.cr6.eq) goto loc_822D1B44;
	// bl 0x822f9398
	ctx.lr = 0x822D1B40;
	sub_822F9398(ctx, base);
	// b 0x822d1b48
	goto loc_822D1B48;
loc_822D1B44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D1B48:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stw r3,4992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4992, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1b6c
	if (ctx.cr6.eq) goto loc_822D1B6C;
	// li r5,384
	ctx.r5.s64 = 384;
	// addi r4,r31,5012
	ctx.r4.s64 = ctx.r31.s64 + 5012;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822f93a0
	ctx.lr = 0x822D1B68;
	sub_822F93A0(ctx, base);
	// stw r3,5008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5008, ctx.r3.u32);
loc_822D1B6C:
	// lwz r11,3436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d1bac
	if (ctx.cr6.eq) goto loc_822D1BAC;
	// lwz r10,3448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3448);
	// lhz r11,3440(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3440);
	// lwz r9,3444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3444);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,3452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5464, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bgt cr6,0x822d1ba8
	if (ctx.cr6.gt) goto loc_822D1BA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D1BA8:
	// stw r11,5468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5468, ctx.r11.u32);
loc_822D1BAC:
	// li r5,608
	ctx.r5.s64 = 608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822D1BBC;
	sub_82635430(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1AA0) {
	__imp__sub_822D1AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1BC4) {
	__imp__sub_822D1BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1BC8) {
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
	// lwz r11,3516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3516);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822d1c64
	if (ctx.cr6.eq) goto loc_822D1C64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d1c64
	if (ctx.cr6.eq) goto loc_822D1C64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x822d1c64
	if (ctx.cr6.eq) goto loc_822D1C64;
	// stw r4,3516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3516, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d1c20
	if (ctx.cr6.eq) goto loc_822D1C20;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r5,3520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3520, ctx.r5.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r6,r11,13108
	ctx.r6.s64 = ctx.r11.s64 + 13108;
	// b 0x822d1c2c
	goto loc_822D1C2C;
loc_822D1C20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r11,8828
	ctx.r7.s64 = ctx.r11.s64 + 8828;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_822D1C2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d0328
	ctx.lr = 0x822D1C34;
	sub_822D0328(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,13084
	ctx.r4.s64 = ctx.r11.s64 + 13084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1C48;
	sub_822D0280(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1c64
	if (ctx.cr6.eq) goto loc_822D1C64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D1C64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D1BC8) {
	__imp__sub_822D1BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D1C7C) {
	__imp__sub_822D1C7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D1C88;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d1e68
	if (!ctx.cr6.eq) goto loc_822D1E68;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3528, ctx.r11.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D1CA8;
	sub_822EAC70(ctx, base);
	// ld r11,3544(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3544);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d1cc8
	if (ctx.cr6.eq) goto loc_822D1CC8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1cc8
	if (!ctx.cr0.eq) goto loc_822D1CC8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D1CC8:
	// stw r11,4888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4888, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13112
	ctx.r4.s64 = ctx.r11.s64 + 13112;
	// bl 0x822d0280
	ctx.lr = 0x822D1CDC;
	sub_822D0280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,12028
	ctx.r28.s64 = ctx.r11.s64 + 12028;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
loc_822D1CE8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9cd0
	ctx.lr = 0x822D1D08;
	sub_822F9CD0(ctx, base);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r11,r28,52
	ctx.r11.s64 = ctx.r28.s64 + 52;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d1ce8
	if (ctx.cr6.lt) goto loc_822D1CE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r11,8828
	ctx.r27.s64 = ctx.r11.s64 + 8828;
	// lwz r11,3516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3516);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822d1d80
	if (ctx.cr6.eq) goto loc_822D1D80;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d1d80
	if (ctx.cr6.eq) goto loc_822D1D80;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x822d1d80
	if (ctx.cr6.eq) goto loc_822D1D80;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r11.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r10,12092
	ctx.r5.s64 = ctx.r10.s64 + 12092;
	// addi r4,r9,13084
	ctx.r4.s64 = ctx.r9.s64 + 13084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1D64;
	sub_822D0280(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1d80
	if (ctx.cr6.eq) goto loc_822D1D80;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D1D80:
	// bl 0x822d9fb8
	ctx.lr = 0x822D1D84;
	sub_822D9FB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D1D8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d1d8c
	if (!ctx.cr6.eq) goto loc_822D1D8C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x822d1e68
	if (ctx.cr6.eq) goto loc_822D1E68;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// bl 0x822fa9b8
	ctx.lr = 0x822D1DC8;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1df8
	if (ctx.cr6.eq) goto loc_822D1DF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12276
	ctx.r4.s64 = ctx.r11.s64 + 12276;
	// bl 0x822d0280
	ctx.lr = 0x822D1DE4;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D1DF8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9c58
	ctx.lr = 0x822D1E0C;
	sub_822F9C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d1e24
	if (!ctx.cr6.lt) goto loc_822D1E24;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d1e30
	goto loc_822D1E30;
loc_822D1E24:
	// lwz r11,5420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5420);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5420, ctx.r11.u32);
loc_822D1E30:
	// cmplwi cr6,r30,180
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 180, ctx.xer);
	// ble cr6,0x822d1e44
	if (!ctx.cr6.gt) goto loc_822D1E44;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r11,6112
	ctx.r9.s64 = ctx.r11.s64 + 6112;
	// b 0x822d1e48
	goto loc_822D1E48;
loc_822D1E44:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_822D1E48:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r4,r10,12236
	ctx.r4.s64 = ctx.r10.s64 + 12236;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1E68;
	sub_822D0280(ctx, base);
loc_822D1E68:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1C80) {
	__imp__sub_822D1C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E70) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,3536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3536, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r10,13172
	ctx.r5.s64 = ctx.r10.s64 + 13172;
	// b 0x822d1bc8
	sub_822D1BC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1E70) {
	__imp__sub_822D1E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D1E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822D1E90;
	__savegprlr_22(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,13308
	ctx.r4.s64 = ctx.r11.s64 + 13308;
	// bl 0x822d0280
	ctx.lr = 0x822D1EA4;
	sub_822D0280(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r22,3532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3532, ctx.r22.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D1EB0;
	sub_822EAC70(ctx, base);
	// ld r11,3544(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3544);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822d1ec8
	if (!ctx.cr6.eq) goto loc_822D1EC8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x822d1edc
	goto loc_822D1EDC;
loc_822D1EC8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1edc
	if (!ctx.cr0.eq) goto loc_822D1EDC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_822D1EDC:
	// stw r11,4892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4892, ctx.r11.u32);
	// bl 0x822d9ee8
	ctx.lr = 0x822D1EE4;
	sub_822D9EE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D1EEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d1eec
	if (!ctx.cr6.eq) goto loc_822D1EEC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// rotlwi r29,r6,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r10,12028
	ctx.r28.s64 = ctx.r10.s64 + 12028;
	// addi r26,r11,12236
	ctx.r26.s64 = ctx.r11.s64 + 12236;
	// addi r23,r9,8828
	ctx.r23.s64 = ctx.r9.s64 + 8828;
	// addi r24,r8,6112
	ctx.r24.s64 = ctx.r8.s64 + 6112;
	// addi r27,r7,12276
	ctx.r27.s64 = ctx.r7.s64 + 12276;
	// beq cr6,0x822d1fd8
	if (ctx.cr6.eq) goto loc_822D1FD8;
	// sth r25,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r25.u16);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822fa9b8
	ctx.lr = 0x822D1F4C;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d1f74
	if (ctx.cr6.eq) goto loc_822D1F74;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1F64;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d1fd8
	goto loc_822D1FD8;
loc_822D1F74:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9c58
	ctx.lr = 0x822D1F88;
	sub_822F9C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d1fa0
	if (!ctx.cr6.lt) goto loc_822D1FA0;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d1fac
	goto loc_822D1FAC;
loc_822D1FA0:
	// lwz r11,5412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r11.u32);
loc_822D1FAC:
	// cmplwi cr6,r29,180
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 180, ctx.xer);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bgt cr6,0x822d1fbc
	if (ctx.cr6.gt) goto loc_822D1FBC;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_822D1FBC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D1FD8;
	sub_822D0280(ctx, base);
loc_822D1FD8:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d9ef8
	ctx.lr = 0x822D1FE4;
	sub_822D9EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D1FEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d1fec
	if (!ctx.cr6.eq) goto loc_822D1FEC;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x822d20b0
	if (ctx.cr6.eq) goto loc_822D20B0;
	// sth r25,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r25.u16);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822fa9b8
	ctx.lr = 0x822D2024;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d204c
	if (ctx.cr6.eq) goto loc_822D204C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D203C;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d20b0
	goto loc_822D20B0;
loc_822D204C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9c58
	ctx.lr = 0x822D2060;
	sub_822F9C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d2078
	if (!ctx.cr6.lt) goto loc_822D2078;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d2084
	goto loc_822D2084;
loc_822D2078:
	// lwz r11,5412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r11.u32);
loc_822D2084:
	// cmplwi cr6,r30,180
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 180, ctx.xer);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bgt cr6,0x822d2094
	if (ctx.cr6.gt) goto loc_822D2094;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_822D2094:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D20B0;
	sub_822D0280(ctx, base);
loc_822D20B0:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x822d9f70
	ctx.lr = 0x822D20B8;
	sub_822D9F70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D20C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d20c0
	if (!ctx.cr6.eq) goto loc_822D20C0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x822d2184
	if (ctx.cr6.eq) goto loc_822D2184;
	// sth r25,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r25.u16);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822fa9b8
	ctx.lr = 0x822D20F8;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d2120
	if (ctx.cr6.eq) goto loc_822D2120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2110;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d2184
	goto loc_822D2184;
loc_822D2120:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9c58
	ctx.lr = 0x822D2134;
	sub_822F9C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d214c
	if (!ctx.cr6.lt) goto loc_822D214C;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d2158
	goto loc_822D2158;
loc_822D214C:
	// lwz r11,5412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r11.u32);
loc_822D2158:
	// cmplwi cr6,r29,180
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 180, ctx.xer);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bgt cr6,0x822d2168
	if (ctx.cr6.gt) goto loc_822D2168;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_822D2168:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2184;
	sub_822D0280(ctx, base);
loc_822D2184:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_822D2188:
	// li r9,1024
	ctx.r9.s64 = 1024;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r6,3612(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3612);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822da320
	ctx.lr = 0x822D21A8;
	sub_822DA320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d227c
	if (!ctx.cr6.gt) goto loc_822D227C;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822D21B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d21b8
	if (!ctx.cr6.eq) goto loc_822D21B8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x822d227c
	if (ctx.cr6.eq) goto loc_822D227C;
	// sth r25,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r25.u16);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x822fa9b8
	ctx.lr = 0x822D21F0;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d2218
	if (ctx.cr6.eq) goto loc_822D2218;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2208;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d227c
	goto loc_822D227C;
loc_822D2218:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9c58
	ctx.lr = 0x822D222C;
	sub_822F9C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d2244
	if (!ctx.cr6.lt) goto loc_822D2244;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d2250
	goto loc_822D2250;
loc_822D2244:
	// lwz r11,5420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5420);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5420, ctx.r11.u32);
loc_822D2250:
	// cmplwi cr6,r30,180
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 180, ctx.xer);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bgt cr6,0x822d2260
	if (ctx.cr6.gt) goto loc_822D2260;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_822D2260:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D227C;
	sub_822D0280(ctx, base);
loc_822D227C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// blt cr6,0x822d2188
	if (ctx.cr6.lt) goto loc_822D2188;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x822d9700
	ctx.lr = 0x822D229C;
	sub_822D9700(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2344
	if (ctx.cr6.eq) goto loc_822D2344;
	// sth r25,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r25.u16);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x822fa9b8
	ctx.lr = 0x822D22C0;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d22e8
	if (ctx.cr6.eq) goto loc_822D22E8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D22D8;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d2344
	goto loc_822D2344;
loc_822D22E8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9bc8
	ctx.lr = 0x822D22FC;
	sub_822F9BC8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d2318
	if (!ctx.cr6.lt) goto loc_822D2318;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d2324
	goto loc_822D2324;
loc_822D2318:
	// lwz r11,5416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5416, ctx.r11.u32);
loc_822D2324:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x822d2344
	if (!ctx.cr6.lt) goto loc_822D2344;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lhz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r10,12152
	ctx.r4.s64 = ctx.r10.s64 + 12152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2344;
	sub_822D0280(ctx, base);
loc_822D2344:
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r22,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,3804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3804, ctx.r25.u32);
	// addi r3,r31,3808
	ctx.r3.s64 = ctx.r31.s64 + 3808;
	// bl 0x826344d0
	ctx.lr = 0x822D235C;
	sub_826344D0(ctx, base);
	// stw r22,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r22.u32);
	// bl 0x822f0b38
	ctx.lr = 0x822D2364;
	sub_822F0B38(ctx, base);
	// std r3,4000(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4000, ctx.r3.u64);
	// bl 0x822eac70
	ctx.lr = 0x822D236C;
	sub_822EAC70(ctx, base);
	// std r3,4008(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4008, ctx.r3.u64);
	// std r3,3968(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3968, ctx.r3.u64);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// ld r9,4008(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4008);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r9,3976(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3976, ctx.r9.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,4008(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4008);
	// addi r4,r10,13252
	ctx.r4.s64 = ctx.r10.s64 + 13252;
	// std r8,3984(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3984, ctx.r8.u64);
	// ld r7,4008(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4008);
	// std r7,3992(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3992, ctx.r7.u64);
	// std r25,4016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4016, ctx.r25.u64);
	// stw r25,4024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4024, ctx.r25.u32);
	// bl 0x822d0280
	ctx.lr = 0x822D23A8;
	sub_822D0280(ctx, base);
	// bl 0x822d9f60
	ctx.lr = 0x822D23AC;
	sub_822D9F60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D23B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d23b4
	if (!ctx.cr6.eq) goto loc_822D23B4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x822d2478
	if (ctx.cr6.eq) goto loc_822D2478;
	// sth r25,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r25.u16);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822fa9b8
	ctx.lr = 0x822D23EC;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d2414
	if (ctx.cr6.eq) goto loc_822D2414;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2404;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d2478
	goto loc_822D2478;
loc_822D2414:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9c58
	ctx.lr = 0x822D2428;
	sub_822F9C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d2440
	if (!ctx.cr6.lt) goto loc_822D2440;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d244c
	goto loc_822D244C;
loc_822D2440:
	// lwz r11,5412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r11.u32);
loc_822D244C:
	// cmplwi cr6,r29,180
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 180, ctx.xer);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bgt cr6,0x822d245c
	if (ctx.cr6.gt) goto loc_822D245C;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_822D245C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2478;
	sub_822D0280(ctx, base);
loc_822D2478:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9770
	ctx.lr = 0x822D2480;
	sub_822F9770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d2494
	if (ctx.cr6.lt) goto loc_822D2494;
	// lwz r11,4960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4960);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4960, ctx.r11.u32);
loc_822D2494:
	// lwz r11,3516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3516);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822d24f4
	if (ctx.cr6.eq) goto loc_822D24F4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d24f4
	if (ctx.cr6.eq) goto loc_822D24F4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x822d24f4
	if (ctx.cr6.eq) goto loc_822D24F4;
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r11.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r10,12080
	ctx.r5.s64 = ctx.r10.s64 + 12080;
	// addi r4,r9,13084
	ctx.r4.s64 = ctx.r9.s64 + 13084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D24D8;
	sub_822D0280(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d24f4
	if (ctx.cr6.eq) goto loc_822D24F4;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D24F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D24F4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13196
	ctx.r4.s64 = ctx.r11.s64 + 13196;
	// bl 0x822d0280
	ctx.lr = 0x822D2504;
	sub_822D0280(ctx, base);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D1E88) {
	__imp__sub_822D1E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D250C) {
	__imp__sub_822D250C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D2518;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,240(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 240);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d2668
	if (ctx.cr6.eq) goto loc_822D2668;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x822faa40
	ctx.lr = 0x822D2540;
	sub_822FAA40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2554
	if (!ctx.cr6.eq) goto loc_822D2554;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x822d25bc
	goto loc_822D25BC;
loc_822D2554:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r11,12028
	ctx.r7.s64 = ctx.r11.s64 + 12028;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_822D2564:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822D256C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822d2590
	if (ctx.cr6.eq) goto loc_822D2590;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d256c
	if (ctx.cr6.eq) goto loc_822D256C;
loc_822D2590:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d25b4
	if (ctx.cr6.eq) goto loc_822D25B4;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r11,r7,48
	ctx.r11.s64 = ctx.r7.s64 + 48;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d2564
	if (ctx.cr6.lt) goto loc_822D2564;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x822d25bc
	goto loc_822D25BC;
loc_822D25B4:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x822d25f8
	if (ctx.cr6.eq) goto loc_822D25F8;
loc_822D25BC:
	// cmplwi cr6,r28,240
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 240, ctx.xer);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// blt cr6,0x822d25cc
	if (ctx.cr6.lt) goto loc_822D25CC;
	// li r8,240
	ctx.r8.s64 = 240;
loc_822D25CC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d25dc
	if (!ctx.cr6.eq) goto loc_822D25DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,13400
	ctx.r5.s64 = ctx.r11.s64 + 13400;
loc_822D25DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r4,r11,13364
	ctx.r4.s64 = ctx.r11.s64 + 13364;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D25F8;
	sub_822D0280(ctx, base);
loc_822D25F8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822d2614
	if (ctx.cr6.lt) goto loc_822D2614;
	// addi r11,r31,1349
	ctx.r11.s64 = ctx.r31.s64 + 1349;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_822D2614:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x822d2644
	if (!ctx.cr6.eq) goto loc_822D2644;
	// lwz r11,3532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d2644
	if (!ctx.cr6.eq) goto loc_822D2644;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d9fc8
	ctx.lr = 0x822D2634;
	sub_822D9FC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d2644
	if (ctx.cr6.eq) goto loc_822D2644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d1e88
	ctx.lr = 0x822D2644;
	sub_822D1E88(ctx, base);
loc_822D2644:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2668
	if (ctx.cr6.eq) goto loc_822D2668;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x822D2668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D2668:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D2510) {
	__imp__sub_822D2510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D2678;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822eac70
	ctx.lr = 0x822D2688;
	sub_822EAC70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f9578
	ctx.lr = 0x822D2694;
	sub_822F9578(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,13496
	ctx.r4.s64 = ctx.r11.s64 + 13496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D26A8;
	sub_822D0280(ctx, base);
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bgt cr6,0x822d2800
	if (ctx.cr6.gt) goto loc_822D2800;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822d27d0
	if (ctx.cr6.eq) goto loc_822D27D0;
	// bdz 0x822d2800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822D2800;
	// bdz 0x822d26d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822D26D4;
	// bdz 0x822d26ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822D26EC;
	// bdz 0x822d2754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822D2754;
	// bdz 0x822d27b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822D27B4;
	// b 0x822d27ec
	goto loc_822D27EC;
loc_822D26D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D26E4;
	sub_822D1BC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D26EC:
	// ld r11,3552(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3552);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822d273c
	if (!ctx.cr6.eq) goto loc_822D273C;
	// ld r11,3544(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3544);
	// std r29,3552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3552, ctx.r29.u64);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822d2724
	if (!ctx.cr6.eq) goto loc_822D2724;
	// stw r11,4880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4880, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D271C;
	sub_822D1BC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D2724:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2738
	if (!ctx.cr0.eq) goto loc_822D2738;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D2738:
	// stw r11,4880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4880, ctx.r11.u32);
loc_822D273C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D274C;
	sub_822D1BC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D2754:
	// ld r11,3544(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3544);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822d2780
	if (!ctx.cr6.eq) goto loc_822D2780;
	// stw r11,4884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4884, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r29,3568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3568, ctx.r29.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D2778;
	sub_822D1BC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D2780:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2794
	if (!ctx.cr0.eq) goto loc_822D2794;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D2794:
	// stw r11,4884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4884, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r29,3568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3568, ctx.r29.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D27AC;
	sub_822D1BC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D27B4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,13464
	ctx.r5.s64 = ctx.r11.s64 + 13464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D27C8;
	sub_822D1BC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D27D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,13424
	ctx.r5.s64 = ctx.r11.s64 + 13424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D27E4;
	sub_822D1BC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D27EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,13408
	ctx.r5.s64 = ctx.r11.s64 + 13408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D2800;
	sub_822D1BC8(ctx, base);
loc_822D2800:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D2670) {
	__imp__sub_822D2670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263442c
	ctx.lr = 0x822D2810;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3800);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d2d68
	if (ctx.cr6.eq) goto loc_822D2D68;
	// lwz r11,3532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d2d68
	if (ctx.cr6.eq) goto loc_822D2D68;
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// bl 0x822f9608
	ctx.lr = 0x822D2840;
	sub_822F9608(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x822d2864
	if (ctx.cr6.eq) goto loc_822D2864;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x822d2864
	if (ctx.cr6.eq) goto loc_822D2864;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4024, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822D2864:
	// ld r11,4016(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4016);
	// cmpld cr6,r20,r11
	ctx.cr6.compare<uint64_t>(ctx.r20.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822d2d68
	if (ctx.cr6.lt) goto loc_822D2D68;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822fa9b0
	ctx.lr = 0x822D2878;
	sub_822FA9B0(ctx, base);
	// ld r11,4032(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4032);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// ble cr6,0x822d2954
	if (!ctx.cr6.gt) goto loc_822D2954;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822d28b0
	if (!ctx.cr6.eq) goto loc_822D28B0;
	// std r20,4040(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4040, ctx.r20.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// std r20,4032(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4032, ctx.r20.u64);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,13876
	ctx.r4.s64 = ctx.r11.s64 + 13876;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D28AC;
	sub_822D0280(ctx, base);
	// b 0x822d28e0
	goto loc_822D28E0;
loc_822D28B0:
	// ld r10,4040(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4040);
	// subf r9,r10,r20
	ctx.r9.s64 = ctx.r20.s64 - ctx.r10.s64;
	// cmpldi cr6,r9,5000
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 5000, ctx.xer);
	// blt cr6,0x822d28e0
	if (ctx.cr6.lt) goto loc_822D28E0;
	// std r20,4040(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4040, ctx.r20.u64);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r20,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r4,r9,13824
	ctx.r4.s64 = ctx.r9.s64 + 13824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D28E0;
	sub_822D0280(ctx, base);
loc_822D28E0:
	// ld r10,4032(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4032);
	// subf r11,r10,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r10.s64;
	// cmpldi cr6,r11,4000
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 4000, ctx.xer);
	// ble cr6,0x822d2940
	if (!ctx.cr6.gt) goto loc_822D2940;
	// ld r11,4048(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4048);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d2940
	if (ctx.cr6.eq) goto loc_822D2940;
	// subf r11,r11,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r11.s64;
	// cmpldi cr6,r11,500
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 500, ctx.xer);
	// bge cr6,0x822d2940
	if (!ctx.cr6.lt) goto loc_822D2940;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r20,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r4,r9,13744
	ctx.r4.s64 = ctx.r9.s64 + 13744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2924;
	sub_822D0280(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// std r8,4032(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4032, ctx.r8.u64);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r7,13704
	ctx.r5.s64 = ctx.r7.s64 + 13704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D2940;
	sub_822D1BC8(ctx, base);
loc_822D2940:
	// addi r11,r20,4
	ctx.r11.s64 = ctx.r20.s64 + 4;
	// std r11,4016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4016, ctx.r11.u64);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822D2954:
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d2980
	if (ctx.cr6.eq) goto loc_822D2980;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r20,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r4,r9,13648
	ctx.r4.s64 = ctx.r9.s64 + 13648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D297C;
	sub_822D0280(ctx, base);
	// std r19,4032(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4032, ctx.r19.u64);
loc_822D2980:
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r17,3792(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3792);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// li r26,2
	ctx.r26.s64 = 2;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// addi r25,r11,12236
	ctx.r25.s64 = ctx.r11.s64 + 12236;
	// addi r22,r10,8828
	ctx.r22.s64 = ctx.r10.s64 + 8828;
	// addi r21,r9,6112
	ctx.r21.s64 = ctx.r9.s64 + 6112;
	// addi r24,r8,12276
	ctx.r24.s64 = ctx.r8.s64 + 12276;
	// addi r23,r7,13588
	ctx.r23.s64 = ctx.r7.s64 + 13588;
loc_822D29BC:
	// and r11,r26,r17
	ctx.r11.u64 = ctx.r26.u64 & ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2adc
	if (ctx.cr6.eq) goto loc_822D2ADC;
	// lwz r11,3796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// and r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2adc
	if (!ctx.cr6.eq) goto loc_822D2ADC;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r3,r27,24
	ctx.r3.u64 = ctx.r27.u32 & 0xFF;
	// bl 0x822d9ef8
	ctx.lr = 0x822D29E4;
	sub_822D9EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D29EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d29ec
	if (!ctx.cr6.eq) goto loc_822D29EC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x822d2ab0
	if (ctx.cr6.eq) goto loc_822D2AB0;
	// sth r19,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r19.u16);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,12028(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12028);
	// bl 0x822fa9b8
	ctx.lr = 0x822D2A24;
	sub_822FA9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d2a4c
	if (ctx.cr6.eq) goto loc_822D2A4C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,12028(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2A3C;
	sub_822D0280(ctx, base);
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d2ab0
	goto loc_822D2AB0;
loc_822D2A4C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9c58
	ctx.lr = 0x822D2A60;
	sub_822F9C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d2a78
	if (!ctx.cr6.lt) goto loc_822D2A78;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// b 0x822d2a84
	goto loc_822D2A84;
loc_822D2A78:
	// lwz r11,5412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r11.u32);
loc_822D2A84:
	// cmplwi cr6,r29,180
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 180, ctx.xer);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// bgt cr6,0x822d2a94
	if (ctx.cr6.gt) goto loc_822D2A94;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_822D2A94:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,12028(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12028);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2AB0;
	sub_822D0280(ctx, base);
loc_822D2AB0:
	// lwz r10,3796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,5444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5444);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// or r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 | ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r8,5444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5444, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2ADC;
	sub_822D0280(ctx, base);
loc_822D2ADC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rotlwi r26,r26,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x822d29bc
	if (ctx.cr6.lt) goto loc_822D29BC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// lfd f31,23392(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23392);
	// addi r24,r31,3968
	ctx.r24.s64 = ctx.r31.s64 + 3968;
	// addi r27,r31,3808
	ctx.r27.s64 = ctx.r31.s64 + 3808;
	// addi r26,r31,3616
	ctx.r26.s64 = ctx.r31.s64 + 3616;
	// addi r21,r11,13520
	ctx.r21.s64 = ctx.r11.s64 + 13520;
loc_822D2B14:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x822d2d30
	if (!ctx.cr6.eq) goto loc_822D2D30;
	// and r11,r23,r17
	ctx.r11.u64 = ctx.r23.u64 & ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2d04
	if (ctx.cr6.eq) goto loc_822D2D04;
loc_822D2B28:
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// sync 
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d2b28
	if (!ctx.cr6.eq) goto loc_822D2B28;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// addi r11,r27,-180
	ctx.r11.s64 = ctx.r27.s64 + -180;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D2B4C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822d2b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D2B4C;
	// sync 
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822d2b28
	if (!ctx.cr6.eq) goto loc_822D2B28;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
loc_822D2B74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d2b94
	if (!ctx.cr0.eq) goto loc_822D2B94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822d2b74
	if (!ctx.cr6.eq) goto loc_822D2B74;
loc_822D2B94:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822d2bac
	if (!ctx.cr6.eq) goto loc_822D2BAC;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// subf r10,r11,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,50
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 50, ctx.xer);
	// blt cr6,0x822d2d04
	if (ctx.cr6.lt) goto loc_822D2D04;
loc_822D2BAC:
	// lbz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2c28
	if (!ctx.cr6.eq) goto loc_822D2C28;
	// lbz r10,213(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 213);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2c28
	if (!ctx.cr6.eq) goto loc_822D2C28;
	// lbz r10,214(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2c28
	if (!ctx.cr6.eq) goto loc_822D2C28;
	// lbz r10,215(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 215);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2c28
	if (!ctx.cr6.eq) goto loc_822D2C28;
	// lbz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2c28
	if (!ctx.cr6.eq) goto loc_822D2C28;
	// lbz r10,217(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 217);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2c28
	if (!ctx.cr6.eq) goto loc_822D2C28;
	// lbz r10,218(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 218);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2c28
	if (!ctx.cr6.eq) goto loc_822D2C28;
	// lbz r10,219(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 219);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2c28
	if (!ctx.cr6.eq) goto loc_822D2C28;
	// lbz r10,210(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 210);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d2c28
	if (!ctx.cr6.eq) goto loc_822D2C28;
	// lbz r10,211(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 211);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d2c2c
	if (ctx.cr6.eq) goto loc_822D2C2C;
loc_822D2C28:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_822D2C2C:
	// bl 0x822f0b38
	ctx.lr = 0x822D2C30;
	sub_822F0B38(ctx, base);
	// ld r11,4000(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4000);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x82635aa0
	ctx.lr = 0x822D2C3C;
	sub_82635AA0(ctx, base);
	// addi r30,r31,3804
	ctx.r30.s64 = ctx.r31.s64 + 3804;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fmul f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f31.f64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d9938
	ctx.lr = 0x822D2C54;
	sub_822D9938(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822d2c84
	if (ctx.cr6.eq) goto loc_822D2C84;
	// lwz r11,4064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d2c84
	if (!ctx.cr6.eq) goto loc_822D2C84;
	// stw r18,4064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4064, ctx.r18.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0280
	ctx.lr = 0x822D2C84;
	sub_822D0280(ctx, base);
loc_822D2C84:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d03c0
	ctx.lr = 0x822D2C9C;
	sub_822D03C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d2cdc
	if (!ctx.cr6.eq) goto loc_822D2CDC;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D2CB4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822d2cb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D2CB4;
	// std r20,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r20.u64);
	// lwz r11,5432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5432);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r20,4008(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4008, ctx.r20.u64);
	// stw r19,4024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4024, ctx.r19.u32);
	// stw r11,5432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5432, ctx.r11.u32);
	// b 0x822d2d04
	goto loc_822D2D04;
loc_822D2CDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,5436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5436);
	// lwz r10,4024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4024);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r8,4024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4024, ctx.r8.u32);
	// stw r9,5436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5436, ctx.r9.u32);
loc_822D2D04:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// rotlwi r23,r23,1
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x822d2b14
	if (ctx.cr6.lt) goto loc_822D2B14;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x822d2d30
	if (!ctx.cr6.eq) goto loc_822D2D30;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822d2d54
	goto loc_822D2D54;
loc_822D2D30:
	// lwz r11,4024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4024);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x822d2d44
	if (!ctx.cr6.lt) goto loc_822D2D44;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x822d2d54
	goto loc_822D2D54;
loc_822D2D44:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// li r11,20
	ctx.r11.s64 = 20;
	// blt cr6,0x822d2d54
	if (ctx.cr6.lt) goto loc_822D2D54;
	// li r11,100
	ctx.r11.s64 = 100;
loc_822D2D54:
	// lwz r10,3804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3804);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r9,r11,r20
	ctx.r9.u64 = ctx.r11.u64 + ctx.r20.u64;
	// std r9,4016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4016, ctx.r9.u64);
	// stw r10,5440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5440, ctx.r10.u32);
loc_822D2D68:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D2808) {
	__imp__sub_822D2808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D2D74) {
	__imp__sub_822D2D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D2D80;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,5480
	ctx.r4.s64 = 5480;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x822D2D94;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d2f30
	if (ctx.cr6.eq) goto loc_822D2F30;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x822D2DAC;
	sub_82635430(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822d2dc0
	if (ctx.cr6.gt) goto loc_822D2DC0;
	// li r11,12000
	ctx.r11.s64 = 12000;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_822D2DC0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822d2dd4
	if (ctx.cr6.gt) goto loc_822D2DD4;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_822D2DD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822d2de8
	if (ctx.cr6.gt) goto loc_822D2DE8;
	// li r11,3000
	ctx.r11.s64 = 3000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822D2DE8:
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822d2dfc
	if (!ctx.cr6.eq) goto loc_822D2DFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,27828
	ctx.r6.s64 = ctx.r11.s64 + 27828;
loc_822D2DFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r29,r11,8796
	ctx.r29.s64 = ctx.r11.s64 + 8796;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D2E14;
	sub_822ECA80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r3,12288
	ctx.r3.s64 = 12288;
	// stw r30,4068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4068, ctx.r30.u32);
	// stw r30,4600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4600, ctx.r30.u32);
	// stw r11,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r11.u32);
	// stw r30,4596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4596, ctx.r30.u32);
	// stw r30,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r30.u32);
	// stw r30,3792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3792, ctx.r30.u32);
	// bl 0x82634da0
	ctx.lr = 0x822D2E3C;
	sub_82634DA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// stw r28,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r28.u32);
	// ori r3,r3,528
	ctx.r3.u64 = ctx.r3.u64 | 528;
	// bl 0x82634da0
	ctx.lr = 0x822D2E50;
	sub_82634DA0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r3,3512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3512, ctx.r3.u32);
	// beq cr6,0x822d2f18
	if (ctx.cr6.eq) goto loc_822D2F18;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d2f18
	if (ctx.cr6.eq) goto loc_822D2F18;
	// addi r28,r31,1856
	ctx.r28.s64 = ctx.r31.s64 + 1856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e9db0
	ctx.lr = 0x822D2E70;
	sub_822E9DB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d2f18
	if (!ctx.cr6.eq) goto loc_822D2F18;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D2E88:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d2e88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D2E88;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r6,20(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r5,r11,3800
	ctx.r5.s64 = ctx.r11.s64 + 3800;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r4,r10,3984
	ctx.r4.s64 = ctx.r10.s64 + 3984;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r3,r9,4256
	ctx.r3.s64 = ctx.r9.s64 + 4256;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// beq cr6,0x822d2efc
	if (ctx.cr6.eq) goto loc_822D2EFC;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2efc
	if (ctx.cr6.eq) goto loc_822D2EFC;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D2EF8;
	sub_822ECA80(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_822D2EFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f9610
	ctx.lr = 0x822D2F04;
	sub_822F9610(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// bne cr6,0x822d2f3c
	if (!ctx.cr6.eq) goto loc_822D2F3C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e92e8
	ctx.lr = 0x822D2F18;
	sub_822E92E8(ctx, base);
loc_822D2F18:
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// bl 0x82634d40
	ctx.lr = 0x822D2F20;
	sub_82634D40(ctx, base);
	// lwz r3,3512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3512);
	// bl 0x82634d40
	ctx.lr = 0x822D2F28;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D2F30;
	sub_82634D40(ctx, base);
loc_822D2F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D2F3C:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r4,r11,9840
	ctx.r4.s64 = ctx.r11.s64 + 9840;
	// bl 0x822fa940
	ctx.lr = 0x822D2F48;
	sub_822FA940(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// addi r6,r10,7792
	ctx.r6.s64 = ctx.r10.s64 + 7792;
	// addi r5,r9,7296
	ctx.r5.s64 = ctx.r9.s64 + 7296;
	// addi r4,r8,9488
	ctx.r4.s64 = ctx.r8.s64 + 9488;
	// bl 0x822fa948
	ctx.lr = 0x822D2F68;
	sub_822FA948(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r7.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D2D78) {
	__imp__sub_822D2D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D2F7C) {
	__imp__sub_822D2F7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D2F80) {
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
	// lwz r10,3608(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3608);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d2fbc
	if (ctx.cr6.eq) goto loc_822D2FBC;
	// stw r11,3608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3608, ctx.r11.u32);
	// stw r9,4068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4068, ctx.r9.u32);
	// stw r9,3600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3600, ctx.r9.u32);
loc_822D2FBC:
	// lwz r10,3532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3532);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d30b0
	if (ctx.cr6.eq) goto loc_822D30B0;
	// lwz r4,3604(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3604);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822d2fd8
	if (ctx.cr6.eq) goto loc_822D2FD8;
	// stw r11,3604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3604, ctx.r11.u32);
loc_822D2FD8:
	// lwz r10,3600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3600);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d2fe8
	if (ctx.cr6.eq) goto loc_822D2FE8;
	// stw r11,3600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3600, ctx.r11.u32);
loc_822D2FE8:
	// lwz r8,4068(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4068);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822d3004
	if (ctx.cr6.eq) goto loc_822D3004;
	// lwz r8,4072(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4072);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822d3004
	if (!ctx.cr6.eq) goto loc_822D3004;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822D3004:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822d301c
	if (!ctx.cr6.eq) goto loc_822D301C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822d301c
	if (!ctx.cr6.eq) goto loc_822D301C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d3024
	if (ctx.cr6.eq) goto loc_822D3024;
loc_822D301C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0560
	ctx.lr = 0x822D3024;
	sub_822D0560(ctx, base);
loc_822D3024:
	// ld r11,3584(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3584);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,1000
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 1000, ctx.xer);
	// blt cr6,0x822d30a4
	if (ctx.cr6.lt) goto loc_822D30A4;
	// std r30,3584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3584, ctx.r30.u64);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1856
	ctx.r3.s64 = ctx.r31.s64 + 1856;
	// bl 0x822e93f0
	ctx.lr = 0x822D304C;
	sub_822E93F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d3080
	if (ctx.cr6.eq) goto loc_822D3080;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822f9a38
	ctx.lr = 0x822D306C;
	sub_822F9A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d3080
	if (ctx.cr6.lt) goto loc_822D3080;
	// lwz r11,4972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r11.u32);
loc_822D3080:
	// lwz r11,3612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3612);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 * 1000;
	// bl 0x822f9900
	ctx.lr = 0x822D3090;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d30a4
	if (ctx.cr6.lt) goto loc_822D30A4;
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r11.u32);
loc_822D30A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d2808
	ctx.lr = 0x822D30B0;
	sub_822D2808(ctx, base);
loc_822D30B0:
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

PPC_WEAK_FUNC(sub_822D2F80) {
	__imp__sub_822D2F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D30C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D30D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d32a8
	if (ctx.cr6.eq) goto loc_822D32A8;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d32a8
	if (ctx.cr6.eq) goto loc_822D32A8;
	// bl 0x822eac70
	ctx.lr = 0x822D30F0;
	sub_822EAC70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9608
	ctx.lr = 0x822D30FC;
	sub_822F9608(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x822d31b8
	if (ctx.cr6.lt) goto loc_822D31B8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// ble cr6,0x822d318c
	if (!ctx.cr6.gt) goto loc_822D318C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822d31b8
	if (!ctx.cr6.eq) goto loc_822D31B8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822D311C:
	// li r4,400
	ctx.r4.s64 = 400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x822f84c8
	ctx.lr = 0x822D312C;
	sub_822F84C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d314c
	if (!ctx.cr6.gt) goto loc_822D314C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9750
	ctx.lr = 0x822D3144;
	sub_822F9750(ctx, base);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x822d311c
	if (ctx.cr6.lt) goto loc_822D311C;
loc_822D314C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d31b8
	if (!ctx.cr6.gt) goto loc_822D31B8;
loc_822D315C:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9ed8
	ctx.lr = 0x822D3164;
	sub_822F9ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d31b8
	if (!ctx.cr6.gt) goto loc_822D31B8;
	// lwz r11,4996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4996);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4996, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822d315c
	if (ctx.cr6.lt) goto loc_822D315C;
	// b 0x822d31b8
	goto loc_822D31B8;
loc_822D318C:
	// ld r11,3560(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3560);
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x822d31b8
	if (ctx.cr6.eq) goto loc_822D31B8;
	// std r29,3560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3560, ctx.r29.u64);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9ed8
	ctx.lr = 0x822D31A4;
	sub_822F9ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d31b8
	if (!ctx.cr6.gt) goto loc_822D31B8;
	// lwz r11,4996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4996);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4996, ctx.r11.u32);
loc_822D31B8:
	// ld r11,3568(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3568);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d31e4
	if (ctx.cr6.eq) goto loc_822D31E4;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,10
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 10, ctx.xer);
	// blt cr6,0x822d31e4
	if (ctx.cr6.lt) goto loc_822D31E4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x822fb188
	ctx.lr = 0x822D31E0;
	sub_822FB188(ctx, base);
	// std r29,3568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3568, ctx.r29.u64);
loc_822D31E4:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x822d3254
	if (!ctx.cr6.eq) goto loc_822D3254;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d322c
	if (!ctx.cr6.gt) goto loc_822D322C;
	// ld r10,3592(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3592);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r8,r10,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x822d322c
	if (ctx.cr6.lt) goto loc_822D322C;
	// std r29,3592(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3592, ctx.r29.u64);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9808
	ctx.lr = 0x822D3218;
	sub_822F9808(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d322c
	if (ctx.cr6.lt) goto loc_822D322C;
	// lwz r11,5004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5004);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5004, ctx.r11.u32);
loc_822D322C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822d3254
	if (ctx.cr6.gt) goto loc_822D3254;
	// ld r11,4056(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4056);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,2000
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 2000, ctx.xer);
	// blt cr6,0x822d3254
	if (ctx.cr6.lt) goto loc_822D3254;
	// std r29,4056(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4056, ctx.r29.u64);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822f9808
	ctx.lr = 0x822D3254;
	sub_822F9808(ctx, base);
loc_822D3254:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x822fa998
	ctx.lr = 0x822D325C;
	sub_822FA998(ctx, base);
	// stw r3,5460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5460, ctx.r3.u32);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x822d329c
	if (!ctx.cr6.eq) goto loc_822D329C;
	// ld r11,3552(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3552);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d329c
	if (ctx.cr6.eq) goto loc_822D329C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// ble cr6,0x822d329c
	if (!ctx.cr6.gt) goto loc_822D329C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,13936
	ctx.r5.s64 = ctx.r11.s64 + 13936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x822D329C;
	sub_822D1BC8(ctx, base);
loc_822D329C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d2f80
	ctx.lr = 0x822D32A8;
	sub_822D2F80(ctx, base);
loc_822D32A8:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D30C8) {
	__imp__sub_822D30C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D32B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D32D0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d32d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D32D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6a38
	ctx.lr = 0x822D32E0;
	sub_822D6A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d32f8
	if (ctx.cr6.eq) goto loc_822D32F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,14052
	ctx.r3.s64 = ctx.r11.s64 + 14052;
	// bl 0x822ebbc8
	ctx.lr = 0x822D32F8;
	sub_822EBBC8(ctx, base);
loc_822D32F8:
	// lis r31,-32016
	ctx.r31.s64 = -2098200576;
	// addi r11,r31,-7012
	ctx.r11.s64 = ctx.r31.s64 + -7012;
	// addi r3,r11,-15836
	ctx.r3.s64 = ctx.r11.s64 + -15836;
	// bl 0x822d5e88
	ctx.lr = 0x822D3308;
	sub_822D5E88(ctx, base);
	// sync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7012, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D32B0) {
	__imp__sub_822D32B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3328) {
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
	// lis r31,-32016
	ctx.r31.s64 = -2098200576;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7012, ctx.r11.u32);
	// sync 
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// addi r8,r10,-22848
	ctx.r8.s64 = ctx.r10.s64 + -22848;
	// addi r5,r9,12976
	ctx.r5.s64 = ctx.r9.s64 + 12976;
	// addis r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 262144;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// bl 0x822ed700
	ctx.lr = 0x822D3368;
	sub_822ED700(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d33a0
	if (ctx.cr6.eq) goto loc_822D33A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,-7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7012, ctx.r11.u32);
	// addi r3,r10,14084
	ctx.r3.s64 = ctx.r10.s64 + 14084;
	// bl 0x822ebbc8
	ctx.lr = 0x822D3388;
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
loc_822D33A0:
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

PPC_WEAK_FUNC(sub_822D3328) {
	__imp__sub_822D3328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D33B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D33C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-7012
	ctx.r31.s64 = ctx.r11.s64 + -7012;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-7012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d3450
	if (!ctx.cr6.eq) goto loc_822D3450;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed818
	ctx.lr = 0x822D33E8;
	sub_822ED818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d3450
	if (!ctx.cr6.eq) goto loc_822D3450;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d3420
	if (ctx.cr6.eq) goto loc_822D3420;
	// addi r3,r31,-15836
	ctx.r3.s64 = ctx.r31.s64 + -15836;
	// bl 0x822d5d28
	ctx.lr = 0x822D3404;
	sub_822D5D28(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822d3450
	if (!ctx.cr6.eq) goto loc_822D3450;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d3420
	if (ctx.cr6.eq) goto loc_822D3420;
	// addi r3,r31,-15836
	ctx.r3.s64 = ctx.r31.s64 + -15836;
	// bl 0x822d3eb8
	ctx.lr = 0x822D3420;
	sub_822D3EB8(ctx, base);
loc_822D3420:
	// addi r3,r31,-15836
	ctx.r3.s64 = ctx.r31.s64 + -15836;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d3da0
	ctx.lr = 0x822D3430;
	sub_822D3DA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// bl 0x822d3328
	ctx.lr = 0x822D343C;
	sub_822D3328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d345c
	if (ctx.cr6.eq) goto loc_822D345C;
	// addi r3,r31,-15836
	ctx.r3.s64 = ctx.r31.s64 + -15836;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822d5d60
	ctx.lr = 0x822D3450;
	sub_822D5D60(ctx, base);
loc_822D3450:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D345C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D33B8) {
	__imp__sub_822D33B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3468) {
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
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// addi r31,r11,-7012
	ctx.r31.s64 = ctx.r11.s64 + -7012;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d34dc
	if (ctx.cr6.eq) goto loc_822D34DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d34dc
	if (!ctx.cr6.eq) goto loc_822D34DC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed818
	ctx.lr = 0x822D34A0;
	sub_822ED818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d34dc
	if (!ctx.cr6.eq) goto loc_822D34DC;
	// addi r3,r31,-15836
	ctx.r3.s64 = ctx.r31.s64 + -15836;
	// bl 0x822d5d28
	ctx.lr = 0x822D34B0;
	sub_822D5D28(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822d34dc
	if (!ctx.cr6.eq) goto loc_822D34DC;
	// addi r3,r31,-15836
	ctx.r3.s64 = ctx.r31.s64 + -15836;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5d60
	ctx.lr = 0x822D34C4;
	sub_822D5D60(ctx, base);
	// bl 0x822d3328
	ctx.lr = 0x822D34C8;
	sub_822D3328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d34f4
	if (ctx.cr6.eq) goto loc_822D34F4;
	// addi r3,r31,-15836
	ctx.r3.s64 = ctx.r31.s64 + -15836;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822d5d60
	ctx.lr = 0x822D34DC;
	sub_822D5D60(ctx, base);
loc_822D34DC:
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
loc_822D34F4:
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

PPC_WEAK_FUNC(sub_822D3468) {
	__imp__sub_822D3468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D350C) {
	__imp__sub_822D350C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3510) {
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
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// lwz r10,-7012(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7012);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822d3540
	if (!ctx.cr6.eq) goto loc_822D3540;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed818
	ctx.lr = 0x822D3534;
	sub_822ED818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x822d3544
	if (ctx.cr6.eq) goto loc_822D3544;
loc_822D3540:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822D3544:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3510) {
	__imp__sub_822D3510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3554) {
	__imp__sub_822D3554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// lwz r11,15832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d3570
	if (ctx.cr6.eq) goto loc_822D3570;
	// b 0x822d5d28
	sub_822D5D28(ctx, base);
	return;
loc_822D3570:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3558) {
	__imp__sub_822D3558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// lwz r11,15832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822d3f20
	sub_822D3F20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3578) {
	__imp__sub_822D3578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3590) {
	__imp__sub_822D3590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3594) {
	__imp__sub_822D3594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,15832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d35c8
	if (!ctx.cr6.eq) goto loc_822D35C8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d35c0
	if (ctx.cr6.eq) goto loc_822D35C0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_822D35C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822D35C8:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x822d3fa0
	sub_822D3FA0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3598) {
	__imp__sub_822D3598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D35D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// addi r10,r11,-22848
	ctx.r10.s64 = ctx.r11.s64 + -22848;
	// lwz r11,15832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15832);
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

PPC_WEAK_FUNC(sub_822D35D0) {
	__imp__sub_822D35D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D35EC) {
	__imp__sub_822D35EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D35F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r4,r11,14228
	ctx.r4.s64 = ctx.r11.s64 + 14228;
	// addi r3,r10,440
	ctx.r3.s64 = ctx.r10.s64 + 440;
	// b 0x822a8808
	sub_822A8808(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D35F0) {
	__imp__sub_822D35F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3604) {
	__imp__sub_822D3604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3608) {
	PPC_FUNC_PROLOGUE();
	// sync 
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,440
	ctx.r3.s64 = ctx.r11.s64 + 440;
	// b 0x822a8b88
	sub_822A8B88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3608) {
	__imp__sub_822D3608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3618) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bge cr6,0x822d3634
	if (!ctx.cr6.lt) goto loc_822D3634;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,472
	ctx.r9.s64 = ctx.r11.s64 + 472;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_822D3634:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,10904
	ctx.r3.s64 = ctx.r11.s64 + 10904;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3618) {
	__imp__sub_822D3618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D3648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,196
	ctx.r5.s64 = 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822D3664;
	sub_826344D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822d3674
	if (ctx.cr6.eq) goto loc_822D3674;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x822d367c
	goto loc_822D367C;
loc_822D3674:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
loc_822D367C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r30,r11,8796
	ctx.r30.s64 = ctx.r11.s64 + 8796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D3694;
	sub_822ECA80(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d36ac
	if (ctx.cr6.eq) goto loc_822D36AC;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d36b0
	if (!ctx.cr6.eq) goto loc_822D36B0;
loc_822D36AC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_822D36B0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x822eca80
	ctx.lr = 0x822D36C0;
	sub_822ECA80(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// li r7,1800
	ctx.r7.s64 = 1800;
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// li r6,210
	ctx.r6.s64 = 210;
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// stw r6,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
	// li r3,500
	ctx.r3.s64 = 500;
	// stw r5,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// li r9,8000
	ctx.r9.s64 = 8000;
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// li r11,30
	ctx.r11.s64 = 30;
	// li r7,5000
	ctx.r7.s64 = 5000;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r7,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// li r4,75
	ctx.r4.s64 = 75;
	// stw r6,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r6.u32);
	// li r3,3000
	ctx.r3.s64 = 3000;
	// stw r5,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r4,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r4.u32);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// stw r8,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r8.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3640) {
	__imp__sub_822D3640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D3768;
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x822D37A8;
	sub_822ECA20(ctx, base);
	// lbz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d37ec
	if (ctx.cr6.eq) goto loc_822D37EC;
	// li r9,32
	ctx.r9.s64 = 32;
loc_822D37BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x822d37dc
	if (ctx.cr6.eq) goto loc_822D37DC;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x822d37dc
	if (ctx.cr6.eq) goto loc_822D37DC;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x822d37e0
	if (!ctx.cr6.eq) goto loc_822D37E0;
loc_822D37DC:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_822D37E0:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d37bc
	if (!ctx.cr6.eq) goto loc_822D37BC;
loc_822D37EC:
	// bl 0x822d35f0
	ctx.lr = 0x822D37F0;
	sub_822D35F0(ctx, base);
	// addi r3,r30,15652
	ctx.r3.s64 = ctx.r30.s64 + 15652;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D37FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822d3820
	if (ctx.cr6.eq) goto loc_822D3820;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d37fc
	if (ctx.cr6.eq) goto loc_822D37FC;
loc_822D3820:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822d3864
	if (!ctx.cr6.eq) goto loc_822D3864;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r30,15668
	ctx.r11.s64 = ctx.r30.s64 + 15668;
loc_822D3830:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822d3854
	if (ctx.cr6.eq) goto loc_822D3854;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d3830
	if (ctx.cr6.eq) goto loc_822D3830;
loc_822D3854:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822d3864
	if (!ctx.cr6.eq) goto loc_822D3864;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822d38a0
	goto loc_822D38A0;
loc_822D3864:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r28,r11,8796
	ctx.r28.s64 = ctx.r11.s64 + 8796;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x822eca80
	ctx.lr = 0x822D3880;
	sub_822ECA80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r30,15668
	ctx.r3.s64 = ctx.r30.s64 + 15668;
	// bl 0x822eca80
	ctx.lr = 0x822D3894;
	sub_822ECA80(ctx, base);
	// lwz r11,15828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15828);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,15828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15828, ctx.r10.u32);
loc_822D38A0:
	// bl 0x822d3608
	ctx.lr = 0x822D38A4;
	sub_822D3608(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822d38c0
	if (ctx.cr6.eq) goto loc_822D38C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,14428
	ctx.r3.s64 = ctx.r11.s64 + 14428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D38C0;
	sub_822EBBC8(ctx, base);
loc_822D38C0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3760) {
	__imp__sub_822D3760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D38C8) {
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
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d3914
	if (!ctx.cr6.gt) goto loc_822D3914;
	// lwz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d3914
	if (ctx.cr6.eq) goto loc_822D3914;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,14448
	ctx.r5.s64 = ctx.r11.s64 + 14448;
	// addi r4,r10,-3596
	ctx.r4.s64 = ctx.r10.s64 + -3596;
	// bl 0x822d3760
	ctx.lr = 0x822D3904;
	sub_822D3760(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822D3914:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// addi r4,r10,-3560
	ctx.r4.s64 = ctx.r10.s64 + -3560;
	// bl 0x822d3760
	ctx.lr = 0x822D3928;
	sub_822D3760(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D38C8) {
	__imp__sub_822D38C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3938) {
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
	// lwz r9,628(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822d39a4
	if (ctx.cr6.eq) goto loc_822D39A4;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// addi r10,r10,472
	ctx.r10.s64 = ctx.r10.s64 + 472;
	// addi r4,r11,10904
	ctx.r4.s64 = ctx.r11.s64 + 10904;
	// bge cr6,0x822d3984
	if (!ctx.cr6.lt) goto loc_822D3984;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822d3988
	goto loc_822D3988;
loc_822D3984:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_822D3988:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x822d3998
	if (!ctx.cr6.lt) goto loc_822D3998;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_822D3998:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,14468
	ctx.r3.s64 = ctx.r11.s64 + 14468;
	// bl 0x822ebbc8
	ctx.lr = 0x822D39A4;
	sub_822EBBC8(ctx, base);
loc_822D39A4:
	// stw r31,628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 628, ctx.r31.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D39AC;
	sub_822EAC70(ctx, base);
	// std r3,648(r30)
	PPC_STORE_U64(ctx.r30.u32 + 648, ctx.r3.u64);
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

PPC_WEAK_FUNC(sub_822D3938) {
	__imp__sub_822D3938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D39C8) {
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
	// lwz r3,736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// bl 0x82634d40
	ctx.lr = 0x822D39E8;
	sub_82634D40(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// stw r31,736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 736, ctx.r31.u32);
	// bl 0x82634d40
	ctx.lr = 0x822D39F8;
	sub_82634D40(ctx, base);
	// stw r31,740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 740, ctx.r31.u32);
	// stb r31,744(r30)
	PPC_STORE_U8(ctx.r30.u32 + 744, ctx.r31.u8);
	// stw r31,808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 808, ctx.r31.u32);
	// stw r31,812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 812, ctx.r31.u32);
	// std r31,688(r30)
	PPC_STORE_U64(ctx.r30.u32 + 688, ctx.r31.u64);
	// bl 0x822d35f0
	ctx.lr = 0x822D3A10;
	sub_822D35F0(ctx, base);
	// lwz r11,3296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// stw r31,3300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3300, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,3304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	// stw r11,3296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3296, ctx.r11.u32);
	// bl 0x82634d40
	ctx.lr = 0x822D3A28;
	sub_82634D40(ctx, base);
	// stw r31,3304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3304, ctx.r31.u32);
	// lwz r3,7408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7408);
	// bl 0x82634d40
	ctx.lr = 0x822D3A34;
	sub_82634D40(ctx, base);
	// stw r31,7408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7408, ctx.r31.u32);
	// stw r31,7412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7412, ctx.r31.u32);
	// stw r31,15612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15612, ctx.r31.u32);
	// stw r31,15608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15608, ctx.r31.u32);
	// stw r31,7404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7404, ctx.r31.u32);
	// stw r31,15632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15632, ctx.r31.u32);
	// stw r31,15628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15628, ctx.r31.u32);
	// stw r31,15624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15624, ctx.r31.u32);
	// stw r31,15620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15620, ctx.r31.u32);
	// stw r31,15616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15616, ctx.r31.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D3A60;
	sub_822D3608(ctx, base);
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

PPC_WEAK_FUNC(sub_822D39C8) {
	__imp__sub_822D39C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D3A80;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,14492
	ctx.r3.s64 = ctx.r11.s64 + 14492;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D3A98;
	sub_822EBBC8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r29,r10,8796
	ctx.r29.s64 = ctx.r10.s64 + 8796;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,3000
	ctx.r3.s64 = ctx.r31.s64 + 3000;
	// bl 0x822eca80
	ctx.lr = 0x822D3AB4;
	sub_822ECA80(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822ceff8
	ctx.lr = 0x822D3ABC;
	sub_822CEFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d39c8
	ctx.lr = 0x822D3AC4;
	sub_822D39C8(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,-3604
	ctx.r4.s64 = ctx.r9.s64 + -3604;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D3ADC;
	sub_822D3760(ctx, base);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x822d3b1c
	if (ctx.cr6.eq) goto loc_822D3B1C;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addi r10,r10,472
	ctx.r10.s64 = ctx.r10.s64 + 472;
	// bge cr6,0x822d3b04
	if (!ctx.cr6.lt) goto loc_822D3B04;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822d3b0c
	goto loc_822D3B0C;
loc_822D3B04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,10904
	ctx.r4.s64 = ctx.r11.s64 + 10904;
loc_822D3B0C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r3,r11,14468
	ctx.r3.s64 = ctx.r11.s64 + 14468;
	// bl 0x822ebbc8
	ctx.lr = 0x822D3B1C;
	sub_822EBBC8(ctx, base);
loc_822D3B1C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D3B28;
	sub_822EAC70(ctx, base);
	// std r3,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r3.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3A78) {
	__imp__sub_822D3A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3B34) {
	__imp__sub_822D3B34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3B38) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x822D3B8C;
	sub_822ECA20(ctx, base);
	// bl 0x822d35f0
	ctx.lr = 0x822D3B90;
	sub_822D35F0(ctx, base);
	// lwz r30,15640(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15640);
	// bl 0x822d3608
	ctx.lr = 0x822D3B98;
	sub_822D3608(ctx, base);
	// lwz r4,632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x822d3c08
	if (!ctx.cr6.lt) goto loc_822D3C08;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822d3c08
	if (!ctx.cr6.eq) goto loc_822D3C08;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x822ebbc8
	ctx.lr = 0x822D3BC0;
	sub_822EBBC8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,3000
	ctx.r3.s64 = ctx.r31.s64 + 3000;
	// bl 0x822eca80
	ctx.lr = 0x822D3BD8;
	sub_822ECA80(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822ceff8
	ctx.lr = 0x822D3BE0;
	sub_822CEFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d39c8
	ctx.lr = 0x822D3BE8;
	sub_822D39C8(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,14508
	ctx.r4.s64 = ctx.r9.s64 + 14508;
	// bl 0x822d38c8
	ctx.lr = 0x822D3BF8;
	sub_822D38C8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D3C04;
	sub_822D3938(ctx, base);
	// b 0x822d3c14
	goto loc_822D3C14;
loc_822D3C08:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3a78
	ctx.lr = 0x822D3C14;
	sub_822D3A78(ctx, base);
loc_822D3C14:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3B38) {
	__imp__sub_822D3B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3C2C) {
	__imp__sub_822D3C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -3, ctx.xer);
	// bne cr6,0x822d3c64
	if (!ctx.cr6.eq) goto loc_822D3C64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r5,r11,14588
	ctx.r5.s64 = ctx.r11.s64 + 14588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822eca80
	ctx.lr = 0x822D3C60;
	sub_822ECA80(ctx, base);
	// b 0x822d3c94
	goto loc_822D3C94;
loc_822D3C64:
	// lbz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d3c7c
	if (!ctx.cr6.eq) goto loc_822D3C7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-3100
	ctx.r11.s64 = ctx.r11.s64 + -3100;
loc_822D3C7C:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,14564
	ctx.r5.s64 = ctx.r10.s64 + 14564;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822eca80
	ctx.lr = 0x822D3C94;
	sub_822ECA80(ctx, base);
loc_822D3C94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3a78
	ctx.lr = 0x822D3CA0;
	sub_822D3A78(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D3C30) {
	__imp__sub_822D3C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3CB4) {
	__imp__sub_822D3CB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822D3CC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,95
	ctx.r5.s64 = 95;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x826344d0
	ctx.lr = 0x822D3CF0;
	sub_826344D0(ctx, base);
	// li r28,60
	ctx.r28.s64 = 60;
	// cmpwi cr6,r31,60
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 60, ctx.xer);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x822d3d14
	if (ctx.cr6.lt) goto loc_822D3D14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// divw r6,r31,r28
	ctx.r6.s32 = ctx.r31.s32 / ctx.r28.s32;
	// addi r5,r11,14736
	ctx.r5.s64 = ctx.r11.s64 + 14736;
	// b 0x822d3d28
	goto loc_822D3D28;
loc_822D3D14:
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r5,r10,14724
	ctx.r5.s64 = ctx.r10.s64 + 14724;
	// and r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 & ctx.r31.u64;
loc_822D3D28:
	// bl 0x822eca80
	ctx.lr = 0x822D3D2C;
	sub_822ECA80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822d3d58
	if (!ctx.cr6.gt) goto loc_822D3D58;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// subfic r4,r3,96
	ctx.xer.ca = ctx.r3.u32 <= 96;
	ctx.r4.s64 = 96 - ctx.r3.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r10,14704
	ctx.r5.s64 = ctx.r10.s64 + 14704;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D3D54;
	sub_822ECA80(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_822D3D58:
	// cmpwi cr6,r29,60
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 60, ctx.xer);
	// blt cr6,0x822d3d80
	if (ctx.cr6.lt) goto loc_822D3D80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r29,59
	ctx.r10.s64 = ctx.r29.s64 + 59;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// divw r6,r10,r28
	ctx.r6.s32 = ctx.r10.s32 / ctx.r28.s32;
	// addi r5,r9,14680
	ctx.r5.s64 = ctx.r9.s64 + 14680;
	// subfic r4,r31,96
	ctx.xer.ca = ctx.r31.u32 <= 96;
	ctx.r4.s64 = 96 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D3D80;
	sub_822ECA80(ctx, base);
loc_822D3D80:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14628
	ctx.r5.s64 = ctx.r11.s64 + 14628;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D3D98;
	sub_822ECA80(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3CB8) {
	__imp__sub_822D3CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D3DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,15832
	ctx.r5.s64 = 15832;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822D3DC4;
	sub_826344D0(ctx, base);
	// li r5,196
	ctx.r5.s64 = 196;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822D3DD4;
	sub_82635430(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822d3de8
	if (!ctx.cr6.lt) goto loc_822D3DE8;
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
loc_822D3DE8:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822d3e00
	if (!ctx.cr6.eq) goto loc_822D3E00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,8696
	ctx.r4.s64 = ctx.r11.s64 + 8696;
	// b 0x822d3e1c
	goto loc_822D3E1C;
loc_822D3E00:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d3e14
	if (ctx.cr6.eq) goto loc_822D3E14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,2500
	ctx.r4.s64 = ctx.r11.s64 + 2500;
	// b 0x822d3e1c
	goto loc_822D3E1C;
loc_822D3E14:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,2596
	ctx.r4.s64 = ctx.r11.s64 + 2596;
loc_822D3E1C:
	// addi r30,r31,196
	ctx.r30.s64 = ctx.r31.s64 + 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cb930
	ctx.lr = 0x822D3E28;
	sub_822CB930(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d3e54
	if (ctx.cr6.eq) goto loc_822D3E54;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d3e54
	if (ctx.cr6.eq) goto loc_822D3E54;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cba00
	ctx.lr = 0x822D3E48;
	sub_822CBA00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r10.u32);
loc_822D3E54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822ce158
	ctx.lr = 0x822D3E60;
	sub_822CE158(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r10.u32);
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// stw r11,15644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15644, ctx.r11.u32);
	// stw r10,15648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15648, ctx.r10.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D3E7C;
	sub_822EAC70(ctx, base);
	// std r3,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r3.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,-3560
	ctx.r5.s64 = ctx.r11.s64 + -3560;
	// addi r3,r31,15652
	ctx.r3.s64 = ctx.r31.s64 + 15652;
	// bl 0x822eca80
	ctx.lr = 0x822D3E94;
	sub_822ECA80(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r10,14748
	ctx.r5.s64 = ctx.r10.s64 + 14748;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,15668
	ctx.r3.s64 = ctx.r31.s64 + 15668;
	// bl 0x822eca80
	ctx.lr = 0x822D3EAC;
	sub_822ECA80(ctx, base);
	// stw r28,15828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15828, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3DA0) {
	__imp__sub_822D3DA0(ctx, base);
}

