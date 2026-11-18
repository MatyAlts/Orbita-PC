#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82417CC8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
loc_82417CDC:
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 | ctx.r3.u64;
	// rlwinm r8,r3,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82417cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82417CDC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82417CC8) {
	__imp__sub_82417CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82417D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82417D44) {
	__imp__sub_82417D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82417D48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82417cc8
	sub_82417CC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82417D48) {
	__imp__sub_82417D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82417D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82417D4C) {
	__imp__sub_82417D4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82417D50) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82417D58;
	__savegprlr_27(ctx, base);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82417e5c
	if (!ctx.cr6.gt) goto loc_82417E5C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
loc_82417D6C:
	// lbz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lbz r5,-2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r4,-1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,1(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 | ctx.r9.u64;
	// or r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 | ctx.r31.u64;
	// rlwinm r5,r4,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r9,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 | ctx.r30.u64;
	// or r5,r4,r29
	ctx.r5.u64 = ctx.r4.u64 | ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// xor r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// rlwinm r5,r4,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,5(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r28,5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r27,2(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 | ctx.r4.u64;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r5,r4,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r9,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 | ctx.r31.u64;
	// or r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 | ctx.r30.u64;
	// rlwinm r4,r9,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r4,r29
	ctx.r5.u64 = ctx.r4.u64 | ctx.r29.u64;
	// or r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 | ctx.r28.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// xor r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// and r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 & ctx.r5.u64;
	// rlwinm r5,r31,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// bdnz 0x82417d6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82417D6C;
loc_82417E5C:
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82417D50) {
	__imp__sub_82417D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82417E60) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82417E68;
	__savegprlr_27(ctx, base);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82417f6c
	if (!ctx.cr6.gt) goto loc_82417F6C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
loc_82417E7C:
	// lbz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lbz r5,-2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r4,-1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,1(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 | ctx.r9.u64;
	// or r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 | ctx.r31.u64;
	// rlwinm r5,r4,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r9,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 | ctx.r30.u64;
	// or r5,r4,r29
	ctx.r5.u64 = ctx.r4.u64 | ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// xor r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r5,r4,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,5(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r28,5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r27,2(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r5,r4,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 | ctx.r31.u64;
	// or r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 | ctx.r30.u64;
	// rlwinm r5,r4,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r9,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r29
	ctx.r9.u64 = ctx.r5.u64 | ctx.r29.u64;
	// or r5,r4,r28
	ctx.r5.u64 = ctx.r4.u64 | ctx.r28.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// xor r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r5,r4,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// bdnz 0x82417e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82417E7C;
loc_82417F6C:
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82417E60) {
	__imp__sub_82417E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82417F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82417F78;
	__savegprlr_29(ctx, base);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8241800c
	if (!ctx.cr6.gt) goto loc_8241800C;
	// subf r3,r6,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r6.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
loc_82417F90:
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lbz r5,-2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r31,-1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r29,1(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// or r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 | ctx.r9.u64;
	// or r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 | ctx.r31.u64;
	// rlwinm r5,r4,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r9,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 | ctx.r30.u64;
	// or r5,r4,r29
	ctx.r5.u64 = ctx.r4.u64 | ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// xor r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r5,r4,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// stwux r4,r3,r6
	ea = ctx.r3.u32 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x82417f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82417F90;
loc_8241800C:
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82417F70) {
	__imp__sub_82417F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418010) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8241807c
	if (!ctx.cr6.gt) goto loc_8241807C;
	// subf r3,r6,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r6.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241802C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r31,1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// or r9,r31,r5
	ctx.r9.u64 = ctx.r31.u64 | ctx.r5.u64;
	// rlwinm r5,r4,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r31,r9,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// xor r9,r31,r5
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r5.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r5,r9,17
	ctx.r5.u64 = ctx.r9.u32 & 0x7FFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r5,0,25,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// sthux r9,r3,r6
	// bdnz 0x8241802c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241802C;
loc_8241807C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82418010) {
	__imp__sub_82418010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82418084) {
	__imp__sub_82418084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418088) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82417d50
	sub_82417D50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418088) {
	__imp__sub_82418088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824180A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824180A4) {
	__imp__sub_824180A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824180A8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82417e60
	sub_82417E60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824180A8) {
	__imp__sub_824180A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824180C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824180C4) {
	__imp__sub_824180C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824180C8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82417d50
	sub_82417D50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824180C8) {
	__imp__sub_824180C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824180E0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82417e60
	sub_82417E60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824180E0) {
	__imp__sub_824180E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824180F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x82418100;
	__savegprlr_20(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824183d4
	if (!ctx.cr6.gt) goto loc_824183D4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r7,2
	ctx.r3.s64 = ctx.r7.s64 + 2;
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r5,2
	ctx.r7.s64 = ctx.r5.s64 + 2;
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,514
	ctx.r5.s64 = 33685504;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// ori r5,r5,514
	ctx.r5.u64 = ctx.r5.u64 | 514;
loc_82418134:
	// lbz r4,-2(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + -2);
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lbz r30,-2(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + -2);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r28,-1(r6)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + -1);
	// lbz r29,-2(r7)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r7.u32 + -2);
	// rotlwi r30,r30,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 8);
	// lbz r27,-1(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | ctx.r28.u64;
	// rotlwi r29,r29,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 8);
	// lbz r28,-1(r7)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + -1);
	// or r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 | ctx.r27.u64;
	// lbz r23,0(r6)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// lbz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r24,-2(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r27,-1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// lbz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// or r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 | ctx.r23.u64;
	// lbz r23,1(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r21,1(r6)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// rotlwi r24,r24,8
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 8);
	// lbz r28,1(r7)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r20,1(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 | ctx.r27.u64;
	// lbz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r23,r30,r23
	ctx.r23.u64 = ctx.r30.u64 | ctx.r23.u64;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 | ctx.r22.u64;
	// and r30,r23,r12
	ctx.r30.u64 = ctx.r23.u64 & ctx.r12.u64;
	// rlwinm r27,r27,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// or r22,r4,r21
	ctx.r22.u64 = ctx.r4.u64 | ctx.r21.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r27,r24
	ctx.r4.u64 = ctx.r27.u64 | ctx.r24.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r24,r29,r28
	ctx.r24.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwinm r29,r4,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// and r4,r22,r12
	ctx.r4.u64 = ctx.r22.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// or r21,r29,r20
	ctx.r21.u64 = ctx.r29.u64 | ctx.r20.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// and r29,r24,r12
	ctx.r29.u64 = ctx.r24.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r23,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r28,r22,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r21,r12
	ctx.r30.u64 = ctx.r21.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r29,r24,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// and r27,r27,r12
	ctx.r27.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r4,r4,30,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r30,r21,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3FFFFFFF;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lbz r4,2(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lbz r21,2(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r29,3(r7)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r21,r21,8
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r21.u32, 8);
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | ctx.r29.u64;
	// lbz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// or r30,r21,r30
	ctx.r30.u64 = ctx.r21.u64 | ctx.r30.u64;
	// lbz r27,4(r7)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r24,5(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r23,5(r7)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// or r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 | ctx.r27.u64;
	// lbz r22,2(r6)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// lbz r20,2(r3)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r27,3(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r21,5(r3)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// or r23,r4,r23
	ctx.r23.u64 = ctx.r4.u64 | ctx.r23.u64;
	// or r24,r30,r24
	ctx.r24.u64 = ctx.r30.u64 | ctx.r24.u64;
	// lbz r30,3(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// rotlwi r4,r22,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r22.u32, 8);
	// lbz r22,5(r6)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// rotlwi r28,r20,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r20.u32, 8);
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// lbz r30,4(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 | ctx.r27.u64;
	// lbz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// and r29,r23,r12
	ctx.r29.u64 = ctx.r23.u64 & ctx.r12.u64;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r22,r4,r22
	ctx.r22.u64 = ctx.r4.u64 | ctx.r22.u64;
	// or r30,r28,r27
	ctx.r30.u64 = ctx.r28.u64 | ctx.r27.u64;
	// and r28,r22,r12
	ctx.r28.u64 = ctx.r22.u64 & ctx.r12.u64;
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// or r27,r30,r21
	ctx.r27.u64 = ctx.r30.u64 | ctx.r21.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// and r4,r27,r12
	ctx.r4.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r27,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// and r30,r24,r12
	ctx.r30.u64 = ctx.r24.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r28,r22,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// and r27,r27,r12
	ctx.r27.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r29,r23,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r30,r24,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r4,r4,30,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// add r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 + ctx.r25.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// bdnz 0x82418134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82418134;
loc_824183D4:
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824180F8) {
	__imp__sub_824180F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824183D8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82417f70
	sub_82417F70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824183D8) {
	__imp__sub_824183D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824183F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824183F4) {
	__imp__sub_824183F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824183F8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82417f70
	sub_82417F70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824183F8) {
	__imp__sub_824183F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418410) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82418010
	sub_82418010(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418410) {
	__imp__sub_82418410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241842C) {
	__imp__sub_8241842C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418430) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82418010
	sub_82418010(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418430) {
	__imp__sub_82418430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418448) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x82418450;
	__savegprlr_20(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82418724
	if (!ctx.cr6.gt) goto loc_82418724;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r7,2
	ctx.r3.s64 = ctx.r7.s64 + 2;
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r5,2
	ctx.r7.s64 = ctx.r5.s64 + 2;
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,257
	ctx.r5.s64 = 16842752;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// ori r5,r5,257
	ctx.r5.u64 = ctx.r5.u64 | 257;
loc_82418484:
	// lbz r4,-2(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + -2);
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lbz r30,-2(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + -2);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r28,-1(r6)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + -1);
	// lbz r29,-2(r7)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r7.u32 + -2);
	// rotlwi r30,r30,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 8);
	// lbz r27,-1(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | ctx.r28.u64;
	// rotlwi r29,r29,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 8);
	// lbz r28,-1(r7)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + -1);
	// or r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 | ctx.r27.u64;
	// lbz r23,0(r6)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// lbz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r24,-2(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r27,-1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// lbz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// or r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 | ctx.r23.u64;
	// lbz r23,1(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r21,1(r6)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// rotlwi r24,r24,8
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 8);
	// lbz r28,1(r7)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r20,1(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 | ctx.r27.u64;
	// lbz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r23,r30,r23
	ctx.r23.u64 = ctx.r30.u64 | ctx.r23.u64;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 | ctx.r22.u64;
	// and r30,r23,r12
	ctx.r30.u64 = ctx.r23.u64 & ctx.r12.u64;
	// rlwinm r27,r27,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// or r22,r4,r21
	ctx.r22.u64 = ctx.r4.u64 | ctx.r21.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r27,r24
	ctx.r4.u64 = ctx.r27.u64 | ctx.r24.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r24,r29,r28
	ctx.r24.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwinm r29,r4,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// and r4,r22,r12
	ctx.r4.u64 = ctx.r22.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// or r21,r29,r20
	ctx.r21.u64 = ctx.r29.u64 | ctx.r20.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// and r29,r24,r12
	ctx.r29.u64 = ctx.r24.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r23,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r28,r22,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r21,r12
	ctx.r30.u64 = ctx.r21.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r29,r24,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// and r27,r27,r12
	ctx.r27.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r4,r4,30,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r30,r21,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3FFFFFFF;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lbz r4,2(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lbz r21,2(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r29,3(r7)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r21,r21,8
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r21.u32, 8);
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | ctx.r29.u64;
	// lbz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// or r30,r21,r30
	ctx.r30.u64 = ctx.r21.u64 | ctx.r30.u64;
	// lbz r27,4(r7)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r24,5(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r23,5(r7)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// or r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 | ctx.r27.u64;
	// lbz r22,2(r6)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// lbz r20,2(r3)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r27,3(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r21,5(r3)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// or r23,r4,r23
	ctx.r23.u64 = ctx.r4.u64 | ctx.r23.u64;
	// or r24,r30,r24
	ctx.r24.u64 = ctx.r30.u64 | ctx.r24.u64;
	// lbz r30,3(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// rotlwi r4,r22,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r22.u32, 8);
	// lbz r22,5(r6)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// rotlwi r28,r20,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r20.u32, 8);
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// lbz r30,4(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 | ctx.r27.u64;
	// lbz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// and r29,r23,r12
	ctx.r29.u64 = ctx.r23.u64 & ctx.r12.u64;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r22,r4,r22
	ctx.r22.u64 = ctx.r4.u64 | ctx.r22.u64;
	// or r30,r28,r27
	ctx.r30.u64 = ctx.r28.u64 | ctx.r27.u64;
	// and r28,r22,r12
	ctx.r28.u64 = ctx.r22.u64 & ctx.r12.u64;
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// or r27,r30,r21
	ctx.r27.u64 = ctx.r30.u64 | ctx.r21.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// and r4,r27,r12
	ctx.r4.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r27,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// and r30,r24,r12
	ctx.r30.u64 = ctx.r24.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r28,r22,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// and r27,r27,r12
	ctx.r27.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r29,r23,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r30,r24,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r4,r4,30,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// add r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 + ctx.r25.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// bdnz 0x82418484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82418484;
loc_82418724:
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418448) {
	__imp__sub_82418448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418728) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82418760:
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// srawi r3,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 2;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stbux r7,r11,r5
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bdnz 0x82418760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82418760;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82418728) {
	__imp__sub_82418728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824187D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824187E0;
	__savegprlr_29(ctx, base);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r8,514
	ctx.r8.s64 = 33685504;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r31,3(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 | ctx.r30.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// and r10,r7,r12
	ctx.r10.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// or r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 | ctx.r31.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r9,r7,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// and r11,r31,r12
	ctx.r11.u64 = ctx.r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r31,r8,514
	ctx.r31.u64 = ctx.r8.u64 | 514;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// ble cr6,0x824189e8
	if (!ctx.cr6.gt) goto loc_824189E8;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8241888C:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// lbz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r4,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r8,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 | ctx.r30.u64;
	// or r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 | ctx.r29.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// and r7,r6,r12
	ctx.r7.u64 = ctx.r6.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// and r8,r4,r12
	ctx.r8.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r10,r10,30,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFFFFFFF;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r29,r30,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 8);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 | ctx.r4.u64;
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | ctx.r30.u64;
	// rlwinm r30,r29,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 | ctx.r10.u64;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r30,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 | ctx.r10.u64;
	// and r9,r6,r12
	ctx.r9.u64 = ctx.r6.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// and r10,r4,r12
	ctx.r10.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r8,r8,30,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFFFFFFF;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwux r7,r3,r5
	ea = ctx.r3.u32 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bdnz 0x8241888c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241888C;
loc_824189E8:
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824187D8) {
	__imp__sub_824187D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824189EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824189EC) {
	__imp__sub_824189EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824189F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x824189F8;
	__savegprlr_25(ctx, base);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// mullw r29,r5,r6
	ctx.r29.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r28,r11,r5
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lis r11,257
	ctx.r11.s64 = 16842752;
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r31,r11,257
	ctx.r31.u64 = ctx.r11.u64 | 257;
loc_82418A10:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r7,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r7,r9,r27
	ctx.r7.u64 = ctx.r9.u64 | ctx.r27.u64;
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// and r10,r7,r12
	ctx.r10.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r9,r7,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r11,r8,r12
	ctx.r11.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r7,r31
	ctx.r10.u64 = ctx.r7.u64 + ctx.r31.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// ble cr6,0x82418c10
	if (!ctx.cr6.gt) goto loc_82418C10;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82418AB4:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r27,r8,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r26,3(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r27,r27,r4
	ctx.r27.u64 = ctx.r27.u64 | ctx.r4.u64;
	// lbz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r27,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 | ctx.r26.u64;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r8,r7,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r4,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r4,r8,r25
	ctx.r4.u64 = ctx.r8.u64 | ctx.r25.u64;
	// or r27,r7,r26
	ctx.r27.u64 = ctx.r7.u64 | ctx.r26.u64;
	// and r7,r4,r12
	ctx.r7.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// and r8,r27,r12
	ctx.r8.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r7,r27,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r10,r10,30,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFFFFFFF;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r26,1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r25,r26,8
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r26.u32, 8);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 | ctx.r10.u64;
	// or r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 | ctx.r26.u64;
	// rlwinm r26,r25,8,0,23
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 | ctx.r9.u64;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r4,r26,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 | ctx.r27.u64;
	// or r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r9,r4,r12
	ctx.r9.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// and r10,r27,r12
	ctx.r10.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r9,r27,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r8,r8,30,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFFFFFFF;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwux r7,r3,r5
	ea = ctx.r3.u32 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bdnz 0x82418ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82418AB4;
loc_82418C10:
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// subf r11,r29,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r29.s64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bne 0x82418a10
	if (!ctx.cr0.eq) goto loc_82418A10;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824189F0) {
	__imp__sub_824189F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82418C2C) {
	__imp__sub_82418C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82418C38;
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
	// bl 0x82417cc8
	ctx.lr = 0x82418C50;
	sub_82417CC8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417cc8
	ctx.lr = 0x82418C60;
	sub_82417CC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418C30) {
	__imp__sub_82418C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82418C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82417e60
	ctx.lr = 0x82418C9C;
	sub_82417E60(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82418CB0;
	sub_82417E60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418C68) {
	__imp__sub_82418C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82418CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82417e60
	ctx.lr = 0x82418CE8;
	sub_82417E60(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82418CFC;
	sub_82417E60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418CB8) {
	__imp__sub_82418CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82418D04) {
	__imp__sub_82418D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82418D10;
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
	// bl 0x824058d8
	ctx.lr = 0x82418D28;
	sub_824058D8(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x824058d8
	ctx.lr = 0x82418D34;
	sub_824058D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418D08) {
	__imp__sub_82418D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82418D3C) {
	__imp__sub_82418D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82418D48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82417d50
	ctx.lr = 0x82418D74;
	sub_82417D50(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82418D88;
	sub_82417D50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418D40) {
	__imp__sub_82418D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82418D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82417d50
	ctx.lr = 0x82418DC0;
	sub_82417D50(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82418DD4;
	sub_82417D50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418D90) {
	__imp__sub_82418D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82418DDC) {
	__imp__sub_82418DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82418DE8;
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
	// bl 0x824189f0
	ctx.lr = 0x82418E00;
	sub_824189F0(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x824189f0
	ctx.lr = 0x82418E0C;
	sub_824189F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418DE0) {
	__imp__sub_82418DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82418E14) {
	__imp__sub_82418E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82418E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82417d50
	ctx.lr = 0x82418E48;
	sub_82417D50(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82418E5C;
	sub_82417D50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418E18) {
	__imp__sub_82418E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82418E64) {
	__imp__sub_82418E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418E68) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x82417d50
	sub_82417D50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418E68) {
	__imp__sub_82418E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418E78) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82418E80;
	__savegprlr_24(ctx, base);
	// subfic r11,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r7.s64;
	// subfic r10,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r8.s64;
	// mullw. r31,r7,r8
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r29,r10,r7
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r30,r11,r8
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// beq 0x82418f48
	if (ctx.cr0.eq) goto loc_82418F48;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82418fcc
	if (!ctx.cr6.gt) goto loc_82418FCC;
	// addi r28,r5,2
	ctx.r28.s64 = ctx.r5.s64 + 2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// subf r27,r4,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r26,r5,-2
	ctx.r26.s64 = ctx.r5.s64 + -2;
loc_82418EC0:
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lbz r25,-1(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// mullw r3,r4,r29
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// lbzx r6,r6,r26
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r26.u32);
	// lbzx r24,r10,r7
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// mullw r4,r6,r30
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// mullw r6,r24,r31
	ctx.r6.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r31.s32);
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mullw r4,r25,r9
	ctx.r4.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r6,32
	ctx.r4.s64 = ctx.r6.s64 + 32;
	// srawi r3,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 6;
	// stbux r3,r8,r5
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r25,r10,r7
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// lbzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// mullw r6,r4,r29
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r6,r25,r30
	ctx.r6.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r6,r3,r9
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// srawi r4,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 6;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bdnz 0x82418ec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82418EC0;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82418F48:
	// add r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// bne cr6,0x82418f5c
	if (!ctx.cr6.eq) goto loc_82418F5C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82418F5C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82418fcc
	if (!ctx.cr6.gt) goto loc_82418FCC;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r10,r5,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r5.s64;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r30,r8,1
	ctx.r30.s64 = ctx.r8.s64 + 1;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
loc_82418F7C:
	// lbzx r7,r3,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// stbux r6,r10,r5
	// lbzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r7,r6,r9
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r7,r8,32
	ctx.r7.s64 = ctx.r8.s64 + 32;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// stbx r8,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bdnz 0x82418f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82418F7C;
loc_82418FCC:
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418E78) {
	__imp__sub_82418E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82418FD0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x82418FD8;
	__savegprlr_23(ctx, base);
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r7.s64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// subfic r9,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r8.s64;
	// mullw. r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r30,r9,r4
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mullw r31,r10,r31
	ctx.r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// beq 0x82419120
	if (ctx.cr0.eq) goto loc_82419120;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824191ec
	if (!ctx.cr6.gt) goto loc_824191EC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r28,r5,1
	ctx.r28.s64 = ctx.r5.s64 + 1;
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r26,r5,4
	ctx.r26.s64 = ctx.r5.s64 + 4;
	// addi r29,r5,3
	ctx.r29.s64 = ctx.r5.s64 + 3;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r25,r5,-1
	ctx.r25.s64 = ctx.r5.s64 + -1;
loc_82419028:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbz r24,1(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r25,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r9.u32);
	// mullw r27,r9,r31
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 + ctx.r3.u64;
	// mullw r27,r24,r30
	ctx.r27.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mullw r27,r23,r8
	ctx.r27.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r9,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 6;
	// stb r9,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r9.u8);
	// lbzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r24,r4,r10
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbz r23,1(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// mullw r27,r9,r7
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mullw r27,r24,r30
	ctx.r27.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mullw r27,r23,r8
	ctx.r27.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// srawi r3,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 6;
	// stb r3,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// lbzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r24,3(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r23,r4,r10
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// mullw r27,r9,r31
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mullw r27,r24,r30
	ctx.r27.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mullw r27,r23,r8
	ctx.r27.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// srawi r3,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 6;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbzx r27,r29,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r24,3(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r3,r30
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mullw r3,r27,r31
	ctx.r3.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mullw r3,r24,r8
	ctx.r3.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// srawi r3,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 6;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82419028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419028;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82419120:
	// add r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// bne cr6,0x82419134
	if (!ctx.cr6.eq) goto loc_82419134;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82419134:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824191ec
	if (!ctx.cr6.gt) goto loc_824191EC;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// addi r30,r9,2
	ctx.r30.s64 = ctx.r9.s64 + 2;
	// addi r29,r9,3
	ctx.r29.s64 = ctx.r9.s64 + 3;
	// subf r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r28,r9,-1
	ctx.r28.s64 = ctx.r9.s64 + -1;
loc_82419158:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r4,r6,r8
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbzx r9,r28,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// srawi r4,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 6;
	// stb r4,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r9,r6,32
	ctx.r9.s64 = ctx.r6.s64 + 32;
	// srawi r6,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 6;
	// stb r6,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r6.u8);
	// lbzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r9,r6,32
	ctx.r9.s64 = ctx.r6.s64 + 32;
	// srawi r6,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 6;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r4,r9,32
	ctx.r4.s64 = ctx.r9.s64 + 32;
	// srawi r9,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 6;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82419158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419158;
loc_824191EC:
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82418FD0) {
	__imp__sub_82418FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824191F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x824191F8;
	__savegprlr_19(ctx, base);
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r7.s64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// subfic r9,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r8.s64;
	// mullw. r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r30,r9,r4
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mullw r31,r10,r31
	ctx.r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// beq 0x82419430
	if (ctx.cr0.eq) goto loc_82419430;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8241958c
	if (!ctx.cr6.gt) goto loc_8241958C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r24,r5,1
	ctx.r24.s64 = ctx.r5.s64 + 1;
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r29,r5,3
	ctx.r29.s64 = ctx.r5.s64 + 3;
	// addi r28,r5,4
	ctx.r28.s64 = ctx.r5.s64 + 4;
	// addi r27,r5,5
	ctx.r27.s64 = ctx.r5.s64 + 5;
	// addi r26,r5,6
	ctx.r26.s64 = ctx.r5.s64 + 6;
	// addi r22,r5,8
	ctx.r22.s64 = ctx.r5.s64 + 8;
	// addi r25,r5,7
	ctx.r25.s64 = ctx.r5.s64 + 7;
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r21,r5,-1
	ctx.r21.s64 = ctx.r5.s64 + -1;
loc_82419258:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbzx r3,r24,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// lbz r20,1(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r21.u32);
	// mullw r23,r10,r31
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// mullw r23,r20,r30
	ctx.r23.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r19,r8
	ctx.r23.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// stb r10,-2(r9)
	PPC_STORE_U8(ctx.r9.u32 + -2, ctx.r10.u8);
	// lbzx r3,r24,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// lbzx r20,r4,r9
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbz r19,1(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// mullw r23,r10,r7
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r20,r30
	ctx.r23.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r19,r8
	ctx.r23.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// srawi r3,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 6;
	// stb r3,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r3.u8);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r20,r6,r11
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r19,r4,r9
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// mullw r23,r10,r7
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r3,r30
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r20,r31
	ctx.r23.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r19,r8
	ctx.r23.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// srawi r3,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 6;
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// lbzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r20,r29,r11
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r19,4(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mullw r23,r10,r8
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r20,r31
	ctx.r23.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r19,r30
	ctx.r23.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// srawi r3,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 6;
	// stb r3,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r3.u8);
	// lbzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbz r20,5(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r19,4(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// mullw r23,r10,r31
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r20,r30
	ctx.r23.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r19,r8
	ctx.r23.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// srawi r3,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 6;
	// stb r3,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lbz r23,5(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// lbz r20,6(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// mullw r23,r23,r8
	ctx.r23.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r10,r7
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r20,r30
	ctx.r23.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// stb r10,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
	// lbzx r3,r25,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbz r20,7(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r19,6(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// mullw r23,r10,r31
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r20,r30
	ctx.r23.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r30.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r19,r8
	ctx.r23.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// srawi r3,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 6;
	// stb r3,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r3.u8);
	// lbzx r3,r22,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// lbzx r20,r25,r11
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbz r19,7(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// mullw r23,r10,r30
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r3,r23
	ctx.r10.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r3,r20,r31
	ctx.r3.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mullw r3,r19,r8
	ctx.r3.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// stb r3,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r3.u8);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bdnz 0x82419258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419258;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_82419430:
	// add r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// bne cr6,0x82419444
	if (!ctx.cr6.eq) goto loc_82419444;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82419444:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8241958c
	if (!ctx.cr6.gt) goto loc_8241958C;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// addi r30,r9,2
	ctx.r30.s64 = ctx.r9.s64 + 2;
	// addi r29,r9,3
	ctx.r29.s64 = ctx.r9.s64 + 3;
	// addi r28,r9,4
	ctx.r28.s64 = ctx.r9.s64 + 4;
	// addi r27,r9,5
	ctx.r27.s64 = ctx.r9.s64 + 5;
	// addi r26,r9,6
	ctx.r26.s64 = ctx.r9.s64 + 6;
	// addi r25,r9,7
	ctx.r25.s64 = ctx.r9.s64 + 7;
	// subf r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r24,r9,-1
	ctx.r24.s64 = ctx.r9.s64 + -1;
loc_82419478:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r4,r6,r8
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbzx r9,r24,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r9.u32);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// srawi r4,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 6;
	// stb r4,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r9,r6,32
	ctx.r9.s64 = ctx.r6.s64 + 32;
	// srawi r6,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 6;
	// stb r6,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r6.u8);
	// lbzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// mullw r4,r9,r7
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r6,32
	ctx.r4.s64 = ctx.r6.s64 + 32;
	// srawi r9,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 6;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mullw r4,r6,r8
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r6,32
	ctx.r4.s64 = ctx.r6.s64 + 32;
	// srawi r9,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 6;
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// srawi r4,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 6;
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// srawi r4,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 6;
	// stb r4,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbzx r6,r26,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r9,r6,32
	ctx.r9.s64 = ctx.r6.s64 + 32;
	// srawi r6,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 6;
	// stb r6,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r6.u8);
	// lbz r6,7(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbzx r9,r25,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r4,r9,32
	ctx.r4.s64 = ctx.r9.s64 + 32;
	// srawi r9,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 6;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stb r6,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r6.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82419478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419478;
loc_8241958C:
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824191F0) {
	__imp__sub_824191F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82419590) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x82419598;
	__savegprlr_22(ctx, base);
	// subfic r11,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r7.s64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// subfic r9,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r8.s64;
	// mullw. r31,r7,r8
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r29,r9,r7
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r30,r11,r3
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// beq 0x82419688
	if (ctx.cr0.eq) goto loc_82419688;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82419730
	if (!ctx.cr6.gt) goto loc_82419730;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r25,r5,2
	ctx.r25.s64 = ctx.r5.s64 + 2;
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// subf r6,r4,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r24,r5,-2
	ctx.r24.s64 = ctx.r5.s64 + -2;
loc_824195DC:
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r23,-1(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// mullw r26,r3,r29
	ctx.r26.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbzx r4,r4,r24
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r24.u32);
	// lbzx r22,r9,r7
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// mullw r27,r4,r30
	ctx.r27.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// mullw r4,r22,r31
	ctx.r4.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r31.s32);
	// add r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 + ctx.r4.u64;
	// mullw r27,r23,r8
	ctx.r27.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + ctx.r26.u64;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r27,r9,r7
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// lbzx r9,r9,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r27,r30
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r28,r8
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r9,32
	ctx.r4.s64 = ctx.r9.s64 + 32;
	// srawi r9,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 6;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// srawi r9,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 1;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// stbx r4,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bdnz 0x824195dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824195DC;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_82419688:
	// add r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bne cr6,0x8241969c
	if (!ctx.cr6.eq) goto loc_8241969C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8241969C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82419730
	if (!ctx.cr6.gt) goto loc_82419730;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r30,r7,1
	ctx.r30.s64 = ctx.r7.s64 + 1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r29,r7,-1
	ctx.r29.s64 = ctx.r7.s64 + -1;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_824196BC:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mullw r3,r6,r8
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r7,r29,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r3,r7,32
	ctx.r3.s64 = ctx.r7.s64 + 32;
	// srawi r7,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 6;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// stbx r4,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// mullw r7,r3,r31
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// srawi r7,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 6;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bdnz 0x824196bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824196BC;
loc_82419730:
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82419590) {
	__imp__sub_82419590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82419734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82419734) {
	__imp__sub_82419734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82419738) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x82419740;
	__savegprlr_20(ctx, base);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r7.s64;
	// subfic r7,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r7.s64 = 8 - ctx.r8.s64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r31,r7,r4
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw. r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mullw r7,r10,r30
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// beq 0x824198c8
	if (ctx.cr0.eq) goto loc_824198C8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824199d8
	if (!ctx.cr6.gt) goto loc_824199D8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r29,r5,1
	ctx.r29.s64 = ctx.r5.s64 + 1;
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r23,r5,4
	ctx.r23.s64 = ctx.r5.s64 + 4;
	// addi r30,r5,3
	ctx.r30.s64 = ctx.r5.s64 + 3;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r22,r5,-1
	ctx.r22.s64 = ctx.r5.s64 + -1;
loc_82419790:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lbzx r28,r29,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r21,1(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r24,r28,r8
	ctx.r24.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// lbz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r25,-2(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lbz r26,-1(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbzx r3,r22,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r3.u32);
	// lbz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,1(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r21,r31
	ctx.r24.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r20,r9
	ctx.r24.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r3.u8);
	// lbzx r25,r6,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r24,r29,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r21,1(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// mullw r25,r25,r8
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// mullw r25,r24,r7
	ctx.r25.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// mullw r25,r21,r9
	ctx.r25.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// lbzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r25,r6,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbz r24,3(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r26,r4,r10
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r26,r26,r9
	ctx.r26.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// mullw r26,r25,r7
	ctx.r26.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// mullw r26,r24,r31
	ctx.r26.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbzx r3,r23,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// lbzx r26,r30,r11
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbz r25,3(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// mullw r27,r27,r31
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mullw r27,r26,r7
	ctx.r27.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mullw r27,r25,r9
	ctx.r27.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82419790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419790;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_824198C8:
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bne cr6,0x824198dc
	if (!ctx.cr6.eq) goto loc_824198DC;
	// li r7,1
	ctx.r7.s64 = 1;
loc_824198DC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824199d8
	if (!ctx.cr6.gt) goto loc_824199D8;
	// addi r27,r7,1
	ctx.r27.s64 = ctx.r7.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r26,r7,2
	ctx.r26.s64 = ctx.r7.s64 + 2;
	// addi r25,r7,3
	ctx.r25.s64 = ctx.r7.s64 + 3;
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// addi r8,r3,3
	ctx.r8.s64 = ctx.r3.s64 + 3;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subf r7,r11,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82419904:
	// lbzx r6,r24,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lbz r28,-1(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// mullw r4,r6,r31
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// lbz r29,-3(r8)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r8.u32 + -3);
	// lbzx r30,r7,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbz r3,-1(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// stb r4,-3(r8)
	PPC_STORE_U8(ctx.r8.u32 + -3, ctx.r4.u8);
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r29,r29,r9
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// stbx r4,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u8);
	// lbz r30,1(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// srawi r4,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 1;
	// stb r4,-1(r8)
	PPC_STORE_U8(ctx.r8.u32 + -1, ctx.r4.u8);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbzx r3,r25,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// mullw r11,r3,r31
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r3.u8);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bdnz 0x82419904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419904;
loc_824199D8:
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82419738) {
	__imp__sub_82419738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824199DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824199DC) {
	__imp__sub_824199DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824199E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x824199E8;
	__savegprlr_14(ctx, base);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r7.s64;
	// subfic r7,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r7.s64 = 8 - ctx.r8.s64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r31,r7,r4
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw. r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mullw r7,r10,r30
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// beq 0x82419ca0
	if (ctx.cr0.eq) goto loc_82419CA0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82419e80
	if (!ctx.cr6.gt) goto loc_82419E80;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r25,r5,1
	ctx.r25.s64 = ctx.r5.s64 + 1;
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r30,r5,3
	ctx.r30.s64 = ctx.r5.s64 + 3;
	// addi r29,r5,4
	ctx.r29.s64 = ctx.r5.s64 + 4;
	// addi r28,r5,5
	ctx.r28.s64 = ctx.r5.s64 + 5;
	// addi r27,r5,6
	ctx.r27.s64 = ctx.r5.s64 + 6;
	// addi r17,r5,8
	ctx.r17.s64 = ctx.r5.s64 + 8;
	// addi r26,r5,7
	ctx.r26.s64 = ctx.r5.s64 + 7;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r16,r5,-1
	ctx.r16.s64 = ctx.r5.s64 + -1;
loc_82419A48:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lbzx r24,r25,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbz r15,1(r11)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r18,r24,r8
	ctx.r18.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// lbz r14,0(r11)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r19,-2(r10)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lbz r20,-1(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbzx r3,r3,r16
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r16.u32);
	// lbz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r24,1(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r21,2(r10)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r22,3(r10)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// mullw r18,r15,r31
	ctx.r18.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// mullw r18,r14,r9
	ctx.r18.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r3.u8);
	// lbzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r18,r25,r11
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbz r15,1(r11)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r19,r6,r11
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// mullw r19,r19,r8
	ctx.r19.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// mullw r19,r18,r7
	ctx.r19.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// mullw r19,r15,r9
	ctx.r19.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// lbzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r19,r4,r10
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r18,r6,r11
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbz r20,3(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mullw r20,r20,r31
	ctx.r20.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// mullw r20,r19,r9
	ctx.r20.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// mullw r20,r18,r7
	ctx.r20.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r20,r29,r11
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r19,4(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r23,3(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mullw r23,r23,r9
	ctx.r23.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r20,r8
	ctx.r23.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r19,r31
	ctx.r23.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// lbz r23,4(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// lbz r24,5(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// lbz r20,5(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbzx r19,r29,r11
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r18,4(r11)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r20,r20,r31
	ctx.r20.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// mullw r20,r19,r7
	ctx.r20.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// mullw r20,r18,r9
	ctx.r20.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// lbz r21,5(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbzx r20,r27,r11
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbz r19,6(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// mullw r21,r21,r9
	ctx.r21.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// mullw r20,r20,r8
	ctx.r20.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// mullw r21,r19,r31
	ctx.r21.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r3.u8);
	// lbzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// lbzx r19,r27,r11
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbz r20,6(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r22,7(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// mullw r21,r22,r31
	ctx.r21.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r22,r19,r7
	ctx.r22.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// mullw r22,r20,r9
	ctx.r22.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// lbz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r22,7(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbzx r3,r17,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r11.u32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r23,r23,r31
	ctx.r23.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r31.s32);
	// lbzx r21,r26,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r21,r7
	ctx.r23.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r23,r22,r9
	ctx.r23.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82419a48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419A48;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82419CA0:
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bne cr6,0x82419cb4
	if (!ctx.cr6.eq) goto loc_82419CB4;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82419CB4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82419e80
	if (!ctx.cr6.gt) goto loc_82419E80;
	// addi r25,r7,1
	ctx.r25.s64 = ctx.r7.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r24,r7,2
	ctx.r24.s64 = ctx.r7.s64 + 2;
	// addi r23,r7,3
	ctx.r23.s64 = ctx.r7.s64 + 3;
	// addi r22,r7,4
	ctx.r22.s64 = ctx.r7.s64 + 4;
	// addi r21,r7,5
	ctx.r21.s64 = ctx.r7.s64 + 5;
	// addi r20,r7,6
	ctx.r20.s64 = ctx.r7.s64 + 6;
	// addi r19,r7,7
	ctx.r19.s64 = ctx.r7.s64 + 7;
	// addi r18,r7,-1
	ctx.r18.s64 = ctx.r7.s64 + -1;
	// addi r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 3;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subf r7,r11,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82419CEC:
	// lbzx r6,r18,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r8.u32);
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// lbz r26,-1(r8)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// mullw r6,r6,r31
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// lbz r27,-3(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + -3);
	// lbzx r28,r8,r7
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbz r29,-1(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// mullw r26,r26,r9
	ctx.r26.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stb r6,-3(r10)
	PPC_STORE_U8(ctx.r10.u32 + -3, ctx.r6.u8);
	// lbzx r6,r25,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbz r27,0(r8)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// mullw r27,r27,r9
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r6,r31
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stbx r6,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u8);
	// lbzx r6,r24,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// lbz r28,1(r8)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r6,r31
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stb r6,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r6.u8);
	// lbzx r28,r23,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// lbz r6,2(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// mullw r29,r6,r9
	ctx.r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r28,r31
	ctx.r6.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbzx r6,r22,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// lbz r30,3(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r6,r31
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// srawi r6,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 1;
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// lbz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lbzx r6,r21,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// mullw r6,r6,r31
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// addi r3,r6,32
	ctx.r3.s64 = ctx.r6.s64 + 32;
	// srawi r6,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 6;
	// lbz r3,3(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbz r30,5(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// lbzx r6,r20,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// mullw r4,r6,r31
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// lbz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// srawi r4,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 1;
	// stb r4,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// lbz r4,6(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r3,r19,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r11.u32);
	// mullw r11,r3,r31
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82419cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419CEC;
loc_82419E80:
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824199E0) {
	__imp__sub_824199E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82419E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82419E84) {
	__imp__sub_82419E84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82419E88) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82419E90;
	__savegprlr_27(ctx, base);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r30,-1(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r10,r10,-18496
	ctx.r10.s64 = ctx.r10.s64 + -18496;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r29,r10,1024
	ctx.r29.s64 = ctx.r10.s64 + 1024;
	// lbz r31,-2(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + -2);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r27,r10,1024
	ctx.r27.s64 = ctx.r10.s64 + 1024;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r30,r10,1024
	ctx.r30.s64 = ctx.r10.s64 + 1024;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// srawi r10,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 5;
	// lbzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lbz r31,3(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,-1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// srawi r7,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 5;
	// lbzx r10,r7,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// srawi r7,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 5;
	// lbzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stbx r10,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r10.u8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r6,r4,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r3,r7,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r7.s64;
	// subf r11,r6,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r6.s64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82419E88) {
	__imp__sub_82419E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82419FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82419FD4) {
	__imp__sub_82419FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82419FD8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82419FE0;
	__savegprlr_25(ctx, base);
	// lbzx r8,r4,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r6,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r6.s64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lbzx r7,r10,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r30,r7,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r7.s64;
	// lbz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r26,r10,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r7,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r7.s64;
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// add r8,r29,r4
	ctx.r8.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lis r28,-31990
	ctx.r28.s64 = -2096496640;
	// lbz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r25,r7,16
	ctx.r25.s64 = ctx.r7.s64 + 16;
	// addi r11,r28,-18496
	ctx.r11.s64 = ctx.r28.s64 + -18496;
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r30,r11,1024
	ctx.r30.s64 = ctx.r11.s64 + 1024;
	// srawi r29,r25,5
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r25.s32 >> 5;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
	// addi r31,r7,16
	ctx.r31.s64 = ctx.r7.s64 + 16;
	// add r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbzx r6,r29,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// srawi r30,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 5;
	// addi r29,r11,1024
	ctx.r29.s64 = ctx.r11.s64 + 1024;
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r31,r3,r5
	ctx.r31.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// lbzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// stbx r11,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r11.u8);
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r11,1(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r4,1(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r11,1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// lbz r5,1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// subf r8,r7,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r7.s64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r9,r6,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// srawi r4,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 5;
	// srawi r11,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 5;
	// lbzx r10,r4,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82419FD8) {
	__imp__sub_82419FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241A120) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x8241A128;
	__savegprlr_23(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8241A13C:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,-2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// lbz r29,3(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r30,-1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r10,r29,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r29.s64;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// sth r5,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r5.u16);
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// bdnz 0x8241a13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241A13C;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r7,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r27,r31,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lhzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// subf r26,r9,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lis r25,-31990
	ctx.r25.s64 = -2096496640;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lhzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lhz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lhz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add r23,r7,r10
	ctx.r23.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lhz r24,0(r26)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// subf r10,r7,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r7.s64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subf r23,r4,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r4.s64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// extsh r28,r24
	ctx.r28.s64 = ctx.r24.s16;
	// subf r10,r30,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r30.s64;
	// add r30,r29,r28
	ctx.r30.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lhz r24,0(r7)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r30,r4
	ctx.r29.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// extsh r30,r24
	ctx.r30.s64 = ctx.r24.s16;
	// addi r29,r29,512
	ctx.r29.s64 = ctx.r29.s64 + 512;
	// addi r10,r25,-18496
	ctx.r10.s64 = ctx.r25.s64 + -18496;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// srawi r30,r29,10
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FF) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 10;
	// addi r29,r10,1024
	ctx.r29.s64 = ctx.r10.s64 + 1024;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// addi r4,r5,512
	ctx.r4.s64 = ctx.r5.s64 + 512;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r30,r30,r29
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// srawi r29,r4,10
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FF) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 10;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// lbzx r31,r29,r28
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// stbx r31,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r31.u8);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,2(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// lhz r5,2(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// lhz r31,2(r7)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r29,2(r26)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r30,2(r8)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r9,r8,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r8.s64;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r7,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 10;
	// addi r6,r10,1024
	ctx.r6.s64 = ctx.r10.s64 + 1024;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r10,1024
	ctx.r5.s64 = ctx.r10.s64 + 1024;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lbzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// srawi r9,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 10;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// stb r8,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241A120) {
	__imp__sub_8241A120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241A350) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8241A358;
	__savegprlr_27(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_8241A370:
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r28,-5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r4,-6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6);
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r28,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r28.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// stb r4,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,-5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r4,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r4.u8);
	// lbz r3,-3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,-3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r27
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x8241a370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241A370;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241A350) {
	__imp__sub_8241A350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241A4B0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x8241A4B8;
	__savegprlr_14(ctx, base);
	// lbz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r26,r6,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r30,r4,r6
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// subf r19,r6,r4
	ctx.r19.s64 = ctx.r4.s64 - ctx.r6.s64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbzx r31,r26,r4
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r23,0(r19)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r8,r31,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r18,r26,r4
	ctx.r18.s64 = ctx.r4.s64 - ctx.r26.s64;
	// subf r11,r23,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r23.s64;
	// lis r27,-31990
	ctx.r27.s64 = -2096496640;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r27,-18496
	ctx.r11.s64 = ctx.r27.s64 + -18496;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r27,r31,r30
	ctx.r27.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r24,r11,1024
	ctx.r24.s64 = ctx.r11.s64 + 1024;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r25,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r25.s64 = ctx.r9.s32 >> 5;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r21,r25,r24
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r24.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r27,r29,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r29.s64;
	// add r24,r29,r31
	ctx.r24.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r25,r28,r27
	ctx.r25.s64 = ctx.r27.s64 - ctx.r28.s64;
	// lbz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r17,r24,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r25,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r24,0(r8)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// subf r17,r27,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r27.s64;
	// lbz r20,0(r7)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// add r22,r25,r22
	ctx.r22.u64 = ctx.r25.u64 + ctx.r22.u64;
	// stb r21,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r21.u8);
	// subf r25,r30,r17
	ctx.r25.s64 = ctx.r17.s64 - ctx.r30.s64;
	// add r21,r22,r27
	ctx.r21.u64 = ctx.r22.u64 + ctx.r27.u64;
	// rlwinm r22,r25,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r27,r29
	ctx.r27.u64 = ctx.r27.u64 + ctx.r29.u64;
	// add r25,r25,r22
	ctx.r25.u64 = ctx.r25.u64 + ctx.r22.u64;
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// add r29,r25,r24
	ctx.r29.u64 = ctx.r25.u64 + ctx.r24.u64;
	// addi r25,r23,16
	ctx.r25.s64 = ctx.r23.s64 + 16;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r28,r24,r27
	ctx.r28.s64 = ctx.r27.s64 - ctx.r24.s64;
	// srawi r23,r25,5
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1F) != 0);
	ctx.r23.s64 = ctx.r25.s32 >> 5;
	// addi r22,r11,1024
	ctx.r22.s64 = ctx.r11.s64 + 1024;
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// subf r29,r31,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r31.s64;
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r29,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r5,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r24,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r24.s64 = ctx.r27.s32 >> 5;
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lbzx r23,r23,r22
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r22.u32);
	// addi r22,r11,1024
	ctx.r22.s64 = ctx.r11.s64 + 1024;
	// add r25,r29,r25
	ctx.r25.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r27,r5,r28
	ctx.r27.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r29,r4,r6
	ctx.r29.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r28,r26,r4
	ctx.r28.u64 = ctx.r26.u64 + ctx.r4.u64;
	// stbx r23,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r23.u8);
	// lbzx r5,r24,r22
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r22.u32);
	// stw r29,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r29.u32);
	// stw r28,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r28.u32);
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// stw r6,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r6.u32);
	// add r5,r25,r20
	ctx.r5.u64 = ctx.r25.u64 + ctx.r20.u64;
	// std r11,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// addi r26,r11,1024
	ctx.r26.s64 = ctx.r11.s64 + 1024;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r30,r11,1024
	ctx.r30.s64 = ctx.r11.s64 + 1024;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// stw r30,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// add r6,r27,r3
	ctx.r6.u64 = ctx.r27.u64 + ctx.r3.u64;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// addi r16,r11,1024
	ctx.r16.s64 = ctx.r11.s64 + 1024;
	// addi r15,r11,1024
	ctx.r15.s64 = ctx.r11.s64 + 1024;
	// addi r14,r11,1024
	ctx.r14.s64 = ctx.r11.s64 + 1024;
	// addi r22,r11,1024
	ctx.r22.s64 = ctx.r11.s64 + 1024;
	// stw r15,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r15.u32);
	// lbzx r5,r5,r26
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r26.u32);
	// addi r21,r11,1024
	ctx.r21.s64 = ctx.r11.s64 + 1024;
	// addi r20,r11,1024
	ctx.r20.s64 = ctx.r11.s64 + 1024;
	// stw r14,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r14.u32);
	// addi r17,r11,1024
	ctx.r17.s64 = ctx.r11.s64 + 1024;
	// stbx r5,r27,r3
	PPC_STORE_U8(ctx.r27.u32 + ctx.r3.u32, ctx.r5.u8);
	// lbz r5,1(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r29,1(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r25,1(r18)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1);
	// lbz r26,1(r19)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// stw r26,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r26.u32);
	// add r26,r5,r29
	ctx.r26.u64 = ctx.r5.u64 + ctx.r29.u64;
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// lbz r30,1(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// clrlwi r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r29,1(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r28,1(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stw r26,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r26.u32);
	// lwz r25,-196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r23,-208(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// rotlwi r14,r23,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r23.u32, 0);
	// subf r25,r30,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r30.s64;
	// add r24,r30,r5
	ctx.r24.u64 = ctx.r30.u64 + ctx.r5.u64;
	// subf r25,r23,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r23.s64;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// rotlwi r25,r25,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// subf r23,r29,r24
	ctx.r23.s64 = ctx.r24.s64 - ctx.r29.s64;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r23,r27,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r27.s64;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r24,r29,r30
	ctx.r24.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r23,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// clrlwi r26,r28,24
	ctx.r26.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,-208(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// add r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r24,-192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// subf r25,r26,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r26.s64;
	// stw r16,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r16.u32);
	// rotlwi r23,r23,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r23.u32, 0);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r5,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r5.s64;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r28.u32);
	// lwz r16,-196(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// rotlwi r25,r25,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// lbz r28,1(r8)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stw r24,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r24.u32);
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r23.u32);
	// lwz r23,-192(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// add r23,r23,r11
	ctx.r23.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r11,-196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// subf r16,r28,r16
	ctx.r16.s64 = ctx.r16.s64 - ctx.r28.s64;
	// stw r23,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r23.u32);
	// add r23,r25,r24
	ctx.r23.u64 = ctx.r25.u64 + ctx.r24.u64;
	// subf r30,r30,r16
	ctx.r30.s64 = ctx.r16.s64 - ctx.r30.s64;
	// lwz r25,-192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// add r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 + ctx.r29.u64;
	// add r24,r15,r11
	ctx.r24.u64 = ctx.r15.u64 + ctx.r11.u64;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r24.u32);
	// rotlwi r24,r24,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// lwz r16,-204(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// lwz r15,-200(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r30,1(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// add r24,r24,r26
	ctx.r24.u64 = ctx.r24.u64 + ctx.r26.u64;
	// add r26,r23,r28
	ctx.r26.u64 = ctx.r23.u64 + ctx.r28.u64;
	// srawi r25,r25,5
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1F) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 5;
	// add r28,r24,r14
	ctx.r28.u64 = ctx.r24.u64 + ctx.r14.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r29,r26,r27
	ctx.r29.u64 = ctx.r26.u64 + ctx.r27.u64;
	// lwz r26,-188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lbzx r27,r25,r22
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r22.u32);
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// srawi r28,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 5;
	// addi r29,r5,16
	ctx.r29.s64 = ctx.r5.s64 + 16;
	// srawi r30,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 5;
	// srawi r29,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 5;
	// stb r27,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r27.u8);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lbzx r28,r28,r21
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r21.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stb r28,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r28.u8);
	// lbzx r30,r30,r20
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// lbzx r30,r29,r17
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r17.u32);
	// stb r30,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r30.u8);
	// lbz r29,2(r16)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r16.u32 + 2);
	// lbz r27,2(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r25,2(r19)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r28,2(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r30,2(r18)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r18.u32 + 2);
	// stw r30,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r30.u32);
	// add r24,r29,r27
	ctx.r24.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lbz r30,2(r15)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r15.u32 + 2);
	// add r23,r30,r29
	ctx.r23.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r22,-188(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r23,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r30,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r30.s64;
	// add r21,r5,r30
	ctx.r21.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r24,r25,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r25.s64;
	// add r17,r28,r5
	ctx.r17.u64 = ctx.r28.u64 + ctx.r5.u64;
	// rlwinm r23,r24,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// subf r23,r5,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r5.s64;
	// rlwinm r20,r17,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r17,r28,r21
	ctx.r17.s64 = ctx.r21.s64 - ctx.r28.s64;
	// add r21,r24,r22
	ctx.r21.u64 = ctx.r24.u64 + ctx.r22.u64;
	// lbz r24,2(r8)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// subf r22,r27,r23
	ctx.r22.s64 = ctx.r23.s64 - ctx.r27.s64;
	// subf r14,r24,r20
	ctx.r14.s64 = ctx.r20.s64 - ctx.r24.s64;
	// subf r23,r29,r17
	ctx.r23.s64 = ctx.r17.s64 - ctx.r29.s64;
	// add r21,r21,r5
	ctx.r21.u64 = ctx.r21.u64 + ctx.r5.u64;
	// subf r5,r30,r14
	ctx.r5.s64 = ctx.r14.s64 - ctx.r30.s64;
	// rlwinm r20,r22,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r23,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r21,16
	ctx.r17.s64 = ctx.r21.s64 + 16;
	// add r21,r22,r20
	ctx.r21.u64 = ctx.r22.u64 + ctx.r20.u64;
	// rlwinm r22,r5,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r23,r30
	ctx.r30.u64 = ctx.r23.u64 + ctx.r30.u64;
	// add r28,r21,r28
	ctx.r28.u64 = ctx.r21.u64 + ctx.r28.u64;
	// add r23,r5,r22
	ctx.r23.u64 = ctx.r5.u64 + ctx.r22.u64;
	// lbz r5,2(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r5,r23,r5
	ctx.r5.u64 = ctx.r23.u64 + ctx.r5.u64;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// srawi r27,r17,5
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r17.s32 >> 5;
	// lwz r17,-208(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// srawi r29,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r28.s32 >> 5;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// srawi r30,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 5;
	// lbzx r28,r27,r17
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r17.u32);
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// lwz r17,-184(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// ld r11,-168(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// addi r22,r11,1024
	ctx.r22.s64 = ctx.r11.s64 + 1024;
	// stb r28,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r28.u8);
	// lbzx r29,r29,r17
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r17.u32);
	// lwz r17,-180(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// stb r29,2(r26)
	PPC_STORE_U8(ctx.r26.u32 + 2, ctx.r29.u8);
	// lbzx r30,r30,r17
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r17.u32);
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// lwz r17,-176(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lbzx r5,r5,r17
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r17.u32);
	// stb r5,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r5.u8);
	// lbz r5,3(r15)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r15.u32 + 3);
	// lbz r29,3(r19)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r19.u32 + 3);
	// lbz r24,3(r18)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r18.u32 + 3);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r8,3(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r4,3(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r30,3(r16)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r16.u32 + 3);
	// add r28,r30,r4
	ctx.r28.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lbz r25,3(r7)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// add r7,r5,r30
	ctx.r7.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r5,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r5.s64;
	// add r23,r10,r5
	ctx.r23.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r7,r29,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r29.s64;
	// subf r27,r10,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r10.s64;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r4,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r4.s64;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r24,r7,r24
	ctx.r24.u64 = ctx.r7.u64 + ctx.r24.u64;
	// rlwinm r7,r23,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// rlwinm r23,r27,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r8,r28
	ctx.r24.s64 = ctx.r28.s64 - ctx.r8.s64;
	// subf r28,r30,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r30.s64;
	// subf r7,r5,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r5.s64;
	// lbzx r22,r10,r22
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// add r10,r27,r23
	ctx.r10.u64 = ctx.r27.u64 + ctx.r23.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r22,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r22.u8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// add r10,r7,r25
	ctx.r10.u64 = ctx.r7.u64 + ctx.r25.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// srawi r3,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// srawi r7,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 5;
	// addi r5,r11,1024
	ctx.r5.s64 = ctx.r11.s64 + 1024;
	// srawi r4,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 5;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lbzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r10,3(r26)
	PPC_STORE_U8(ctx.r26.u32 + 3, ctx.r10.u8);
	// lbzx r9,r7,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// lbzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241A4B0) {
	__imp__sub_8241A4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241A9B0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x8241A9B8;
	__savegprlr_14(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8241A9CC:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,-2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r30,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r30.s64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r9,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r9.u16);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r30,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r30.s64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r9,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r9.u16);
	// lbz r30,5(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r10,r30,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r30.s64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// sth r5,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r5.u16);
	// add r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 + ctx.r4.u64;
	// bdnz 0x8241a9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241A9CC;
	// mulli r11,r7,14
	ctx.r11.s64 = ctx.r7.s64 * 14;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r27,r11
	ctx.r18.s64 = ctx.r11.s64 - ctx.r27.s64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lhzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// subf r17,r31,r11
	ctx.r17.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// extsh r25,r5
	ctx.r25.s64 = ctx.r5.s16;
	// lhz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// add r4,r30,r25
	ctx.r4.u64 = ctx.r30.u64 + ctx.r25.u64;
	// lhz r5,0(r17)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// extsh r23,r9
	ctx.r23.s64 = ctx.r9.s16;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r28,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r28.s64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// subf r10,r23,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r23.s64;
	// lis r24,-31990
	ctx.r24.s64 = -2096496640;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r26,r7,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r10,r24,-18496
	ctx.r10.s64 = ctx.r24.s64 + -18496;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// add r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 + ctx.r26.u64;
	// add r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 + ctx.r4.u64;
	// srawi r24,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r24.s64 = ctx.r8.s32 >> 10;
	// addi r22,r10,1024
	ctx.r22.s64 = ctx.r10.s64 + 1024;
	// add r21,r28,r30
	ctx.r21.u64 = ctx.r28.u64 + ctx.r30.u64;
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r21,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r24,r24,r22
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r22.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// subf r26,r29,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r29.s64;
	// add r22,r29,r28
	ctx.r22.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r26,r25,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r25.s64;
	// lhz r21,0(r8)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r20,0(r5)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r19,r22,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r16,0(r4)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r22,r26,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
	// extsh r24,r21
	ctx.r24.s64 = ctx.r21.s16;
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// subf r21,r24,r19
	ctx.r21.s64 = ctx.r19.s64 - ctx.r24.s64;
	// add r22,r26,r24
	ctx.r22.u64 = ctx.r26.u64 + ctx.r24.u64;
	// subf r26,r30,r21
	ctx.r26.s64 = ctx.r21.s64 - ctx.r30.s64;
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// rlwinm r22,r26,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r23,512
	ctx.r23.s64 = ctx.r23.s64 + 512;
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// srawi r14,r23,10
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3FF) != 0);
	ctx.r14.s64 = ctx.r23.s32 >> 10;
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// extsh r23,r20
	ctx.r23.s64 = ctx.r20.s16;
	// extsh r21,r16
	ctx.r21.s64 = ctx.r16.s16;
	// add r20,r26,r23
	ctx.r20.u64 = ctx.r26.u64 + ctx.r23.u64;
	// add r24,r24,r29
	ctx.r24.u64 = ctx.r24.u64 + ctx.r29.u64;
	// add r29,r20,r25
	ctx.r29.u64 = ctx.r20.u64 + ctx.r25.u64;
	// rlwinm r19,r6,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r27,r11
	ctx.r22.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r27,r31,r11
	ctx.r27.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r26,r3,r6
	ctx.r26.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lbzx r16,r14,r15
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r15.u32);
	// add r31,r19,r3
	ctx.r31.u64 = ctx.r19.u64 + ctx.r3.u64;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,512
	ctx.r29.s64 = ctx.r29.s64 + 512;
	// stbx r16,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r16.u8);
	// subf r25,r23,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r23.s64;
	// srawi r24,r29,10
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FF) != 0);
	ctx.r24.s64 = ctx.r29.s32 >> 10;
	// subf r29,r28,r25
	ctx.r29.s64 = ctx.r25.s64 - ctx.r28.s64;
	// addi r23,r10,1024
	ctx.r23.s64 = ctx.r10.s64 + 1024;
	// rlwinm r25,r29,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// lbzx r28,r24,r23
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r23.u32);
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// addi r30,r30,512
	ctx.r30.s64 = ctx.r30.s64 + 512;
	// stbx r28,r19,r3
	PPC_STORE_U8(ctx.r19.u32 + ctx.r3.u32, ctx.r28.u8);
	// addi r19,r10,1024
	ctx.r19.s64 = ctx.r10.s64 + 1024;
	// srawi r30,r30,10
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 10;
	// addi r16,r10,1024
	ctx.r16.s64 = ctx.r10.s64 + 1024;
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// lbzx r30,r30,r25
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// stb r30,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r30.u8);
	// lhz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r30,2(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// lhz r25,2(r18)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r18.u32 + 2);
	// lhz r23,2(r17)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r17.u32 + 2);
	// lhz r21,2(r9)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r20,2(r8)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// lhz r28,2(r22)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r22.u32 + 2);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r24,r29
	ctx.r24.s64 = ctx.r29.s16;
	// lhz r18,2(r5)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r29,r30
	ctx.r29.s64 = ctx.r30.s16;
	// lhz r14,2(r4)
	ctx.r14.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r30,r28,r24
	ctx.r30.u64 = ctx.r28.u64 + ctx.r24.u64;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r25.u32);
	// add r22,r29,r28
	ctx.r22.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stw r22,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r22.u32);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// subf r25,r25,r30
	ctx.r25.s64 = ctx.r30.s64 - ctx.r25.s64;
	// extsh r30,r21
	ctx.r30.s64 = ctx.r21.s16;
	// lwz r21,-192(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// rlwinm r22,r25,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r25,r22
	ctx.r25.u64 = ctx.r25.u64 + ctx.r22.u64;
	// subf r22,r30,r21
	ctx.r22.s64 = ctx.r21.s64 - ctx.r30.s64;
	// add r25,r25,r23
	ctx.r25.u64 = ctx.r25.u64 + ctx.r23.u64;
	// add r21,r30,r29
	ctx.r21.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// subf r23,r24,r22
	ctx.r23.s64 = ctx.r22.s64 - ctx.r24.s64;
	// addi r25,r25,512
	ctx.r25.s64 = ctx.r25.s64 + 512;
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// extsh r25,r20
	ctx.r25.s64 = ctx.r20.s16;
	// rlwinm r22,r23,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r20,-184(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// subf r21,r25,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r25.s64;
	// add r23,r23,r22
	ctx.r23.u64 = ctx.r23.u64 + ctx.r22.u64;
	// subf r22,r28,r21
	ctx.r22.s64 = ctx.r21.s64 - ctx.r28.s64;
	// add r23,r23,r25
	ctx.r23.u64 = ctx.r23.u64 + ctx.r25.u64;
	// rlwinm r21,r22,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r23,r20
	ctx.r20.u64 = ctx.r23.u64 + ctx.r20.u64;
	// extsh r23,r18
	ctx.r23.s64 = ctx.r18.s16;
	// lwz r18,-192(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// add r22,r22,r21
	ctx.r22.u64 = ctx.r22.u64 + ctx.r21.u64;
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r22,r22,r23
	ctx.r22.u64 = ctx.r22.u64 + ctx.r23.u64;
	// rlwinm r21,r30,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r20,512
	ctx.r25.s64 = ctx.r20.s64 + 512;
	// srawi r20,r18,10
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3FF) != 0);
	ctx.r20.s64 = ctx.r18.s32 >> 10;
	// add r30,r22,r24
	ctx.r30.u64 = ctx.r22.u64 + ctx.r24.u64;
	// subf r24,r23,r21
	ctx.r24.s64 = ctx.r21.s64 - ctx.r23.s64;
	// srawi r25,r25,10
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3FF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 10;
	// addi r23,r30,512
	ctx.r23.s64 = ctx.r30.s64 + 512;
	// subf r30,r29,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r29.s64;
	// lbzx r29,r20,r19
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r19.u32);
	// stb r29,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r29.u8);
	// srawi r24,r23,10
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3FF) != 0);
	ctx.r24.s64 = ctx.r23.s32 >> 10;
	// lbzx r23,r25,r16
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r16.u32);
	// rlwinm r25,r30,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r23,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r23.u8);
	// extsh r29,r14
	ctx.r29.s64 = ctx.r14.s16;
	// std r9,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r9.u64);
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// lbzx r25,r24,r15
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r15.u32);
	// stb r25,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r25.u8);
	// addi r24,r10,1024
	ctx.r24.s64 = ctx.r10.s64 + 1024;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// std r11,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r11.u64);
	// addi r29,r7,2
	ctx.r29.s64 = ctx.r7.s64 + 2;
	// std r4,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r4.u64);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,512
	ctx.r30.s64 = ctx.r30.s64 + 512;
	// addi r22,r10,1024
	ctx.r22.s64 = ctx.r10.s64 + 1024;
	// srawi r30,r30,10
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 10;
	// subfic r29,r7,2
	ctx.xer.ca = ctx.r7.u32 <= 2;
	ctx.r29.s64 = 2 - ctx.r7.s64;
	// addi r21,r10,1024
	ctx.r21.s64 = ctx.r10.s64 + 1024;
	// rlwinm r25,r29,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r20,r10,1024
	ctx.r20.s64 = ctx.r10.s64 + 1024;
	// lbzx r30,r30,r24
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// addi r19,r10,1024
	ctx.r19.s64 = ctx.r10.s64 + 1024;
	// stb r30,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r30.u8);
	// addi r18,r7,3
	ctx.r18.s64 = ctx.r7.s64 + 3;
	// lhzx r28,r28,r11
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// lhzx r25,r25,r11
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// lhz r29,4(r17)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r17.u32 + 4);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// stw r29,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r29.u32);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// extsh r29,r30
	ctx.r29.s64 = ctx.r30.s16;
	// lhz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r23,-184(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// rotlwi r14,r25,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// stw r25,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r25.u32);
	// lhz r16,4(r8)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stw r30,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r30.u32);
	// rotlwi r15,r30,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r24,-192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lhz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// std r5,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r5.u64);
	// lhz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lhz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r5,-184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r29.s64;
	// subf r25,r25,r5
	ctx.r25.s64 = ctx.r5.s64 - ctx.r25.s64;
	// stw r24,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r24.u32);
	// add r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// subf r24,r15,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r15.s64;
	// add r25,r25,r23
	ctx.r25.u64 = ctx.r25.u64 + ctx.r23.u64;
	// rlwinm r23,r24,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// addi r23,r25,512
	ctx.r23.s64 = ctx.r25.s64 + 512;
	// extsh r25,r16
	ctx.r25.s64 = ctx.r16.s16;
	// srawi r23,r23,10
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3FF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 10;
	// add r24,r24,r25
	ctx.r24.u64 = ctx.r24.u64 + ctx.r25.u64;
	// rlwinm r16,r5,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r24,r14
	ctx.r24.u64 = ctx.r24.u64 + ctx.r14.u64;
	// subf r16,r25,r16
	ctx.r16.s64 = ctx.r16.s64 - ctx.r25.s64;
	// lbzx r23,r23,r22
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r22.u32);
	// addi r22,r24,512
	ctx.r22.s64 = ctx.r24.s64 + 512;
	// stb r23,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r23.u8);
	// add r23,r25,r30
	ctx.r23.u64 = ctx.r25.u64 + ctx.r30.u64;
	// subf r24,r28,r16
	ctx.r24.s64 = ctx.r16.s64 - ctx.r28.s64;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r24,r25
	ctx.r25.u64 = ctx.r24.u64 + ctx.r25.u64;
	// ld r5,-192(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// srawi r24,r22,10
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3FF) != 0);
	ctx.r24.s64 = ctx.r22.s32 >> 10;
	// lwz r22,-184(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// subf r23,r30,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r30.s64;
	// ld r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// subf r30,r29,r23
	ctx.r30.s64 = ctx.r23.s64 - ctx.r29.s64;
	// add r29,r25,r22
	ctx.r29.u64 = ctx.r25.u64 + ctx.r22.u64;
	// lbzx r24,r24,r21
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r21.u32);
	// rlwinm r25,r30,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,512
	ctx.r29.s64 = ctx.r29.s64 + 512;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// srawi r25,r29,10
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FF) != 0);
	ctx.r25.s64 = ctx.r29.s32 >> 10;
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// ld r4,-160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stb r24,2(r26)
	PPC_STORE_U8(ctx.r26.u32 + 2, ctx.r24.u8);
	// addi r23,r10,1024
	ctx.r23.s64 = ctx.r10.s64 + 1024;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r22,r10,1024
	ctx.r22.s64 = ctx.r10.s64 + 1024;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbzx r29,r25,r20
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r20.u32);
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// stb r29,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r29.u8);
	// addi r30,r30,512
	ctx.r30.s64 = ctx.r30.s64 + 512;
	// addi r21,r10,1024
	ctx.r21.s64 = ctx.r10.s64 + 1024;
	// srawi r30,r30,10
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 10;
	// subfic r7,r7,3
	ctx.xer.ca = ctx.r7.u32 <= 3;
	ctx.r7.s64 = 3 - ctx.r7.s64;
	// rlwinm r24,r18,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r30,r19
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r19.u32);
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// lhz r29,6(r27)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// lhz r27,6(r5)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// lhzx r5,r24,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r11.u32);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r28,6(r17)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r17.u32 + 6);
	// lhz r24,6(r9)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// lhz r8,6(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// lhz r20,6(r4)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r24
	ctx.r11.s64 = ctx.r24.s16;
	// subf r5,r30,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r30.s64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r5,r5,512
	ctx.r5.s64 = ctx.r5.s64 + 512;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r24,r5,10
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FF) != 0);
	ctx.r24.s64 = ctx.r5.s32 >> 10;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r8,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r8.s64;
	// extsh r5,r27
	ctx.r5.s64 = ctx.r27.s16;
	// subf r29,r7,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r7.s64;
	// lbzx r4,r24,r23
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r23.u32);
	// stb r4,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r4,r9,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r9.s64;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r5,r29,r30
	ctx.r5.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// extsh r10,r20
	ctx.r10.s64 = ctx.r20.s16;
	// addi r5,r5,512
	ctx.r5.s64 = ctx.r5.s64 + 512;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r4,r5,10
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 10;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r10,512
	ctx.r3.s64 = ctx.r10.s64 + 512;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lbzx r10,r4,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// srawi r9,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 10;
	// srawi r8,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 10;
	// stb r10,3(r26)
	PPC_STORE_U8(ctx.r26.u32 + 3, ctx.r10.u8);
	// lbzx r7,r9,r22
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r22.u32);
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// lbzx r5,r8,r21
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r21.u32);
	// stb r5,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r5.u8);
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241A9B0) {
	__imp__sub_8241A9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241B028) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8241B030;
	__savegprlr_25(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_8241B048:
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r4,-3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r31.u32);
	// stb r3,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r3.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r4,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r4.u8);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r28
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r27
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r26
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r26.u32);
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// stb r4,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,9(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x8241b048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B048;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241B028) {
	__imp__sub_8241B028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241B2B8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x8241B2C0;
	__savegprlr_14(ctx, base);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r30,r6,r9
	ctx.r30.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r5,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r5,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r6,r10
	ctx.r24.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r26,r5,r8
	ctx.r26.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r24,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r24.u32);
	// add r17,r6,r7
	ctx.r17.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r6,r31
	ctx.r8.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r7,r5,r28
	ctx.r7.u64 = ctx.r5.u64 + ctx.r28.u64;
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// subf r10,r5,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r5.s64;
	// stw r9,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// rlwinm r31,r29,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// subf r29,r6,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// rlwinm r21,r30,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r29.u32);
	// rlwinm r27,r6,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// subf r7,r6,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r6.s64;
	// stw r21,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r21.u32);
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r27,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r27.u32);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r7,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r16,r6,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r6,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r4,r3
	ctx.r22.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r10,r10,-18496
	ctx.r10.s64 = ctx.r10.s64 + -18496;
	// b 0x8241b3a0
	goto loc_8241B3A0;
loc_8241B380:
	// lwz r8,-208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r31,-204(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r29,-200(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r27,-196(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r24,-192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r21,-188(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r7,-184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r9,-180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
loc_8241B3A0:
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// subf r6,r23,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r23.s64;
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// lbzx r3,r23,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// addi r14,r10,1024
	ctx.r14.s64 = ctx.r10.s64 + 1024;
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lbzx r26,r7,r30
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// add r25,r3,r9
	ctx.r25.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lbzx r7,r17,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r11.u32);
	// rlwinm r20,r4,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r19,0(r6)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// rlwinm r6,r25,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// subf r25,r3,r20
	ctx.r25.s64 = ctx.r20.s64 - ctx.r3.s64;
	// lbzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// subf r18,r7,r6
	ctx.r18.s64 = ctx.r6.s64 - ctx.r7.s64;
	// lbzx r29,r27,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// subf r25,r26,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r26.s64;
	// lbzx r27,r24,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lbzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r20,r25,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r21,r21,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// subf r24,r28,r18
	ctx.r24.s64 = ctx.r18.s64 - ctx.r28.s64;
	// stw r6,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// add r25,r25,r20
	ctx.r25.u64 = ctx.r25.u64 + ctx.r20.u64;
	// lwz r18,-176(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lbzx r6,r16,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// rlwinm r20,r18,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r25,r19
	ctx.r25.u64 = ctx.r25.u64 + ctx.r19.u64;
	// subf r19,r6,r20
	ctx.r19.s64 = ctx.r20.s64 - ctx.r6.s64;
	// add r25,r25,r7
	ctx.r25.u64 = ctx.r25.u64 + ctx.r7.u64;
	// add r20,r6,r7
	ctx.r20.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r18,r25,16
	ctx.r18.s64 = ctx.r25.s64 + 16;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r20,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r20.u32);
	// srawi r18,r18,5
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1F) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 5;
	// add r20,r24,r25
	ctx.r20.u64 = ctx.r24.u64 + ctx.r25.u64;
	// subf r24,r9,r19
	ctx.r24.s64 = ctx.r19.s64 - ctx.r9.s64;
	// stw r18,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r18.u32);
	// lwz r19,-176(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// add r20,r20,r6
	ctx.r20.u64 = ctx.r20.u64 + ctx.r6.u64;
	// add r25,r8,r6
	ctx.r25.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r18,r24,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 + ctx.r26.u64;
	// add r24,r24,r18
	ctx.r24.u64 = ctx.r24.u64 + ctx.r18.u64;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// add r24,r24,r28
	ctx.r24.u64 = ctx.r24.u64 + ctx.r28.u64;
	// lbzx r19,r19,r15
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r15.u32);
	// lwz r15,-172(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r19,r22,r11
	PPC_STORE_U8(ctx.r22.u32 + ctx.r11.u32, ctx.r19.u8);
	// subf r20,r8,r15
	ctx.r20.s64 = ctx.r15.s64 - ctx.r8.s64;
	// subf r19,r4,r25
	ctx.r19.s64 = ctx.r25.s64 - ctx.r4.s64;
	// subf r25,r3,r20
	ctx.r25.s64 = ctx.r20.s64 - ctx.r3.s64;
	// addi r20,r26,16
	ctx.r20.s64 = ctx.r26.s64 + 16;
	// subf r26,r7,r19
	ctx.r26.s64 = ctx.r19.s64 - ctx.r7.s64;
	// rlwinm r19,r25,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r26,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r25,r19
	ctx.r25.u64 = ctx.r25.u64 + ctx.r19.u64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// srawi r26,r20,5
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r20.s32 >> 5;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 + ctx.r4.u64;
	// add r3,r28,r3
	ctx.r3.u64 = ctx.r28.u64 + ctx.r3.u64;
	// addi r28,r24,16
	ctx.r28.s64 = ctx.r24.s64 + 16;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// srawi r28,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 5;
	// addi r20,r10,1024
	ctx.r20.s64 = ctx.r10.s64 + 1024;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// addi r24,r3,16
	ctx.r24.s64 = ctx.r3.s64 + 16;
	// lbzx r26,r26,r14
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r14.u32);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r25,r25,5
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1F) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 5;
	// addi r19,r10,1024
	ctx.r19.s64 = ctx.r10.s64 + 1024;
	// stbx r26,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r26.u8);
	// add r26,r4,r8
	ctx.r26.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lbzx r28,r28,r20
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r20.u32);
	// stbx r28,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r28.u8);
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r26,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r24.s32 >> 5;
	// lbzx r28,r25,r19
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r19.u32);
	// lwz r24,-168(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// add r20,r31,r4
	ctx.r20.u64 = ctx.r31.u64 + ctx.r4.u64;
	// stbx r28,r9,r24
	PPC_STORE_U8(ctx.r9.u32 + ctx.r24.u32, ctx.r28.u8);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// add r19,r29,r31
	ctx.r19.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r18,-164(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// lwz r15,-160(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,-156(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// subf r3,r6,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r6.s64;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r19,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r26,r26,r25
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r25.u32);
	// subf r25,r29,r20
	ctx.r25.s64 = ctx.r20.s64 - ctx.r29.s64;
	// stbx r26,r9,r31
	PPC_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r26.u8);
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r27,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r4,r4,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r4.s64;
	// subf r3,r8,r25
	ctx.r3.s64 = ctx.r25.s64 - ctx.r8.s64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// addi r31,r7,16
	ctx.r31.s64 = ctx.r7.s64 + 16;
	// add r7,r3,r27
	ctx.r7.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r6,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r31.s32 >> 5;
	// addi r4,r10,1024
	ctx.r4.s64 = ctx.r10.s64 + 1024;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// srawi r8,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 5;
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// lbzx r6,r6,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stbx r6,r9,r18
	PPC_STORE_U8(ctx.r9.u32 + ctx.r18.u32, ctx.r6.u8);
	// addi r31,r10,1024
	ctx.r31.s64 = ctx.r10.s64 + 1024;
	// lbzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r9,r15
	PPC_STORE_U8(ctx.r9.u32 + ctx.r15.u32, ctx.r4.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// stbx r3,r9,r14
	PPC_STORE_U8(ctx.r9.u32 + ctx.r14.u32, ctx.r3.u8);
	// bdnz 0x8241b380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B380;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241B2B8) {
	__imp__sub_8241B2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241B5BC) {
	__imp__sub_8241B5BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241B5C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x8241B5C8;
	__savegprlr_14(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8241B5E0:
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r31,-2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subf r10,r5,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r5.s64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r30,-1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r3,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r3.s64;
	// subf r10,r28,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r28.s64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r3,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r3.s64;
	// subf r10,r28,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r28.s64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r10,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r10.u16);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// sth r10,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r10.u16);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// sth r10,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r10.u16);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// sth r10,10(r4)
	PPC_STORE_U16(ctx.r4.u32 + 10, ctx.r10.u16);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r28,5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,9(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subf r10,r28,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r28.s64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// sth r10,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r10.u16);
	// lbz r3,9(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r31,10(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r5,7(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// sth r5,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r5.u16);
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// bdnz 0x8241b5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B5E0;
	// li r10,8
	ctx.r10.s64 = 8;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r7,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// rlwinm r23,r3,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r23,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r11,r7,22
	ctx.r11.s64 = ctx.r7.s64 * 22;
	// stw r3,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r3.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// add r25,r7,r31
	ctx.r25.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r22,r6,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r21,r7,r27
	ctx.r21.u64 = ctx.r7.u64 + ctx.r27.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r25,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r8.u32);
	// add r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 + ctx.r28.u64;
	// stw r31,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r31.u32);
	// mulli r27,r7,14
	ctx.r27.s64 = ctx.r7.s64 * 14;
	// stw r24,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r24.u32);
	// stw r27,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r27.u32);
	// rlwinm r26,r7,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r6,r22
	ctx.r3.s64 = ctx.r22.s64 - ctx.r6.s64;
	// stw r26,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r26.u32);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r5,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r5.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r3.u32);
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r7,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r19,r4,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r29,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r10,r10,-18496
	ctx.r10.s64 = ctx.r10.s64 + -18496;
	// b 0x8241b8b4
	goto loc_8241B8B4;
loc_8241B8A0:
	// lwz r31,-224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r27,-220(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r26,-216(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r24,-212(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r23,-208(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
loc_8241B8B4:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r6,r25,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r25.s64;
	// lhzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// addi r22,r10,1024
	ctx.r22.s64 = ctx.r10.s64 + 1024;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhzx r7,r25,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lhzx r18,r31,r11
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// add r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lhz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// lhzx r8,r21,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r11.u32);
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r16,r27,r11
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// lhzx r17,r20,r11
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// subf r31,r4,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r4.s64;
	// lhzx r15,r26,r11
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhzx r24,r24,r11
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r11.u32);
	// subf r8,r28,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r28.s64;
	// lhzx r26,r19,r11
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// add r27,r4,r3
	ctx.r27.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lhzx r23,r23,r11
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// std r21,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r21.u64);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,-204(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// std r25,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r25.u64);
	// subf r31,r6,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r6.s64;
	// lwz r25,-200(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r27,r6,r4
	ctx.r27.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r8,r5,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r5.s64;
	// addi r31,r7,512
	ctx.r31.s64 = ctx.r7.s64 + 512;
	// extsh r7,r17
	ctx.r7.s64 = ctx.r17.s16;
	// srawi r17,r31,10
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FF) != 0);
	ctx.r17.s64 = ctx.r31.s32 >> 10;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r7,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r7.s64;
	// add r21,r7,r6
	ctx.r21.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r22,r17,r22
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r22.u32);
	// stw r27,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r27.u32);
	// add r27,r8,r31
	ctx.r27.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stb r22,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r22.u8);
	// extsh r8,r26
	ctx.r8.s64 = ctx.r26.s16;
	// lwz r17,-196(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// subf r31,r3,r17
	ctx.r31.s64 = ctx.r17.s64 - ctx.r3.s64;
	// rlwinm r17,r21,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r27,r7
	ctx.r26.u64 = ctx.r27.u64 + ctx.r7.u64;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r22,r8,r17
	ctx.r22.s64 = ctx.r17.s64 - ctx.r8.s64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// add r28,r31,r27
	ctx.r28.u64 = ctx.r31.u64 + ctx.r27.u64;
	// subf r31,r4,r22
	ctx.r31.s64 = ctx.r22.s64 - ctx.r4.s64;
	// add r27,r28,r8
	ctx.r27.u64 = ctx.r28.u64 + ctx.r8.u64;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,512
	ctx.r26.s64 = ctx.r26.s64 + 512;
	// add r27,r27,r5
	ctx.r27.u64 = ctx.r27.u64 + ctx.r5.u64;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// srawi r26,r26,10
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3FF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 10;
	// addi r22,r10,1024
	ctx.r22.s64 = ctx.r10.s64 + 1024;
	// extsh r5,r18
	ctx.r5.s64 = ctx.r18.s16;
	// addi r28,r27,512
	ctx.r28.s64 = ctx.r27.s64 + 512;
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// srawi r27,r28,10
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FF) != 0);
	ctx.r27.s64 = ctx.r28.s32 >> 10;
	// lbzx r26,r26,r22
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r22.u32);
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// extsh r28,r24
	ctx.r28.s64 = ctx.r24.s16;
	// addi r17,r31,512
	ctx.r17.s64 = ctx.r31.s64 + 512;
	// extsh r24,r23
	ctx.r24.s64 = ctx.r23.s16;
	// addi r18,r10,1024
	ctx.r18.s64 = ctx.r10.s64 + 1024;
	// extsh r3,r16
	ctx.r3.s64 = ctx.r16.s16;
	// stbx r26,r14,r30
	PPC_STORE_U8(ctx.r14.u32 + ctx.r30.u32, ctx.r26.u8);
	// add r22,r8,r7
	ctx.r22.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r31,r15
	ctx.r31.s64 = ctx.r15.s16;
	// srawi r23,r17,10
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3FF) != 0);
	ctx.r23.s64 = ctx.r17.s32 >> 10;
	// lbzx r27,r27,r18
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r18.u32);
	// addi r26,r10,1024
	ctx.r26.s64 = ctx.r10.s64 + 1024;
	// add r18,r5,r8
	ctx.r18.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r16,-184(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// add r17,r3,r5
	ctx.r17.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r15,-180(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// add r14,r31,r3
	ctx.r14.u64 = ctx.r31.u64 + ctx.r3.u64;
	// ld r21,-160(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r27,r25,r9
	PPC_STORE_U8(ctx.r25.u32 + ctx.r9.u32, ctx.r27.u8);
	// rlwinm r27,r22,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r26,r23,r26
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r26.u32);
	// rlwinm r22,r18,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r23,-192(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// subf r27,r5,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r5.s64;
	// subf r22,r3,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r3.s64;
	// lwz r18,-188(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// subf r27,r6,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r6.s64;
	// lwz r25,-176(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r26,r23,r9
	PPC_STORE_U8(ctx.r23.u32 + ctx.r9.u32, ctx.r26.u8);
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r27,r26
	ctx.r23.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r27,r10,1024
	ctx.r27.s64 = ctx.r10.s64 + 1024;
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// stw r27,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r27.u32);
	// rlwinm r23,r14,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r3,r17,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r17,-196(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// subf r26,r7,r22
	ctx.r26.s64 = ctx.r22.s64 - ctx.r7.s64;
	// subf r23,r28,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r28.s64;
	// rlwinm r22,r26,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r5,r5,r23
	ctx.r5.s64 = ctx.r23.s64 - ctx.r5.s64;
	// addi r4,r4,512
	ctx.r4.s64 = ctx.r4.s64 + 512;
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// subf r27,r8,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r4,10
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 10;
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// rlwinm r23,r27,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r5,r31,r6
	ctx.r5.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// addi r6,r5,512
	ctx.r6.s64 = ctx.r5.s64 + 512;
	// addi r31,r10,1024
	ctx.r31.s64 = ctx.r10.s64 + 1024;
	// srawi r5,r6,10
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 10;
	// add r6,r3,r24
	ctx.r6.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r3,r10,1024
	ctx.r3.s64 = ctx.r10.s64 + 1024;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r6,r8,512
	ctx.r6.s64 = ctx.r8.s64 + 512;
	// subf r8,r29,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lbzx r26,r4,r17
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r17.u32);
	// add r4,r27,r28
	ctx.r4.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stbx r26,r18,r9
	PPC_STORE_U8(ctx.r18.u32 + ctx.r9.u32, ctx.r26.u8);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lbzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// stbx r5,r16,r9
	PPC_STORE_U8(ctx.r16.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// srawi r4,r7,10
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 10;
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// srawi r6,r6,10
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 10;
	// lbzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// stbx r4,r15,r9
	PPC_STORE_U8(ctx.r15.u32 + ctx.r9.u32, ctx.r4.u8);
	// lbzx r3,r6,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// stbx r3,r25,r9
	PPC_STORE_U8(ctx.r25.u32 + ctx.r9.u32, ctx.r3.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ld r25,-168(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// bdnz 0x8241b8a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B8A0;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241B5C0) {
	__imp__sub_8241B5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241BB14) {
	__imp__sub_8241BB14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241BB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8241BB20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x8241b5c0
	ctx.lr = 0x8241BB40;
	sub_8241B5C0(ctx, base);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8241b5c0
	ctx.lr = 0x8241BB60;
	sub_8241B5C0(ctx, base);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241b5c0
	ctx.lr = 0x8241BB8C;
	sub_8241B5C0(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8241b5c0
	ctx.lr = 0x8241BBA8;
	sub_8241B5C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241BB18) {
	__imp__sub_8241BB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241BBB0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8241BBB8;
	__savegprlr_26(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_8241BBD0:
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r8,-5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r30,-6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r3,-2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// subf r29,r4,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r4,-1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf r8,r8,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r8.s64;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r8,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// stb r8,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r8.u8);
	// lbz r30,-4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r29,-1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r31,-5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// lbzx r8,r8,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// lbz r31,-3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r26.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lbz r31,-2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,-3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x8241bbd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241BBD0;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241BBB0) {
	__imp__sub_8241BBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241BD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241BD54) {
	__imp__sub_8241BD54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241BD58) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x8241BD60;
	__savegprlr_14(ctx, base);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,4
	ctx.r11.s64 = 4;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r6,r9
	ctx.r20.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r18,r6,r8
	ctx.r18.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r30,r5,r10
	ctx.r30.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r9,r6,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r6.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r23,r7,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r9.u32);
	// lis r8,-31990
	ctx.r8.s64 = -2096496640;
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// rlwinm r19,r6,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r23.u32);
	// rlwinm r26,r6,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r25,r5,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r24,r3,r4
	ctx.r24.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r6,r8,-18496
	ctx.r6.s64 = ctx.r8.s64 + -18496;
	// b 0x8241bdd0
	goto loc_8241BDD0;
loc_8241BDC4:
	// lwz r23,-176(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r9,-172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
loc_8241BDD0:
	// lbzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lbzx r3,r24,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// addi r17,r6,1024
	ctx.r17.s64 = ctx.r6.s64 + 1024;
	// lbzx r28,r9,r31
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// subf r21,r26,r10
	ctx.r21.s64 = ctx.r10.s64 - ctx.r26.s64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r16,r6,1024
	ctx.r16.s64 = ctx.r6.s64 + 1024;
	// lbzx r7,r10,r26
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r10,r20
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r20.u32);
	// addi r15,r6,1024
	ctx.r15.s64 = ctx.r6.s64 + 1024;
	// subf r27,r7,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r7.s64;
	// lbzx r4,r10,r19
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// add r14,r7,r8
	ctx.r14.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbzx r29,r10,r18
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r18.u32);
	// subf r27,r28,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r28.s64;
	// lbzx r23,r10,r23
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// rlwinm r14,r14,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r21,0(r21)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r9,r14
	ctx.r14.s64 = ctx.r14.s64 - ctx.r9.s64;
	// add r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 + ctx.r10.u64;
	// subf r10,r3,r14
	ctx.r10.s64 = ctx.r14.s64 - ctx.r3.s64;
	// add r21,r27,r21
	ctx.r21.u64 = ctx.r27.u64 + ctx.r21.u64;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r21,r9
	ctx.r21.u64 = ctx.r21.u64 + ctx.r9.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r27,r21,16
	ctx.r27.s64 = ctx.r21.s64 + 16;
	// add r21,r9,r7
	ctx.r21.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r27,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 5;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// subf r21,r4,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r4.s64;
	// lbzx r28,r27,r17
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r17.u32);
	// addi r17,r10,16
	ctx.r17.s64 = ctx.r10.s64 + 16;
	// subf r10,r8,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r8.s64;
	// add r27,r28,r22
	ctx.r27.u64 = ctx.r28.u64 + ctx.r22.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// srawi r28,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 1;
	// srawi r27,r17,5
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r17.s32 >> 5;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbzx r9,r27,r16
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r16.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r3,r29,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r29.s64;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// stbx r7,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r7,r11,r25
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// addi r3,r6,1024
	ctx.r3.s64 = ctx.r6.s64 + 1024;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r9,r4,r15
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r15.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// srawi r4,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 5;
	// stbx r7,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r7.u8);
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// lbzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8241bdc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241BDC4;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241BD58) {
	__imp__sub_8241BD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241BF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241BF24) {
	__imp__sub_8241BF24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241BF28) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634424
	ctx.lr = 0x8241BF30;
	__savegprlr_15(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241BF48:
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sth r5,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r5.u16);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r30.s64;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sth r5,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r5.u16);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sth r5,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r5.u16);
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sth r3,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r3.u16);
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// bdnz 0x8241bf48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241BF48;
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r11,r7,14
	ctx.r11.s64 = ctx.r7.s64 * 14;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r4,r7,r3
	ctx.r4.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r26,r6,r8
	ctx.r26.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lis r8,-31990
	ctx.r8.s64 = -2096496640;
	// rlwinm r19,r9,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r4,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r7,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r3,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r6,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r5,r8,-18496
	ctx.r5.s64 = ctx.r8.s64 + -18496;
loc_8241C09C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r4,r28,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lhzx r7,r29,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// addi r23,r5,1024
	ctx.r23.s64 = ctx.r5.s64 + 1024;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhzx r8,r28,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhzx r25,r22,r11
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r22.u32 + ctx.r11.u32);
	// add r30,r7,r3
	ctx.r30.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lhz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhzx r18,r21,r11
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r11.u32);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsh r30,r4
	ctx.r30.s64 = ctx.r4.s16;
	// lhzx r16,r20,r11
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lhzx r15,r19,r11
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// add r17,r8,r7
	ctx.r17.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r4,r31,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r31.s64;
	// extsh r9,r25
	ctx.r9.s64 = ctx.r25.s16;
	// rlwinm r25,r4,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + ctx.r25.u64;
	// subf r25,r9,r17
	ctx.r25.s64 = ctx.r17.s64 - ctx.r9.s64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// subf r30,r3,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r3.s64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r25,r30,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,512
	ctx.r4.s64 = ctx.r4.s64 + 512;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// srawi r25,r4,10
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FF) != 0);
	ctx.r25.s64 = ctx.r4.s32 >> 10;
	// extsh r4,r18
	ctx.r4.s64 = ctx.r18.s16;
	// add r18,r9,r8
	ctx.r18.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r25,r25,r23
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r23.u32);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// subf r23,r4,r18
	ctx.r23.s64 = ctx.r18.s64 - ctx.r4.s64;
	// add r30,r25,r24
	ctx.r30.u64 = ctx.r25.u64 + ctx.r24.u64;
	// addi r31,r31,512
	ctx.r31.s64 = ctx.r31.s64 + 512;
	// addi r25,r30,1
	ctx.r25.s64 = ctx.r30.s64 + 1;
	// subf r30,r7,r23
	ctx.r30.s64 = ctx.r23.s64 - ctx.r7.s64;
	// srawi r25,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 1;
	// srawi r18,r31,10
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FF) != 0);
	ctx.r18.s64 = ctx.r31.s32 >> 10;
	// addi r17,r5,1024
	ctx.r17.s64 = ctx.r5.s64 + 1024;
	// stb r25,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r25.u8);
	// rlwinm r23,r30,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r24,r10,r6
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// extsh r31,r16
	ctx.r31.s64 = ctx.r16.s16;
	// add r23,r30,r23
	ctx.r23.u64 = ctx.r30.u64 + ctx.r23.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lbzx r25,r18,r17
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r17.u32);
	// add r30,r25,r24
	ctx.r30.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r25,r23,r31
	ctx.r25.u64 = ctx.r23.u64 + ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// stbx r30,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r30.u8);
	// addi r30,r5,1024
	ctx.r30.s64 = ctx.r5.s64 + 1024;
	// srawi r25,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r25.s64 = ctx.r3.s32 >> 10;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r3,r15
	ctx.r3.s64 = ctx.r15.s16;
	// subf r9,r31,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r31.s64;
	// lbzx r31,r27,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbzx r4,r25,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r30.u32);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stbx r4,r27,r10
	PPC_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r24,r5,1024
	ctx.r24.s64 = ctx.r5.s64 + 1024;
	// lbzx r4,r26,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r3,r8,512
	ctx.r3.s64 = ctx.r8.s64 + 512;
	// srawi r8,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 10;
	// lbzx r8,r8,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r24.u32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r26,r10
	PPC_STORE_U8(ctx.r26.u32 + ctx.r10.u32, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8241c09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241C09C;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241BF28) {
	__imp__sub_8241BF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241C210) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x8241C218;
	__savegprlr_23(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_8241C230:
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r29,-3(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r3,-2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// subf r31,r4,r7
	ctx.r31.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r4,-1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r8,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// stb r8,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r8.u8);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r29,-1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// lbzx r8,r8,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// lbz r30,1(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r26.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r3,r3,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,2(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// lbz r3,3(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// addi r24,r9,1024
	ctx.r24.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r23,r9,1024
	ctx.r23.s64 = ctx.r9.s64 + 1024;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r8,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r28,5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// subf r8,r27,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r27.s64;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r8,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r28,3(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,7(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r8,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbz r30,7(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// lbzx r8,r8,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r24.u32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r30,5(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,9(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r23
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x8241c230
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241C230;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241C210) {
	__imp__sub_8241C210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241C524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241C524) {
	__imp__sub_8241C524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241C528) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x8241C530;
	__savegprlr_14(ctx, base);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r6,r10
	ctx.r30.u64 = ctx.r6.u64 + ctx.r10.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r6,r9
	ctx.r27.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r24,r6,r10
	ctx.r24.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r24,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r24.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r29.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// subf r28,r6,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r28.u32);
	// subf r29,r6,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r6.s64;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// subf r8,r3,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r3.s64;
	// rlwinm r25,r5,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r29.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r8,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r8.u32);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r7.u32);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r4,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r4.u32);
	// add r26,r5,r9
	ctx.r26.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r30,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r20,r6,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r5,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r5,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r5,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r5.s64;
	// addi r9,r10,-18496
	ctx.r9.s64 = ctx.r10.s64 + -18496;
	// b 0x8241c60c
	goto loc_8241C60C;
loc_8241C5F0:
	// lwz r7,-224(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r4,-220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r30,-216(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r28,-212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r24,-208(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r8,-204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r29,-200(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
loc_8241C60C:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r23,r29,r31
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// lbzx r27,r8,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r20,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r20.s64;
	// lwz r17,-196(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// std r20,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r20.u64);
	// addi r16,r9,1024
	ctx.r16.s64 = ctx.r9.s64 + 1024;
	// std r6,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// addi r15,r9,1024
	ctx.r15.s64 = ctx.r9.s64 + 1024;
	// lbzx r29,r10,r6
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r14,r9,1024
	ctx.r14.s64 = ctx.r9.s64 + 1024;
	// lbzx r3,r10,r20
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r20.u32);
	// lbz r22,0(r5)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r21,r29,r27
	ctx.r21.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lbzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// add r7,r3,r29
	ctx.r7.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r24,r10,r24
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r24.u32);
	// stw r7,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lbzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lwz r4,-192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// lbzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// subf r30,r3,r21
	ctx.r30.s64 = ctx.r21.s64 - ctx.r3.s64;
	// stw r22,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r22.u32);
	// lwz r22,-192(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// subf r21,r5,r22
	ctx.r21.s64 = ctx.r22.s64 - ctx.r5.s64;
	// lwz r22,-188(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// subf r21,r27,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r27.s64;
	// stw r22,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r22.u32);
	// subf r22,r23,r30
	ctx.r22.s64 = ctx.r30.s64 - ctx.r23.s64;
	// lbzx r30,r10,r28
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r28,r6,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r17,r10,r17
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r20,r21,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r3
	ctx.r6.u64 = ctx.r5.u64 + ctx.r3.u64;
	// stw r20,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r20.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r28,r10,r28
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// add r22,r22,r10
	ctx.r22.u64 = ctx.r22.u64 + ctx.r10.u64;
	// rotlwi r10,r20,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// add r10,r21,r10
	ctx.r10.u64 = ctx.r21.u64 + ctx.r10.u64;
	// lwz r21,-192(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// add r22,r22,r21
	ctx.r22.u64 = ctx.r22.u64 + ctx.r21.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r22,r22,r5
	ctx.r22.u64 = ctx.r22.u64 + ctx.r5.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// addi r21,r10,16
	ctx.r21.s64 = ctx.r10.s64 + 16;
	// subf r10,r29,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r29.s64;
	// srawi r22,r22,5
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1F) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 5;
	// rlwinm r20,r10,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r20,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r20.u32);
	// rotlwi r20,r20,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r22,r22,r16
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r16.u32);
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r16,r8,r7
	ctx.r16.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r27,-184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// srawi r22,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r22.s64 = ctx.r21.s32 >> 5;
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// addi r21,r10,16
	ctx.r21.s64 = ctx.r10.s64 + 16;
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// lbzx r23,r27,r31
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r10,r22,r15
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r15.u32);
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// subf r10,r3,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r3.s64;
	// srawi r22,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r23.s32 >> 1;
	// rlwinm r23,r10,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r21,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 5;
	// stbx r22,r27,r31
	PPC_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r22.u8);
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lbzx r23,r19,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r11.u32);
	// subf r22,r4,r16
	ctx.r22.s64 = ctx.r16.s64 - ctx.r4.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbzx r27,r21,r14
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r14.u32);
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// addi r23,r10,16
	ctx.r23.s64 = ctx.r10.s64 + 16;
	// subf r10,r5,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r5.s64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r4,r8
	ctx.r22.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r29,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r27,r22,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r29,r19,r11
	PPC_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r29.u8);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r3,r30,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r30.s64;
	// addi r22,r10,16
	ctx.r22.s64 = ctx.r10.s64 + 16;
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// add r29,r30,r4
	ctx.r29.u64 = ctx.r30.u64 + ctx.r4.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srawi r3,r23,5
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r23.s32 >> 5;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r23,r9,1024
	ctx.r23.s64 = ctx.r9.s64 + 1024;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r5,r28,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r28.s64;
	// addi r21,r10,16
	ctx.r21.s64 = ctx.r10.s64 + 16;
	// subf r10,r8,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbzx r29,r3,r23
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// subf r30,r24,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r24.s64;
	// lbzx r27,r26,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// subf r10,r4,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r4.s64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addi r3,r9,1024
	ctx.r3.s64 = ctx.r9.s64 + 1024;
	// srawi r5,r22,5
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r22.s32 >> 5;
	// stbx r4,r26,r11
	PPC_STORE_U8(ctx.r26.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r30,r7,16
	ctx.r30.s64 = ctx.r7.s64 + 16;
	// lbzx r4,r18,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r7,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,-180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// srawi r5,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r21.s32 >> 5;
	// stbx r7,r18,r11
	PPC_STORE_U8(ctx.r18.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// addi r4,r9,1024
	ctx.r4.s64 = ctx.r9.s64 + 1024;
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r8,r5,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r29.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// srawi r5,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 5;
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lbzx r8,r5,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// ld r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// ld r20,-160(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// srawi r4,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 5;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stbx r3,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// lbzx r8,r25,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbzx r10,r4,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r28.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r25,r11
	PPC_STORE_U8(ctx.r25.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8241c5f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241C5F0;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241C528) {
	__imp__sub_8241C528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241C8D8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x8241C8E0;
	__savegprlr_14(ctx, base);
	// li r9,13
	ctx.r9.s64 = 13;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r24,r7,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241C8F8:
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sth r5,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r5.u16);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r30.s64;
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sth r5,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r5.u16);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r30.s64;
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sth r5,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r5.u16);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r3,r3,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r3.s64;
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sth r9,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r9.u16);
	// lbz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sth r5,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r5.u16);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sth r5,10(r4)
	PPC_STORE_U16(ctx.r4.u32 + 10, ctx.r5.u16);
	// lbz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,9(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sth r5,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r5.u16);
	// lbz r31,9(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r5,7(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sth r3,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r3.u16);
	// add r4,r24,r4
	ctx.r4.u64 = ctx.r24.u64 + ctx.r4.u64;
	// bdnz 0x8241c8f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241C8F8;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r7,22
	ctx.r11.s64 = ctx.r7.s64 * 22;
	// add r28,r7,r8
	ctx.r28.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r27,r7,r31
	ctx.r27.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r23,r6,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r16,r6,r5
	ctx.r16.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r6,r9
	ctx.r20.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// rlwinm r17,r28,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r6,r23
	ctx.r4.s64 = ctx.r23.s64 - ctx.r6.s64;
	// stw r26,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r26.u32);
	// rlwinm r31,r7,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r17,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r17.u32);
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// mulli r25,r7,14
	ctx.r25.s64 = ctx.r7.s64 * 14;
	// stw r31,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r31.u32);
	// stw r29,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r29.u32);
	// stw r25,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r25.u32);
	// rlwinm r19,r7,4,0,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r18,r3,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// stw r19,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r19.u32);
	// add r22,r6,r8
	ctx.r22.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r18,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r18.u32);
	// rlwinm r23,r7,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r6,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r16,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r24,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
	// b 0x8241cbc4
	goto loc_8241CBC4;
loc_8241CBA4:
	// lwz r5,-200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r31,-196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r29,-192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r26,-188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r25,-184(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r19,-180(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r18,-176(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r17,-172(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
loc_8241CBC4:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r16,r23,r11
	ctx.r16.s64 = ctx.r11.s64 - ctx.r23.s64;
	// lhzx r3,r24,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r11.u32);
	// addi r15,r9,1024
	ctx.r15.s64 = ctx.r9.s64 + 1024;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lhzx r7,r23,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r11.u32);
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lhzx r14,r31,r11
	ctx.r14.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// add r7,r30,r4
	ctx.r7.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lhz r31,0(r16)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r16.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhzx r16,r29,r11
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// std r23,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r23.u64);
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// lhzx r26,r26,r11
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// stw r31,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// add r29,r3,r30
	ctx.r29.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r23,-204(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r18,r18,r11
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r18.u32 + ctx.r11.u32);
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r25,r25,r11
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// sth r26,-208(r1)
	PPC_STORE_U16(ctx.r1.u32 + -208, ctx.r26.u16);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lhzx r19,r19,r11
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// subf r31,r5,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lhzx r17,r17,r11
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r17.u32 + ctx.r11.u32);
	// add r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 + ctx.r23.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r31,r4,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r7.u32);
	// extsh r7,r14
	ctx.r7.s64 = ctx.r14.s16;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwz r14,-204(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// srawi r29,r14,10
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3FF) != 0);
	ctx.r29.s64 = ctx.r14.s32 >> 10;
	// sth r18,-204(r1)
	PPC_STORE_U16(ctx.r1.u32 + -204, ctx.r18.u16);
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// lbzx r29,r29,r15
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r15.u32);
	// add r14,r5,r3
	ctx.r14.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r14,r14,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r15,r31,512
	ctx.r15.s64 = ctx.r31.s64 + 512;
	// subf r31,r7,r14
	ctx.r31.s64 = ctx.r14.s64 - ctx.r7.s64;
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// srawi r15,r15,10
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3FF) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 10;
	// addi r14,r9,1024
	ctx.r14.s64 = ctx.r9.s64 + 1024;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// extsh r8,r16
	ctx.r8.s64 = ctx.r16.s16;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// addi r16,r9,1024
	ctx.r16.s64 = ctx.r9.s64 + 1024;
	// lbzx r29,r15,r14
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r14.u32);
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lbzx r26,r10,r6
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lhz r15,-208(r1)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r1.u32 + -208);
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// addi r4,r4,512
	ctx.r4.s64 = ctx.r4.s64 + 512;
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// srawi r29,r4,10
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FF) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stbx r4,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u8);
	// extsh r4,r15
	ctx.r4.s64 = ctx.r15.s16;
	// lbzx r18,r28,r10
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r15,r31,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r25,-208(r1)
	PPC_STORE_U16(ctx.r1.u32 + -208, ctx.r25.u16);
	// lbzx r25,r29,r16
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r16.u32);
	// extsh r29,r19
	ctx.r29.s64 = ctx.r19.s16;
	// lhz r19,-204(r1)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r1.u32 + -204);
	// add r18,r25,r18
	ctx.r18.u64 = ctx.r25.u64 + ctx.r18.u64;
	// lhz r16,-208(r1)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r1.u32 + -208);
	// extsh r26,r19
	ctx.r26.s64 = ctx.r19.s16;
	// extsh r19,r17
	ctx.r19.s64 = ctx.r17.s16;
	// subf r17,r8,r15
	ctx.r17.s64 = ctx.r15.s64 - ctx.r8.s64;
	// extsh r31,r16
	ctx.r31.s64 = ctx.r16.s16;
	// subf r25,r3,r17
	ctx.r25.s64 = ctx.r17.s64 - ctx.r3.s64;
	// addi r17,r18,1
	ctx.r17.s64 = ctx.r18.s64 + 1;
	// rlwinm r18,r25,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r16,r8,r7
	ctx.r16.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r25,r25,r18
	ctx.r25.u64 = ctx.r25.u64 + ctx.r18.u64;
	// rlwinm r18,r16,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 + ctx.r4.u64;
	// srawi r17,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 1;
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// subf r25,r4,r18
	ctx.r25.s64 = ctx.r18.s64 - ctx.r4.s64;
	// stbx r17,r28,r10
	PPC_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r17.u8);
	// addi r18,r30,512
	ctx.r18.s64 = ctx.r30.s64 + 512;
	// subf r30,r5,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r5.s64;
	// add r17,r4,r8
	ctx.r17.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r25,r30,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// subf r25,r31,r17
	ctx.r25.s64 = ctx.r17.s64 - ctx.r31.s64;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// srawi r18,r18,10
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3FF) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 10;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r17,r9,1024
	ctx.r17.s64 = ctx.r9.s64 + 1024;
	// addi r16,r3,512
	ctx.r16.s64 = ctx.r3.s64 + 512;
	// subf r3,r7,r25
	ctx.r3.s64 = ctx.r25.s64 - ctx.r7.s64;
	// add r25,r31,r4
	ctx.r25.u64 = ctx.r31.u64 + ctx.r4.u64;
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r14,r29,r25
	ctx.r14.s64 = ctx.r25.s64 - ctx.r29.s64;
	// lbzx r25,r18,r17
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r17.u32);
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lbzx r3,r22,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r10.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r5,512
	ctx.r29.s64 = ctx.r5.s64 + 512;
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
	// subf r5,r8,r14
	ctx.r5.s64 = ctx.r14.s64 - ctx.r8.s64;
	// subf r30,r26,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r26.s64;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// srawi r25,r16,10
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3FF) != 0);
	ctx.r25.s64 = ctx.r16.s32 >> 10;
	// stbx r31,r22,r10
	PPC_STORE_U8(ctx.r22.u32 + ctx.r10.u32, ctx.r31.u8);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// addi r15,r9,1024
	ctx.r15.s64 = ctx.r9.s64 + 1024;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r18,r9,1024
	ctx.r18.s64 = ctx.r9.s64 + 1024;
	// addi r17,r7,512
	ctx.r17.s64 = ctx.r7.s64 + 512;
	// subf r7,r4,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r4.s64;
	// lbzx r30,r21,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
	// lbzx r31,r25,r15
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r15.u32);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// srawi r4,r29,10
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FF) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 10;
	// stbx r5,r21,r10
	PPC_STORE_U8(ctx.r21.u32 + ctx.r10.u32, ctx.r5.u8);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// add r7,r7,r19
	ctx.r7.u64 = ctx.r7.u64 + ctx.r19.u64;
	// lbzx r5,r4,r18
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r18.u32);
	// lbzx r3,r20,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r10.u32);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// srawi r3,r17,10
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3FF) != 0);
	ctx.r3.s64 = ctx.r17.s32 >> 10;
	// stbx r4,r20,r10
	PPC_STORE_U8(ctx.r20.u32 + ctx.r10.u32, ctx.r4.u8);
	// lbzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// lbzx r5,r3,r26
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r26.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,-168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r23,-160(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// srawi r5,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 1;
	// srawi r3,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 10;
	// stbx r5,r27,r10
	PPC_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r5.u8);
	// subf r8,r24,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r24.s64;
	// lbzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r5,r3,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r25.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8241cba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241CBA4;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241C8D8) {
	__imp__sub_8241C8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241CEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241CEA4) {
	__imp__sub_8241CEA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241CEA8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r10,r4,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// sthx r8,r3,r5
	PPC_STORE_U16(ctx.r3.u32 + ctx.r5.u32, ctx.r8.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241CEA8) {
	__imp__sub_8241CEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241CED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241CEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82419e88
	ctx.lr = 0x8241CF00;
	sub_82419E88(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lbz r5,83(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r4,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwimi r5,r3,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r6,17
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFF;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r4,r4,0,25,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r6,r31,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r8,r9,17
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFF;
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// sthx r7,r29,r30
	PPC_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r7.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241CED8) {
	__imp__sub_8241CED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241CF8C) {
	__imp__sub_8241CF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241CF90) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x82419e88
	sub_82419E88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241CF90) {
	__imp__sub_8241CF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241CF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241CFA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82419e88
	ctx.lr = 0x8241CFC0;
	sub_82419E88(ctx, base);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r4,83(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r7,r3,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r5,r8,r3
	ctx.r5.u64 = ctx.r8.u64 | ctx.r3.u64;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r4,r9,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r3,17
	ctx.r9.u64 = ctx.r3.u32 & 0x7FFF;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r9,r9,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r7,r9,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r9.s64;
	// sth r7,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r7.u16);
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// rotlwi r11,r3,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// xor r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// clrlwi r6,r7,17
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFF;
	// rlwinm r6,r6,0,25,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// sthx r5,r29,r30
	PPC_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r5.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241CF98) {
	__imp__sub_8241CF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241D050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8241D058;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// lbzx r27,r10,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbz r26,1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r28,r28,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// srawi r29,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r28.s32 >> 8;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// srawi r9,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 8;
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// srawi r8,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 8;
	// stb r29,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r29.u8);
	// stb r10,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r10.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r28.u8);
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stb r7,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r7.u8);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// bl 0x82419fd8
	ctx.lr = 0x8241D148;
	sub_82419FD8(ctx, base);
	// lbz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r7,93(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwimi r7,r5,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r6,r4,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwimi r10,r8,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r4,r7,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lbz r3,95(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// rlwimi r3,r11,8,16,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r3,r9,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r4,r8,17
	ctx.r4.u64 = ctx.r8.u32 & 0x7FFF;
	// clrlwi r3,r7,17
	ctx.r3.u64 = ctx.r7.u32 & 0x7FFF;
	// rlwinm r4,r4,0,25,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r3,r3,0,25,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// sthx r9,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241D050) {
	__imp__sub_8241D050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241D1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8241D1D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,2
	ctx.r6.s64 = 2;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// lbzx r29,r10,r5
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// rotlwi r30,r30,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 8);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r29,r29,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 8);
	// srawi r31,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 8;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// srawi r8,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 8;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r30,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r30.u8);
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// bl 0x82419fd8
	ctx.lr = 0x8241D2BC;
	sub_82419FD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241D1D0) {
	__imp__sub_8241D1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241D2C4) {
	__imp__sub_8241D2C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241D2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8241D2D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// lbzx r27,r10,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbz r26,1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r28,r28,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// srawi r29,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r28.s32 >> 8;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// srawi r9,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 8;
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// srawi r8,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 8;
	// stb r29,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r29.u8);
	// stb r10,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r10.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r28.u8);
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stb r7,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r7.u8);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// bl 0x82419fd8
	ctx.lr = 0x8241D3C0;
	sub_82419FD8(ctx, base);
	// lbz r5,94(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r7,95(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwimi r7,r5,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r6,r4,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwimi r10,r8,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r4,r7,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lbz r3,97(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// rlwimi r3,r11,8,16,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r3,r9,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r4,r8,17
	ctx.r4.u64 = ctx.r8.u32 & 0x7FFF;
	// clrlwi r3,r7,17
	ctx.r3.u64 = ctx.r7.u32 & 0x7FFF;
	// rlwinm r4,r4,0,25,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r3,r3,0,25,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// sthx r9,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241D2C8) {
	__imp__sub_8241D2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241D448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8241D450;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82419e88
	ctx.lr = 0x8241D470;
	sub_82419E88(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,2
	ctx.r6.s64 = 2;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// srawi r9,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 8;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r27,r10,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r28,r28,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// lbz r26,1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r7,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 8;
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// srawi r29,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 8;
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r7,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r7.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stb r9,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r28.u8);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stb r29,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r29.u8);
	// stb r9,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r9.u8);
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// stb r8,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r8.u8);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// bl 0x82419fd8
	ctx.lr = 0x8241D550;
	sub_82419FD8(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwimi r7,r6,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// lbz r3,85(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwimi r3,r11,8,16,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r3,r8,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// xor r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// clrlwi r10,r4,17
	ctx.r10.u64 = ctx.r4.u32 & 0x7FFF;
	// or r3,r8,r5
	ctx.r3.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// sthx r7,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241D448) {
	__imp__sub_8241D448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241D5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241D5E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82419e88
	ctx.lr = 0x8241D600;
	sub_82419E88(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,2
	ctx.r6.s64 = 2;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r7,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r7.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r10.u8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r7,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r7.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stb r10,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// stb r9,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r9.u8);
	// stb r7,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// bl 0x82419fd8
	ctx.lr = 0x8241D6E0;
	sub_82419FD8(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwimi r4,r3,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r4,r9,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r3,r7,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// clrlwi r3,r10,17
	ctx.r3.u64 = ctx.r10.u32 & 0x7FFF;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// or r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r3,r3,0,25,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// sthx r8,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241D5D8) {
	__imp__sub_8241D5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241D768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8241D770;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82419e88
	ctx.lr = 0x8241D794;
	sub_82419E88(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,2
	ctx.r6.s64 = 2;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// srawi r9,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 8;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r27,r10,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r28,r28,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// lbz r26,1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r7,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 8;
	// stb r30,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r30.u8);
	// srawi r30,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 8;
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stb r7,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r7.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stb r9,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r28.u8);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stb r30,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r30.u8);
	// stb r9,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r9.u8);
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// stb r8,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r8.u8);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// bl 0x82419fd8
	ctx.lr = 0x8241D874;
	sub_82419FD8(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwimi r7,r6,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// lbz r3,85(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwimi r3,r11,8,16,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r3,r8,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// xor r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// clrlwi r10,r4,17
	ctx.r10.u64 = ctx.r4.u32 & 0x7FFF;
	// or r3,r8,r5
	ctx.r3.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// sthx r7,r29,r31
	PPC_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r7.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241D768) {
	__imp__sub_8241D768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241D8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241D8FC) {
	__imp__sub_8241D8FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241D900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241D908;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82419e88
	ctx.lr = 0x8241D92C;
	sub_82419E88(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,2
	ctx.r6.s64 = 2;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r7,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r7.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r10.u8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r7,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r7.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stb r10,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// stb r9,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r9.u8);
	// stb r7,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// bl 0x82419fd8
	ctx.lr = 0x8241DA0C;
	sub_82419FD8(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwimi r4,r3,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r4,r9,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r3,r7,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// clrlwi r3,r10,17
	ctx.r3.u64 = ctx.r10.u32 & 0x7FFF;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// or r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r3,r3,0,25,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// sthx r8,r29,r31
	PPC_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241D900) {
	__imp__sub_8241D900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241DA94) {
	__imp__sub_8241DA94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DA98) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a120
	ctx.lr = 0x8241DAC0;
	sub_8241A120(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241DA98) {
	__imp__sub_8241DA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241DAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82419e88
	ctx.lr = 0x8241DAF8;
	sub_82419E88(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8241a120
	ctx.lr = 0x8241DB14;
	sub_8241A120(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r6,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r3,85(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwimi r3,r11,8,16,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r3,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// xor r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// clrlwi r10,r5,17
	ctx.r10.u64 = ctx.r5.u32 & 0x7FFF;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// sthx r7,r31,r29
	PPC_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241DAD0) {
	__imp__sub_8241DAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241DB9C) {
	__imp__sub_8241DB9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241DBA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82419e88
	ctx.lr = 0x8241DBCC;
	sub_82419E88(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8241a120
	ctx.lr = 0x8241DBE8;
	sub_8241A120(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r6,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r3,85(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwimi r3,r11,8,16,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r3,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// xor r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// clrlwi r10,r5,17
	ctx.r10.u64 = ctx.r5.u32 & 0x7FFF;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// sthx r7,r29,r31
	PPC_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r7.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241DBA0) {
	__imp__sub_8241DBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8241DC78;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r5,2
	ctx.r5.s64 = 2;
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r28.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// lbzx r26,r10,r31
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// lbz r25,1(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r7,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r7.u8);
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r26,r26,8
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 8);
	// srawi r28,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 8;
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// srawi r8,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r26.s32 >> 8;
	// stb r9,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r9.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stb r10,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stb r25,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r25.u8);
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// stb r28,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r28.u8);
	// stb r10,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r10.u8);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// stb r27,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r27.u8);
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stb r7,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r7.u8);
	// stb r8,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// stb r11,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r11.u8);
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// bl 0x82419fd8
	ctx.lr = 0x8241DD70;
	sub_82419FD8(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8241a120
	ctx.lr = 0x8241DD8C;
	sub_8241A120(ctx, base);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r5,83(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r7,r6,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwimi r5,r4,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r5,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r4,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r9,r7,17
	ctx.r9.u64 = ctx.r7.u32 & 0x7FFF;
	// clrlwi r8,r11,17
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFF;
	// or r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwinm r9,r9,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 | ctx.r5.u64;
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// sth r6,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r6.u16);
	// sthx r5,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241DC70) {
	__imp__sub_8241DC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241DE14) {
	__imp__sub_8241DE14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241DE20;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r7,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r7.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stb r9,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r9.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r7,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r10.u8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stb r9,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r9.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r7,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r7.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stb r10,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r10.u8);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// stb r9,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r9.u8);
	// stb r7,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r7.u8);
	// bl 0x82419fd8
	ctx.lr = 0x8241DF10;
	sub_82419FD8(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8241a120
	ctx.lr = 0x8241DF2C;
	sub_8241A120(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r4,r11,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// lbz r3,87(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwimi r3,r10,8,16,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r4,r9,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r3,r7,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// clrlwi r3,r10,17
	ctx.r3.u64 = ctx.r10.u32 & 0x7FFF;
	// clrlwi r10,r5,17
	ctx.r10.u64 = ctx.r5.u32 & 0x7FFF;
	// or r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r3,r3,0,25,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// sthx r8,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241DE18) {
	__imp__sub_8241DE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241DFB4) {
	__imp__sub_8241DFB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241DFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r8,r6,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r7,r4,r5
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// rotlwi r4,r7,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r8,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r8.u32);
	// lbzux r7,r11,r5
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r3,r6,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stwux r9,r10,r5
	ea = ctx.r10.u32 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lbzux r8,r11,r5
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stwx r3,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241DFB8) {
	__imp__sub_8241DFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E074) {
	__imp__sub_8241E074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E080;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241E0A0;
	sub_8241A350(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E0BC;
	sub_82417F70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E078) {
	__imp__sub_8241E078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E0C4) {
	__imp__sub_8241E0C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E0C8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x8241a350
	sub_8241A350(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E0C8) {
	__imp__sub_8241E0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E0D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241E0F8;
	sub_8241A350(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E114;
	sub_82417F70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E0D0) {
	__imp__sub_8241E0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E11C) {
	__imp__sub_8241E11C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E120) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8240d4a8
	ctx.lr = 0x8241E158;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241E168;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E188;
	sub_82417F70(ctx, base);
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

PPC_WEAK_FUNC(sub_8241E120) {
	__imp__sub_8241E120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E1A0) {
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
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8240d4a8
	ctx.lr = 0x8241E1D8;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241a4b0
	ctx.lr = 0x8241E1EC;
	sub_8241A4B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241E1A0) {
	__imp__sub_8241E1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E204) {
	__imp__sub_8241E204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E208) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8240d4a8
	ctx.lr = 0x8241E240;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241E250;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E270;
	sub_82417F70(ctx, base);
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

PPC_WEAK_FUNC(sub_8241E208) {
	__imp__sub_8241E208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E290;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241E2B0;
	sub_8241A350(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,9
	ctx.r7.s64 = 9;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240d4a8
	ctx.lr = 0x8241E2C4;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241E2D4;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E2F4;
	sub_82417F70(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E288) {
	__imp__sub_8241E288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E2FC) {
	__imp__sub_8241E2FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E308;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241E328;
	sub_8241A350(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,9
	ctx.r7.s64 = 9;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8240d4a8
	ctx.lr = 0x8241E340;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241E350;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E370;
	sub_82417F70(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E300) {
	__imp__sub_8241E300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E380;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a350
	ctx.lr = 0x8241E3A4;
	sub_8241A350(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,9
	ctx.r7.s64 = 9;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240d4a8
	ctx.lr = 0x8241E3B8;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241E3C8;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E3E8;
	sub_82417F70(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E378) {
	__imp__sub_8241E378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a350
	ctx.lr = 0x8241E41C;
	sub_8241A350(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,9
	ctx.r7.s64 = 9;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8240d4a8
	ctx.lr = 0x8241E434;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241E444;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E464;
	sub_82417F70(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E3F0) {
	__imp__sub_8241E3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E46C) {
	__imp__sub_8241E46C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a9b0
	ctx.lr = 0x8241E498;
	sub_8241A9B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241E470) {
	__imp__sub_8241E470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E4B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241E4D0;
	sub_8241A350(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a9b0
	ctx.lr = 0x8241E4EC;
	sub_8241A9B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E50C;
	sub_82417F70(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E4A8) {
	__imp__sub_8241E4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E514) {
	__imp__sub_8241E514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E520;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a350
	ctx.lr = 0x8241E544;
	sub_8241A350(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a9b0
	ctx.lr = 0x8241E560;
	sub_8241A9B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E580;
	sub_82417F70(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E518) {
	__imp__sub_8241E518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E590;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240d4a8
	ctx.lr = 0x8241E5BC;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a4b0
	ctx.lr = 0x8241E5CC;
	sub_8241A4B0(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a9b0
	ctx.lr = 0x8241E5E8;
	sub_8241A9B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E608;
	sub_82417F70(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E588) {
	__imp__sub_8241E588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E618;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240d4a8
	ctx.lr = 0x8241E648;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a4b0
	ctx.lr = 0x8241E658;
	sub_8241A4B0(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a9b0
	ctx.lr = 0x8241E674;
	sub_8241A9B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417f70
	ctx.lr = 0x8241E694;
	sub_82417F70(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E610) {
	__imp__sub_8241E610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E69C) {
	__imp__sub_8241E69C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E6A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241E6C8;
	sub_8241B028(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241E6E4;
	sub_82417E60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E6A0) {
	__imp__sub_8241E6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E6EC) {
	__imp__sub_8241E6EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E6F0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x8241b028
	sub_8241B028(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E6F0) {
	__imp__sub_8241E6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E700;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241E720;
	sub_8241B028(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241E73C;
	sub_82417E60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E6F8) {
	__imp__sub_8241E6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E744) {
	__imp__sub_8241E744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E748) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82415ee8
	ctx.lr = 0x8241E780;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b2b8
	ctx.lr = 0x8241E790;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241E7B0;
	sub_82417E60(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241E748) {
	__imp__sub_8241E748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E7C8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82415ee8
	ctx.lr = 0x8241E800;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241b2b8
	ctx.lr = 0x8241E814;
	sub_8241B2B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241E7C8) {
	__imp__sub_8241E7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E82C) {
	__imp__sub_8241E82C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E830) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82415ee8
	ctx.lr = 0x8241E868;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b2b8
	ctx.lr = 0x8241E878;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241E898;
	sub_82417E60(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241E830) {
	__imp__sub_8241E830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E8B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241E8D8;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,13
	ctx.r7.s64 = 13;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82415ee8
	ctx.lr = 0x8241E8EC;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b2b8
	ctx.lr = 0x8241E8FC;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241E91C;
	sub_82417E60(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E8B0) {
	__imp__sub_8241E8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241E924) {
	__imp__sub_8241E924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E930;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241E950;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,13
	ctx.r7.s64 = 13;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82415ee8
	ctx.lr = 0x8241E968;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b2b8
	ctx.lr = 0x8241E978;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241E998;
	sub_82417E60(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E928) {
	__imp__sub_8241E928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241E9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241E9A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x8241E9CC;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,13
	ctx.r7.s64 = 13;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82415ee8
	ctx.lr = 0x8241E9E0;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b2b8
	ctx.lr = 0x8241E9F0;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241EA10;
	sub_82417E60(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241E9A0) {
	__imp__sub_8241E9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241EA20;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x8241EA44;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,13
	ctx.r7.s64 = 13;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82415ee8
	ctx.lr = 0x8241EA5C;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EA6C;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241EA8C;
	sub_82417E60(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241EA18) {
	__imp__sub_8241EA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241EA94) {
	__imp__sub_8241EA94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EA98) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b5c0
	ctx.lr = 0x8241EAC0;
	sub_8241B5C0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241EA98) {
	__imp__sub_8241EA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241EAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241EAF8;
	sub_8241B028(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b5c0
	ctx.lr = 0x8241EB14;
	sub_8241B5C0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241EB34;
	sub_82417E60(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241EAD0) {
	__imp__sub_8241EAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241EB3C) {
	__imp__sub_8241EB3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241EB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x8241EB6C;
	sub_8241B028(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b5c0
	ctx.lr = 0x8241EB88;
	sub_8241B5C0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241EBA8;
	sub_82417E60(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241EB40) {
	__imp__sub_8241EB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241EBB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82415ee8
	ctx.lr = 0x8241EBE4;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EBF4;
	sub_8241B2B8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b5c0
	ctx.lr = 0x8241EC10;
	sub_8241B5C0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241EC30;
	sub_82417E60(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241EBB0) {
	__imp__sub_8241EBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241EC40;
	__savegprlr_29(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82415ee8
	ctx.lr = 0x8241EC70;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EC80;
	sub_8241B2B8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b5c0
	ctx.lr = 0x8241EC9C;
	sub_8241B5C0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241ECBC;
	sub_82417E60(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241EC38) {
	__imp__sub_8241EC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241ECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241ECC4) {
	__imp__sub_8241ECC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241ECC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8241ECD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241ECF0;
	sub_8241B028(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241ED00;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241ED14;
	sub_8241B028(ctx, base);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x8241ED20;
	sub_8241B028(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241ED3C;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241ED50;
	sub_82417E60(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241ECC8) {
	__imp__sub_8241ECC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241ED58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241ED60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241ED78;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8241b028
	ctx.lr = 0x8241ED84;
	sub_8241B028(ctx, base);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241ED9C;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8241b028
	ctx.lr = 0x8241EDA8;
	sub_8241B028(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241ED58) {
	__imp__sub_8241ED58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8241EDB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241EDD8;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x8241EDE4;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241EDF8;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x8241EE04;
	sub_8241B028(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241EE24;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241EE38;
	sub_82417E60(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241EDB0) {
	__imp__sub_8241EDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EE40) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82416020
	ctx.lr = 0x8241EE78;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EE88;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EE98;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EEA8;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EEB8;
	sub_8241B2B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241EED8;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241EEEC;
	sub_82417E60(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241EE40) {
	__imp__sub_8241EE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241EF04) {
	__imp__sub_8241EF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EF08) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82416020
	ctx.lr = 0x8241EF40;
	sub_82416020(ctx, base);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EF54;
	sub_8241B2B8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EF64;
	sub_8241B2B8(ctx, base);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,16
	ctx.r6.s64 = 16;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EF7C;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EF8C;
	sub_8241B2B8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241EF08) {
	__imp__sub_8241EF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241EFA4) {
	__imp__sub_8241EFA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241EFA8) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82416020
	ctx.lr = 0x8241EFE0;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b2b8
	ctx.lr = 0x8241EFF0;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F000;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F010;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F020;
	sub_8241B2B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241F040;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241F054;
	sub_82417E60(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241EFA8) {
	__imp__sub_8241EFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241F06C) {
	__imp__sub_8241F06C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8241F078;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241F098;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x8241F0A4;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241F0B8;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x8241F0C4;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,21
	ctx.r7.s64 = 21;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82416020
	ctx.lr = 0x8241F0D8;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F0E8;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F0F8;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F108;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F118;
	sub_8241B2B8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241F138;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241F14C;
	sub_82417E60(ctx, base);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F070) {
	__imp__sub_8241F070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241F154) {
	__imp__sub_8241F154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8241F160;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241F180;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x8241F18C;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241F1A0;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x8241F1AC;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,21
	ctx.r7.s64 = 21;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82416020
	ctx.lr = 0x8241F1C4;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F1D4;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F1E4;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F1F4;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F204;
	sub_8241B2B8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241F224;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241F238;
	sub_82417E60(ctx, base);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F158) {
	__imp__sub_8241F158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8241F248;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x8241F270;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x8241F27C;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241F290;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x8241F29C;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,21
	ctx.r7.s64 = 21;
	// subf r4,r11,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82416020
	ctx.lr = 0x8241F2B0;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F2C0;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F2D0;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F2E0;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F2F0;
	sub_8241B2B8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241F310;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241F324;
	sub_82417E60(ctx, base);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F240) {
	__imp__sub_8241F240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241F32C) {
	__imp__sub_8241F32C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8241F338;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x8241F360;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x8241F36C;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241F380;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x8241F38C;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,21
	ctx.r7.s64 = 21;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82416020
	ctx.lr = 0x8241F3A4;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F3B4;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F3C4;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F3D4;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F3E4;
	sub_8241B2B8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241F404;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241F418;
	sub_82417E60(ctx, base);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F330) {
	__imp__sub_8241F330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241bb18
	ctx.lr = 0x8241F448;
	sub_8241BB18(ctx, base);
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241F420) {
	__imp__sub_8241F420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8241F460;
	__savegprlr_28(ctx, base);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241F480;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x8241F48C;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241F4A0;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x8241F4AC;
	sub_8241B028(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241bb18
	ctx.lr = 0x8241F4C8;
	sub_8241BB18(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241F4E8;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241F4FC;
	sub_82417E60(ctx, base);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F458) {
	__imp__sub_8241F458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241F504) {
	__imp__sub_8241F504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8241F510;
	__savegprlr_28(ctx, base);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x8241F538;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x8241F544;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241F558;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x8241F564;
	sub_8241B028(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241bb18
	ctx.lr = 0x8241F580;
	sub_8241BB18(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241F5A0;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241F5B4;
	sub_82417E60(ctx, base);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F508) {
	__imp__sub_8241F508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241F5BC) {
	__imp__sub_8241F5BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241F5C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82416020
	ctx.lr = 0x8241F5F4;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F604;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F614;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F624;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F634;
	sub_8241B2B8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241bb18
	ctx.lr = 0x8241F650;
	sub_8241BB18(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241F670;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241F684;
	sub_82417E60(ctx, base);
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F5C0) {
	__imp__sub_8241F5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241F68C) {
	__imp__sub_8241F68C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241F698;
	__savegprlr_29(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82416020
	ctx.lr = 0x8241F6C8;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F6D8;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F6E8;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F6F8;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x8241b2b8
	ctx.lr = 0x8241F708;
	sub_8241B2B8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241bb18
	ctx.lr = 0x8241F724;
	sub_8241BB18(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x8241F744;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8241F758;
	sub_82417E60(ctx, base);
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F690) {
	__imp__sub_8241F690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F760) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r8,r6,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// xor r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lwzx r6,r3,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// lbzx r4,r4,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r4,r9,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r8,r4,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stwx r7,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r7.u32);
	// lbzux r6,r11,r5
	// rotlwi r4,r6,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lwzux r9,r10,r5
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// xor r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// or r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r9,r4,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lbzux r7,r11,r5
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwzux r11,r10,r5
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 | ctx.r4.u64;
	// xor r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241F760) {
	__imp__sub_8241F760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241F89C) {
	__imp__sub_8241F89C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241F8A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241F8C8;
	sub_8241A350(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241F8E4;
	sub_82416DA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F8A0) {
	__imp__sub_8241F8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241F8EC) {
	__imp__sub_8241F8EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F8F0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x8241bbb0
	sub_8241BBB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F8F0) {
	__imp__sub_8241F8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241F900;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241F920;
	sub_8241A350(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241F93C;
	sub_82416DA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241F8F8) {
	__imp__sub_8241F8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241F944) {
	__imp__sub_8241F944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F948) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8240d4a8
	ctx.lr = 0x8241F980;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241F990;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241F9B0;
	sub_82416DA0(ctx, base);
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

PPC_WEAK_FUNC(sub_8241F948) {
	__imp__sub_8241F948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241F9C8) {
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
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8240d4a8
	ctx.lr = 0x8241FA00;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241bd58
	ctx.lr = 0x8241FA14;
	sub_8241BD58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241F9C8) {
	__imp__sub_8241F9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241FA2C) {
	__imp__sub_8241FA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FA30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8240d4a8
	ctx.lr = 0x8241FA68;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241FA78;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241FA98;
	sub_82416DA0(ctx, base);
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

PPC_WEAK_FUNC(sub_8241FA30) {
	__imp__sub_8241FA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FAB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241FAD8;
	sub_8241A350(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,9
	ctx.r7.s64 = 9;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240d4a8
	ctx.lr = 0x8241FAEC;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241FAFC;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241FB1C;
	sub_82416DA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FAB0) {
	__imp__sub_8241FAB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241FB24) {
	__imp__sub_8241FB24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FB30;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241FB50;
	sub_8241A350(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,9
	ctx.r7.s64 = 9;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8240d4a8
	ctx.lr = 0x8241FB68;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241FB78;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241FB98;
	sub_82416DA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FB28) {
	__imp__sub_8241FB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FBA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a350
	ctx.lr = 0x8241FBCC;
	sub_8241A350(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,9
	ctx.r7.s64 = 9;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240d4a8
	ctx.lr = 0x8241FBE0;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241FBF0;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241FC10;
	sub_82416DA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FBA0) {
	__imp__sub_8241FBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a350
	ctx.lr = 0x8241FC44;
	sub_8241A350(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,9
	ctx.r7.s64 = 9;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8240d4a8
	ctx.lr = 0x8241FC5C;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a4b0
	ctx.lr = 0x8241FC6C;
	sub_8241A4B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241FC8C;
	sub_82416DA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FC18) {
	__imp__sub_8241FC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241FC94) {
	__imp__sub_8241FC94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241bf28
	ctx.lr = 0x8241FCC0;
	sub_8241BF28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241FC98) {
	__imp__sub_8241FC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FCD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241a350
	ctx.lr = 0x8241FCF8;
	sub_8241A350(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a9b0
	ctx.lr = 0x8241FD14;
	sub_8241A9B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241FD34;
	sub_82416DA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FCD0) {
	__imp__sub_8241FCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241FD3C) {
	__imp__sub_8241FD3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FD48;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a350
	ctx.lr = 0x8241FD6C;
	sub_8241A350(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a9b0
	ctx.lr = 0x8241FD88;
	sub_8241A9B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241FDA8;
	sub_82416DA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FD40) {
	__imp__sub_8241FD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FDB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240d4a8
	ctx.lr = 0x8241FDE4;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a4b0
	ctx.lr = 0x8241FDF4;
	sub_8241A4B0(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a9b0
	ctx.lr = 0x8241FE10;
	sub_8241A9B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241FE30;
	sub_82416DA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FDB0) {
	__imp__sub_8241FDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FE40;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240d4a8
	ctx.lr = 0x8241FE70;
	sub_8240D4A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a4b0
	ctx.lr = 0x8241FE80;
	sub_8241A4B0(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a9b0
	ctx.lr = 0x8241FE9C;
	sub_8241A9B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416da0
	ctx.lr = 0x8241FEBC;
	sub_82416DA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FE38) {
	__imp__sub_8241FE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241FEC4) {
	__imp__sub_8241FEC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241FEF0;
	sub_8241B028(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8241FF0C;
	sub_82416C50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FEC8) {
	__imp__sub_8241FEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241FF14) {
	__imp__sub_8241FF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FF18) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x8241c210
	sub_8241C210(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FF18) {
	__imp__sub_8241FF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8241FF28;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241FF48;
	sub_8241B028(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416c50
	ctx.lr = 0x8241FF64;
	sub_82416C50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8241FF20) {
	__imp__sub_8241FF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8241FF6C) {
	__imp__sub_8241FF6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FF70) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82415ee8
	ctx.lr = 0x8241FFA8;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b2b8
	ctx.lr = 0x8241FFB8;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8241FFD8;
	sub_82416C50(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241FF70) {
	__imp__sub_8241FF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8241FFF0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82415ee8
	ctx.lr = 0x82420028;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241c528
	ctx.lr = 0x8242003C;
	sub_8241C528(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8241FFF0) {
	__imp__sub_8241FFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82420054) {
	__imp__sub_82420054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420058) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82415ee8
	ctx.lr = 0x82420090;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b2b8
	ctx.lr = 0x824200A0;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x824200C0;
	sub_82416C50(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82420058) {
	__imp__sub_82420058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824200D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824200E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420100;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,13
	ctx.r7.s64 = 13;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82415ee8
	ctx.lr = 0x82420114;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b2b8
	ctx.lr = 0x82420124;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420144;
	sub_82416C50(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824200D8) {
	__imp__sub_824200D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242014C) {
	__imp__sub_8242014C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82420158;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420178;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,13
	ctx.r7.s64 = 13;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82415ee8
	ctx.lr = 0x82420190;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b2b8
	ctx.lr = 0x824201A0;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x824201C0;
	sub_82416C50(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420150) {
	__imp__sub_82420150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824201C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824201D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x824201F4;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,13
	ctx.r7.s64 = 13;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82415ee8
	ctx.lr = 0x82420208;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b2b8
	ctx.lr = 0x82420218;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420238;
	sub_82416C50(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824201C8) {
	__imp__sub_824201C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82420248;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x8242026C;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,13
	ctx.r7.s64 = 13;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82415ee8
	ctx.lr = 0x82420284;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b2b8
	ctx.lr = 0x82420294;
	sub_8241B2B8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x824202B4;
	sub_82416C50(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420240) {
	__imp__sub_82420240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824202BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824202BC) {
	__imp__sub_824202BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824202C0) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241c8d8
	ctx.lr = 0x824202E8;
	sub_8241C8D8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824202C0) {
	__imp__sub_824202C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824202F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82420300;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420320;
	sub_8241B028(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b5c0
	ctx.lr = 0x8242033C;
	sub_8241B5C0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242035C;
	sub_82416C50(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824202F8) {
	__imp__sub_824202F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82420364) {
	__imp__sub_82420364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82420370;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x82420394;
	sub_8241B028(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241b5c0
	ctx.lr = 0x824203B0;
	sub_8241B5C0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x824203D0;
	sub_82416C50(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420368) {
	__imp__sub_82420368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824203D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824203E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82415ee8
	ctx.lr = 0x8242040C;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241b2b8
	ctx.lr = 0x8242041C;
	sub_8241B2B8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b5c0
	ctx.lr = 0x82420438;
	sub_8241B5C0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420458;
	sub_82416C50(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824203D8) {
	__imp__sub_824203D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82420468;
	__savegprlr_29(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82415ee8
	ctx.lr = 0x82420498;
	sub_82415EE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241b2b8
	ctx.lr = 0x824204A8;
	sub_8241B2B8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b5c0
	ctx.lr = 0x824204C4;
	sub_8241B5C0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x824204E4;
	sub_82416C50(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420460) {
	__imp__sub_82420460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824204EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824204EC) {
	__imp__sub_824204EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824204F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x824204F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420518;
	sub_8241B028(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420528;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241b028
	ctx.lr = 0x8242053C;
	sub_8241B028(ctx, base);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x82420548;
	sub_8241B028(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420564;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420578;
	sub_82416C50(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824204F0) {
	__imp__sub_824204F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82420588;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8241c210
	ctx.lr = 0x824205A0;
	sub_8241C210(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8241c210
	ctx.lr = 0x824205AC;
	sub_8241C210(ctx, base);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c210
	ctx.lr = 0x824205C4;
	sub_8241C210(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8241c210
	ctx.lr = 0x824205D0;
	sub_8241C210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420580) {
	__imp__sub_82420580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824205D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x824205E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420600;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x8242060C;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420620;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x8242062C;
	sub_8241B028(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242064C;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420660;
	sub_82416C50(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824205D8) {
	__imp__sub_824205D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420668) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82416020
	ctx.lr = 0x824206A0;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b2b8
	ctx.lr = 0x824206B0;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b2b8
	ctx.lr = 0x824206C0;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241b2b8
	ctx.lr = 0x824206D0;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b2b8
	ctx.lr = 0x824206E0;
	sub_8241B2B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420700;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420714;
	sub_82416C50(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82420668) {
	__imp__sub_82420668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242072C) {
	__imp__sub_8242072C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420730) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82416020
	ctx.lr = 0x82420768;
	sub_82416020(ctx, base);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8241c528
	ctx.lr = 0x8242077C;
	sub_8241C528(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8241c528
	ctx.lr = 0x82420790;
	sub_8241C528(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241c528
	ctx.lr = 0x824207AC;
	sub_8241C528(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241c528
	ctx.lr = 0x824207C0;
	sub_8241C528(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82420730) {
	__imp__sub_82420730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824207D8) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82416020
	ctx.lr = 0x82420810;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b2b8
	ctx.lr = 0x82420820;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b2b8
	ctx.lr = 0x82420830;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241b2b8
	ctx.lr = 0x82420840;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b2b8
	ctx.lr = 0x82420850;
	sub_8241B2B8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420870;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420884;
	sub_82416C50(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824207D8) {
	__imp__sub_824207D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242089C) {
	__imp__sub_8242089C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824208A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x824208A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x824208C8;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x824208D4;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x824208E8;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x824208F4;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,21
	ctx.r7.s64 = 21;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82416020
	ctx.lr = 0x82420908;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241b2b8
	ctx.lr = 0x82420918;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8241b2b8
	ctx.lr = 0x82420928;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241b2b8
	ctx.lr = 0x82420938;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8241b2b8
	ctx.lr = 0x82420948;
	sub_8241B2B8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420968;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242097C;
	sub_82416C50(ctx, base);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824208A0) {
	__imp__sub_824208A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82420984) {
	__imp__sub_82420984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82420990;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x824209B0;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x824209BC;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x824209D0;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x824209DC;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,21
	ctx.r7.s64 = 21;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82416020
	ctx.lr = 0x824209F4;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241b2b8
	ctx.lr = 0x82420A04;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8241b2b8
	ctx.lr = 0x82420A14;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241b2b8
	ctx.lr = 0x82420A24;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8241b2b8
	ctx.lr = 0x82420A34;
	sub_8241B2B8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420A54;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420A68;
	sub_82416C50(ctx, base);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420988) {
	__imp__sub_82420988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82420A78;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x82420AA0;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x82420AAC;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420AC0;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x82420ACC;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,21
	ctx.r7.s64 = 21;
	// subf r4,r11,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82416020
	ctx.lr = 0x82420AE0;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241b2b8
	ctx.lr = 0x82420AF0;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8241b2b8
	ctx.lr = 0x82420B00;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241b2b8
	ctx.lr = 0x82420B10;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8241b2b8
	ctx.lr = 0x82420B20;
	sub_8241B2B8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420B40;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420B54;
	sub_82416C50(ctx, base);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420A70) {
	__imp__sub_82420A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82420B5C) {
	__imp__sub_82420B5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82420B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x82420B90;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x82420B9C;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420BB0;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x82420BBC;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,21
	ctx.r7.s64 = 21;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82416020
	ctx.lr = 0x82420BD4;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241b2b8
	ctx.lr = 0x82420BE4;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8241b2b8
	ctx.lr = 0x82420BF4;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241b2b8
	ctx.lr = 0x82420C04;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8241b2b8
	ctx.lr = 0x82420C14;
	sub_8241B2B8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420C34;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420C48;
	sub_82416C50(ctx, base);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420B60) {
	__imp__sub_82420B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82420C58;
	__savegprlr_29(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8241c8d8
	ctx.lr = 0x82420C80;
	sub_8241C8D8(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8241c8d8
	ctx.lr = 0x82420C98;
	sub_8241C8D8(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241c8d8
	ctx.lr = 0x82420CBC;
	sub_8241C8D8(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241c8d8
	ctx.lr = 0x82420CD4;
	sub_8241C8D8(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420C50) {
	__imp__sub_82420C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82420CDC) {
	__imp__sub_82420CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82420CE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420D08;
	sub_8241B028(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x82420D14;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420D28;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x82420D34;
	sub_8241B028(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241bb18
	ctx.lr = 0x82420D50;
	sub_8241BB18(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420D70;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420D84;
	sub_82416C50(ctx, base);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420CE0) {
	__imp__sub_82420CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82420D8C) {
	__imp__sub_82420D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82420D98;
	__savegprlr_28(ctx, base);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b028
	ctx.lr = 0x82420DC0;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b028
	ctx.lr = 0x82420DCC;
	sub_8241B028(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241b028
	ctx.lr = 0x82420DE0;
	sub_8241B028(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241b028
	ctx.lr = 0x82420DEC;
	sub_8241B028(ctx, base);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241bb18
	ctx.lr = 0x82420E08;
	sub_8241BB18(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420E28;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420E3C;
	sub_82416C50(ctx, base);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420D90) {
	__imp__sub_82420D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82420E44) {
	__imp__sub_82420E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82420E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82416020
	ctx.lr = 0x82420E7C;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8241b2b8
	ctx.lr = 0x82420E8C;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x8241b2b8
	ctx.lr = 0x82420E9C;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8241b2b8
	ctx.lr = 0x82420EAC;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x8241b2b8
	ctx.lr = 0x82420EBC;
	sub_8241B2B8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241bb18
	ctx.lr = 0x82420ED8;
	sub_8241BB18(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420EF8;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420F0C;
	sub_82416C50(ctx, base);
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420E48) {
	__imp__sub_82420E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82420F14) {
	__imp__sub_82420F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82420F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82416020
	ctx.lr = 0x82420F50;
	sub_82416020(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8241b2b8
	ctx.lr = 0x82420F60;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x8241b2b8
	ctx.lr = 0x82420F70;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8241b2b8
	ctx.lr = 0x82420F80;
	sub_8241B2B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x8241b2b8
	ctx.lr = 0x82420F90;
	sub_8241B2B8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241bb18
	ctx.lr = 0x82420FAC;
	sub_8241BB18(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x82420FCC;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x82420FE0;
	sub_82416C50(ctx, base);
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420F18) {
	__imp__sub_82420F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420FE8) {
	PPC_FUNC_PROLOGUE();
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x82417cc8
	sub_82417CC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420FE8) {
	__imp__sub_82420FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420FF0) {
	PPC_FUNC_PROLOGUE();
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x82416a38
	sub_82416A38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420FF0) {
	__imp__sub_82420FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82420FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82421000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82417cc8
	ctx.lr = 0x82421018;
	sub_82417CC8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417cc8
	ctx.lr = 0x82421028;
	sub_82417CC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82420FF8) {
	__imp__sub_82420FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82421038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82416a38
	ctx.lr = 0x82421050;
	sub_82416A38(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82416a38
	ctx.lr = 0x82421060;
	sub_82416A38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82421030) {
	__imp__sub_82421030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421068) {
	PPC_FUNC_PROLOGUE();
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825a2c28
	sub_825A2C28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82421068) {
	__imp__sub_82421068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82421074) {
	__imp__sub_82421074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421078) {
	PPC_FUNC_PROLOGUE();
	// li r5,768
	ctx.r5.s64 = 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825a2c28
	sub_825A2C28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82421078) {
	__imp__sub_82421078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82421084) {
	__imp__sub_82421084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421088) {
	PPC_FUNC_PROLOGUE();
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// addi r10,r4,144
	ctx.r10.s64 = ctx.r4.s64 + 144;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824210A0:
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r6,r9,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r7,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// bdnz 0x824210a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824210A0;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,68
	ctx.r7.s64 = ctx.r4.s64 + 68;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824210D0:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824210e0
	if (!ctx.cr6.gt) goto loc_824210E0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_824210E0:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824210d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824210D0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82421088) {
	__imp__sub_82421088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824210F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824210F4) {
	__imp__sub_824210F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824210F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// li r5,16
	ctx.r5.s64 = 16;
loc_82421108:
	// li r10,2
	ctx.r10.s64 = 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82421110:
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x82421110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82421110;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bne 0x82421108
	if (!ctx.cr0.eq) goto loc_82421108;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824210F8) {
	__imp__sub_824210F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421168) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82421170;
	__savegprlr_24(ctx, base);
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r31,r4,-16
	ctx.r31.s64 = ctx.r4.s64 + -16;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r11,-16192
	ctx.r11.s64 = ctx.r11.s64 + -16192;
loc_82421188:
	// li r9,2
	ctx.r9.s64 = 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82421190:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r8,18,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FC;
	// rlwinm r29,r8,26,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FC;
	// rlwinm r28,r8,10,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x3FC;
	// addi r27,r11,1024
	ctx.r27.s64 = ctx.r11.s64 + 1024;
	// rlwinm r26,r30,18,22,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x3FC;
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// lwzx r9,r5,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r6,r29,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// rlwinm r5,r30,26,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FC;
	// addi r29,r11,1024
	ctx.r29.s64 = ctx.r11.s64 + 1024;
	// lwzx r7,r28,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// rlwinm r27,r8,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// rlwinm r24,r30,10,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0x3FC;
	// lwzx r8,r26,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
	// addi r26,r11,1024
	ctx.r26.s64 = ctx.r11.s64 + 1024;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwzx r5,r5,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// rlwinm r30,r30,2,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// addi r29,r11,1024
	ctx.r29.s64 = ctx.r11.s64 + 1024;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r24,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r28.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r6,r27,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r7,r30,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bdnz 0x82421190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82421190;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// bne 0x82421188
	if (!ctx.cr0.eq) goto loc_82421188;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82421168) {
	__imp__sub_82421168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82421238;
	__savegprlr_25(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// blt cr6,0x824212cc
	if (ctx.cr6.lt) goto loc_824212CC;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r26,8
	ctx.r26.s64 = 8;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// li r27,12
	ctx.r27.s64 = 12;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r29,20
	ctx.r29.s64 = 20;
	// li r30,24
	ctx.r30.s64 = 24;
loc_82421270:
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// stwbrx r25,0,r7
	PPC_STORE_U32(ctx.r7.u32, __builtin_bswap32(ctx.r25.u32));
	// lwbrx r7,r31,r11
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32));
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stwbrx r7,0,r6
	PPC_STORE_U32(ctx.r6.u32, __builtin_bswap32(ctx.r7.u32));
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stwbrx r6,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, __builtin_bswap32(ctx.r6.u32));
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stwbrx r7,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, __builtin_bswap32(ctx.r7.u32));
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stwbrx r6,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, __builtin_bswap32(ctx.r6.u32));
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stwbrx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, __builtin_bswap32(ctx.r7.u32));
	// lwzu r7,32(r10)
	ea = 32 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwbrx r7,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, __builtin_bswap32(ctx.r7.u32));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82421270
	if (!ctx.cr6.gt) goto loc_82421270;
loc_824212CC:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x824212f8
	if (!ctx.cr6.lt) goto loc_824212F8;
	// subf r9,r8,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r8.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824212E8:
	// lwbrx r9,r10,r11
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824212e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824212E8;
loc_824212F8:
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82421230) {
	__imp__sub_82421230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824212FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824212FC) {
	__imp__sub_824212FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421300) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82421310:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// sthx r9,r11,r4
	PPC_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bdnz 0x82421310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82421310;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82421300) {
	__imp__sub_82421300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242132C) {
	__imp__sub_8242132C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421330) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82421338;
	__savegprlr_14(ctx, base);
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// addi r11,r11,-16192
	ctx.r11.s64 = ctx.r11.s64 + -16192;
	// blt cr6,0x82421460
	if (ctx.cr6.lt) goto loc_82421460;
	// addi r26,r7,-1
	ctx.r26.s64 = ctx.r7.s64 + -1;
loc_8242135C:
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbz r24,2(r5)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r28,2(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r29,3(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// addi r21,r11,1024
	ctx.r21.s64 = ctx.r11.s64 + 1024;
	// lbz r30,3(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// subf r28,r24,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r24.s64;
	// lbz r16,0(r4)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r27,r11,1024
	ctx.r27.s64 = ctx.r11.s64 + 1024;
	// lbz r24,3(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lbz r22,3(r10)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// addi r23,r11,1024
	ctx.r23.s64 = ctx.r11.s64 + 1024;
	// lbz r17,1(r9)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r24,r22
	ctx.r24.s64 = ctx.r22.s64 - ctx.r24.s64;
	// lbz r22,1(r10)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r18,2(r9)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r20,2(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// subf r22,r17,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r17.s64;
	// lbz r17,0(r5)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r29,1(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// subf r20,r18,r20
	ctx.r20.s64 = ctx.r20.s64 - ctx.r18.s64;
	// lbzx r15,r4,r6
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// addi r19,r11,1024
	ctx.r19.s64 = ctx.r11.s64 + 1024;
	// lbz r18,1(r5)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r14,r5,r6
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// addi r5,r11,1024
	ctx.r5.s64 = ctx.r11.s64 + 1024;
	// lwzx r4,r30,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// subf r30,r17,r16
	ctx.r30.s64 = ctx.r16.s64 - ctx.r17.s64;
	// stw r5,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r5.u32);
	// subf r18,r18,r29
	ctx.r18.s64 = ctx.r29.s64 - ctx.r18.s64;
	// rlwinm r21,r30,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,-160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lwzx r5,r24,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r27.u32);
	// rlwinm r24,r22,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r20,r23
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r23.u32);
	// addi r23,r11,1024
	ctx.r23.s64 = ctx.r11.s64 + 1024;
	// rlwinm r22,r18,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r28,r19
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r19.u32);
	// subf r28,r14,r15
	ctx.r28.s64 = ctx.r15.s64 - ctx.r14.s64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// rlwinm r20,r28,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// lwzx r28,r22,r23
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// addi r23,r11,1024
	ctx.r23.s64 = ctx.r11.s64 + 1024;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r26.s32, ctx.xer);
	// lwzx r30,r24,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r30.u32);
	// addi r24,r11,1024
	ctx.r24.s64 = ctx.r11.s64 + 1024;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lwzx r30,r20,r23
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r23.u32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lwzx r29,r21,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r24.u32);
	// add r31,r5,r31
	ctx.r31.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x8242135c
	if (ctx.cr6.lt) goto loc_8242135C;
loc_82421460:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x824214e0
	if (!ctx.cr6.lt) goto loc_824214E0;
	// lbz r8,3(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r30,r11,1024
	ctx.r30.s64 = ctx.r11.s64 + 1024;
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
	// lbz r29,2(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r11,1(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// subf r6,r29,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r29.s64;
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r5,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r8,r5,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r4,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_824214E0:
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82421330) {
	__imp__sub_82421330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824214EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824214EC) {
	__imp__sub_824214EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824214F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263442c
	ctx.lr = 0x824214F8;
	__savegprlr_17(ctx, base);
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// addi r11,r11,-16192
	ctx.r11.s64 = ctx.r11.s64 + -16192;
	// blt cr6,0x824216f8
	if (ctx.cr6.lt) goto loc_824216F8;
	// addi r27,r7,-1
	ctx.r27.s64 = ctx.r7.s64 + -1;
loc_8242151C:
	// lbz r10,7(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// lbz r28,7(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// addi r29,r11,1024
	ctx.r29.s64 = ctx.r11.s64 + 1024;
	// lbz r30,6(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// lbz r24,6(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// lbz r22,5(r5)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// addi r23,r11,1024
	ctx.r23.s64 = ctx.r11.s64 + 1024;
	// subf r30,r30,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r30.s64;
	// lbz r28,5(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r24,4(r5)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// lbz r21,4(r4)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// subf r28,r22,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r22.s64;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r22,3(r5)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// subf r24,r24,r21
	ctx.r24.s64 = ctx.r21.s64 - ctx.r24.s64;
	// lbz r20,3(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r21,2(r5)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r19,2(r4)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// subf r22,r22,r20
	ctx.r22.s64 = ctx.r20.s64 - ctx.r22.s64;
	// lwzx r9,r30,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r20,r11,1024
	ctx.r20.s64 = ctx.r11.s64 + 1024;
	// lbz r18,1(r5)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r28,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r21,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r21.s64;
	// lbz r25,0(r5)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwzx r30,r24,r23
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r23.u32);
	// add r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r17,1(r4)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r24,r11,1024
	ctx.r24.s64 = ctx.r11.s64 + 1024;
	// subf r23,r18,r17
	ctx.r23.s64 = ctx.r17.s64 - ctx.r18.s64;
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwzx r4,r22,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r20.u32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r22,7(r9)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r21,6(r9)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lwzx r30,r29,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// addi r20,r11,1024
	ctx.r20.s64 = ctx.r11.s64 + 1024;
	// subf r29,r25,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r25.s64;
	// lbz r28,5(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r25,7(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r24,6(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r19,r11,1024
	ctx.r19.s64 = ctx.r11.s64 + 1024;
	// lbz r18,5(r10)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lwzx r4,r23,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r20.u32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r22,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r22.s64;
	// lbz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r23,4(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// addi r22,r11,1024
	ctx.r22.s64 = ctx.r11.s64 + 1024;
	// lbz r20,3(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lwzx r4,r29,r19
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r19.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r21,r24
	ctx.r29.s64 = ctx.r24.s64 - ctx.r21.s64;
	// lbz r24,3(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r21,2(r10)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// subf r4,r28,r18
	ctx.r4.s64 = ctx.r18.s64 - ctx.r28.s64;
	// lbz r28,2(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lwzx r5,r30,r22
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// addi r30,r11,1024
	ctx.r30.s64 = ctx.r11.s64 + 1024;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r11,1024
	ctx.r22.s64 = ctx.r11.s64 + 1024;
	// subf r25,r23,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r23.s64;
	// lwzx r30,r29,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r29,r25,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// lwzx r4,r4,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// subf r24,r24,r20
	ctx.r24.s64 = ctx.r20.s64 - ctx.r24.s64;
	// lbz r23,1(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// subf r28,r28,r21
	ctx.r28.s64 = ctx.r21.s64 - ctx.r28.s64;
	// lbz r22,1(r9)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r20,0(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r19,r11,1024
	ctx.r19.s64 = ctx.r11.s64 + 1024;
	// lbz r18,0(r9)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lwzx r30,r29,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
	// subf r25,r22,r23
	ctx.r25.s64 = ctx.r23.s64 - ctx.r22.s64;
	// lwzx r4,r24,r19
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r19.u32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,1024
	ctx.r24.s64 = ctx.r11.s64 + 1024;
	// subf r23,r18,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r18.s64;
	// lwzx r30,r29,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r29,r23,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
	// lwzx r4,r25,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r30,r5,r4
	ctx.r30.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt cr6,0x8242151c
	if (ctx.cr6.lt) goto loc_8242151C;
loc_824216F8:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x824217e8
	if (!ctx.cr6.lt) goto loc_824217E8;
	// lbz r8,7(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// lbz r10,7(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// lbz r29,6(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// addi r30,r11,1024
	ctx.r30.s64 = ctx.r11.s64 + 1024;
	// lbz r6,6(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lbz r8,5(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
	// subf r6,r29,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r29.s64;
	// lbz r29,5(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r26,4(r5)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// lbz r29,3(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r25,3(r5)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r26,2(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// subf r7,r25,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r25.s64;
	// lbz r6,2(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// addi r29,r11,1024
	ctx.r29.s64 = ctx.r11.s64 + 1024;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r25,1(r4)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,1(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// subf r6,r6,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r6.s64;
	// lwzx r8,r27,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subf r30,r30,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r30.s64;
	// lwzx r9,r7,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lwzx r8,r6,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r11,1024
	ctx.r4.s64 = ctx.r11.s64 + 1024;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r6,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_824217E8:
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824214F0) {
	__imp__sub_824214F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824217F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824217F4) {
	__imp__sub_824217F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824217F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x82421800;
	__savegprlr_20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824219f4
	if (!ctx.cr6.gt) goto loc_824219F4;
	// subf r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// addi r4,r9,-14
	ctx.r4.s64 = ctx.r9.s64 + -14;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// addi r10,r5,14
	ctx.r10.s64 = ctx.r5.s64 + 14;
	// addi r9,r9,-16192
	ctx.r9.s64 = ctx.r9.s64 + -16192;
loc_82421828:
	// lbz r5,-14(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14);
	// addi r7,r9,1024
	ctx.r7.s64 = ctx.r9.s64 + 1024;
	// lbzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// lbz r28,-13(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + -13);
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// lbz r30,-13(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -13);
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// lbz r5,-12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12);
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// subf r30,r28,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r28.s64;
	// lbz r28,-12(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + -12);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r25,-11(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + -11);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r26,-11(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + -11);
	// subf r5,r28,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r28.s64;
	// lbz r28,-10(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + -10);
	// subf r26,r25,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r25.s64;
	// lbz r25,-10(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + -10);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r24,-9(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + -9);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r30,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// subf r31,r25,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r25.s64;
	// lbz r30,-9(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + -9);
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r25,-8(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8);
	// lwzx r7,r5,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,-8(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + -8);
	// subf r30,r30,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r30.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r7,r26,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// subf r31,r31,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r31.s64;
	// lbz r26,-7(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + -7);
	// lbz r29,-7(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + -7);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// lbz r25,-6(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r7,r5,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,-6(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + -6);
	// addi r24,r9,1024
	ctx.r24.s64 = ctx.r9.s64 + 1024;
	// lbz r23,-5(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + -5);
	// subf r29,r26,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r26.s64;
	// lbz r22,-4(r10)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// lwzx r5,r30,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r28,r28,r25
	ctx.r28.s64 = ctx.r25.s64 - ctx.r28.s64;
	// lbz r30,-5(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + -5);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r27,-4(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// lwzx r7,r31,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r31,-3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r25,-3(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + -3);
	// addi r24,r9,1024
	ctx.r24.s64 = ctx.r9.s64 + 1024;
	// lbz r21,-2(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// subf r30,r30,r23
	ctx.r30.s64 = ctx.r23.s64 - ctx.r30.s64;
	// lbz r20,-1(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lwzx r5,r29,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r29,-2(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// addi r23,r9,1024
	ctx.r23.s64 = ctx.r9.s64 + 1024;
	// lbz r26,-1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lwzx r7,r28,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r5,r22,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r22.s64;
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r30,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// subf r31,r25,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r25.s64;
	// lwzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// lbz r27,1(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// subf r30,r29,r21
	ctx.r30.s64 = ctx.r21.s64 - ctx.r29.s64;
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r26,r20,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r20.s64;
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r9,1024
	ctx.r23.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r5,r31,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r31,r26,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r27,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r27.s64;
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r7,r30,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r29,r24,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r24.s64;
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// lwzx r5,r31,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r7,r30,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r7,r31,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// bdnz 0x82421828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82421828;
loc_824219F4:
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824217F8) {
	__imp__sub_824217F8(ctx, base);
}

