#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822B9CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,25240
	ctx.r10.u64 = ctx.r11.u64 | 25240;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822b9d60
	if (ctx.cr6.lt) goto loc_822B9D60;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,25236
	ctx.r9.u64 = ctx.r10.u64 | 25236;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822b9d60
	if (!ctx.cr6.lt) goto loc_822B9D60;
	// mulli r11,r11,2104
	ctx.r11.s64 = ctx.r11.s64 * 2104;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,8404
	ctx.r11.s64 = ctx.r11.s64 + 8404;
	// lwz r10,2100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822b9d60
	if (ctx.cr6.lt) goto loc_822B9D60;
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822b9d60
	if (!ctx.cr6.lt) goto loc_822B9D60;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822b9d60
	if (ctx.cr6.lt) goto loc_822B9D60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,36864
	ctx.r9.u64 = ctx.r10.u64 | 36864;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822b9d60
	if (!ctx.cr6.lt) goto loc_822B9D60;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_822B9D60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B9CD8) {
	__imp__sub_822B9CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,25248
	ctx.r10.u64 = ctx.r11.u64 | 25248;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9dbc
	if (ctx.cr6.eq) goto loc_822B9DBC;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r11,r11,25252
	ctx.r11.u64 = ctx.r11.u64 | 25252;
	// bge cr6,0x822b9d98
	if (!ctx.cr6.lt) goto loc_822B9D98;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
loc_822B9D98:
	// ble cr6,0x822b9da4
	if (!ctx.cr6.gt) goto loc_822B9DA4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
loc_822B9DA4:
	// addis r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 196608;
	// addi r10,r10,8400
	ctx.r10.s64 = ctx.r10.s64 + 8400;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822B9DBC:
	// addis r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 196608;
	// addi r10,r10,25240
	ctx.r10.s64 = ctx.r10.s64 + 25240;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822b9e10
	if (!ctx.cr6.eq) goto loc_822B9E10;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822b9df8
	if (!ctx.cr6.gt) goto loc_822B9DF8;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r9,r11,25236
	ctx.r9.u64 = ctx.r11.u64 | 25236;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822b9df8
	if (!ctx.cr6.gt) goto loc_822B9DF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x822b9ad8
	sub_822B9AD8(ctx, base);
	return;
loc_822B9DF8:
	// addis r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 196608;
	// addi r10,r10,25244
	ctx.r10.s64 = ctx.r10.s64 + 25244;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x822b9ad8
	sub_822B9AD8(ctx, base);
	return;
loc_822B9E10:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x822b9e40
	if (!ctx.cr6.lt) goto loc_822B9E40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b9e40
	if (!ctx.cr6.eq) goto loc_822B9E40;
	// addis r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 196608;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r9,8400
	ctx.r9.s64 = ctx.r9.s64 + 8400;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// blr 
	return;
loc_822B9E40:
	// lis r9,3
	ctx.r9.s64 = 196608;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ori r9,r9,25236
	ctx.r9.u64 = ctx.r9.u64 | 25236;
	// beq cr6,0x822b9e88
	if (ctx.cr6.eq) goto loc_822B9E88;
	// add. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bge 0x822b9e64
	if (!ctx.cr0.lt) goto loc_822B9E64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_822B9E64:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r3,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b9e88
	if (ctx.cr6.lt) goto loc_822B9E88;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bgt cr6,0x822b9e84
	if (ctx.cr6.gt) goto loc_822B9E84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B9E84:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_822B9E88:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822b9ec4
	if (ctx.cr6.eq) goto loc_822B9EC4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822b9ec4
	if (ctx.cr6.lt) goto loc_822B9EC4;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822b9ec4
	if (!ctx.cr6.lt) goto loc_822B9EC4;
	// mulli r11,r11,2104
	ctx.r11.s64 = ctx.r11.s64 * 2104;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r10,r10,10504
	ctx.r10.s64 = ctx.r10.s64 + 10504;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_822B9EC4:
	// b 0x822b9ad8
	sub_822B9AD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9D68) {
	__imp__sub_822B9D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,3
	ctx.r10.s64 = 196608;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// ori r9,r10,25248
	ctx.r9.u64 = ctx.r10.u64 | 25248;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,25240
	ctx.r9.u64 = ctx.r10.u64 | 25240;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bgt cr6,0x822b9f00
	if (ctx.cr6.gt) goto loc_822B9F00;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822B9F00:
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// b 0x822b9d68
	sub_822B9D68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9EC8) {
	__imp__sub_822B9EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9F0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B9F0C) {
	__imp__sub_822B9F0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9F10) {
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
	// addis r7,r3,3
	ctx.r7.s64 = ctx.r3.s64 + 196608;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r7,25248
	ctx.r7.s64 = ctx.r7.s64 + 25248;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822b9f94
	if (ctx.cr6.eq) goto loc_822B9F94;
	// addis r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 196608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,25252
	ctx.r9.s64 = ctx.r9.s64 + 25252;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822b9f64
	if (ctx.cr6.eq) goto loc_822B9F64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r8,r5,1
	ctx.r8.u64 = ctx.r5.u64 ^ 1;
	// addi r3,r8,3
	ctx.r3.s64 = ctx.r8.s64 + 3;
	// b 0x822b9f68
	goto loc_822B9F68;
loc_822B9F64:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822B9F68:
	// addis r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 196608;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r8,r8,8400
	ctx.r8.s64 = ctx.r8.s64 + 8400;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B9F94:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,25240
	ctx.r9.u64 = ctx.r10.u64 | 25240;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822ba054
	if (!ctx.cr6.eq) goto loc_822BA054;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,25244
	ctx.r9.u64 = ctx.r10.u64 | 25244;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822b9fd0
	if (!ctx.cr6.eq) goto loc_822B9FD0;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B9FD0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ba004
	if (!ctx.cr6.eq) goto loc_822BA004;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r8,r10,25260
	ctx.r8.u64 = ctx.r10.u64 | 25260;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BA004:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addis r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 196608;
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r8,r8,8400
	ctx.r8.s64 = ctx.r8.s64 + 8400;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// xori r10,r4,1
	ctx.r10.u64 = ctx.r4.u64 ^ 1;
	// ori r6,r5,25252
	ctx.r6.u64 = ctx.r5.u64 | 25252;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stwx r5,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BA054:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822b9cd8
	ctx.lr = 0x822BA05C;
	sub_822B9CD8(ctx, base);
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

PPC_WEAK_FUNC(sub_822B9F10) {
	__imp__sub_822B9F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA074) {
	__imp__sub_822BA074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA078) {
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
	// addis r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 196608;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,25248
	ctx.r10.s64 = ctx.r10.s64 + 25248;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ba0d8
	if (ctx.cr6.eq) goto loc_822BA0D8;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addis r8,r3,3
	ctx.r8.s64 = ctx.r3.s64 + 196608;
	// ori r7,r9,25252
	ctx.r7.u64 = ctx.r9.u64 | 25252;
	// addi r8,r8,8400
	ctx.r8.s64 = ctx.r8.s64 + 8400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BA0D8:
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r10,r10,25240
	ctx.r10.s64 = ctx.r10.s64 + 25240;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x822ba124
	if (!ctx.cr6.eq) goto loc_822BA124;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,25236
	ctx.r8.u64 = ctx.r9.u64 | 25236;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822ba124
	if (!ctx.cr6.gt) goto loc_822BA124;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x822b9ad8
	ctx.lr = 0x822BA110;
	sub_822B9AD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BA124:
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

PPC_WEAK_FUNC(sub_822BA078) {
	__imp__sub_822BA078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822BA140;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r21,r3,3
	ctx.r21.s64 = ctx.r3.s64 + 196608;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r21,r21,8204
	ctx.r21.s64 = ctx.r21.s64 + 8204;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x822b9ad8
	ctx.lr = 0x822BA164;
	sub_822B9AD8(ctx, base);
	// addis r24,r26,3
	ctx.r24.s64 = ctx.r26.s64 + 196608;
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
	// addi r24,r24,25240
	ctx.r24.s64 = ctx.r24.s64 + 25240;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ba428
	if (ctx.cr6.eq) goto loc_822BA428;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// ori r5,r11,25236
	ctx.r5.u64 = ctx.r11.u64 | 25236;
	// ori r4,r10,10500
	ctx.r4.u64 = ctx.r10.u64 | 10500;
	// ori r22,r9,36994
	ctx.r22.u64 = ctx.r9.u64 | 36994;
loc_822BA198:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x822ba248
	if (!ctx.cr6.lt) goto loc_822BA248;
	// lwzx r11,r26,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// add r6,r26,r5
	ctx.r6.u64 = ctx.r26.u64 + ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ba22c
	if (!ctx.cr6.gt) goto loc_822BA22C;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r7,r26,r4
	ctx.r7.u64 = ctx.r26.u64 + ctx.r4.u64;
loc_822BA1BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x822ba22c
	if (!ctx.cr6.lt) goto loc_822BA22C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822ba1d4
	if (!ctx.cr6.eq) goto loc_822BA1D4;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822ba214
	if (!ctx.cr6.eq) goto loc_822BA214;
loc_822BA1D4:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822ba214
	if (!ctx.cr6.gt) goto loc_822BA214;
loc_822BA1E4:
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r27,r27,r26
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r26.u32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x822ba20c
	if (ctx.cr6.eq) goto loc_822BA20C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ba1e4
	if (ctx.cr6.lt) goto loc_822BA1E4;
	// b 0x822ba214
	goto loc_822BA214;
loc_822BA20C:
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_822BA214:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,2104
	ctx.r7.s64 = ctx.r7.s64 + 2104;
	// addi r9,r9,1052
	ctx.r9.s64 = ctx.r9.s64 + 1052;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ba1bc
	if (ctx.cr6.lt) goto loc_822BA1BC;
loc_822BA22C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x822ba198
	if (ctx.cr6.lt) goto loc_822BA198;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x822ba248
	if (!ctx.cr6.lt) goto loc_822BA248;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_822BA248:
	// lwzx r11,r26,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// add r27,r26,r5
	ctx.r27.u64 = ctx.r26.u64 + ctx.r5.u64;
	// ori r25,r10,10504
	ctx.r25.u64 = ctx.r10.u64 | 10504;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ba270
	if (!ctx.cr6.lt) goto loc_822BA270;
	// mulli r11,r30,2104
	ctx.r11.s64 = ctx.r30.s64 * 2104;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stwx r29,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r29.u32);
loc_822BA270:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ba2e8
	if (!ctx.cr6.gt) goto loc_822BA2E8;
	// addis r28,r26,3
	ctx.r28.s64 = ctx.r26.s64 + 196608;
	// addi r28,r28,8404
	ctx.r28.s64 = ctx.r28.s64 + 8404;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_822BA290:
	// lwz r11,2096(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822ba2b4
	if (ctx.cr6.gt) goto loc_822BA2B4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x822ba2d4
	if (!ctx.cr6.gt) goto loc_822BA2D4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x822ba2d4
	goto loc_822BA2D4;
loc_822BA2B4:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x822ba2cc
	if (ctx.cr6.eq) goto loc_822BA2CC;
	// li r5,2104
	ctx.r5.s64 = 2104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822BA2CC;
	sub_82635430(ctx, base);
loc_822BA2CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,2104
	ctx.r28.s64 = ctx.r28.s64 + 2104;
loc_822BA2D4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,2104
	ctx.r29.s64 = ctx.r29.s64 + 2104;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ba290
	if (ctx.cr6.lt) goto loc_822BA290;
loc_822BA2E8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822ba330
	if (ctx.cr6.eq) goto loc_822BA330;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x822ba314
	if (ctx.cr6.lt) goto loc_822BA314;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// bgt cr6,0x822ba310
	if (ctx.cr6.gt) goto loc_822BA310;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822BA310:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_822BA314:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822ba330
	if (!ctx.cr6.lt) goto loc_822BA330;
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfze r9,r10
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
loc_822BA330:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822ba348
	if (!ctx.cr6.eq) goto loc_822BA348;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822ba348
	if (ctx.cr6.eq) goto loc_822BA348;
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
loc_822BA348:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822ba394
	if (!ctx.cr6.gt) goto loc_822BA394;
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
loc_822BA358:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ba370
	if (ctx.cr6.lt) goto loc_822BA370;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822BA370:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822ba380
	if (!ctx.cr6.lt) goto loc_822BA380;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_822BA380:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2104
	ctx.r11.s64 = ctx.r11.s64 + 2104;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ba358
	if (ctx.cr6.lt) goto loc_822BA358;
loc_822BA394:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addis r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 196608;
	// ori r9,r10,25260
	ctx.r9.u64 = ctx.r10.u64 | 25260;
	// addi r11,r11,25244
	ctx.r11.s64 = ctx.r11.s64 + 25244;
	// lwzx r7,r26,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822ba3c0
	if (!ctx.cr6.lt) goto loc_822BA3C0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822BA3C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x822ba3d4
	if (ctx.cr6.lt) goto loc_822BA3D4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822BA3D4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ba414
	if (ctx.cr6.lt) goto loc_822BA414;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822ba414
	if (!ctx.cr6.lt) goto loc_822BA414;
	// mulli r10,r11,2104
	ctx.r10.s64 = ctx.r11.s64 * 2104;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// mulli r10,r11,1052
	ctx.r10.s64 = ctx.r11.s64 * 1052;
	// lwzx r11,r9,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r8,r22
	ctx.r7.u64 = ctx.r8.u64 + ctx.r22.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r26
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stw r4,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r4.u32);
loc_822BA414:
	// addis r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 196608;
	// addi r10,r10,8400
	ctx.r10.s64 = ctx.r10.s64 + 8400;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_822BA428:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA138) {
	__imp__sub_822BA138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822BA438;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r25,r3,2
	ctx.r25.s64 = ctx.r3.s64 + 131072;
	// addis r24,r3,3
	ctx.r24.s64 = ctx.r3.s64 + 196608;
	// addi r25,r25,-28672
	ctx.r25.s64 = ctx.r25.s64 + -28672;
	// addis r26,r3,3
	ctx.r26.s64 = ctx.r3.s64 + 196608;
	// addi r24,r24,25240
	ctx.r24.s64 = ctx.r24.s64 + 25240;
	// addi r26,r26,25236
	ctx.r26.s64 = ctx.r26.s64 + 25236;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r30,r11,8404
	ctx.r30.u64 = ctx.r11.u64 | 8404;
	// lwz r23,0(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// ori r27,r9,25256
	ctx.r27.u64 = ctx.r9.u64 | 25256;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822ba570
	if (!ctx.cr6.gt) goto loc_822BA570;
	// addi r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 96;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_822BA48C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822ba4b0
	if (!ctx.cr6.eq) goto loc_822BA4B0;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822ba48c
	if (ctx.cr6.lt) goto loc_822BA48C;
	// b 0x822ba570
	goto loc_822BA570;
loc_822BA4B0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// add r22,r31,r30
	ctx.r22.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r5,r11,-26228
	ctx.r5.s64 = ctx.r11.s64 + -26228;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822b9650
	ctx.lr = 0x822BA4C8;
	sub_822B9650(ctx, base);
	// stw r28,2096(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2096, ctx.r28.u32);
	// stw r28,2100(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2100, ctx.r28.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stwx r7,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// ble cr6,0x822ba570
	if (!ctx.cr6.gt) goto loc_822BA570;
loc_822BA4F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ba55c
	if (ctx.cr6.eq) goto loc_822BA55C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x822ba55c
	if (ctx.cr6.lt) goto loc_822BA55C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ba55c
	if (!ctx.cr6.lt) goto loc_822BA55C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822ba55c
	if (ctx.cr6.lt) goto loc_822BA55C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ba55c
	if (!ctx.cr6.lt) goto loc_822BA55C;
	// mulli r11,r8,2104
	ctx.r11.s64 = ctx.r8.s64 * 2104;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// cmpwi cr6,r10,1024
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1024, ctx.xer);
	// bge cr6,0x822ba55c
	if (!ctx.cr6.lt) goto loc_822BA55C;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r5.u32);
loc_822BA55C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ba4f8
	if (ctx.cr6.lt) goto loc_822BA4F8;
loc_822BA570:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x822ba584
	if (ctx.cr6.lt) goto loc_822BA584;
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x822ba5c8
	goto loc_822BA5C8;
loc_822BA584:
	// mulli r11,r11,2104
	ctx.r11.s64 = ctx.r11.s64 * 2104;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r10,10660
	ctx.r5.s64 = ctx.r10.s64 + 10660;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b9650
	ctx.lr = 0x822BA5A4;
	sub_822B9650(ctx, base);
	// stw r28,2096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2096, ctx.r28.u32);
	// stw r28,2100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2100, ctx.r28.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwzx r10,r31,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stwx r9,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
loc_822BA5C8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ba640
	if (!ctx.cr6.gt) goto loc_822BA640;
loc_822BA5D8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x822ba630
	if (ctx.cr6.lt) goto loc_822BA630;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ba630
	if (!ctx.cr6.lt) goto loc_822BA630;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822ba630
	if (ctx.cr6.lt) goto loc_822BA630;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ba630
	if (!ctx.cr6.lt) goto loc_822BA630;
	// mulli r11,r8,2104
	ctx.r11.s64 = ctx.r8.s64 * 2104;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// cmpwi cr6,r10,1024
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1024, ctx.xer);
	// bge cr6,0x822ba630
	if (!ctx.cr6.lt) goto loc_822BA630;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r5.u32);
loc_822BA630:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ba5d8
	if (ctx.cr6.lt) goto loc_822BA5D8;
loc_822BA640:
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba138
	ctx.lr = 0x822BA64C;
	sub_822BA138(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA430) {
	__imp__sub_822BA430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA654) {
	__imp__sub_822BA654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822BA660;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x826344d0
	ctx.lr = 0x822BA680;
	sub_826344D0(ctx, base);
	// addis r28,r29,3
	ctx.r28.s64 = ctx.r29.s64 + 196608;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r28,r28,8204
	ctx.r28.s64 = ctx.r28.s64 + 8204;
	// ori r30,r11,36864
	ctx.r30.u64 = ctx.r11.u64 | 36864;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ba6bc
	if (ctx.cr6.lt) goto loc_822BA6BC;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822ba6bc
	if (!ctx.cr6.lt) goto loc_822BA6BC;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b95c8
	ctx.lr = 0x822BA6BC;
	sub_822B95C8(ctx, base);
loc_822BA6BC:
	// addis r27,r29,3
	ctx.r27.s64 = ctx.r29.s64 + 196608;
	// addis r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 131072;
	// addi r27,r27,8196
	ctx.r27.s64 = ctx.r27.s64 + 8196;
	// addi r4,r4,-28668
	ctx.r4.s64 = ctx.r4.s64 + -28668;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mulli r5,r11,100
	ctx.r5.s64 = ctx.r11.s64 * 100;
	// bl 0x82635430
	ctx.lr = 0x822BA6DC;
	sub_82635430(ctx, base);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stwx r5,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r5.u32);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r6,r9,8200
	ctx.r6.u64 = ctx.r9.u64 | 8200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stwx r31,r29,r6
	PPC_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r31.u32);
	// beq cr6,0x822ba768
	if (ctx.cr6.eq) goto loc_822BA768;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ba768
	if (!ctx.cr6.gt) goto loc_822BA768;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_822BA718:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822BA720:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822ba744
	if (ctx.cr6.eq) goto loc_822BA744;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ba720
	if (ctx.cr6.eq) goto loc_822BA720;
loc_822BA744:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ba764
	if (ctx.cr6.eq) goto loc_822BA764;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r8,r8,100
	ctx.r8.s64 = ctx.r8.s64 + 100;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ba718
	if (ctx.cr6.lt) goto loc_822BA718;
	// b 0x822ba768
	goto loc_822BA768;
loc_822BA764:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_822BA768:
	// addis r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 196608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,8396
	ctx.r10.s64 = ctx.r10.s64 + 8396;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x822ba430
	ctx.lr = 0x822BA784;
	sub_822BA430(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA658) {
	__imp__sub_822BA658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA78C) {
	__imp__sub_822BA78C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822BA798;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822baa78
	if (ctx.cr6.eq) goto loc_822BAA78;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ba804
	if (ctx.cr6.eq) goto loc_822BA804;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_822BA7D0:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bge cr6,0x822ba800
	if (!ctx.cr6.lt) goto loc_822BA800;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x822ba7f4
	if (!ctx.cr6.eq) goto loc_822BA7F4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_822BA7F4:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ba7d0
	if (!ctx.cr6.eq) goto loc_822BA7D0;
loc_822BA800:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822BA804:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-3232
	ctx.r10.s64 = ctx.r10.s64 + -3232;
loc_822BA810:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x822ba834
	if (ctx.cr6.eq) goto loc_822BA834;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ba810
	if (ctx.cr6.eq) goto loc_822BA810;
loc_822BA834:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822ba918
	if (!ctx.cr6.eq) goto loc_822BA918;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x822ba918
	if (ctx.cr6.lt) goto loc_822BA918;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addis r3,r28,3
	ctx.r3.s64 = ctx.r28.s64 + 196608;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r3,8212
	ctx.r3.s64 = ctx.r3.s64 + 8212;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822b95c8
	ctx.lr = 0x822BA85C;
	sub_822B95C8(ctx, base);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x822ba86c
	if (ctx.cr6.lt) goto loc_822BA86C;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x822ba874
	goto loc_822BA874;
loc_822BA86C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,8828
	ctx.r5.s64 = ctx.r11.s64 + 8828;
loc_822BA874:
	// addis r3,r28,3
	ctx.r3.s64 = ctx.r28.s64 + 196608;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r3,8236
	ctx.r3.s64 = ctx.r3.s64 + 8236;
	// bl 0x822b9650
	ctx.lr = 0x822BA884;
	sub_822B9650(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r11,-3448
	ctx.r6.s64 = ctx.r11.s64 + -3448;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_822BA894:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822BA89C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822ba8c0
	if (ctx.cr6.eq) goto loc_822BA8C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ba89c
	if (ctx.cr6.eq) goto loc_822BA89C;
loc_822BA8C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ba908
	if (ctx.cr6.eq) goto loc_822BA908;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// blt cr6,0x822ba894
	if (ctx.cr6.lt) goto loc_822BA894;
	// li r11,9
	ctx.r11.s64 = 9;
loc_822BA8DC:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addis r9,r28,3
	ctx.r9.s64 = ctx.r28.s64 + 196608;
	// ori r8,r10,8208
	ctx.r8.u64 = ctx.r10.u64 | 8208;
	// addi r9,r9,8400
	ctx.r9.s64 = ctx.r9.s64 + 8400;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r28,r8
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BA908:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822ba8dc
	goto loc_822BA8DC;
loc_822BA918:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-24860
	ctx.r10.s64 = ctx.r10.s64 + -24860;
loc_822BA924:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x822ba948
	if (ctx.cr6.eq) goto loc_822BA948;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ba924
	if (ctx.cr6.eq) goto loc_822BA924;
loc_822BA948:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822ba9f8
	if (!ctx.cr6.eq) goto loc_822BA9F8;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x822ba9f8
	if (ctx.cr6.lt) goto loc_822BA9F8;
	// addis r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 196608;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r10,r10,8200
	ctx.r10.s64 = ctx.r10.s64 + 8200;
	// ori r11,r11,8196
	ctx.r11.u64 = ctx.r11.u64 | 8196;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822ba980
	if (!ctx.cr6.eq) goto loc_822BA980;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r29,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r29.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_822BA980:
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bge cr6,0x822ba9ec
	if (!ctx.cr6.lt) goto loc_822BA9EC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addis r31,r8,2
	ctx.r31.s64 = ctx.r8.s64 + 131072;
	// addi r31,r31,-28668
	ctx.r31.s64 = ctx.r31.s64 + -28668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b95c8
	ctx.lr = 0x822BA9B8;
	sub_822B95C8(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822b9650
	ctx.lr = 0x822BA9C8;
	sub_822B9650(ctx, base);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x822ba9e4
	if (ctx.cr6.lt) goto loc_822BA9E4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,49
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 49, ctx.xer);
	// beq cr6,0x822ba9e8
	if (ctx.cr6.eq) goto loc_822BA9E8;
loc_822BA9E4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822BA9E8:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_822BA9EC:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BA9F8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,10352
	ctx.r10.s64 = ctx.r10.s64 + 10352;
loc_822BAA04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822baa28
	if (ctx.cr6.eq) goto loc_822BAA28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822baa04
	if (ctx.cr6.eq) goto loc_822BAA04;
loc_822BAA28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822baa78
	if (!ctx.cr6.eq) goto loc_822BAA78;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,8200
	ctx.r10.u64 = ctx.r11.u64 | 8200;
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822baa50
	if (!ctx.cr6.eq) goto loc_822BAA50;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,8196
	ctx.r10.u64 = ctx.r11.u64 | 8196;
	// stwx r29,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r29.u32);
loc_822BAA50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ba658
	ctx.lr = 0x822BAA58;
	sub_822BA658(ctx, base);
	// addis r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 196608;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r10,8400
	ctx.r10.s64 = ctx.r10.s64 + 8400;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BAA78:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA790) {
	__imp__sub_822BA790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BAA84) {
	__imp__sub_822BAA84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822BAA90;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r4,-8
	ctx.r30.s64 = ctx.r4.s64 + -8;
	// li r31,7
	ctx.r31.s64 = 7;
loc_822BAAA4:
	// ldu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r30.u32 = ea;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rldicl r3,r11,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicl r10,r11,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rldicl r9,r11,24,40
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 24) & 0xFFFFFF;
	// rldicl r8,r11,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// rldicl r7,r11,40,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 40) & 0xFFFFFFFFFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// rldicl r6,r11,48,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// rldicl r27,r11,8,56
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// bl 0x8235c820
	ctx.lr = 0x822BAAF8;
	sub_8235C820(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822baaa4
	if (!ctx.cr0.eq) goto loc_822BAAA4;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c820
	ctx.lr = 0x822BAB10;
	sub_8235C820(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BAA88) {
	__imp__sub_822BAA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822BAB20;
	__savegprlr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x8235b930
	ctx.lr = 0x822BAB3C;
	sub_8235B930(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235ba30
	ctx.lr = 0x822BAB48;
	sub_8235BA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r27,r11,-3132
	ctx.r27.s64 = ctx.r11.s64 + -3132;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// bl 0x8235c820
	ctx.lr = 0x822BAB60;
	sub_8235C820(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822baa88
	ctx.lr = 0x822BAB70;
	sub_822BAA88(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235ca20
	ctx.lr = 0x822BAB7C;
	sub_8235CA20(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r26,r10,-3108
	ctx.r26.s64 = ctx.r10.s64 + -3108;
loc_822BAB90:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lbzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BABA4;
	sub_822ECA80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// blt cr6,0x822bab90
	if (ctx.cr6.lt) goto loc_822BAB90;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235ba30
	ctx.lr = 0x822BABCC;
	sub_8235BA30(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235c820
	ctx.lr = 0x822BABDC;
	sub_8235C820(ctx, base);
	// addi r30,r29,-8
	ctx.r30.s64 = ctx.r29.s64 + -8;
	// li r31,7
	ctx.r31.s64 = 7;
loc_822BABE4:
	// ldu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r30.u32 = ea;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rldicl r3,r11,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicl r10,r11,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rldicl r9,r11,24,40
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 24) & 0xFFFFFF;
	// rldicl r8,r11,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// rldicl r7,r11,40,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 40) & 0xFFFFFFFFFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// rldicl r6,r11,48,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// rldicl r29,r11,8,56
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// bl 0x8235c820
	ctx.lr = 0x822BAC38;
	sub_8235C820(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822babe4
	if (!ctx.cr0.eq) goto loc_822BABE4;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235c820
	ctx.lr = 0x822BAC50;
	sub_8235C820(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235ca20
	ctx.lr = 0x822BAC5C;
	sub_8235CA20(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235b940
	ctx.lr = 0x822BAC64;
	sub_8235B940(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BAB18) {
	__imp__sub_822BAB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BAC6C) {
	__imp__sub_822BAC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAC70) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,45
	ctx.r8.s64 = 45;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_822BAC80:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bacec
	if (ctx.cr6.eq) goto loc_822BACEC;
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bacec
	if (ctx.cr6.eq) goto loc_822BACEC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bacb0
	if (ctx.cr6.eq) goto loc_822BACB0;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bacb0
	if (!ctx.cr6.eq) goto loc_822BACB0;
	// stbx r8,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822BACB0:
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,97
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 97, ctx.xer);
	// blt cr6,0x822bacd4
	if (ctx.cr6.lt) goto loc_822BACD4;
	// cmpwi cr6,r9,102
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 102, ctx.xer);
	// bgt cr6,0x822bacd4
	if (ctx.cr6.gt) goto loc_822BACD4;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_822BACD4:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r9,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x822bac80
	if (ctx.cr6.lt) goto loc_822BAC80;
loc_822BACEC:
	// stbx r7,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BAC70) {
	__imp__sub_822BAC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BACF4) {
	__imp__sub_822BACF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BACF8) {
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
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r31,r10,-13200
	ctx.r31.s64 = ctx.r10.s64 + -13200;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r10,r31,420
	ctx.r10.s64 = ctx.r31.s64 + 420;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_822BAD30:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822bad30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BAD30;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bad60
	if (ctx.cr6.eq) goto loc_822BAD60;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r31,420
	ctx.r10.s64 = ctx.r31.s64 + 420;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822BAD54:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822bad54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BAD54;
loc_822BAD60:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822bad70
	if (!ctx.cr6.eq) goto loc_822BAD70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
loc_822BAD70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x822eca80
	ctx.lr = 0x822BAD84;
	sub_822ECA80(ctx, base);
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x822bac70
	ctx.lr = 0x822BAD90;
	sub_822BAC70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// li r5,32
	ctx.r5.s64 = 32;
	// beq cr6,0x822badac
	if (ctx.cr6.eq) goto loc_822BADAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822BADA8;
	sub_82635430(ctx, base);
	// b 0x822badb4
	goto loc_822BADB4;
loc_822BADAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822BADB4;
	sub_826344D0(ctx, base);
loc_822BADB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822BADC4;
	sub_826344D0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r8.u32);
	// stb r9,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r9.u8);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822BACF8) {
	__imp__sub_822BACF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BAE04) {
	__imp__sub_822BAE04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// addi r3,r11,-12856
	ctx.r3.s64 = ctx.r11.s64 + -12856;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BAE08) {
	__imp__sub_822BAE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BAE14) {
	__imp__sub_822BAE14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BAE18) {
	__imp__sub_822BAE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BAE24) {
	__imp__sub_822BAE24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE28) {
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
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// addi r31,r11,-12784
	ctx.r31.s64 = ctx.r11.s64 + -12784;
	// lwz r11,-12784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bae64
	if (ctx.cr6.eq) goto loc_822BAE64;
loc_822BAE4C:
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
loc_822BAE64:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bae98
	if (ctx.cr6.eq) goto loc_822BAE98;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bae90
	if (ctx.cr6.eq) goto loc_822BAE90;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BAE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bae4c
	if (!ctx.cr6.eq) goto loc_822BAE4C;
loc_822BAE90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_822BAE98:
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

PPC_WEAK_FUNC(sub_822BAE28) {
	__imp__sub_822BAE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822BAEB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822baed4
	if (!ctx.cr6.eq) goto loc_822BAED4;
loc_822BAEC8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822BAED4:
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_822BAEE4:
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82636998
	ctx.lr = 0x822BAEEC;
	sub_82636998(ctx, base);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822baec8
	if (ctx.cr6.eq) goto loc_822BAEC8;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x822baf28
	if (!ctx.cr6.eq) goto loc_822BAF28;
	// bl 0x82636998
	ctx.lr = 0x822BAF10;
	sub_82636998(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822baec8
	if (!ctx.cr6.eq) goto loc_822BAEC8;
loc_822BAF28:
	// lbz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// bl 0x82636998
	ctx.lr = 0x822BAF38;
	sub_82636998(ctx, base);
	// rotlwi r11,r28,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822baf90
	if (ctx.cr6.eq) goto loc_822BAF90;
loc_822BAF4C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r10,r28
	ctx.r10.s64 = ctx.r28.s8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// addi r30,r11,-48
	ctx.r30.s64 = ctx.r11.s64 + -48;
	// bgt cr6,0x822baec8
	if (ctx.cr6.gt) goto loc_822BAEC8;
	// lbz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82636998
	ctx.lr = 0x822BAF7C;
	sub_82636998(ctx, base);
	// rotlwi r11,r28,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822baf4c
	if (!ctx.cr6.eq) goto loc_822BAF4C;
loc_822BAF90:
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bge cr6,0x822bafac
	if (!ctx.cr6.lt) goto loc_822BAFAC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x822baec8
	if (!ctx.cr6.eq) goto loc_822BAEC8;
loc_822BAFAC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// blt cr6,0x822baee4
	if (ctx.cr6.lt) goto loc_822BAEE4;
	// stw r25,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r25.u32);
	// stw r25,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r25.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822bb064
	if (!ctx.cr6.eq) goto loc_822BB064;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r31.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb024
	if (ctx.cr6.eq) goto loc_822BB024;
loc_822BAFE4:
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82636998
	ctx.lr = 0x822BAFEC;
	sub_82636998(ctx, base);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r9,r9,0,29,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bb018
	if (!ctx.cr6.eq) goto loc_822BB018;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x822bb018
	if (ctx.cr6.eq) goto loc_822BB018;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x822bb024
	if (!ctx.cr6.eq) goto loc_822BB024;
loc_822BB018:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bafe4
	if (!ctx.cr6.eq) goto loc_822BAFE4;
loc_822BB024:
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// subf. r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r11.u32);
	// beq 0x822baec8
	if (ctx.cr0.eq) goto loc_822BAEC8;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x822baec8
	if (ctx.cr6.eq) goto loc_822BAEC8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x822baec8
	if (ctx.cr6.eq) goto loc_822BAEC8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// bl 0x82634c80
	ctx.lr = 0x822BB05C;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822baec8
	if (!ctx.cr6.eq) goto loc_822BAEC8;
loc_822BB064:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x822bb0c8
	if (!ctx.cr6.eq) goto loc_822BB0C8;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bb0c8
	if (ctx.cr6.eq) goto loc_822BB0C8;
loc_822BB084:
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82636998
	ctx.lr = 0x822BB08C;
	sub_82636998(ctx, base);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r9,r9,0,29,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bb0b8
	if (!ctx.cr6.eq) goto loc_822BB0B8;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x822bb0b8
	if (ctx.cr6.eq) goto loc_822BB0B8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x822bb0c8
	if (!ctx.cr6.eq) goto loc_822BB0C8;
loc_822BB0B8:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bb084
	if (!ctx.cr6.eq) goto loc_822BB084;
loc_822BB0C8:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BAEB0) {
	__imp__sub_822BAEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822BB0E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822bb134
	if (ctx.cr6.eq) goto loc_822BB134;
loc_822BB108:
	// bl 0x82636998
	ctx.lr = 0x822BB10C;
	sub_82636998(ctx, base);
	// lbzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 & ctx.r30.u64;
	// blt cr6,0x822bb108
	if (ctx.cr6.lt) goto loc_822BB108;
loc_822BB134:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822bb16c
	if (ctx.cr6.eq) goto loc_822BB16C;
loc_822BB140:
	// bl 0x82636998
	ctx.lr = 0x822BB144;
	sub_82636998(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 & ctx.r29.u64;
	// blt cr6,0x822bb140
	if (ctx.cr6.lt) goto loc_822BB140;
loc_822BB16C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822bb1e4
	if (ctx.cr6.eq) goto loc_822BB1E4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822bb1e4
	if (ctx.cr6.eq) goto loc_822BB1E4;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x822bb27c
	if (!ctx.cr6.eq) goto loc_822BB27C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822bb1bc
	if (ctx.cr6.eq) goto loc_822BB1BC;
	// add r8,r27,r28
	ctx.r8.u64 = ctx.r27.u64 + ctx.r28.u64;
loc_822BB19C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822bb1bc
	if (!ctx.cr0.eq) goto loc_822BB1BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822bb19c
	if (!ctx.cr6.eq) goto loc_822BB19C;
loc_822BB1BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x822bb1d0
	if (!ctx.cr6.lt) goto loc_822BB1D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822BB1D0:
	// neg r11,r9
	ctx.r11.s64 = -ctx.r9.s64;
	// andc r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822BB1E4:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x822bb204
	if (ctx.cr6.eq) goto loc_822BB204;
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822BB204:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// blt cr6,0x822bb214
	if (ctx.cr6.lt) goto loc_822BB214;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_822BB214:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822bb24c
	if (ctx.cr6.eq) goto loc_822BB24C;
	// add r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 + ctx.r8.u64;
loc_822BB22C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822bb24c
	if (!ctx.cr0.eq) goto loc_822BB24C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822bb22c
	if (!ctx.cr6.eq) goto loc_822BB22C;
loc_822BB24C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb268
	if (ctx.cr6.eq) goto loc_822BB268;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x822bb28c
	if (ctx.cr6.lt) goto loc_822BB28C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822BB268:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x822bb27c
	if (!ctx.cr6.eq) goto loc_822BB27C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822BB27C:
	// subfc r11,r25,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r25.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_822BB28C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BB0D8) {
	__imp__sub_822BB0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BB294) {
	__imp__sub_822BB294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822BB2A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822baeb0
	ctx.lr = 0x822BB2B0;
	sub_822BAEB0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822baeb0
	ctx.lr = 0x822BB2C4;
	sub_822BAEB0(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x822bb434
	if (ctx.cr6.eq) goto loc_822BB434;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bb434
	if (ctx.cr6.eq) goto loc_822BB434;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_822BB2EC:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822bb3ec
	if (!ctx.cr6.eq) goto loc_822BB3EC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x822bb2ec
	if (ctx.cr6.lt) goto loc_822BB2EC;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822bb418
	if (ctx.cr6.eq) goto loc_822BB418;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822bb418
	if (ctx.cr6.eq) goto loc_822BB418;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r26,r10,r31
	ctx.r26.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x822bb3c8
	if (!ctx.cr6.lt) goto loc_822BB3C8;
loc_822BB33C:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822bb3c8
	if (!ctx.cr6.lt) goto loc_822BB3C8;
	// subf r5,r30,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r30.s64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635150
	ctx.lr = 0x822BB354;
	sub_82635150(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r5,r31,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r31.s64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635150
	ctx.lr = 0x822BB368;
	sub_82635150(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822bb378
	if (!ctx.cr6.eq) goto loc_822BB378;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_822BB378:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822bb384
	if (!ctx.cr6.eq) goto loc_822BB384;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_822BB384:
	// subf r6,r31,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subf r4,r30,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb0d8
	ctx.lr = 0x822BB398;
	sub_822BB0D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bb438
	if (!ctx.cr6.eq) goto loc_822BB438;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// blt cr6,0x822bb3b0
	if (ctx.cr6.lt) goto loc_822BB3B0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_822BB3B0:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
	// blt cr6,0x822bb3c0
	if (ctx.cr6.lt) goto loc_822BB3C0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822BB3C0:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822bb33c
	if (ctx.cr6.lt) goto loc_822BB33C;
loc_822BB3C8:
	// subfc r11,r26,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r26.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r26.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r8,r27,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r27.u32;
	ctx.r8.s64 = ctx.r30.s64 - ctx.r27.s64;
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// subf r3,r6,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r6.s64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822BB3EC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subfc r6,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r5,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822BB418:
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfe r10,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r30.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822BB434:
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_822BB438:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BB298) {
	__imp__sub_822BB298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822BB448;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822BB458;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822BB460;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bb4b4
	if (ctx.cr6.eq) goto loc_822BB4B4;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822bb4b4
	if (ctx.cr6.eq) goto loc_822BB4B4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822BB478:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bb478
	if (!ctx.cr6.eq) goto loc_822BB478;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x822bb4b4
	if (!ctx.cr6.lt) goto loc_822BB4B4;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822BB4A8;
	sub_82635430(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822BB4B4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BB440) {
	__imp__sub_822BB440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822BB4C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,932
	ctx.r5.s64 = 932;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x826344d0
	ctx.lr = 0x822BB4F0;
	sub_826344D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df958
	ctx.lr = 0x822BB4FC;
	sub_822DF958(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bba40
	if (ctx.cr6.eq) goto loc_822BBA40;
	// bl 0x822de190
	ctx.lr = 0x822BB50C;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bba40
	if (ctx.cr6.eq) goto loc_822BBA40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-2544
	ctx.r4.s64 = ctx.r11.s64 + -2544;
	// li r23,-2
	ctx.r23.s64 = -2;
	// bl 0x822dcc40
	ctx.lr = 0x822BB528;
	sub_822DCC40(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,-2552
	ctx.r4.s64 = ctx.r10.s64 + -2552;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822BB53C;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de118
	ctx.lr = 0x822BB548;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bba00
	if (ctx.cr6.eq) goto loc_822BBA00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lfd f0,23408(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23408);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822bba00
	if (!ctx.cr6.eq) goto loc_822BBA00;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-2560
	ctx.r4.s64 = ctx.r11.s64 + -2560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822bb440
	ctx.lr = 0x822BB588;
	sub_822BB440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bb9e4
	if (!ctx.cr6.eq) goto loc_822BB9E4;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-2568
	ctx.r10.s64 = ctx.r10.s64 + -2568;
loc_822BB59C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822bb5c0
	if (ctx.cr6.eq) goto loc_822BB5C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb59c
	if (ctx.cr6.eq) goto loc_822BB59C;
loc_822BB5C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb600
	if (ctx.cr6.eq) goto loc_822BB600;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,19556
	ctx.r10.s64 = ctx.r10.s64 + 19556;
loc_822BB5D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822bb5f8
	if (ctx.cr6.eq) goto loc_822BB5F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb5d4
	if (ctx.cr6.eq) goto loc_822BB5D4;
loc_822BB5F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bb9e4
	if (!ctx.cr6.eq) goto loc_822BB9E4;
loc_822BB600:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r11,-2576
	ctx.r4.s64 = ctx.r11.s64 + -2576;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822bb440
	ctx.lr = 0x822BB61C;
	sub_822BB440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bb9c8
	if (!ctx.cr6.eq) goto loc_822BB9C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822baeb0
	ctx.lr = 0x822BB630;
	sub_822BAEB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bb9c8
	if (!ctx.cr6.eq) goto loc_822BB9C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de118
	ctx.lr = 0x822BB640;
	sub_822DE118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bb9ac
	if (ctx.cr6.eq) goto loc_822BB9AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfd f0,24(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// lfd f13,-2584(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2584);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822bb9ac
	if (ctx.cr6.lt) goto loc_822BB9AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfd f13,-2592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2592);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822bb9ac
	if (ctx.cr6.gt) goto loc_822BB9AC;
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x822bb9ac
	if (!ctx.cr6.eq) goto loc_822BB9AC;
	// li r11,44
	ctx.r11.s64 = 44;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
	// li r6,65
	ctx.r6.s64 = 65;
	// addi r4,r10,-2600
	ctx.r4.s64 = ctx.r10.s64 + -2600;
	// stfiwx f0,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.f0.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822bb440
	ctx.lr = 0x822BB6B8;
	sub_822BB440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bb770
	if (!ctx.cr6.eq) goto loc_822BB770;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822BB6C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bb6c4
	if (!ctx.cr6.eq) goto loc_822BB6C4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x822bb770
	if (!ctx.cr6.eq) goto loc_822BB770;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822BB6EC:
	// bl 0x82636998
	ctx.lr = 0x822BB6F0;
	sub_82636998(ctx, base);
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822bb770
	if (ctx.cr6.eq) goto loc_822BB770;
	// bl 0x82636998
	ctx.lr = 0x822BB70C;
	sub_82636998(ctx, base);
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822bb770
	if (!ctx.cr6.eq) goto loc_822BB770;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x822bb6ec
	if (ctx.cr6.lt) goto loc_822BB6EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r28,113
	ctx.r31.s64 = ctx.r28.s64 + 113;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r11,-2604
	ctx.r4.s64 = ctx.r11.s64 + -2604;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822bb440
	ctx.lr = 0x822BB74C;
	sub_822BB440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bb78c
	if (ctx.cr6.eq) goto loc_822BB78C;
loc_822BB754:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2620
	ctx.r6.s64 = ctx.r11.s64 + -2620;
	// b 0x822bba18
	goto loc_822BBA18;
loc_822BB770:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2636
	ctx.r6.s64 = ctx.r11.s64 + -2636;
	// b 0x822bba18
	goto loc_822BBA18;
loc_822BB78C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2676
	ctx.r5.s64 = ctx.r11.s64 + -2676;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822eca80
	ctx.lr = 0x822BB7A4;
	sub_822ECA80(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822BB7AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bb7ac
	if (!ctx.cr6.eq) goto loc_822BB7AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822BB7D8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bb754
	if (!ctx.cr6.eq) goto loc_822BB754;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r11,r11,113
	ctx.r11.s64 = ctx.r11.s64 + 113;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bb828
	if (ctx.cr6.eq) goto loc_822BB828;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-2688
	ctx.r10.s64 = ctx.r10.s64 + -2688;
loc_822BB7FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822bb820
	if (ctx.cr6.eq) goto loc_822BB820;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb7fc
	if (ctx.cr6.eq) goto loc_822BB7FC;
loc_822BB820:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bb754
	if (!ctx.cr6.eq) goto loc_822BB754;
loc_822BB828:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r6,512
	ctx.r6.s64 = 512;
	// addi r4,r11,-2696
	ctx.r4.s64 = ctx.r11.s64 + -2696;
	// addi r5,r28,241
	ctx.r5.s64 = ctx.r28.s64 + 241;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822bb440
	ctx.lr = 0x822BB840;
	sub_822BB440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bb864
	if (ctx.cr6.eq) goto loc_822BB864;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2712
	ctx.r6.s64 = ctx.r11.s64 + -2712;
	// b 0x822bba18
	goto loc_822BBA18;
loc_822BB864:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r6,160
	ctx.r6.s64 = 160;
	// addi r4,r11,-2716
	ctx.r4.s64 = ctx.r11.s64 + -2716;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822bb440
	ctx.lr = 0x822BB87C;
	sub_822BB440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bb990
	if (!ctx.cr6.eq) goto loc_822BB990;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822BB88C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bb88c
	if (!ctx.cr6.eq) goto loc_822BB88C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r31,r28,836
	ctx.r31.s64 = ctx.r28.s64 + 836;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r28,753
	ctx.r3.s64 = ctx.r28.s64 + 753;
	// bl 0x8235d580
	ctx.lr = 0x822BB8C0;
	sub_8235D580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bb990
	if (!ctx.cr6.eq) goto loc_822BB990;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x822bb990
	if (ctx.cr6.lt) goto loc_822BB990;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-2728
	ctx.r4.s64 = ctx.r11.s64 + -2728;
	// bl 0x822dcc40
	ctx.lr = 0x822BB8E4;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de0d0
	ctx.lr = 0x822BB8EC;
	sub_822DE0D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bb90c
	if (ctx.cr6.eq) goto loc_822BB90C;
	// stw r25,840(r28)
	PPC_STORE_U32(ctx.r28.u32 + 840, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de0a8
	ctx.lr = 0x822BB900;
	sub_822DE0A8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,844(r28)
	PPC_STORE_U32(ctx.r28.u32 + 844, ctx.r10.u32);
loc_822BB90C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r6,160
	ctx.r6.s64 = 160;
	// addi r4,r11,-2736
	ctx.r4.s64 = ctx.r11.s64 + -2736;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822bb440
	ctx.lr = 0x822BB924;
	sub_822BB440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bb978
	if (!ctx.cr6.eq) goto loc_822BB978;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822BB934:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bb934
	if (!ctx.cr6.eq) goto loc_822BB934;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r31,r28,928
	ctx.r31.s64 = ctx.r28.s64 + 928;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r28,848
	ctx.r3.s64 = ctx.r28.s64 + 848;
	// bl 0x8235d580
	ctx.lr = 0x822BB968;
	sub_8235D580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bb978
	if (ctx.cr6.eq) goto loc_822BB978;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822BB978:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x822dbad0
	ctx.lr = 0x822BB984;
	sub_822DBAD0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822BB990:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2756
	ctx.r6.s64 = ctx.r11.s64 + -2756;
	// b 0x822bba18
	goto loc_822BBA18;
loc_822BB9AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2776
	ctx.r6.s64 = ctx.r11.s64 + -2776;
	// b 0x822bba18
	goto loc_822BBA18;
loc_822BB9C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2808
	ctx.r6.s64 = ctx.r11.s64 + -2808;
	// b 0x822bba18
	goto loc_822BBA18;
loc_822BB9E4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2824
	ctx.r6.s64 = ctx.r11.s64 + -2824;
	// b 0x822bba18
	goto loc_822BBA18;
loc_822BBA00:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bba2c
	if (ctx.cr6.eq) goto loc_822BBA2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2860
	ctx.r6.s64 = ctx.r11.s64 + -2860;
loc_822BBA18:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BBA2C;
	sub_822ECA80(ctx, base);
loc_822BBA2C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822BBA34;
	sub_822DBAD0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822BBA40:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822BBA48;
	sub_822DBAD0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bba74
	if (ctx.cr6.eq) goto loc_822BBA74;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bba74
	if (ctx.cr6.eq) goto loc_822BBA74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,-2884
	ctx.r6.s64 = ctx.r11.s64 + -2884;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BBA74;
	sub_822ECA80(ctx, base);
loc_822BBA74:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BB4C0) {
	__imp__sub_822BB4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822BBA88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r3,241
	ctx.r9.s64 = ctx.r3.s64 + 241;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r3,113
	ctx.r10.s64 = ctx.r3.s64 + 113;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// addi r7,r3,12
	ctx.r7.s64 = ctx.r3.s64 + 12;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// addi r5,r11,-2536
	ctx.r5.s64 = ctx.r11.s64 + -2536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BBAC8;
	sub_822ECA80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822bbadc
	if (ctx.cr6.lt) goto loc_822BBADC;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822bbae8
	if (ctx.cr6.lt) goto loc_822BBAE8;
loc_822BBADC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BBAE8:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// subf r4,r30,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r30.s64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r5,r10,-2464
	ctx.r5.s64 = ctx.r10.s64 + -2464;
	// subfe r6,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BBB08;
	sub_822ECA80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822bbb1c
	if (ctx.cr6.lt) goto loc_822BBB1C;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822bbb20
	if (ctx.cr6.lt) goto loc_822BBB20;
loc_822BBB1C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822BBB20:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBA80) {
	__imp__sub_822BBA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BBB2C) {
	__imp__sub_822BBB2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822BBB38;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822bbbfc
	if (ctx.cr6.lt) goto loc_822BBBFC;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// blt cr6,0x822bbbfc
	if (ctx.cr6.lt) goto loc_822BBBFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8235ca28
	ctx.lr = 0x822BBB68;
	sub_8235CA28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bbbfc
	if (!ctx.cr6.eq) goto loc_822BBBFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d798
	ctx.lr = 0x822BBB78;
	sub_8235D798(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235e790
	ctx.lr = 0x822BBB88;
	sub_8235E790(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bbbe4
	if (!ctx.cr6.eq) goto loc_822BBBE4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d8d0
	ctx.lr = 0x822BBBA0;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bbbc4
	if (!ctx.cr6.eq) goto loc_822BBBC4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x8235d7a8
	ctx.lr = 0x822BBBB4;
	sub_8235D7A8(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BBBC4:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235da30
	ctx.lr = 0x822BBBE0;
	sub_8235DA30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822BBBE4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d7a8
	ctx.lr = 0x822BBBEC;
	sub_8235D7A8(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BBBFC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBB30) {
	__imp__sub_822BBB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822BBC10;
	__savegprlr_29(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r3,241
	ctx.r9.s64 = ctx.r3.s64 + 241;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r10,r3,113
	ctx.r10.s64 = ctx.r3.s64 + 113;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// addi r7,r3,12
	ctx.r7.s64 = ctx.r3.s64 + 12;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// addi r5,r11,-2536
	ctx.r5.s64 = ctx.r11.s64 + -2536;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822eca80
	ctx.lr = 0x822BBC50;
	sub_822ECA80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822bbc64
	if (ctx.cr6.lt) goto loc_822BBC64;
	// cmplwi cr6,r3,1024
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1024, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// blt cr6,0x822bbc68
	if (ctx.cr6.lt) goto loc_822BBC68;
loc_822BBC64:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_822BBC68:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,836(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r31,753
	ctx.r5.s64 = ctx.r31.s64 + 753;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822bbb30
	ctx.lr = 0x822BBC80;
	sub_822BBB30(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBC08) {
	__imp__sub_822BBC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822BBC90;
	__savegprlr_29(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 840);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bbcfc
	if (ctx.cr6.eq) goto loc_822BBCFC;
	// lwz r11,928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bbcfc
	if (ctx.cr6.eq) goto loc_822BBCFC;
	// li r5,1100
	ctx.r5.s64 = 1100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822bba80
	ctx.lr = 0x822BBCC4;
	sub_822BBA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,928(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r31,848
	ctx.r5.s64 = ctx.r31.s64 + 848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbb30
	ctx.lr = 0x822BBCE0;
	sub_822BBB30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bbcfc
	if (!ctx.cr6.eq) goto loc_822BBCFC;
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822BBCFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBC88) {
	__imp__sub_822BBC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822BBD10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822f0b88
	ctx.lr = 0x822BBD20;
	sub_822F0B88(ctx, base);
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r11,-12728
	ctx.r31.s64 = ctx.r11.s64 + -12728;
	// blt cr6,0x822bbd3c
	if (ctx.cr6.lt) goto loc_822BBD3C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x822bbd40
	goto loc_822BBD40;
loc_822BBD3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822BBD40:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822bbd64
	if (ctx.cr6.eq) goto loc_822BBD64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r31,612
	ctx.r3.s64 = ctx.r31.s64 + 612;
	// bl 0x822eca80
	ctx.lr = 0x822BBD60;
	sub_822ECA80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822BBD64:
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// lwz r9,22136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bbd94
	if (ctx.cr6.eq) goto loc_822BBD94;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822bbd8c
	if (ctx.cr6.eq) goto loc_822BBD8C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822bbd8c
	if (ctx.cr6.eq) goto loc_822BBD8C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822bbd94
	if (!ctx.cr6.eq) goto loc_822BBD94;
loc_822BBD8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822bbd98
	goto loc_822BBD98;
loc_822BBD94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BBD98:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822f0c18
	ctx.lr = 0x822BBDAC;
	sub_822F0C18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBD08) {
	__imp__sub_822BBD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BBDB4) {
	__imp__sub_822BBDB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBDB8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822f0b88
	ctx.lr = 0x822BBDD8;
	sub_822F0B88(ctx, base);
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,-12728
	ctx.r11.s64 = ctx.r11.s64 + -12728;
	// stw r30,600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 600, ctx.r30.u32);
	// stw r31,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r31.u32);
	// beq cr6,0x822bbe0c
	if (ctx.cr6.eq) goto loc_822BBE0C;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r9,r31,32
	ctx.r9.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// mulli r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 * 100;
	// divdu r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 / ctx.r9.u64;
	// tdllei r9,0
	// stw r7,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r7.u32);
	// b 0x822bbe14
	goto loc_822BBE14;
loc_822BBE0C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
loc_822BBE14:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x822f0c18
	ctx.lr = 0x822BBE24;
	sub_822F0C18(ctx, base);
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

PPC_WEAK_FUNC(sub_822BBDB8) {
	__imp__sub_822BBDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BBE3C) {
	__imp__sub_822BBE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBE40) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,264
	ctx.r10.s64 = ctx.r1.s64 + 264;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x822BBE8C;
	sub_822ECA20(ctx, base);
	// bl 0x822f0b88
	ctx.lr = 0x822BBE90;
	sub_822F0B88(ctx, base);
	// lis r9,-32042
	ctx.r9.s64 = -2099904512;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r9,-12728
	ctx.r11.s64 = ctx.r9.s64 + -12728;
	// addi r5,r8,8796
	ctx.r5.s64 = ctx.r8.s64 + 8796;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r11,708
	ctx.r3.s64 = ctx.r11.s64 + 708;
	// bl 0x822eca80
	ctx.lr = 0x822BBEB0;
	sub_822ECA80(ctx, base);
	// bl 0x822f0c18
	ctx.lr = 0x822BBEB4;
	sub_822F0C18(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r7,-2428
	ctx.r4.s64 = ctx.r7.s64 + -2428;
	// bl 0x822bbd08
	ctx.lr = 0x822BBEC4;
	sub_822BBD08(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r6,-2448
	ctx.r3.s64 = ctx.r6.s64 + -2448;
	// bl 0x822ebbc8
	ctx.lr = 0x822BBED4;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBE40) {
	__imp__sub_822BBE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BBEE4) {
	__imp__sub_822BBEE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822BBEF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12728
	ctx.r31.s64 = ctx.r11.s64 + -12728;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,840
	ctx.r5.s64 = 840;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822BBF14;
	sub_826344D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822bbf24
	if (ctx.cr6.eq) goto loc_822BBF24;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x822bbf2c
	goto loc_822BBF2C;
loc_822BBF24:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2384
	ctx.r6.s64 = ctx.r11.s64 + -2384;
loc_822BBF2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x822eca80
	ctx.lr = 0x822BBF40;
	sub_822ECA80(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82634d00
	ctx.lr = 0x822BBF4C;
	sub_82634D00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bbfd4
	if (ctx.cr6.eq) goto loc_822BBFD4;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-2392
	ctx.r4.s64 = ctx.r11.s64 + -2392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822BBF74;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bbfd4
	if (ctx.cr6.eq) goto loc_822BBFD4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,19556
	ctx.r4.s64 = ctx.r11.s64 + 19556;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822BBF90;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bbfd4
	if (ctx.cr6.eq) goto loc_822BBFD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-2396
	ctx.r4.s64 = ctx.r11.s64 + -2396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822BBFAC;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bbfd4
	if (ctx.cr6.eq) goto loc_822BBFD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-2404
	ctx.r4.s64 = ctx.r11.s64 + -2404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822BBFC8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bbfd4
	if (ctx.cr6.eq) goto loc_822BBFD4;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_822BBFD4:
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r11,22140
	ctx.r11.s64 = ctx.r11.s64 + 22140;
	// stw r28,-1260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1260, ctx.r28.u32);
	// stw r28,-1256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1256, ctx.r28.u32);
	// stw r28,-1252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1252, ctx.r28.u32);
	// stw r28,-1248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1248, ctx.r28.u32);
	// beq cr6,0x822bc018
	if (ctx.cr6.eq) goto loc_822BC018;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,-1260
	ctx.r9.s64 = ctx.r11.s64 + -1260;
	// stw r10,-1260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1260, ctx.r10.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,-1256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1256, ctx.r8.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r7,-1252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1252, ctx.r7.u32);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r6,-1248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1248, ctx.r6.u32);
loc_822BC018:
	// lwz r10,-1260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1260);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bc030
	if (!ctx.cr6.eq) goto loc_822BC030;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-4040
	ctx.r10.s64 = ctx.r10.s64 + -4040;
	// stw r10,-1260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1260, ctx.r10.u32);
loc_822BC030:
	// lwz r10,-1252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1252);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bc050
	if (!ctx.cr6.eq) goto loc_822BC050;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r10,91
	ctx.r10.s64 = 91;
	// addi r9,r9,-2976
	ctx.r9.s64 = ctx.r9.s64 + -2976;
	// stw r10,-1248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1248, ctx.r10.u32);
	// stw r9,-1252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1252, ctx.r9.u32);
loc_822BC050:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r28.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,8828
	ctx.r4.s64 = ctx.r10.s64 + 8828;
	// bl 0x822bbd08
	ctx.lr = 0x822BC070;
	sub_822BBD08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBEE8) {
	__imp__sub_822BBEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,22132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22132, ctx.r10.u32);
	// b 0x822f0c30
	sub_822F0C30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC078) {
	__imp__sub_822BC078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// lwz r3,22136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22136);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BC088) {
	__imp__sub_822BC088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BC094) {
	__imp__sub_822BC094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC098) {
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
	// bl 0x822f0b88
	ctx.lr = 0x822BC0B0;
	sub_822F0B88(ctx, base);
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// li r5,840
	ctx.r5.s64 = 840;
	// addi r4,r11,-12728
	ctx.r4.s64 = ctx.r11.s64 + -12728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822BC0C4;
	sub_82635430(ctx, base);
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// lwz r9,22136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22136);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x822f0c18
	ctx.lr = 0x822BC0D4;
	sub_822F0C18(ctx, base);
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

PPC_WEAK_FUNC(sub_822BC098) {
	__imp__sub_822BC098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// lwz r3,22132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22132);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BC0E8) {
	__imp__sub_822BC0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BC0F4) {
	__imp__sub_822BC0F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC0F8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bc10c
	if (!ctx.cr6.eq) goto loc_822BC10C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
loc_822BC10C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// addi r3,r10,21956
	ctx.r3.s64 = ctx.r10.s64 + 21956;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x822eca80
	sub_822ECA80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC0F8) {
	__imp__sub_822BC0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BC124) {
	__imp__sub_822BC124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822BC130;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r5,79
	ctx.r5.s64 = 79;
	// addi r3,r11,-3080
	ctx.r3.s64 = ctx.r11.s64 + -3080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ebf30
	ctx.lr = 0x822BC158;
	sub_822EBF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822bc278
	if (!ctx.cr6.gt) goto loc_822BC278;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stbx r28,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r28.u8);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bc1a0
	if (ctx.cr6.eq) goto loc_822BC1A0;
loc_822BC178:
	// bl 0x82636998
	ctx.lr = 0x822BC17C;
	sub_82636998(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822bc1a0
	if (ctx.cr6.eq) goto loc_822BC1A0;
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bc178
	if (!ctx.cr6.eq) goto loc_822BC178;
loc_822BC1A0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc204
	if (ctx.cr6.eq) goto loc_822BC204;
loc_822BC1B0:
	// bl 0x82636998
	ctx.lr = 0x822BC1B4;
	sub_82636998(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822bc204
	if (!ctx.cr6.eq) goto loc_822BC204;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82636998
	ctx.lr = 0x822BC1D4;
	sub_82636998(ctx, base);
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r9,r9,0,29,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bc1f8
	if (!ctx.cr6.eq) goto loc_822BC1F8;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x822bc278
	if (!ctx.cr6.eq) goto loc_822BC278;
loc_822BC1F8:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bc1b0
	if (!ctx.cr6.eq) goto loc_822BC1B0;
loc_822BC204:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_822BC20C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bc20c
	if (!ctx.cr6.eq) goto loc_822BC20C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x822bc278
	if (ctx.cr6.lt) goto loc_822BC278;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bgt cr6,0x822bc278
	if (ctx.cr6.gt) goto loc_822BC278;
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r11,21956
	ctx.r7.s64 = ctx.r11.s64 + 21956;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,21956(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21956);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc26c
	if (ctx.cr6.eq) goto loc_822BC26C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-3656
	ctx.r5.s64 = ctx.r11.s64 + -3656;
	// bl 0x822eca80
	ctx.lr = 0x822BC264;
	sub_822ECA80(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822BC26C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-2376
	ctx.r5.s64 = ctx.r11.s64 + -2376;
	// bl 0x822eca80
	ctx.lr = 0x822BC278;
	sub_822ECA80(ctx, base);
loc_822BC278:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC128) {
	__imp__sub_822BC128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822BC288;
	__savegprlr_28(ctx, base);
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r10,-1892
	ctx.r4.s64 = ctx.r10.s64 + -1892;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x822bbd08
	ctx.lr = 0x822BC2AC;
	sub_822BBD08(ctx, base);
	// bl 0x822f0d80
	ctx.lr = 0x822BC2B0;
	sub_822F0D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bc314
	if (!ctx.cr6.eq) goto loc_822BC314;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,-2236
	ctx.r30.s64 = ctx.r11.s64 + -2236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f0db0
	ctx.lr = 0x822BC2C8;
	sub_822F0DB0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bgt cr6,0x822bc314
	if (ctx.cr6.gt) goto loc_822BC314;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,-2252
	ctx.r31.s64 = ctx.r11.s64 + -2252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f0db0
	ctx.lr = 0x822BC2E0;
	sub_822F0DB0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// ble cr6,0x822bc308
	if (!ctx.cr6.gt) goto loc_822BC308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f1010
	ctx.lr = 0x822BC2F4;
	sub_822F1010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bc308
	if (!ctx.cr6.eq) goto loc_822BC308;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-2308
	ctx.r3.s64 = ctx.r11.s64 + -2308;
	// b 0x822bc310
	goto loc_822BC310;
loc_822BC308:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-2360
	ctx.r3.s64 = ctx.r11.s64 + -2360;
loc_822BC310:
	// bl 0x822ebbc8
	ctx.lr = 0x822BC314;
	sub_822EBBC8(ctx, base);
loc_822BC314:
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x822bc128
	ctx.lr = 0x822BC320;
	sub_822BC128(ctx, base);
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,22132
	ctx.r31.s64 = ctx.r11.s64 + 22132;
	// addi r28,r10,8828
	ctx.r28.s64 = ctx.r10.s64 + 8828;
	// lwz r11,-1248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bc348
	if (ctx.cr6.eq) goto loc_822BC348;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,-2688
	ctx.r6.s64 = ctx.r11.s64 + -2688;
	// b 0x822bc34c
	goto loc_822BC34C;
loc_822BC348:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_822BC34C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1924
	ctx.r5.s64 = ctx.r11.s64 + -1924;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822eca80
	ctx.lr = 0x822BC360;
	sub_822ECA80(ctx, base);
	// lbz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,-1252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1252);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// bl 0x822f0cd0
	ctx.lr = 0x822BC3A0;
	sub_822F0CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bc3e4
	if (ctx.cr6.eq) goto loc_822BC3E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bc3cc
	if (ctx.cr6.eq) goto loc_822BC3CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,17456
	ctx.r4.s64 = ctx.r11.s64 + 17456;
	// bl 0x822bbd08
	ctx.lr = 0x822BC3C4;
	sub_822BBD08(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BC3CC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-1956
	ctx.r3.s64 = ctx.r11.s64 + -1956;
	// bl 0x822bbe40
	ctx.lr = 0x822BC3DC;
	sub_822BBE40(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BC3E4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,404
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 404, ctx.xer);
	// bne cr6,0x822bc410
	if (!ctx.cr6.eq) goto loc_822BC410;
	// bl 0x82634d40
	ctx.lr = 0x822BC3F8;
	sub_82634D40(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-1984
	ctx.r4.s64 = ctx.r11.s64 + -1984;
	// bl 0x822bbd08
	ctx.lr = 0x822BC408;
	sub_822BBD08(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BC410:
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// beq cr6,0x822bc450
	if (ctx.cr6.eq) goto loc_822BC450;
	// bl 0x82634d40
	ctx.lr = 0x822BC41C;
	sub_82634D40(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,429
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 429, ctx.xer);
	// bne cr6,0x822bc43c
	if (!ctx.cr6.eq) goto loc_822BC43C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-2028
	ctx.r3.s64 = ctx.r11.s64 + -2028;
	// bl 0x822bbe40
	ctx.lr = 0x822BC434;
	sub_822BBE40(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BC43C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-2052
	ctx.r3.s64 = ctx.r11.s64 + -2052;
	// bl 0x822bbe40
	ctx.lr = 0x822BC448;
	sub_822BBE40(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BC450:
	// li r7,96
	ctx.r7.s64 = 96;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// bl 0x822bb4c0
	ctx.lr = 0x822BC464;
	sub_822BB4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82634d40
	ctx.lr = 0x822BC470;
	sub_82634D40(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822bc490
	if (ctx.cr6.eq) goto loc_822BC490;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,8796
	ctx.r3.s64 = ctx.r11.s64 + 8796;
	// bl 0x822bbe40
	ctx.lr = 0x822BC488;
	sub_822BBE40(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BC490:
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r5,-1240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1240);
	// lwz r4,-1244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1244);
	// bl 0x822bbc08
	ctx.lr = 0x822BC4A0;
	sub_822BBC08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bc4bc
	if (ctx.cr6.eq) goto loc_822BC4BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-2100
	ctx.r3.s64 = ctx.r11.s64 + -2100;
	// bl 0x822bbe40
	ctx.lr = 0x822BC4B4;
	sub_822BBE40(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BC4BC:
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r5,-1240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1240);
	// lwz r4,-1244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1244);
	// bl 0x822bbc88
	ctx.lr = 0x822BC4CC;
	sub_822BBC88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822f0b88
	ctx.lr = 0x822BC4D4;
	sub_822F0B88(ctx, base);
	// addi r3,r31,-1108
	ctx.r3.s64 = ctx.r31.s64 + -1108;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// li r5,932
	ctx.r5.s64 = 932;
	// bl 0x82635430
	ctx.lr = 0x822BC4E4;
	sub_82635430(ctx, base);
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r10,-12728
	ctx.r30.s64 = ctx.r10.s64 + -12728;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,588
	ctx.r6.s64 = ctx.r1.s64 + 588;
	// addi r31,r11,8796
	ctx.r31.s64 = ctx.r11.s64 + 8796;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r29,836(r30)
	PPC_STORE_U32(ctx.r30.u32 + 836, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x822eca80
	ctx.lr = 0x822BC514;
	sub_822ECA80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r1,580
	ctx.r6.s64 = ctx.r1.s64 + 580;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x822eca80
	ctx.lr = 0x822BC528;
	sub_822ECA80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r1,817
	ctx.r6.s64 = ctx.r1.s64 + 817;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x822eca80
	ctx.lr = 0x822BC53C;
	sub_822ECA80(ctx, base);
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// stw r11,604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 604, ctx.r11.u32);
	// bl 0x822f0c18
	ctx.lr = 0x822BC548;
	sub_822F0C18(ctx, base);
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x822bb298
	ctx.lr = 0x822BC554;
	sub_822BB298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822bc5ec
	if (!ctx.cr6.gt) goto loc_822BC5EC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r1,580
	ctx.r11.s64 = ctx.r1.s64 + 580;
	// addi r10,r10,19556
	ctx.r10.s64 = ctx.r10.s64 + 19556;
loc_822BC568:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822bc58c
	if (ctx.cr6.eq) goto loc_822BC58C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bc568
	if (ctx.cr6.eq) goto loc_822BC568;
loc_822BC58C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bc59c
	if (ctx.cr6.eq) goto loc_822BC59C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// b 0x822bc5a4
	goto loc_822BC5A4;
loc_822BC59C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r11,19564
	ctx.r7.s64 = ctx.r11.s64 + 19564;
loc_822BC5A4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,588
	ctx.r6.s64 = ctx.r1.s64 + 588;
	// addi r5,r11,-2132
	ctx.r5.s64 = ctx.r11.s64 + -2132;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822eca80
	ctx.lr = 0x822BC5BC;
	sub_822ECA80(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822bbd08
	ctx.lr = 0x822BC5C8;
	sub_822BBD08(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// lwz r6,620(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// addi r3,r10,-2188
	ctx.r3.s64 = ctx.r10.s64 + -2188;
	// addi r5,r1,580
	ctx.r5.s64 = ctx.r1.s64 + 580;
	// addi r4,r1,588
	ctx.r4.s64 = ctx.r1.s64 + 588;
	// bl 0x822ebbc8
	ctx.lr = 0x822BC5E4;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BC5EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-2224
	ctx.r4.s64 = ctx.r11.s64 + -2224;
	// bl 0x822bbd08
	ctx.lr = 0x822BC5FC;
	sub_822BBD08(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC280) {
	__imp__sub_822BC280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BC604) {
	__imp__sub_822BC604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634430
	ctx.lr = 0x822BC610;
	__savegprlr_18(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r19,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r19.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// clrldi r23,r4,32
	ctx.r23.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// bl 0x822f0db0
	ctx.lr = 0x822BC638;
	sub_822F0DB0(ctx, base);
	// cmpd cr6,r3,r23
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r23.s64, ctx.xer);
	// bne cr6,0x822bc85c
	if (!ctx.cr6.eq) goto loc_822BC85C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235b930
	ctx.lr = 0x822BC648;
	sub_8235B930(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235ba30
	ctx.lr = 0x822BC654;
	sub_8235BA30(ctx, base);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bc768
	if (ctx.cr6.eq) goto loc_822BC768;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r25,1
	ctx.r25.s64 = 65536;
	// lis r21,-32041
	ctx.r21.s64 = -2099838976;
	// addi r28,r11,20880
	ctx.r28.s64 = ctx.r11.s64 + 20880;
	// addi r29,r10,-12728
	ctx.r29.s64 = ctx.r10.s64 + -12728;
	// addi r26,r9,-1864
	ctx.r26.s64 = ctx.r9.s64 + -1864;
loc_822BC680:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x822bc694
	if (ctx.cr6.eq) goto loc_822BC694;
	// lwz r11,22132(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 22132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc854
	if (!ctx.cr6.eq) goto loc_822BC854;
loc_822BC694:
	// subf r11,r30,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// blt cr6,0x822bc6a8
	if (ctx.cr6.lt) goto loc_822BC6A8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_822BC6A8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822f0ee8
	ctx.lr = 0x822BC6BC;
	sub_822F0EE8(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x822bc868
	if (!ctx.cr6.eq) goto loc_822BC868;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822bc700
	if (!ctx.cr6.eq) goto loc_822BC700;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r8,r28,4
	ctx.r8.s64 = ctx.r28.s64 + 4;
loc_822BC6D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822bc6f8
	if (!ctx.cr0.eq) goto loc_822BC6F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822bc6d8
	if (!ctx.cr6.eq) goto loc_822BC6D8;
loc_822BC6F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bc854
	if (!ctx.cr6.eq) goto loc_822BC854;
loc_822BC700:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235c820
	ctx.lr = 0x822BC710;
	sub_8235C820(ctx, base);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x822bc760
	if (ctx.cr6.eq) goto loc_822BC760;
	// bl 0x822f0b88
	ctx.lr = 0x822BC720;
	sub_822F0B88(ctx, base);
	// stw r30,600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 600, ctx.r30.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r27,604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 604, ctx.r27.u32);
	// beq cr6,0x822bc748
	if (ctx.cr6.eq) goto loc_822BC748;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// tdllei r23,0
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// divdu r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 / ctx.r23.u64;
	// stw r9,608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 608, ctx.r9.u32);
	// b 0x822bc750
	goto loc_822BC750;
loc_822BC748:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 608, ctx.r19.u32);
loc_822BC750:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x822f0c18
	ctx.lr = 0x822BC760;
	sub_822F0C18(ctx, base);
loc_822BC760:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822bc680
	if (ctx.cr6.lt) goto loc_822BC680;
loc_822BC768:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235ca20
	ctx.lr = 0x822BC774;
	sub_8235CA20(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235b940
	ctx.lr = 0x822BC77C;
	sub_8235B940(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,111
	ctx.r11.s64 = ctx.r1.s64 + 111;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-2996
	ctx.r10.s64 = ctx.r10.s64 + -2996;
loc_822BC794:
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm r4,r7,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lbz r3,2(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// clrlwi r9,r7,28
	ctx.r9.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r7,r6,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r31,r5,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r30,r3,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// lbzx r4,r4,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r3,r3,28
	ctx.r3.u64 = ctx.r3.u32 & 0xF;
	// lbzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r31,r31,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r30,r30,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// lbzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// stb r5,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// stbu r3,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822bc794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BC794;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stb r19,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r19.u8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_822BC820:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822bc844
	if (ctx.cr6.eq) goto loc_822BC844;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bc820
	if (ctx.cr6.eq) goto loc_822BC820;
loc_822BC844:
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822BC854:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235b940
	ctx.lr = 0x822BC85C;
	sub_8235B940(ctx, base);
loc_822BC85C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822BC868:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// bl 0x8235b940
	ctx.lr = 0x822BC878;
	sub_8235B940(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC608) {
	__imp__sub_822BC608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BC884) {
	__imp__sub_822BC884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822BC890;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822f1078
	ctx.lr = 0x822BC8A8;
	sub_822F1078(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bc918
	if (ctx.cr6.eq) goto loc_822BC918;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// addi r28,r11,-11888
	ctx.r28.s64 = ctx.r11.s64 + -11888;
loc_822BC8BC:
	// subf r31,r29,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r29.s64;
	// cmplwi cr6,r31,32768
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32768, ctx.xer);
	// blt cr6,0x822bc8d0
	if (ctx.cr6.lt) goto loc_822BC8D0;
	// lis r31,0
	ctx.r31.s64 = 0;
	// ori r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 32768;
loc_822BC8D0:
	// clrldi r30,r29,32
	ctx.r30.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f0ee8
	ctx.lr = 0x822BC8E8;
	sub_822F0EE8(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x822bc924
	if (!ctx.cr6.eq) goto loc_822BC924;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822f0e28
	ctx.lr = 0x822BC904;
	sub_822F0E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bc924
	if (!ctx.cr6.eq) goto loc_822BC924;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822bc8bc
	if (ctx.cr6.lt) goto loc_822BC8BC;
loc_822BC918:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822BC924:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC888) {
	__imp__sub_822BC888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263442c
	ctx.lr = 0x822BC938;
	__savegprlr_17(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r23,r11,22132
	ctx.r23.s64 = ctx.r11.s64 + 22132;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// addi r5,r10,-1340
	ctx.r5.s64 = ctx.r10.s64 + -1340;
	// addi r3,r23,-1236
	ctx.r3.s64 = ctx.r23.s64 + -1236;
	// addi r8,r26,12
	ctx.r8.s64 = ctx.r26.s64 + 12;
	// addi r6,r26,48
	ctx.r6.s64 = ctx.r26.s64 + 48;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x822eca80
	ctx.lr = 0x822BC96C;
	sub_822ECA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r17,r11,-1356
	ctx.r17.s64 = ctx.r11.s64 + -1356;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822f0db0
	ctx.lr = 0x822BC97C;
	sub_822F0DB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-1372
	ctx.r30.s64 = ctx.r11.s64 + -1372;
	// addi r5,r23,-132
	ctx.r5.s64 = ctx.r23.s64 + -132;
	// li r6,127
	ctx.r6.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x822f0ee8
	ctx.lr = 0x822BC9A0;
	sub_822F0EE8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822bc9b8
	if (!ctx.cr6.gt) goto loc_822BC9B8;
	// addi r11,r23,-132
	ctx.r11.s64 = ctx.r23.s64 + -132;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stbx r25,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r25.u8);
loc_822BC9B8:
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// ble cr6,0x822bcaac
	if (!ctx.cr6.gt) goto loc_822BCAAC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822bcaac
	if (!ctx.cr6.gt) goto loc_822BCAAC;
	// addi r10,r23,-1236
	ctx.r10.s64 = ctx.r23.s64 + -1236;
	// addi r11,r23,-132
	ctx.r11.s64 = ctx.r23.s64 + -132;
loc_822BC9D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822bc9f4
	if (ctx.cr6.eq) goto loc_822BC9F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bc9d0
	if (ctx.cr6.eq) goto loc_822BC9D0;
loc_822BC9F4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bcaac
	if (!ctx.cr6.eq) goto loc_822BCAAC;
	// lwz r5,44(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpd cr6,r28,r5
	ctx.cr6.compare<int64_t>(ctx.r28.s64, ctx.r5.s64, ctx.xer);
	// bgt cr6,0x822bcaac
	if (ctx.cr6.gt) goto loc_822BCAAC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-1420
	ctx.r3.s64 = ctx.r11.s64 + -1420;
	// bl 0x822ebbc8
	ctx.lr = 0x822BCA1C;
	sub_822EBBC8(ctx, base);
loc_822BCA1C:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addis r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 524288;
	// bl 0x822f10c8
	ctx.lr = 0x822BCA2C;
	sub_822F10C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x822bcb28
	if (ctx.cr6.lt) goto loc_822BCB28;
	// cmpd cr6,r3,r30
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r30.s64, ctx.xer);
	// bge cr6,0x822bca74
	if (!ctx.cr6.lt) goto loc_822BCA74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,-2252
	ctx.r29.s64 = ctx.r11.s64 + -2252;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f0db0
	ctx.lr = 0x822BCA50;
	sub_822F0DB0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// ble cr6,0x822bca74
	if (!ctx.cr6.gt) goto loc_822BCA74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1480
	ctx.r3.s64 = ctx.r11.s64 + -1480;
	// bl 0x822ebbc8
	ctx.lr = 0x822BCA64;
	sub_822EBBC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f1078
	ctx.lr = 0x822BCA6C;
	sub_822F1078(ctx, base);
	// bl 0x822f10c8
	ctx.lr = 0x822BCA70;
	sub_822F10C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822BCA74:
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(ctx.r31.s64, 0, ctx.xer);
	// blt cr6,0x822bcb28
	if (ctx.cr6.lt) goto loc_822BCB28;
	// cmpd cr6,r31,r30
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r30.s64, ctx.xer);
	// bge cr6,0x822bcb28
	if (!ctx.cr6.lt) goto loc_822BCB28;
	// sradi r11,r30,9
	ctx.xer.ca = (ctx.r30.s64 < 0) & ((ctx.r30.u64 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r30.s64 >> 9;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rldicl r11,r11,10,54
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0x3FF;
	// addi r3,r10,-1528
	ctx.r3.s64 = ctx.r10.s64 + -1528;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sradi r4,r9,10
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x3FF) != 0);
	ctx.r4.s64 = ctx.r9.s64 >> 10;
	// bl 0x822bbe40
	ctx.lr = 0x822BCAA0;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822BCAAC:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822f1078
	ctx.lr = 0x822BCAB4;
	sub_822F1078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bcad4
	if (ctx.cr6.eq) goto loc_822BCAD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1568
	ctx.r3.s64 = ctx.r11.s64 + -1568;
	// bl 0x822bbe40
	ctx.lr = 0x822BCAC8;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822BCAD4:
	// addi r11,r23,-1236
	ctx.r11.s64 = ctx.r23.s64 + -1236;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822BCAE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bcae0
	if (!ctx.cr6.eq) goto loc_822BCAE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r23,-1236
	ctx.r4.s64 = ctx.r23.s64 + -1236;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822f0f80
	ctx.lr = 0x822BCB08;
	sub_822F0F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bca1c
	if (ctx.cr6.eq) goto loc_822BCA1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1596
	ctx.r3.s64 = ctx.r11.s64 + -1596;
	// bl 0x822bbe40
	ctx.lr = 0x822BCB1C;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822BCB28:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r11,-1608
	ctx.r4.s64 = ctx.r11.s64 + -1608;
	// bl 0x822bbd08
	ctx.lr = 0x822BCB38;
	sub_822BBD08(ctx, base);
	// rotlwi r30,r28,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r4,44(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bbdb8
	ctx.lr = 0x822BCB48;
	sub_822BBDB8(ctx, base);
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822bcd10
	if (!ctx.cr6.lt) goto loc_822BCD10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32041
	ctx.r7.s64 = -2099838976;
	// lis r20,4
	ctx.r20.s64 = 262144;
	// li r22,96
	ctx.r22.s64 = 96;
	// addi r21,r10,-1656
	ctx.r21.s64 = ctx.r10.s64 + -1656;
	// addi r19,r9,-1664
	ctx.r19.s64 = ctx.r9.s64 + -1664;
	// addi r24,r8,-1688
	ctx.r24.s64 = ctx.r8.s64 + -1688;
loc_822BCB7C:
	// lwz r10,22132(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 22132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822bcd1c
	if (!ctx.cr6.eq) goto loc_822BCD1C;
	// subf r28,r30,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x822bcb98
	if (ctx.cr6.lt) goto loc_822BCB98;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_822BCB98:
	// add r31,r28,r30
	ctx.r31.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,320
	ctx.r4.s64 = 320;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822eca80
	ctx.lr = 0x822BCBB8;
	sub_822ECA80(ctx, base);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r3,-1252(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -1252);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// ori r6,r6,1024
	ctx.r6.u64 = ctx.r6.u64 | 1024;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r26,113
	ctx.r4.s64 = ctx.r26.s64 + 113;
	// bl 0x822f0cd0
	ctx.lr = 0x822BCBF0;
	sub_822F0CD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bcc54
	if (!ctx.cr6.eq) goto loc_822BCC54;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,206
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 206, ctx.xer);
	// bne cr6,0x822bcc54
	if (!ctx.cr6.eq) goto loc_822BCC54;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x822bcc54
	if (!ctx.cr6.eq) goto loc_822BCC54;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// bl 0x822f0e28
	ctx.lr = 0x822BCC28;
	sub_822F0E28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82634d40
	ctx.lr = 0x822BCC34;
	sub_82634D40(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822bcd28
	if (!ctx.cr6.eq) goto loc_822BCD28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bl 0x822bbdb8
	ctx.lr = 0x822BCC50;
	sub_822BBDB8(ctx, base);
	// b 0x822bcd00
	goto loc_822BCD00;
loc_822BCC54:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82634d40
	ctx.lr = 0x822BCC5C;
	sub_82634D40(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bcd1c
	if (!ctx.cr6.eq) goto loc_822BCD1C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822bcc8c
	if (!ctx.cr6.eq) goto loc_822BCC8C;
	// cmpwi cr6,r4,401
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 401, ctx.xer);
	// beq cr6,0x822bcd44
	if (ctx.cr6.eq) goto loc_822BCD44;
	// cmpwi cr6,r4,404
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 404, ctx.xer);
	// beq cr6,0x822bcd44
	if (ctx.cr6.eq) goto loc_822BCD44;
	// cmpwi cr6,r4,416
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 416, ctx.xer);
	// beq cr6,0x822bcd4c
	if (ctx.cr6.eq) goto loc_822BCD4C;
loc_822BCC8C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// bgt cr6,0x822bcd90
	if (ctx.cr6.gt) goto loc_822BCD90;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x822bcca8
	if (!ctx.cr6.eq) goto loc_822BCCA8;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_822BCCA8:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822BCCBC;
	sub_822EBBC8(ctx, base);
	// bl 0x822f0cf8
	ctx.lr = 0x822BCCC0;
	sub_822F0CF8(ctx, base);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822bcd00
	if (!ctx.cr6.gt) goto loc_822BCD00;
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
loc_822BCCDC:
	// lwz r11,22132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bcd00
	if (!ctx.cr6.eq) goto loc_822BCD00;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822eac98
	ctx.lr = 0x822BCCF0;
	sub_822EAC98(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822bccdc
	if (ctx.cr6.lt) goto loc_822BCCDC;
loc_822BCD00:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lis r7,-32041
	ctx.r7.s64 = -2099838976;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822bcb7c
	if (ctx.cr6.lt) goto loc_822BCB7C;
loc_822BCD10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822BCD1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822BCD28:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-1720
	ctx.r3.s64 = ctx.r11.s64 + -1720;
	// bl 0x822bbe40
	ctx.lr = 0x822BCD38;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822BCD44:
	// cmpwi cr6,r4,416
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 416, ctx.xer);
	// bne cr6,0x822bcd58
	if (!ctx.cr6.eq) goto loc_822BCD58;
loc_822BCD4C:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822f1078
	ctx.lr = 0x822BCD54;
	sub_822F1078(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_822BCD58:
	// cmpwi cr6,r4,401
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 401, ctx.xer);
	// bne cr6,0x822bcd78
	if (!ctx.cr6.eq) goto loc_822BCD78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1756
	ctx.r3.s64 = ctx.r11.s64 + -1756;
	// bl 0x822bbe40
	ctx.lr = 0x822BCD6C;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822BCD78:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1796
	ctx.r3.s64 = ctx.r11.s64 + -1796;
	// bl 0x822bbe40
	ctx.lr = 0x822BCD84;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822BCD90:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822bcdb0
	if (!ctx.cr6.eq) goto loc_822BCDB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1836
	ctx.r3.s64 = ctx.r11.s64 + -1836;
	// bl 0x822bbe40
	ctx.lr = 0x822BCDA4;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822BCDB0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-1856
	ctx.r3.s64 = ctx.r11.s64 + -1856;
	// bl 0x822bbe40
	ctx.lr = 0x822BCDC0;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC930) {
	__imp__sub_822BC930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BCDCC) {
	__imp__sub_822BCDCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822BCDD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-2236
	ctx.r31.s64 = ctx.r11.s64 + -2236;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// bl 0x822f0db0
	ctx.lr = 0x822BCDF8;
	sub_822F0DB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// addi r30,r11,-2252
	ctx.r30.s64 = ctx.r11.s64 + -2252;
	// ble cr6,0x822bce60
	if (!ctx.cr6.gt) goto loc_822BCE60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x822f1078
	ctx.lr = 0x822BCE14;
	sub_822F1078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bce34
	if (ctx.cr6.eq) goto loc_822BCE34;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1012
	ctx.r3.s64 = ctx.r11.s64 + -1012;
	// bl 0x822bbe40
	ctx.lr = 0x822BCE28;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822BCE34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f1010
	ctx.lr = 0x822BCE40;
	sub_822F1010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bce60
	if (ctx.cr6.eq) goto loc_822BCE60;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1060
	ctx.r3.s64 = ctx.r11.s64 + -1060;
	// bl 0x822bbe40
	ctx.lr = 0x822BCE54;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822BCE60:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r29,r11,-1356
	ctx.r29.s64 = ctx.r11.s64 + -1356;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f1010
	ctx.lr = 0x822BCE74;
	sub_822F1010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bce9c
	if (!ctx.cr6.eq) goto loc_822BCE9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r27,48
	ctx.r5.s64 = ctx.r27.s64 + 48;
	// bl 0x822bc608
	ctx.lr = 0x822BCE94;
	sub_822BC608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bcfc8
	if (ctx.cr6.eq) goto loc_822BCFC8;
loc_822BCE9C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1096
	ctx.r3.s64 = ctx.r11.s64 + -1096;
	// bl 0x822ebbc8
	ctx.lr = 0x822BCEA8;
	sub_822EBBC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f0db0
	ctx.lr = 0x822BCEB0;
	sub_822F0DB0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x822bcedc
	if (ctx.cr6.lt) goto loc_822BCEDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f0db0
	ctx.lr = 0x822BCEC0;
	sub_822F0DB0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x822bced8
	if (!ctx.cr6.lt) goto loc_822BCED8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822f1010
	ctx.lr = 0x822BCED4;
	sub_822F1010(ctx, base);
	// b 0x822bcedc
	goto loc_822BCEDC;
loc_822BCED8:
	// bl 0x822f1078
	ctx.lr = 0x822BCEDC;
	sub_822F1078(ctx, base);
loc_822BCEDC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822bcf64
	if (ctx.cr6.eq) goto loc_822BCF64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f0db0
	ctx.lr = 0x822BCEEC;
	sub_822F0DB0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x822bcf20
	if (!ctx.cr6.lt) goto loc_822BCF20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1010
	ctx.lr = 0x822BCF00;
	sub_822F1010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bcf20
	if (!ctx.cr6.eq) goto loc_822BCF20;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1136
	ctx.r3.s64 = ctx.r11.s64 + -1136;
	// bl 0x822bbe40
	ctx.lr = 0x822BCF14;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822BCF20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f0db0
	ctx.lr = 0x822BCF28;
	sub_822F0DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// ble cr6,0x822bcf64
	if (!ctx.cr6.gt) goto loc_822BCF64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822bc888
	ctx.lr = 0x822BCF44;
	sub_822BC888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bcf64
	if (!ctx.cr6.eq) goto loc_822BCF64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1188
	ctx.r3.s64 = ctx.r11.s64 + -1188;
	// bl 0x822bbe40
	ctx.lr = 0x822BCF58;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822BCF64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,44(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x822f0db0
	ctx.lr = 0x822BCF70;
	sub_822F0DB0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpd cr6,r3,r30
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r30.s64, ctx.xer);
	// bne cr6,0x822bcfd4
	if (!ctx.cr6.eq) goto loc_822BCFD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822bc888
	ctx.lr = 0x822BCF8C;
	sub_822BC888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bcfd4
	if (!ctx.cr6.eq) goto loc_822BCFD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r27,48
	ctx.r5.s64 = ctx.r27.s64 + 48;
	// bl 0x822bc608
	ctx.lr = 0x822BCFAC;
	sub_822BC608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bcfd4
	if (!ctx.cr6.eq) goto loc_822BCFD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1236
	ctx.r3.s64 = ctx.r11.s64 + -1236;
	// bl 0x822ebbc8
	ctx.lr = 0x822BCFC0;
	sub_822EBBC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f1078
	ctx.lr = 0x822BCFC8;
	sub_822F1078(ctx, base);
loc_822BCFC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822BCFD4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1328
	ctx.r3.s64 = ctx.r11.s64 + -1328;
	// bl 0x822bbe40
	ctx.lr = 0x822BCFE0;
	sub_822BBE40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BCDD0) {
	__imp__sub_822BCDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BCFEC) {
	__imp__sub_822BCFEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCFF0) {
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
	// stwu r1,-2000(r1)
	ea = -2000 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822f0b88
	ctx.lr = 0x822BD008;
	sub_822F0B88(ctx, base);
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r11,22132
	ctx.r31.s64 = ctx.r11.s64 + 22132;
	// li r5,932
	ctx.r5.s64 = 932;
	// addi r4,r31,-1108
	ctx.r4.s64 = ctx.r31.s64 + -1108;
	// bl 0x82635430
	ctx.lr = 0x822BD020;
	sub_82635430(ctx, base);
	// lwz r30,-4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x822f0c18
	ctx.lr = 0x822BD028;
	sub_822F0C18(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822bd040
	if (!ctx.cr6.eq) goto loc_822BD040;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-592
	ctx.r3.s64 = ctx.r11.s64 + -592;
	// bl 0x822bbe40
	ctx.lr = 0x822BD03C;
	sub_822BBE40(ctx, base);
	// b 0x822bd234
	goto loc_822BD234;
loc_822BD040:
	// bl 0x822f0d80
	ctx.lr = 0x822BD044;
	sub_822F0D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bd05c
	if (ctx.cr6.eq) goto loc_822BD05C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-616
	ctx.r3.s64 = ctx.r11.s64 + -616;
	// bl 0x822bbe40
	ctx.lr = 0x822BD058;
	sub_822BBE40(ctx, base);
	// b 0x822bd234
	goto loc_822BD234;
loc_822BD05C:
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x822bc128
	ctx.lr = 0x822BD068;
	sub_822BC128(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// addi r3,r11,-648
	ctx.r3.s64 = ctx.r11.s64 + -648;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// bl 0x822ebbc8
	ctx.lr = 0x822BD07C;
	sub_822EBBC8(ctx, base);
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822bc930
	ctx.lr = 0x822BD088;
	sub_822BC930(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822bd0a4
	if (!ctx.cr6.eq) goto loc_822BD0A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,-696
	ctx.r4.s64 = ctx.r11.s64 + -696;
	// bl 0x822bbd08
	ctx.lr = 0x822BD0A0;
	sub_822BBD08(ctx, base);
	// b 0x822bd234
	goto loc_822BD234;
loc_822BD0A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bd234
	if (!ctx.cr6.eq) goto loc_822BD234;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r4,r11,-720
	ctx.r4.s64 = ctx.r11.s64 + -720;
	// bl 0x822bbd08
	ctx.lr = 0x822BD0BC;
	sub_822BBD08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x822bbdb8
	ctx.lr = 0x822BD0C8;
	sub_822BBDB8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r30,r11,-1356
	ctx.r30.s64 = ctx.r11.s64 + -1356;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// bl 0x822bc608
	ctx.lr = 0x822BD0F0;
	sub_822BC608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bd158
	if (ctx.cr6.eq) goto loc_822BD158;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bd118
	if (ctx.cr6.eq) goto loc_822BD118;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,17456
	ctx.r4.s64 = ctx.r11.s64 + 17456;
	// bl 0x822bbd08
	ctx.lr = 0x822BD114;
	sub_822BBD08(ctx, base);
	// b 0x822bd234
	goto loc_822BD234;
loc_822BD118:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bd134
	if (ctx.cr6.eq) goto loc_822BD134;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-744
	ctx.r3.s64 = ctx.r11.s64 + -744;
	// bl 0x822bbe40
	ctx.lr = 0x822BD130;
	sub_822BBE40(ctx, base);
	// b 0x822bd234
	goto loc_822BD234;
loc_822BD134:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1078
	ctx.lr = 0x822BD13C;
	sub_822F1078(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1372
	ctx.r3.s64 = ctx.r11.s64 + -1372;
	// bl 0x822f1078
	ctx.lr = 0x822BD148;
	sub_822F1078(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,-796
	ctx.r3.s64 = ctx.r10.s64 + -796;
	// bl 0x822bbe40
	ctx.lr = 0x822BD154;
	sub_822BBE40(ctx, base);
	// b 0x822bd234
	goto loc_822BD234;
loc_822BD158:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r4,r11,-832
	ctx.r4.s64 = ctx.r11.s64 + -832;
	// bl 0x822bbd08
	ctx.lr = 0x822BD168;
	sub_822BBD08(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822bcdd0
	ctx.lr = 0x822BD170;
	sub_822BCDD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bd234
	if (!ctx.cr6.eq) goto loc_822BD234;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-1372
	ctx.r3.s64 = ctx.r11.s64 + -1372;
	// bl 0x822f1078
	ctx.lr = 0x822BD184;
	sub_822F1078(ctx, base);
	// bl 0x822ebdb0
	ctx.lr = 0x822BD188;
	sub_822EBDB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// addi r5,r1,449
	ctx.r5.s64 = ctx.r1.s64 + 449;
	// addi r6,r1,1360
	ctx.r6.s64 = ctx.r1.s64 + 1360;
	// li r7,608
	ctx.r7.s64 = 608;
	// bl 0x822cff80
	ctx.lr = 0x822BD1A0;
	sub_822CFF80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,-848
	ctx.r31.s64 = ctx.r11.s64 + -848;
	// ble cr6,0x822bd1d4
	if (!ctx.cr6.gt) goto loc_822BD1D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,1360
	ctx.r4.s64 = ctx.r1.s64 + 1360;
	// bl 0x822f0f80
	ctx.lr = 0x822BD1C0;
	sub_822F0F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bd1d4
	if (!ctx.cr6.eq) goto loc_822BD1D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-856
	ctx.r5.s64 = ctx.r11.s64 + -856;
	// b 0x822bd1dc
	goto loc_822BD1DC;
loc_822BD1D4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-884
	ctx.r5.s64 = ctx.r11.s64 + -884;
loc_822BD1DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-900
	ctx.r3.s64 = ctx.r11.s64 + -900;
	// bl 0x822ebbc8
	ctx.lr = 0x822BD1EC;
	sub_822EBBC8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r1,220
	ctx.r6.s64 = ctx.r1.s64 + 220;
	// addi r5,r10,-940
	ctx.r5.s64 = ctx.r10.s64 + -940;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822eca80
	ctx.lr = 0x822BD204;
	sub_822ECA80(ctx, base);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822bbdb8
	ctx.lr = 0x822BD210;
	sub_822BBDB8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822bbd08
	ctx.lr = 0x822BD21C;
	sub_822BBD08(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r5,r9,-2252
	ctx.r5.s64 = ctx.r9.s64 + -2252;
	// addi r3,r8,-980
	ctx.r3.s64 = ctx.r8.s64 + -980;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// bl 0x822ebbc8
	ctx.lr = 0x822BD234;
	sub_822EBBC8(ctx, base);
loc_822BD234:
	// addi r1,r1,2000
	ctx.r1.s64 = ctx.r1.s64 + 2000;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BCFF0) {
	__imp__sub_822BCFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD24C) {
	__imp__sub_822BD24C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD250) {
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
	// lis r11,-32212
	ctx.r11.s64 = -2111045632;
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// bl 0x822c1860
	ctx.lr = 0x822BD26C;
	sub_822C1860(ctx, base);
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// lwz r9,22144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22144);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822bd284
	if (!ctx.cr6.eq) goto loc_822BD284;
	// bl 0x822bc280
	ctx.lr = 0x822BD280;
	sub_822BC280(ctx, base);
	// b 0x822bd288
	goto loc_822BD288;
loc_822BD284:
	// bl 0x822bcff0
	ctx.lr = 0x822BD288;
	sub_822BCFF0(ctx, base);
loc_822BD288:
	// bl 0x822f0cf8
	ctx.lr = 0x822BD28C;
	sub_822F0CF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c1860
	ctx.lr = 0x822BD294;
	sub_822C1860(ctx, base);
	// bl 0x822f0c30
	ctx.lr = 0x822BD298;
	sub_822F0C30(ctx, base);
	// lis r31,-32041
	ctx.r31.s64 = -2099838976;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22136, ctx.r11.u32);
	// bl 0x822f0b88
	ctx.lr = 0x822BD2A8;
	sub_822F0B88(ctx, base);
	// lwz r10,22136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22136);
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-12728
	ctx.r11.s64 = ctx.r11.s64 + -12728;
	// beq cr6,0x822bd2e0
	if (ctx.cr6.eq) goto loc_822BD2E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822bd2d8
	if (ctx.cr6.eq) goto loc_822BD2D8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x822bd2d8
	if (ctx.cr6.eq) goto loc_822BD2D8;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x822bd2e0
	if (!ctx.cr6.eq) goto loc_822BD2E0;
loc_822BD2D8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x822bd2e4
	goto loc_822BD2E4;
loc_822BD2E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822BD2E4:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x822f0c18
	ctx.lr = 0x822BD2F8;
	sub_822F0C18(ctx, base);
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

PPC_WEAK_FUNC(sub_822BD250) {
	__imp__sub_822BD250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD30C) {
	__imp__sub_822BD30C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822BD318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,22136
	ctx.r31.s64 = ctx.r11.s64 + 22136;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bd394
	if (ctx.cr6.eq) goto loc_822BD394;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bd394
	if (!ctx.cr6.eq) goto loc_822BD394;
	// bl 0x822f0c38
	ctx.lr = 0x822BD344;
	sub_822F0C38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bd394
	if (!ctx.cr6.eq) goto loc_822BD394;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f0b88
	ctx.lr = 0x822BD364;
	sub_822F0B88(ctx, base);
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,-12728
	ctx.r9.s64 = ctx.r10.s64 + -12728;
	// stb r29,708(r9)
	PPC_STORE_U8(ctx.r9.u32 + 708, ctx.r29.u8);
	// bl 0x822f0c18
	ctx.lr = 0x822BD378;
	sub_822F0C18(ctx, base);
	// bl 0x822f0c30
	ctx.lr = 0x822BD37C;
	sub_822F0C30(ctx, base);
	// lis r8,-32212
	ctx.r8.s64 = -2111045632;
	// addi r3,r8,-11696
	ctx.r3.s64 = ctx.r8.s64 + -11696;
	// bl 0x822f0c68
	ctx.lr = 0x822BD388;
	sub_822F0C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bd3a0
	if (ctx.cr6.eq) goto loc_822BD3A0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_822BD394:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822BD3A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD310) {
	__imp__sub_822BD310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD3AC) {
	__imp__sub_822BD3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD3B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822bd310
	sub_822BD310(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD3B0) {
	__imp__sub_822BD3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD3B8) {
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
	// bl 0x822f0b88
	ctx.lr = 0x822BD3CC;
	sub_822F0B88(ctx, base);
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// addi r11,r11,21024
	ctx.r11.s64 = ctx.r11.s64 + 21024;
	// lwz r10,1104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bd420
	if (ctx.cr6.eq) goto loc_822BD420;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r31,r10,-12728
	ctx.r31.s64 = ctx.r10.s64 + -12728;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x822bb298
	ctx.lr = 0x822BD3F4;
	sub_822BB298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822bd420
	if (!ctx.cr6.gt) goto loc_822BD420;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822bd418
	if (ctx.cr6.eq) goto loc_822BD418;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822bd418
	if (ctx.cr6.eq) goto loc_822BD418;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822bd420
	if (!ctx.cr6.eq) goto loc_822BD420;
loc_822BD418:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x822bd424
	goto loc_822BD424;
loc_822BD420:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822BD424:
	// bl 0x822f0c18
	ctx.lr = 0x822BD428;
	sub_822F0C18(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822bd44c
	if (ctx.cr6.eq) goto loc_822BD44C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822bd310
	ctx.lr = 0x822BD438;
	sub_822BD310(ctx, base);
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
loc_822BD44C:
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
}

PPC_WEAK_FUNC(sub_822BD3B8) {
	__imp__sub_822BD3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD464) {
	__imp__sub_822BD464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r3,-32484
	ctx.r3.s64 = -2128871424;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r3,r3,40389
	ctx.r3.u64 = ctx.r3.u64 | 40389;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r7,r10,403
	ctx.r7.u64 = ctx.r10.u64 | 403;
loc_822BD488:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,97
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 97, ctx.xer);
	// blt cr6,0x822bd4a8
	if (ctx.cr6.lt) goto loc_822BD4A8;
	// cmplwi cr6,r9,122
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 122, ctx.xer);
	// bgt cr6,0x822bd4a8
	if (ctx.cr6.gt) goto loc_822BD4A8;
	// addi r11,r9,224
	ctx.r11.s64 = ctx.r9.s64 + 224;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_822BD4A8:
	// lbzu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mullw r3,r9,r7
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822bd488
	if (!ctx.cr6.eq) goto loc_822BD488;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD468) {
	__imp__sub_822BD468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD4C8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// beq cr6,0x822bd530
	if (ctx.cr6.eq) goto loc_822BD530;
	// subfic r7,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r5.s64;
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_822BD4E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bd530
	if (ctx.cr6.eq) goto loc_822BD530;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822bd530
	if (!ctx.cr6.lt) goto loc_822BD530;
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x822bd51c
	if (ctx.cr6.lt) goto loc_822BD51C;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// bgt cr6,0x822bd51c
	if (ctx.cr6.gt) goto loc_822BD51C;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_822BD51C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x822bd4e4
	goto loc_822BD4E4;
loc_822BD530:
	// stbx r6,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD4C8) {
	__imp__sub_822BD4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822BD540;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bd5c0
	if (ctx.cr6.eq) goto loc_822BD5C0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd5c0
	if (ctx.cr6.eq) goto loc_822BD5C0;
	// bl 0x822bd468
	ctx.lr = 0x822BD560;
	sub_822BD468(ctx, base);
	// lis r11,-32037
	ctx.r11.s64 = -2099576832;
	// clrlwi r27,r3,20
	ctx.r27.u64 = ctx.r3.u32 & 0xFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,-30184
	ctx.r30.s64 = ctx.r11.s64 + -30184;
loc_822BD570:
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r10,r30,-29592
	ctx.r10.s64 = ctx.r30.s64 + -29592;
	// rlwinm r9,r11,1,19,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFE;
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bd5c0
	if (ctx.cr6.eq) goto loc_822BD5C0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,-384
	ctx.r31.s64 = ctx.r11.s64 + -384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826369b0
	ctx.lr = 0x822BD5AC;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bd5cc
	if (ctx.cr6.eq) goto loc_822BD5CC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4096
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4096, ctx.xer);
	// blt cr6,0x822bd570
	if (ctx.cr6.lt) goto loc_822BD570;
loc_822BD5C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822BD5CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD538) {
	__imp__sub_822BD538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822BD5E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822bd538
	ctx.lr = 0x822BD5EC;
	sub_822BD538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bd6a4
	if (!ctx.cr6.eq) goto loc_822BD6A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822bd6a4
	if (ctx.cr6.eq) goto loc_822BD6A4;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd6a4
	if (ctx.cr6.eq) goto loc_822BD6A4;
	// lis r28,-32041
	ctx.r28.s64 = -2099838976;
	// lwz r29,22544(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22544);
	// cmpwi cr6,r29,2048
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2048, ctx.xer);
	// bge cr6,0x822bd6a4
	if (!ctx.cr6.lt) goto loc_822BD6A4;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r10,r10,-30184
	ctx.r10.s64 = ctx.r10.s64 + -30184;
	// rlwinm r11,r9,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,384
	ctx.r5.s64 = 384;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822BD640;
	sub_826344D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bd4c8
	ctx.lr = 0x822BD650;
	sub_822BD4C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd468
	ctx.lr = 0x822BD658;
	sub_822BD468(ctx, base);
	// clrlwi r11,r3,20
	ctx.r11.u64 = ctx.r3.u32 & 0xFFF;
	// lis r9,-32038
	ctx.r9.s64 = -2099642368;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,5760
	ctx.r9.s64 = ctx.r9.s64 + 5760;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822bd694
	if (ctx.cr6.eq) goto loc_822BD694;
loc_822BD678:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822bd678
	if (!ctx.cr6.eq) goto loc_822BD678;
loc_822BD694:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,22544(r28)
	PPC_STORE_U32(ctx.r28.u32 + 22544, ctx.r11.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_822BD6A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD5D8) {
	__imp__sub_822BD5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD6AC) {
	__imp__sub_822BD6AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822BD6B8;
	__savegprlr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r27,r11,31344
	ctx.r27.s64 = ctx.r11.s64 + 31344;
	// lwz r22,4004(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4004);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x822bdc98
	if (!ctx.cr6.gt) goto loc_822BDC98;
	// addi r3,r27,-14272
	ctx.r3.s64 = ctx.r27.s64 + -14272;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822BD6E0;
	sub_826344D0(ctx, base);
	// lwz r24,-17384(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17384);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x822bd79c
	if (!ctx.cr6.gt) goto loc_822BD79C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822BD6F4:
	// add r11,r29,r24
	ctx.r11.u64 = ctx.r29.u64 + ctx.r24.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd78c
	if (ctx.cr6.eq) goto loc_822BD78C;
	// bl 0x822bd468
	ctx.lr = 0x822BD70C;
	sub_822BD468(ctx, base);
	// clrlwi r31,r3,20
	ctx.r31.u64 = ctx.r3.u32 & 0xFFF;
	// addi r11,r27,-14272
	ctx.r11.s64 = ctx.r27.s64 + -14272;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bd778
	if (ctx.cr6.eq) goto loc_822BD778;
	// addi r30,r29,48
	ctx.r30.s64 = ctx.r29.s64 + 48;
loc_822BD72C:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r4,r30,r24
	ctx.r4.u64 = ctx.r30.u64 + ctx.r24.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,140
	ctx.r11.s64 = ctx.r10.s64 * 140;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// bl 0x826369b0
	ctx.lr = 0x822BD748;
	sub_826369B0(ctx, base);
	// lwz r24,-17384(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17384);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bd788
	if (ctx.cr6.eq) goto loc_822BD788;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r11,r27,-14272
	ctx.r11.s64 = ctx.r27.s64 + -14272;
	// clrlwi r31,r10,20
	ctx.r31.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bd72c
	if (!ctx.cr6.eq) goto loc_822BD72C;
	// lwz r22,4004(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4004);
loc_822BD778:
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// b 0x822bd78c
	goto loc_822BD78C;
loc_822BD788:
	// lwz r22,4004(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4004);
loc_822BD78C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x822bd6f4
	if (ctx.cr6.lt) goto loc_822BD6F4;
loc_822BD79C:
	// cmpwi cr6,r22,1024
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1024, ctx.xer);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// blt cr6,0x822bd7ac
	if (ctx.cr6.lt) goto loc_822BD7AC;
	// li r29,1024
	ctx.r29.s64 = 1024;
loc_822BD7AC:
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r19,r11,25120
	ctx.r19.s64 = ctx.r11.s64 + 25120;
	// ble cr6,0x822bd7ec
	if (!ctx.cr6.gt) goto loc_822BD7EC;
	// addis r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 65536;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r11,r11,-31652
	ctx.r11.s64 = ctx.r11.s64 + -31652;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// subf r28,r24,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_822BD7D0:
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822BD7E0;
	sub_82635430(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// bne 0x822bd7d0
	if (!ctx.cr0.eq) goto loc_822BD7D0;
loc_822BD7EC:
	// lwz r26,12(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,156(r19)
	PPC_STORE_U32(ctx.r19.u32 + 156, ctx.r29.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822bd8f8
	if (!ctx.cr6.gt) goto loc_822BD8F8;
	// addi r29,r27,2080
	ctx.r29.s64 = ctx.r27.s64 + 2080;
	// addi r30,r19,284
	ctx.r30.s64 = ctx.r19.s64 + 284;
loc_822BD80C:
	// addi r11,r19,5884
	ctx.r11.s64 = ctx.r19.s64 + 5884;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822bd8f8
	if (!ctx.cr6.lt) goto loc_822BD8F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x822bd8e8
	if (!ctx.cr6.gt) goto loc_822BD8E8;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_822BD828:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822BD830:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x822bd854
	if (ctx.cr6.eq) goto loc_822BD854;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd830
	if (ctx.cr6.eq) goto loc_822BD830;
loc_822BD854:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd870
	if (ctx.cr6.eq) goto loc_822BD870;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,140
	ctx.r8.s64 = ctx.r8.s64 + 140;
	// cmpw cr6,r5,r22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x822bd828
	if (ctx.cr6.lt) goto loc_822BD828;
	// b 0x822bd8e8
	goto loc_822BD8E8;
loc_822BD870:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822bd8cc
	if (!ctx.cr6.gt) goto loc_822BD8CC;
	// mulli r11,r5,140
	ctx.r11.s64 = ctx.r5.s64 * 140;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r8,r19,284
	ctx.r8.s64 = ctx.r19.s64 + 284;
loc_822BD888:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822BD890:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x822bd8b4
	if (ctx.cr6.eq) goto loc_822BD8B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd890
	if (ctx.cr6.eq) goto loc_822BD890;
loc_822BD8B4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd8e8
	if (ctx.cr6.eq) goto loc_822BD8E8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,140
	ctx.r8.s64 = ctx.r8.s64 + 140;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x822bd888
	if (ctx.cr6.lt) goto loc_822BD888;
loc_822BD8CC:
	// mulli r11,r5,140
	ctx.r11.s64 = ctx.r5.s64 * 140;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822BD8E0;
	sub_82635430(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
loc_822BD8E8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822bd80c
	if (ctx.cr6.lt) goto loc_822BD80C;
loc_822BD8F8:
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// stw r31,36(r19)
	PPC_STORE_U32(ctx.r19.u32 + 36, ctx.r31.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// addi r25,r11,22552
	ctx.r25.s64 = ctx.r11.s64 + 22552;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,-4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bd9bc
	if (!ctx.cr6.gt) goto loc_822BD9BC;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// addi r28,r19,28284
	ctx.r28.s64 = ctx.r19.s64 + 28284;
loc_822BD924:
	// addis r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 65536;
	// addi r11,r11,-31652
	ctx.r11.s64 = ctx.r11.s64 + -31652;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822bd9bc
	if (!ctx.cr6.lt) goto loc_822BD9BC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9388
	ctx.lr = 0x822BD944;
	sub_822C9388(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r22,4004(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4004);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x822bd9a4
	if (!ctx.cr6.gt) goto loc_822BD9A4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822BD958:
	// lwz r11,-17384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17384);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r5,r11,72
	ctx.r5.s64 = ctx.r11.s64 + 72;
	// bl 0x822c9388
	ctx.lr = 0x822BD970;
	sub_822C9388(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd990
	if (ctx.cr6.eq) goto loc_822BD990;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826369b0
	ctx.lr = 0x822BD988;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bdb0c
	if (ctx.cr6.eq) goto loc_822BDB0C;
loc_822BD990:
	// lwz r22,4004(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4004);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x822bd958
	if (ctx.cr6.lt) goto loc_822BD958;
loc_822BD9A4:
	// lwz r24,-17384(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17384);
loc_822BD9A8:
	// lwz r11,-4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bd924
	if (ctx.cr6.lt) goto loc_822BD924;
loc_822BD9BC:
	// stw r29,276(r19)
	PPC_STORE_U32(ctx.r19.u32 + 276, ctx.r29.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x822bda34
	if (!ctx.cr6.gt) goto loc_822BDA34;
	// addi r31,r24,136
	ctx.r31.s64 = ctx.r24.s64 + 136;
	// addi r30,r19,17084
	ctx.r30.s64 = ctx.r19.s64 + 17084;
loc_822BD9D8:
	// addi r11,r19,22684
	ctx.r11.s64 = ctx.r19.s64 + 22684;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822bda34
	if (!ctx.cr6.lt) goto loc_822BDA34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bda24
	if (ctx.cr6.eq) goto loc_822BDA24;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bda24
	if (!ctx.cr6.eq) goto loc_822BDA24;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bda24
	if (!ctx.cr6.eq) goto loc_822BDA24;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822BDA1C;
	sub_82635430(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
loc_822BDA24:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x822bd9d8
	if (ctx.cr6.lt) goto loc_822BD9D8;
loc_822BDA34:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,196(r19)
	PPC_STORE_U32(ctx.r19.u32 + 196, ctx.r28.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r21,r11,-372
	ctx.r21.s64 = ctx.r11.s64 + -372;
loc_822BDA44:
	// lwzx r11,r29,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r21.u32);
	// addi r9,r19,40
	ctx.r9.s64 = ctx.r19.s64 + 40;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwzx r31,r7,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x826344d0
	ctx.lr = 0x822BDA70;
	sub_826344D0(ctx, base);
	// addi r22,r27,-17380
	ctx.r22.s64 = ctx.r27.s64 + -17380;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwzx r6,r29,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822bdc08
	if (!ctx.cr6.gt) goto loc_822BDC08;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_822BDA8C:
	// cmpwi cr6,r25,40
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 40, ctx.xer);
	// bge cr6,0x822bdc08
	if (!ctx.cr6.lt) goto loc_822BDC08;
	// lwzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x822bd468
	ctx.lr = 0x822BDAA0;
	sub_822BD468(ctx, base);
	// clrlwi r30,r3,20
	ctx.r30.u64 = ctx.r3.u32 & 0xFFF;
	// addi r10,r27,-14272
	ctx.r10.s64 = ctx.r27.s64 + -14272;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdbf4
	if (ctx.cr6.eq) goto loc_822BDBF4;
loc_822BDABC:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r11,r9,140
	ctx.r11.s64 = ctx.r9.s64 * 140;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// bl 0x826369b0
	ctx.lr = 0x822BDADC;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bdba0
	if (ctx.cr6.eq) goto loc_822BDBA0;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r24,-17384(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17384);
	// addi r10,r27,-14272
	ctx.r10.s64 = ctx.r27.s64 + -14272;
	// clrlwi r30,r11,20
	ctx.r30.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bdabc
	if (!ctx.cr6.eq) goto loc_822BDABC;
	// b 0x822bdbf4
	goto loc_822BDBF4;
loc_822BDB0C:
	// lwz r24,-17384(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17384);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822bdb74
	if (!ctx.cr6.gt) goto loc_822BDB74;
	// mulli r11,r30,140
	ctx.r11.s64 = ctx.r30.s64 * 140;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r8,r19,28284
	ctx.r8.s64 = ctx.r19.s64 + 28284;
loc_822BDB2C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822BDB34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822bdb58
	if (ctx.cr6.eq) goto loc_822BDB58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bdb34
	if (ctx.cr6.eq) goto loc_822BDB34;
loc_822BDB58:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bdb64
	if (!ctx.cr6.eq) goto loc_822BDB64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_822BDB64:
	// addi r8,r8,140
	ctx.r8.s64 = ctx.r8.s64 + 140;
	// bdnz 0x822bdb2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BDB2C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822bdb98
	if (!ctx.cr6.eq) goto loc_822BDB98;
loc_822BDB74:
	// mulli r11,r30,140
	ctx.r11.s64 = ctx.r30.s64 * 140;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822BDB88;
	sub_82635430(ctx, base);
	// lwz r22,4004(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4004);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// b 0x822bd9a8
	goto loc_822BD9A8;
loc_822BDB98:
	// lwz r22,4004(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4004);
	// b 0x822bd9a8
	goto loc_822BD9A8;
loc_822BDBA0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822bdbf0
	if (ctx.cr0.lt) goto loc_822BDBF0;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x822bdbcc
	if (!ctx.cr6.lt) goto loc_822BDBCC;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bdbf0
	if (!ctx.cr6.eq) goto loc_822BDBF0;
	// stbx r20,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r20.u8);
loc_822BDBCC:
	// lwz r24,-17384(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17384);
	// mulli r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 * 140;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82635430
	ctx.lr = 0x822BDBE4;
	sub_82635430(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,140
	ctx.r26.s64 = ctx.r26.s64 + 140;
	// b 0x822bdbf4
	goto loc_822BDBF4;
loc_822BDBF0:
	// lwz r24,-17384(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17384);
loc_822BDBF4:
	// lwzx r11,r29,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bda8c
	if (ctx.cr6.lt) goto loc_822BDA8C;
loc_822BDC08:
	// lwzx r11,r29,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r21.u32);
	// addi r9,r19,36
	ctx.r9.s64 = ctx.r19.s64 + 36;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r25,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r25.u32);
	// blt cr6,0x822bda44
	if (ctx.cr6.lt) goto loc_822BDA44;
	// addi r29,r19,36
	ctx.r29.s64 = ctx.r19.s64 + 36;
loc_822BDC30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bdc68
	if (!ctx.cr6.gt) goto loc_822BDC68;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822BDC44:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x822bd5d8
	ctx.lr = 0x822BDC54;
	sub_822BD5D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bdc44
	if (ctx.cr6.lt) goto loc_822BDC44;
loc_822BDC68:
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r11,r19,316
	ctx.r11.s64 = ctx.r19.s64 + 316;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bdc30
	if (ctx.cr6.lt) goto loc_822BDC30;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r8,r9,364
	ctx.r8.s64 = ctx.r9.s64 + 364;
	// lwz r11,364(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 364);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 364, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_822BDC98:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD6B0) {
	__imp__sub_822BD6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822BDCA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// addi r29,r11,376
	ctx.r29.s64 = ctx.r11.s64 + 376;
	// addi r10,r3,284
	ctx.r10.s64 = ctx.r3.s64 + 284;
	// addi r9,r3,5884
	ctx.r9.s64 = ctx.r3.s64 + 5884;
	// addi r8,r3,11484
	ctx.r8.s64 = ctx.r3.s64 + 11484;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r7,r7,-31652
	ctx.r7.s64 = ctx.r7.s64 + -31652;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// addi r6,r3,17084
	ctx.r6.s64 = ctx.r3.s64 + 17084;
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// addi r5,r3,22684
	ctx.r5.s64 = ctx.r3.s64 + 22684;
	// stw r7,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// addi r4,r3,28284
	ctx.r4.s64 = ctx.r3.s64 + 28284;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r5,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r5.u32);
	// stw r4,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r4.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r28,r11,8796
	ctx.r28.s64 = ctx.r11.s64 + 8796;
loc_822BDD00:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BDD14;
	sub_822ECA80(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bdd00
	if (ctx.cr6.lt) goto loc_822BDD00;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BDCA0) {
	__imp__sub_822BDCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822BDD38;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// bl 0x82634da0
	ctx.lr = 0x822BDD48;
	sub_82634DA0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bdd5c
	if (!ctx.cr6.eq) goto loc_822BDD5C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822BDD5C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,-272
	ctx.r6.s64 = ctx.r11.s64 + -272;
	// addi r5,r10,9504
	ctx.r5.s64 = ctx.r10.s64 + 9504;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BDD78;
	sub_822ECA80(ctx, base);
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r26,8
	ctx.r26.s64 = 524288;
	// addi r25,r10,25120
	ctx.r25.s64 = ctx.r10.s64 + 25120;
	// addi r23,r9,-288
	ctx.r23.s64 = ctx.r9.s64 + -288;
	// addi r21,r11,-300
	ctx.r21.s64 = ctx.r11.s64 + -300;
loc_822BDDA0:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// subf r4,r31,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r31.s64;
	// add r3,r31,r24
	ctx.r3.u64 = ctx.r31.u64 + ctx.r24.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BDDB4;
	sub_822ECA80(ctx, base);
	// addi r27,r25,36
	ctx.r27.s64 = ctx.r25.s64 + 36;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bde1c
	if (!ctx.cr6.gt) goto loc_822BDE1C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822BDDD0:
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822bde1c
	if (!ctx.cr6.lt) goto loc_822BDE1C;
	// addi r11,r25,40
	ctx.r11.s64 = ctx.r25.s64 + 40;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// subf r4,r31,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r31.s64;
	// add r3,r31,r24
	ctx.r3.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r6,72
	ctx.r9.s64 = ctx.r6.s64 + 72;
	// addi r7,r6,48
	ctx.r7.s64 = ctx.r6.s64 + 48;
	// lwz r8,136(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 136);
	// bl 0x822eca80
	ctx.lr = 0x822BDE04;
	sub_822ECA80(ctx, base);
	// lwzx r10,r28,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822bddd0
	if (ctx.cr6.lt) goto loc_822BDDD0;
loc_822BDE1C:
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpwi cr6,r28,280
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 280, ctx.xer);
	// blt cr6,0x822bdda0
	if (ctx.cr6.lt) goto loc_822BDDA0;
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BDD30) {
	__imp__sub_822BDD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BDE3C) {
	__imp__sub_822BDE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822BDE48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bde98
	if (ctx.cr6.eq) goto loc_822BDE98;
loc_822BDE6C:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822bde98
	if (ctx.cr6.eq) goto loc_822BDE98;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822bde98
	if (ctx.cr6.eq) goto loc_822BDE98;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822bde98
	if (ctx.cr6.eq) goto loc_822BDE98;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bde6c
	if (!ctx.cr6.eq) goto loc_822BDE6C;
loc_822BDE98:
	// addi r29,r5,-1
	ctx.r29.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x822bdea8
	if (!ctx.cr6.lt) goto loc_822BDEA8;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_822BDEA8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822BDEB8;
	sub_82635430(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r28
	PPC_STORE_U8(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u8);
	// lbzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,-9
	ctx.r8.s64 = ctx.r11.s64 + -9;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BDE40) {
	__imp__sub_822BDE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDEF0) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822bdfb4
	if (ctx.cr6.eq) goto loc_822BDFB4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdfb4
	if (ctx.cr6.eq) goto loc_822BDFB4;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d00
	ctx.lr = 0x822BDF2C;
	sub_82634D00(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bdf48
	if (ctx.cr6.eq) goto loc_822BDF48;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x822bdf70
	goto loc_822BDF70;
loc_822BDF48:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822BDF4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bdf4c
	if (!ctx.cr6.eq) goto loc_822BDF4C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_822BDF70:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822BDF74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bdf74
	if (!ctx.cr6.eq) goto loc_822BDF74;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdfac
	if (ctx.cr6.eq) goto loc_822BDFAC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,13
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 13, ctx.xer);
	// bne cr6,0x822bdfac
	if (!ctx.cr6.eq) goto loc_822BDFAC;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_822BDFAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822bdfb8
	goto loc_822BDFB8;
loc_822BDFB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BDFB8:
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

PPC_WEAK_FUNC(sub_822BDEF0) {
	__imp__sub_822BDEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822BDFD8;
	__savegprlr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822bdef0
	ctx.lr = 0x822BDFE8;
	sub_822BDEF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822be3c8
	if (ctx.cr6.eq) goto loc_822BE3C8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-272
	ctx.r10.s64 = ctx.r10.s64 + -272;
loc_822BDFFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822be020
	if (ctx.cr6.eq) goto loc_822BE020;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bdffc
	if (ctx.cr6.eq) goto loc_822BDFFC;
loc_822BE020:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822be3c8
	if (!ctx.cr6.eq) goto loc_822BE3C8;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r25,r10,25120
	ctx.r25.s64 = ctx.r10.s64 + 25120;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r10.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r9,116(r25)
	PPC_STORE_U32(ctx.r25.u32 + 116, ctx.r9.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r8,156(r25)
	PPC_STORE_U32(ctx.r25.u32 + 156, ctx.r8.u32);
	// stw r7,196(r25)
	PPC_STORE_U32(ctx.r25.u32 + 196, ctx.r7.u32);
	// stw r6,236(r25)
	PPC_STORE_U32(ctx.r25.u32 + 236, ctx.r6.u32);
	// stw r11,276(r25)
	PPC_STORE_U32(ctx.r25.u32 + 276, ctx.r11.u32);
	// bl 0x822bdef0
	ctx.lr = 0x822BE070;
	sub_822BDEF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822be1d8
	if (ctx.cr6.eq) goto loc_822BE1D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,-260
	ctx.r28.s64 = ctx.r11.s64 + -260;
loc_822BE084:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822BE094;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822be0c0
	if (!ctx.cr6.eq) goto loc_822BE0C0;
	// addi r3,r30,5
	ctx.r3.s64 = ctx.r30.s64 + 5;
	// bl 0x82635b80
	ctx.lr = 0x822BE0A4;
	sub_82635B80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822be0b8
	if (ctx.cr6.lt) goto loc_822BE0B8;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// blt cr6,0x822be1c4
	if (ctx.cr6.lt) goto loc_822BE1C4;
loc_822BE0B8:
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x822be1c4
	goto loc_822BE1C4;
loc_822BE0C0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x822be1c4
	if (ctx.cr6.lt) goto loc_822BE1C4;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822be1c4
	if (ctx.cr6.eq) goto loc_822BE1C4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// beq cr6,0x822be0e4
	if (ctx.cr6.eq) goto loc_822BE0E4;
	// li r10,40
	ctx.r10.s64 = 40;
loc_822BE0E4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822be1c4
	if (!ctx.cr6.lt) goto loc_822BE1C4;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822BE110:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822be110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BE110;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bde40
	ctx.lr = 0x822BE130;
	sub_822BDE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be1c4
	if (ctx.cr6.eq) goto loc_822BE1C4;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bde40
	ctx.lr = 0x822BE148;
	sub_822BDE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be1c4
	if (ctx.cr6.eq) goto loc_822BE1C4;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bde40
	ctx.lr = 0x822BE160;
	sub_822BDE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be1c4
	if (ctx.cr6.eq) goto loc_822BE1C4;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bde40
	ctx.lr = 0x822BE178;
	sub_822BDE40(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822be1c4
	if (ctx.cr6.eq) goto loc_822BE1C4;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82635148
	ctx.lr = 0x822BE194;
	sub_82635148(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,140
	ctx.r5.s64 = 140;
	// mulli r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 * 140;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x822BE1B4;
	sub_82635430(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_822BE1C4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822bdef0
	ctx.lr = 0x822BE1CC;
	sub_822BDEF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822be084
	if (!ctx.cr6.eq) goto loc_822BE084;
loc_822BE1D8:
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r27,r11,31344
	ctx.r27.s64 = ctx.r11.s64 + 31344;
	// lwz r11,4004(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822be228
	if (!ctx.cr6.eq) goto loc_822BE228;
	// lwz r30,156(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 156);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822be228
	if (!ctx.cr6.gt) goto loc_822BE228;
	// mulli r29,r30,140
	ctx.r29.s64 = ctx.r30.s64 * 140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634da0
	ctx.lr = 0x822BE204;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822be228
	if (ctx.cr6.eq) goto loc_822BE228;
	// addis r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 65536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-31652
	ctx.r4.s64 = ctx.r11.s64 + -31652;
	// bl 0x82635430
	ctx.lr = 0x822BE220;
	sub_82635430(ctx, base);
	// stw r31,-17384(r27)
	PPC_STORE_U32(ctx.r27.u32 + -17384, ctx.r31.u32);
	// stw r30,4004(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4004, ctx.r30.u32);
loc_822BE228:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822be2a0
	if (!ctx.cr6.eq) goto loc_822BE2A0;
	// lwz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822be2a0
	if (!ctx.cr6.gt) goto loc_822BE2A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r25,284
	ctx.r30.s64 = ctx.r25.s64 + 284;
	// addi r29,r10,8796
	ctx.r29.s64 = ctx.r10.s64 + 8796;
	// b 0x822be258
	goto loc_822BE258;
loc_822BE254:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_822BE258:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bge cr6,0x822be2a0
	if (!ctx.cr6.lt) goto loc_822BE2A0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,2080
	ctx.r9.s64 = ctx.r27.s64 + 2080;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x822eca80
	ctx.lr = 0x822BE28C;
	sub_822ECA80(ctx, base);
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822be254
	if (ctx.cr6.lt) goto loc_822BE254;
loc_822BE2A0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r23,r11,-372
	ctx.r23.s64 = ctx.r11.s64 + -372;
loc_822BE2AC:
	// lwzx r11,r26,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r23.u32);
	// addi r24,r27,-17380
	ctx.r24.s64 = ctx.r27.s64 + -17380;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r26,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x822be344
	if (!ctx.cr6.eq) goto loc_822BE344;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be344
	if (ctx.cr6.eq) goto loc_822BE344;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x826365a8
	ctx.lr = 0x822BE2E8;
	sub_826365A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r3.u32);
	// beq cr6,0x822be344
	if (ctx.cr6.eq) goto loc_822BE344;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822be340
	if (!ctx.cr6.gt) goto loc_822BE340;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822BE30C:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// bl 0x822bd4c8
	ctx.lr = 0x822BE328;
	sub_822BD4C8(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822be30c
	if (ctx.cr6.lt) goto loc_822BE30C;
loc_822BE340:
	// stwx r11,r26,r24
	PPC_STORE_U32(ctx.r26.u32 + ctx.r24.u32, ctx.r11.u32);
loc_822BE344:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r26,12
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 12, ctx.xer);
	// blt cr6,0x822be2ac
	if (ctx.cr6.lt) goto loc_822BE2AC;
	// addi r29,r25,36
	ctx.r29.s64 = ctx.r25.s64 + 36;
loc_822BE354:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822be38c
	if (!ctx.cr6.gt) goto loc_822BE38C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822BE368:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x822bd5d8
	ctx.lr = 0x822BE378;
	sub_822BD5D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822be368
	if (ctx.cr6.lt) goto loc_822BE368;
loc_822BE38C:
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r11,r25,316
	ctx.r11.s64 = ctx.r25.s64 + 316;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822be354
	if (ctx.cr6.lt) goto loc_822BE354;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r8,r9,364
	ctx.r8.s64 = ctx.r9.s64 + 364;
	// lwz r11,364(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 364);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 364, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822BE3C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BDFD0) {
	__imp__sub_822BDFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BE3D4) {
	__imp__sub_822BE3D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822BE3E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32041
	ctx.r27.s64 = -2099838976;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,22544(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22544);
	// mulli r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 * 360;
	// addi r28,r11,64
	ctx.r28.s64 = ctx.r11.s64 + 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634da0
	ctx.lr = 0x822BE400;
	sub_82634DA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822be414
	if (!ctx.cr6.eq) goto loc_822BE414;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822BE414:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-232
	ctx.r5.s64 = ctx.r11.s64 + -232;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BE428;
	sub_822ECA80(ctx, base);
	// lwz r11,22544(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22544);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822be4ac
	if (!ctx.cr6.gt) goto loc_822BE4AC;
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r10,r10,-30184
	ctx.r10.s64 = ctx.r10.s64 + -30184;
	// addi r31,r10,184
	ctx.r31.s64 = ctx.r10.s64 + 184;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r26,r10,-252
	ctx.r26.s64 = ctx.r10.s64 + -252;
loc_822BE450:
	// lbz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822be468
	if (!ctx.cr6.eq) goto loc_822BE468;
	// lbz r10,161(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 161);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822be49c
	if (ctx.cr6.eq) goto loc_822BE49C;
loc_822BE468:
	// lbz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 192);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lbz r8,161(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 161);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r9,r31,-160
	ctx.r9.s64 = ctx.r31.s64 + -160;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r6,r31,-184
	ctx.r6.s64 = ctx.r31.s64 + -184;
	// subf r4,r30,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r30.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BE494;
	sub_822ECA80(ctx, base);
	// lwz r11,22544(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22544);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_822BE49C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,384
	ctx.r31.s64 = ctx.r31.s64 + 384;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822be450
	if (ctx.cr6.lt) goto loc_822BE450;
loc_822BE4AC:
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BE3D8) {
	__imp__sub_822BE3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BE4BC) {
	__imp__sub_822BE4BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822BE4C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822bdef0
	ctx.lr = 0x822BE4D8;
	sub_822BDEF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822be6a4
	if (ctx.cr6.eq) goto loc_822BE6A4;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-220
	ctx.r10.s64 = ctx.r10.s64 + -220;
loc_822BE4EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822be510
	if (ctx.cr6.eq) goto loc_822BE510;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822be4ec
	if (ctx.cr6.eq) goto loc_822BE4EC;
loc_822BE510:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822be6a4
	if (!ctx.cr6.eq) goto loc_822BE6A4;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x822bdef0
	ctx.lr = 0x822BE528;
	sub_822BDEF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822be698
	if (ctx.cr6.eq) goto loc_822BE698;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r11,8796
	ctx.r28.s64 = ctx.r11.s64 + 8796;
loc_822BE538:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// bl 0x822bde40
	ctx.lr = 0x822BE558;
	sub_822BDE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be688
	if (ctx.cr6.eq) goto loc_822BE688;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bde40
	ctx.lr = 0x822BE570;
	sub_822BDE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be688
	if (ctx.cr6.eq) goto loc_822BE688;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bde40
	ctx.lr = 0x822BE588;
	sub_822BDE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be688
	if (ctx.cr6.eq) goto loc_822BE688;
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bde40
	ctx.lr = 0x822BE5A0;
	sub_822BDE40(ctx, base);
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bde40
	ctx.lr = 0x822BE5B0;
	sub_822BDE40(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bde40
	ctx.lr = 0x822BE5C0;
	sub_822BDE40(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822be5d8
	if (ctx.cr6.eq) goto loc_822BE5D8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x822be688
	if (!ctx.cr6.eq) goto loc_822BE688;
loc_822BE5D8:
	// lbz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 304);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822be5f0
	if (ctx.cr6.eq) goto loc_822BE5F0;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x822be688
	if (!ctx.cr6.eq) goto loc_822BE688;
loc_822BE5F0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822bd5d8
	ctx.lr = 0x822BE5F8;
	sub_822BD5D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822be698
	if (ctx.cr6.eq) goto loc_822BE698;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82635b80
	ctx.lr = 0x822BE60C;
	sub_82635B80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r9.u8);
	// bl 0x82635b80
	ctx.lr = 0x822BE624;
	sub_82635B80(ctx, base);
	// clrlwi r8,r3,30
	ctx.r8.u64 = ctx.r3.u32 & 0x3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r8,345(r31)
	PPC_STORE_U8(ctx.r31.u32 + 345, ctx.r8.u8);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822eca80
	ctx.lr = 0x822BE640;
	sub_822ECA80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x822eca80
	ctx.lr = 0x822BE654;
	sub_822ECA80(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82635b80
	ctx.lr = 0x822BE65C;
	sub_82635B80(ctx, base);
	// rlwinm r7,r3,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822be67c
	if (ctx.cr6.eq) goto loc_822BE67C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82635b80
	ctx.lr = 0x822BE670;
	sub_82635B80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r11,r11,0,29,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF87;
	// b 0x822be680
	goto loc_822BE680;
loc_822BE67C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822BE680:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r11,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r11.u8);
loc_822BE688:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822bdef0
	ctx.lr = 0x822BE690;
	sub_822BDEF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822be538
	if (!ctx.cr6.eq) goto loc_822BE538;
loc_822BE698:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822BE6A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BE4C0) {
	__imp__sub_822BE4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822BE6B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// bl 0x82634da0
	ctx.lr = 0x822BE6C8;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822be750
	if (ctx.cr6.eq) goto loc_822BE750;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// addi r3,r11,-132
	ctx.r3.s64 = ctx.r11.s64 + -132;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebf30
	ctx.lr = 0x822BE6F0;
	sub_822EBF30(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822be714
	if (!ctx.cr6.gt) goto loc_822BE714;
	// stbx r30,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r30.u8);
	// bl 0x822dfd18
	ctx.lr = 0x822BE704;
	sub_822DFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bdfd0
	ctx.lr = 0x822BE70C;
	sub_822BDFD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822dfda8
	ctx.lr = 0x822BE714;
	sub_822DFDA8(ctx, base);
loc_822BE714:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebf30
	ctx.lr = 0x822BE728;
	sub_822EBF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822be748
	if (!ctx.cr6.gt) goto loc_822BE748;
	// stbx r30,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r30.u8);
	// bl 0x822dfd18
	ctx.lr = 0x822BE738;
	sub_822DFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822be4c0
	ctx.lr = 0x822BE740;
	sub_822BE4C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822dfda8
	ctx.lr = 0x822BE748;
	sub_822DFDA8(ctx, base);
loc_822BE748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822BE750;
	sub_82634D40(ctx, base);
loc_822BE750:
	// bl 0x822dfd18
	ctx.lr = 0x822BE754;
	sub_822DFD18(ctx, base);
	// lis r9,-32038
	ctx.r9.s64 = -2099642368;
	// lis r8,-32041
	ctx.r8.s64 = -2099838976;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,25284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25284, ctx.r11.u32);
	// stw r10,22152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22152, ctx.r10.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822BE770;
	sub_822DFDA8(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r7,-208
	ctx.r3.s64 = ctx.r7.s64 + -208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822BE784;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BE6B0) {
	__imp__sub_822BE6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BE78C) {
	__imp__sub_822BE78C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE790) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822dfd18
	ctx.lr = 0x822BE7B0;
	sub_822DFD18(ctx, base);
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r30,r11,25676
	ctx.r30.s64 = ctx.r11.s64 + 25676;
	// lwz r11,9672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822be7d4
	if (!ctx.cr6.gt) goto loc_822BE7D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bdd30
	ctx.lr = 0x822BE7CC;
	sub_822BDD30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822be7d8
	goto loc_822BE7D8;
loc_822BE7D4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822BE7D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822BE7E4;
	sub_822DFDA8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822be824
	if (ctx.cr6.eq) goto loc_822BE824;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,-132
	ctx.r30.s64 = ctx.r11.s64 + -132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ebfa8
	ctx.lr = 0x822BE804;
	sub_822EBFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be81c
	if (ctx.cr6.eq) goto loc_822BE81C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// bl 0x822ebbc8
	ctx.lr = 0x822BE81C;
	sub_822EBBC8(ctx, base);
loc_822BE81C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822BE824;
	sub_82634D40(ctx, base);
loc_822BE824:
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

PPC_WEAK_FUNC(sub_822BE790) {
	__imp__sub_822BE790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BE83C) {
	__imp__sub_822BE83C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE840) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822dfd18
	ctx.lr = 0x822BE860;
	sub_822DFD18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822be3d8
	ctx.lr = 0x822BE868;
	sub_822BE3D8(ctx, base);
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,25112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25112, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822BE87C;
	sub_822DFDA8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822be8bc
	if (ctx.cr6.eq) goto loc_822BE8BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,-144
	ctx.r30.s64 = ctx.r11.s64 + -144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ebfa8
	ctx.lr = 0x822BE89C;
	sub_822EBFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be8b4
	if (ctx.cr6.eq) goto loc_822BE8B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// bl 0x822ebbc8
	ctx.lr = 0x822BE8B4;
	sub_822EBBC8(ctx, base);
loc_822BE8B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822BE8BC;
	sub_82634D40(ctx, base);
loc_822BE8BC:
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

PPC_WEAK_FUNC(sub_822BE840) {
	__imp__sub_822BE840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BE8D4) {
	__imp__sub_822BE8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE8D8) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822be914
	if (ctx.cr6.eq) goto loc_822BE914;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22152
	ctx.r9.s64 = ctx.r10.s64 + 22152;
	// stw r11,2964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2964, ctx.r11.u32);
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
loc_822BE914:
	// bl 0x822dfd18
	ctx.lr = 0x822BE918;
	sub_822DFD18(ctx, base);
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// addi r31,r11,22152
	ctx.r31.s64 = ctx.r11.s64 + 22152;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822BE930;
	sub_822DFDA8(ctx, base);
	// lwz r11,2964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2964);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2964, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822be95c
	if (ctx.cr6.lt) goto loc_822BE95C;
	// bl 0x822eac70
	ctx.lr = 0x822BE948;
	sub_822EAC70(ctx, base);
	// lis r9,-32038
	ctx.r9.s64 = -2099642368;
	// addi r11,r3,15000
	ctx.r11.s64 = ctx.r3.s64 + 15000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2964, ctx.r10.u32);
	// std r11,25272(r9)
	PPC_STORE_U64(ctx.r9.u32 + 25272, ctx.r11.u64);
loc_822BE95C:
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

PPC_WEAK_FUNC(sub_822BE8D8) {
	__imp__sub_822BE8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BE970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822BE978;
	__savegprlr_20(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r6,-32038
	ctx.r6.s64 = -2099642368;
	// lis r7,-32041
	ctx.r7.s64 = -2099838976;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r29,r6,25640
	ctx.r29.s64 = ctx.r6.s64 + 25640;
	// addi r25,r7,22152
	ctx.r25.s64 = ctx.r7.s64 + 22152;
	// addi r24,r8,64
	ctx.r24.s64 = ctx.r8.s64 + 64;
	// addi r22,r9,40
	ctx.r22.s64 = ctx.r9.s64 + 40;
	// addi r21,r10,0
	ctx.r21.s64 = ctx.r10.s64 + 0;
	// addi r20,r11,-96
	ctx.r20.s64 = ctx.r11.s64 + -96;
loc_822BE9D4:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// addi r8,r29,52
	ctx.r8.s64 = ctx.r29.s64 + 52;
	// addi r7,r29,7768
	ctx.r7.s64 = ctx.r29.s64 + 7768;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// beq cr6,0x822be9f8
	if (ctx.cr6.eq) goto loc_822BE9F8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_822BE9F8:
	// bl 0x822eca80
	ctx.lr = 0x822BE9FC;
	sub_822ECA80(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bea10
	if (!ctx.cr6.eq) goto loc_822BEA10;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r11,r11,-216
	ctx.r11.s64 = ctx.r11.s64 + -216;
loc_822BEA10:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bctrl 
	ctx.lr = 0x822BEA30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bea48
	if (ctx.cr6.eq) goto loc_822BEA48;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x822BEA44;
	sub_82634D40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_822BEA48:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822be8d8
	ctx.lr = 0x822BEA54;
	sub_822BE8D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822beadc
	if (!ctx.cr6.eq) goto loc_822BEADC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bne cr6,0x822bea94
	if (!ctx.cr6.eq) goto loc_822BEA94;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822e0190
	ctx.lr = 0x822BEA80;
	sub_822E0190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bea94
	if (!ctx.cr6.eq) goto loc_822BEA94;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822beae8
	if (ctx.cr6.gt) goto loc_822BEAE8;
loc_822BEA94:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82634d40
	ctx.lr = 0x822BEA9C;
	sub_82634D40(ctx, base);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// bl 0x822dfd18
	ctx.lr = 0x822BEAA8;
	sub_822DFD18(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r25,56
	ctx.r3.s64 = ctx.r25.s64 + 56;
	// bl 0x822eca80
	ctx.lr = 0x822BEAC0;
	sub_822ECA80(ctx, base);
	// bl 0x822dfda8
	ctx.lr = 0x822BEAC4;
	sub_822DFDA8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x822BEACC;
	sub_82634D40(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x822be9d4
	if (!ctx.cr6.lt) goto loc_822BE9D4;
loc_822BEADC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822BEAE8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x822BEAF0;
	sub_82634D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BE970) {
	__imp__sub_822BE970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BEAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BEAFC) {
	__imp__sub_822BEAFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BEB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822BEB08;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32038
	ctx.r10.s64 = -2099642368;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r25,5000
	ctx.r25.s64 = 5000;
	// addi r28,r11,404
	ctx.r28.s64 = ctx.r11.s64 + 404;
	// addi r30,r10,13952
	ctx.r30.s64 = ctx.r10.s64 + 13952;
loc_822BEB30:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x822be970
	ctx.lr = 0x822BEB48;
	sub_822BE970(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822beb8c
	if (!ctx.cr6.eq) goto loc_822BEB8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5000, ctx.xer);
	// ble cr6,0x822beb60
	if (!ctx.cr6.gt) goto loc_822BEB60;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
loc_822BEB60:
	// bl 0x822dfd18
	ctx.lr = 0x822BEB64;
	sub_822DFD18(ctx, base);
	// addi r29,r30,17392
	ctx.r29.s64 = ctx.r30.s64 + 17392;
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82634d40
	ctx.lr = 0x822BEB70;
	sub_82634D40(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822BEB88;
	sub_822DFDA8(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_822BEB8C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x822beb30
	if (ctx.cr6.lt) goto loc_822BEB30;
	// bl 0x822dfd18
	ctx.lr = 0x822BEB9C;
	sub_822DFD18(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x822bebbc
	if (ctx.cr6.eq) goto loc_822BEBBC;
	// bl 0x822bd6b0
	ctx.lr = 0x822BEBA8;
	sub_822BD6B0(ctx, base);
	// lwz r11,21396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21396);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r11,11724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11724, ctx.r11.u32);
loc_822BEBBC:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x822bebe0
	if (ctx.cr6.lt) goto loc_822BEBE0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,22152
	ctx.r9.s64 = ctx.r10.s64 + 22152;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-8196(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8196, ctx.r11.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x822bebf0
	goto loc_822BEBF0;
loc_822BEBE0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,60000
	ctx.r10.u64 = ctx.r11.u64 | 60000;
	// add r11,r24,r10
	ctx.r11.u64 = ctx.r24.u64 + ctx.r10.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_822BEBF0:
	// bl 0x822dfda8
	ctx.lr = 0x822BEBF4;
	sub_822DFDA8(ctx, base);
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x822bec08
	if (!ctx.cr6.eq) goto loc_822BEC08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r11,9896
	ctx.r7.s64 = ctx.r11.s64 + 9896;
	// b 0x822bec10
	goto loc_822BEC10;
loc_822BEC08:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,132
	ctx.r7.s64 = ctx.r11.s64 + 132;
loc_822BEC10:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822ebbc8
	ctx.lr = 0x822BEC28;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BEB00) {
	__imp__sub_822BEB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BEC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634424
	ctx.lr = 0x822BEC38;
	__savegprlr_15(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822eac70
	ctx.lr = 0x822BEC44;
	sub_822EAC70(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// bl 0x822dfd18
	ctx.lr = 0x822BEC4C;
	sub_822DFD18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r17,r11,8796
	ctx.r17.s64 = ctx.r11.s64 + 8796;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822eca80
	ctx.lr = 0x822BEC68;
	sub_822ECA80(ctx, base);
	// lis r11,-32037
	ctx.r11.s64 = -2099576832;
	// li r15,1
	ctx.r15.s64 = 1;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r28,r11,-30184
	ctx.r28.s64 = ctx.r11.s64 + -30184;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// addi r24,r28,-9668
	ctx.r24.s64 = ctx.r28.s64 + -9668;
loc_822BEC84:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bed5c
	if (!ctx.cr6.gt) goto loc_822BED5C;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822BECA8:
	// cmpwi cr6,r23,20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 20, ctx.xer);
	// bge cr6,0x822bed5c
	if (!ctx.cr6.lt) goto loc_822BED5C;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// addi r9,r28,-21360
	ctx.r9.s64 = ctx.r28.s64 + -21360;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822bd538
	ctx.lr = 0x822BECCC;
	sub_822BD538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bed4c
	if (ctx.cr6.eq) goto loc_822BED4C;
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bed4c
	if (!ctx.cr6.eq) goto loc_822BED4C;
	// ld r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 368);
	// cmpld cr6,r16,r11
	ctx.cr6.compare<uint64_t>(ctx.r16.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822bed4c
	if (ctx.cr6.lt) goto loc_822BED4C;
	// lbz r11,350(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 350);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x822bed4c
	if (!ctx.cr6.lt) goto loc_822BED4C;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x822bed30
	if (!ctx.cr6.gt) goto loc_822BED30;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_822BED0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826369b0
	ctx.lr = 0x822BED18;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bed4c
	if (ctx.cr6.eq) goto loc_822BED4C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x822bed0c
	if (ctx.cr6.lt) goto loc_822BED0C;
loc_822BED30:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BED44;
	sub_822ECA80(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
loc_822BED4C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822beca8
	if (ctx.cr6.lt) goto loc_822BECA8;
loc_822BED5C:
	// addi r11,r28,-9668
	ctx.r11.s64 = ctx.r28.s64 + -9668;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bec84
	if (ctx.cr6.lt) goto loc_822BEC84;
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// addi r22,r11,25120
	ctx.r22.s64 = ctx.r11.s64 + 25120;
loc_822BED80:
	// addi r21,r22,36
	ctx.r21.s64 = ctx.r22.s64 + 36;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// lwzx r11,r26,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bee5c
	if (!ctx.cr6.gt) goto loc_822BEE5C;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822BEDAC:
	// cmpwi cr6,r23,20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 20, ctx.xer);
	// bge cr6,0x822bee5c
	if (!ctx.cr6.lt) goto loc_822BEE5C;
	// addi r11,r22,40
	ctx.r11.s64 = ctx.r22.s64 + 40;
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x822bd538
	ctx.lr = 0x822BEDC8;
	sub_822BD538(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bee48
	if (ctx.cr6.eq) goto loc_822BEE48;
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bee48
	if (!ctx.cr6.eq) goto loc_822BEE48;
	// ld r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 368);
	// cmpld cr6,r16,r11
	ctx.cr6.compare<uint64_t>(ctx.r16.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822bee48
	if (ctx.cr6.lt) goto loc_822BEE48;
	// lbz r11,350(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 350);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x822bee48
	if (!ctx.cr6.lt) goto loc_822BEE48;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x822bee2c
	if (!ctx.cr6.gt) goto loc_822BEE2C;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
loc_822BEE08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826369b0
	ctx.lr = 0x822BEE14;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bee48
	if (ctx.cr6.eq) goto loc_822BEE48;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x822bee08
	if (ctx.cr6.lt) goto loc_822BEE08;
loc_822BEE2C:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BEE40;
	sub_822ECA80(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
loc_822BEE48:
	// lwzx r11,r26,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r21.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,140
	ctx.r27.s64 = ctx.r27.s64 + 140;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bedac
	if (ctx.cr6.lt) goto loc_822BEDAC;
loc_822BEE5C:
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// cmpwi cr6,r26,280
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 280, ctx.xer);
	// blt cr6,0x822bed80
	if (ctx.cr6.lt) goto loc_822BED80;
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// addi r19,r11,22152
	ctx.r19.s64 = ctx.r11.s64 + 22152;
	// lwz r11,392(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bef38
	if (!ctx.cr6.gt) goto loc_822BEF38;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822BEE94:
	// cmpwi cr6,r23,20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 20, ctx.xer);
	// bge cr6,0x822bef38
	if (!ctx.cr6.lt) goto loc_822BEF38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bd538
	ctx.lr = 0x822BEEA4;
	sub_822BD538(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bef24
	if (ctx.cr6.eq) goto loc_822BEF24;
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bef24
	if (!ctx.cr6.eq) goto loc_822BEF24;
	// ld r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 368);
	// cmpld cr6,r16,r11
	ctx.cr6.compare<uint64_t>(ctx.r16.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822bef24
	if (ctx.cr6.lt) goto loc_822BEF24;
	// lbz r11,350(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 350);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x822bef24
	if (!ctx.cr6.lt) goto loc_822BEF24;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x822bef08
	if (!ctx.cr6.gt) goto loc_822BEF08;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
loc_822BEEE4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826369b0
	ctx.lr = 0x822BEEF0;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bef24
	if (ctx.cr6.eq) goto loc_822BEF24;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x822beee4
	if (ctx.cr6.lt) goto loc_822BEEE4;
loc_822BEF08:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BEF1C;
	sub_822ECA80(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
loc_822BEF24:
	// lwz r11,392(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 392);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,384
	ctx.r28.s64 = ctx.r28.s64 + 384;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bee94
	if (ctx.cr6.lt) goto loc_822BEE94;
loc_822BEF38:
	// bl 0x822dfda8
	ctx.lr = 0x822BEF3C;
	sub_822DFDA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,608
	ctx.r4.s64 = 608;
	// addi r5,r11,268
	ctx.r5.s64 = ctx.r11.s64 + 268;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x822eca80
	ctx.lr = 0x822BEF50;
	sub_822ECA80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r20,r11,8828
	ctx.r20.s64 = ctx.r11.s64 + 8828;
	// ble cr6,0x822befc0
	if (!ctx.cr6.gt) goto loc_822BEFC0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r10,19980
	ctx.r29.s64 = ctx.r10.s64 + 19980;
	// addi r28,r11,264
	ctx.r28.s64 = ctx.r11.s64 + 264;
loc_822BEF78:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bne cr6,0x822bef88
	if (!ctx.cr6.eq) goto loc_822BEF88;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_822BEF88:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfic r4,r30,608
	ctx.xer.ca = ctx.r30.u32 <= 608;
	ctx.r4.s64 = 608 - ctx.r30.s64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BEFB0;
	sub_822ECA80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x822bef78
	if (ctx.cr6.lt) goto loc_822BEF78;
loc_822BEFC0:
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,25272
	ctx.r31.s64 = ctx.r11.s64 + 25272;
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// addi r7,r31,420
	ctx.r7.s64 = ctx.r31.s64 + 420;
	// addi r6,r31,8136
	ctx.r6.s64 = ctx.r31.s64 + 8136;
	// addi r5,r10,216
	ctx.r5.s64 = ctx.r10.s64 + 216;
	// subfic r4,r30,608
	ctx.xer.ca = ctx.r30.u32 <= 608;
	ctx.r4.s64 = 608 - ctx.r30.s64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BEFE8;
	sub_822ECA80(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// bne cr6,0x822bf008
	if (!ctx.cr6.eq) goto loc_822BF008;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r11,r11,-216
	ctx.r11.s64 = ctx.r11.s64 + -216;
loc_822BF008:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r3,r10,184
	ctx.r3.s64 = ctx.r10.s64 + 184;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bctrl 
	ctx.lr = 0x822BF02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bf13c
	if (ctx.cr6.eq) goto loc_822BF13C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x822BF040;
	sub_82634D40(ctx, base);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// bl 0x822dfd18
	ctx.lr = 0x822BF048;
	sub_822DFD18(ctx, base);
	// lwz r11,48(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822BF058;
	sub_822DFDA8(ctx, base);
	// lwz r11,2964(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2964);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2964(r19)
	PPC_STORE_U32(ctx.r19.u32 + 2964, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822bf080
	if (ctx.cr6.lt) goto loc_822BF080;
	// bl 0x822eac70
	ctx.lr = 0x822BF070;
	sub_822EAC70(ctx, base);
	// addi r11,r3,15000
	ctx.r11.s64 = ctx.r3.s64 + 15000;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r18,2964(r19)
	PPC_STORE_U32(ctx.r19.u32 + 2964, ctx.r18.u32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_822BF080:
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// bne cr6,0x822bf0b8
	if (!ctx.cr6.eq) goto loc_822BF0B8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bne cr6,0x822bf0b8
	if (!ctx.cr6.eq) goto loc_822BF0B8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x822e0550
	ctx.lr = 0x822BF0AC;
	sub_822E0550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// beq cr6,0x822bf0bc
	if (ctx.cr6.eq) goto loc_822BF0BC;
loc_822BF0B8:
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
loc_822BF0BC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x822BF0C4;
	sub_82634D40(ctx, base);
	// bl 0x822dfd18
	ctx.lr = 0x822BF0C8;
	sub_822DFD18(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x822bf1e8
	if (!ctx.cr6.gt) goto loc_822BF1E8;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// li r22,2000
	ctx.r22.s64 = 2000;
	// ori r26,r11,37856
	ctx.r26.u64 = ctx.r11.u64 | 37856;
loc_822BF0E4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822bd538
	ctx.lr = 0x822BF0EC;
	sub_822BD538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bf1dc
	if (ctx.cr6.eq) goto loc_822BF1DC;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x822bf148
	if (!ctx.cr6.eq) goto loc_822BF148;
	// lbz r11,350(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 350);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,350(r3)
	PPC_STORE_U8(ctx.r3.u32 + 350, ctx.r11.u8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x822bf11c
	if (!ctx.cr6.gt) goto loc_822BF11C;
	// li r11,7
	ctx.r11.s64 = 7;
loc_822BF11C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// sld r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r22.u64 << (ctx.r11.u8 & 0x7F));
	// cmpld cr6,r11,r26
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r26.u64, ctx.xer);
	// ble cr6,0x822bf130
	if (!ctx.cr6.gt) goto loc_822BF130;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822BF130:
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// std r11,368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 368, ctx.r11.u64);
	// b 0x822bf1dc
	goto loc_822BF1DC;
loc_822BF13C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// stw r18,2964(r19)
	PPC_STORE_U32(ctx.r19.u32 + 2964, ctx.r18.u32);
	// b 0x822bf080
	goto loc_822BF080;
loc_822BF148:
	// stb r15,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r15.u8);
	// addi r28,r31,184
	ctx.r28.s64 = ctx.r31.s64 + 184;
	// stb r18,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r18.u8);
	// addi r27,r31,24
	ctx.r27.s64 = ctx.r31.s64 + 24;
	// stb r18,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r18.u8);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bf1dc
	if (!ctx.cr6.gt) goto loc_822BF1DC;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_822BF170:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x826369b0
	ctx.lr = 0x822BF180;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bf1a0
	if (ctx.cr6.eq) goto loc_822BF1A0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,344
	ctx.r29.s64 = ctx.r29.s64 + 344;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bf170
	if (ctx.cr6.lt) goto loc_822BF170;
	// b 0x822bf1dc
	goto loc_822BF1DC;
loc_822BF1A0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r31,r30,344
	ctx.r31.s64 = ctx.r30.s64 * 344;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BF1C0;
	sub_822ECA80(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r11,184
	ctx.r6.s64 = ctx.r11.s64 + 184;
	// bl 0x822eca80
	ctx.lr = 0x822BF1DC;
	sub_822ECA80(ctx, base);
loc_822BF1DC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// bne 0x822bf0e4
	if (!ctx.cr0.eq) goto loc_822BF0E4;
loc_822BF1E8:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x822bf200
	if (ctx.cr6.eq) goto loc_822BF200;
	// lwz r11,2960(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2960);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r11,2960(r19)
	PPC_STORE_U32(ctx.r19.u32 + 2960, ctx.r11.u32);
	// b 0x822bf21c
	goto loc_822BF21C;
loc_822BF200:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,156
	ctx.r5.s64 = ctx.r11.s64 + 156;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r19,56
	ctx.r3.s64 = ctx.r19.s64 + 56;
	// bl 0x822eca80
	ctx.lr = 0x822BF21C;
	sub_822ECA80(ctx, base);
loc_822BF21C:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r11,368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 368);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 368, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822BF230;
	sub_822DFDA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82634d40
	ctx.lr = 0x822BF238;
	sub_82634D40(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BEC30) {
	__imp__sub_822BEC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822BF248;
	__savegprlr_20(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x822e08e0
	ctx.lr = 0x822BF27C;
	sub_822E08E0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
	// stw r29,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r29.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r26,r11,-360
	ctx.r26.s64 = ctx.r11.s64 + -360;
	// addi r24,r10,22152
	ctx.r24.s64 = ctx.r10.s64 + 22152;
	// beq cr6,0x822bf3a0
	if (ctx.cr6.eq) goto loc_822BF3A0;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// bl 0x82634da0
	ctx.lr = 0x822BF2B0;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bf364
	if (ctx.cr6.eq) goto loc_822BF364;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ebf30
	ctx.lr = 0x822BF2CC;
	sub_822EBF30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// ble cr6,0x822bf364
	if (!ctx.cr6.gt) goto loc_822BF364;
	// addic r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subfe r10,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r8,-32
	ctx.r11.s64 = ctx.r8.s64 + -32;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_822BF2F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822bf318
	if (!ctx.cr0.eq) goto loc_822BF318;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822bf2f8
	if (!ctx.cr6.eq) goto loc_822BF2F8;
loc_822BF318:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bf364
	if (!ctx.cr6.eq) goto loc_822BF364;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r8,-28
	ctx.r3.s64 = ctx.r8.s64 + -28;
	// bl 0x82636b60
	ctx.lr = 0x822BF330;
	sub_82636B60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bf364
	if (!ctx.cr6.eq) goto loc_822BF364;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x822bf364
	if (!ctx.cr6.eq) goto loc_822BF364;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,216
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 216, ctx.xer);
	// bne cr6,0x822bf364
	if (!ctx.cr6.eq) goto loc_822BF364;
	// addi r11,r27,-32
	ctx.r11.s64 = ctx.r27.s64 + -32;
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822BF364:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822BF36C;
	sub_82634D40(ctx, base);
	// bl 0x822dfd18
	ctx.lr = 0x822BF370;
	sub_822DFD18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd538
	ctx.lr = 0x822BF378;
	sub_822BD538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bf390
	if (ctx.cr6.eq) goto loc_822BF390;
	// lbz r11,345(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 345);
	// slw r10,r22,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r28.u8 & 0x3F));
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// stb r9,345(r3)
	PPC_STORE_U8(ctx.r3.u32 + 345, ctx.r9.u8);
loc_822BF390:
	// lwz r11,2960(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2960);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2960(r24)
	PPC_STORE_U32(ctx.r24.u32 + 2960, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822BF3A0;
	sub_822DFDA8(ctx, base);
loc_822BF3A0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e08a8
	ctx.lr = 0x822BF3B4;
	sub_822E08A8(ctx, base);
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r10,r11,25640
	ctx.r10.s64 = ctx.r11.s64 + 25640;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bf3dc
	if (!ctx.cr6.eq) goto loc_822BF3DC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r11,r11,-216
	ctx.r11.s64 = ctx.r11.s64 + -216;
loc_822BF3DC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r5,11
	ctx.r5.s64 = 720896;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,312
	ctx.r3.s64 = ctx.r10.s64 + 312;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,65504
	ctx.r5.u64 = ctx.r5.u64 | 65504;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bctrl 
	ctx.lr = 0x822BF404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bf41c
	if (ctx.cr6.eq) goto loc_822BF41C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82634d40
	ctx.lr = 0x822BF418;
	sub_82634D40(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_822BF41C:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822be8d8
	ctx.lr = 0x822BF428;
	sub_822BE8D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822bf5dc
	if (!ctx.cr6.eq) goto loc_822BF5DC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bne cr6,0x822bf5ac
	if (!ctx.cr6.eq) goto loc_822BF5AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x822bf5ac
	if (ctx.cr6.lt) goto loc_822BF5AC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x822bf5ac
	if (!ctx.cr6.eq) goto loc_822BF5AC;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,216
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 216, ctx.xer);
	// bne cr6,0x822bf5ac
	if (!ctx.cr6.eq) goto loc_822BF5AC;
	// addi r4,r11,33
	ctx.r4.s64 = ctx.r11.s64 + 33;
	// bl 0x82636a08
	ctx.lr = 0x822BF46C;
	sub_82636A08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bf5d4
	if (ctx.cr6.eq) goto loc_822BF5D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x826344d0
	ctx.lr = 0x822BF48C;
	sub_826344D0(ctx, base);
	// addic r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// subfe r11,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbzx r7,r11,r26
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stbx r7,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lbz r5,2(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// lbz r4,3(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// stb r4,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
loc_822BF4CC:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bf4cc
	if (!ctx.cr6.eq) goto loc_822BF4CC;
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bge cr6,0x822bf514
	if (!ctx.cr6.lt) goto loc_822BF514;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822BF4F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bf4f4
	if (!ctx.cr6.eq) goto loc_822BF4F4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x822bf518
	goto loc_822BF518;
loc_822BF514:
	// li r5,28
	ctx.r5.s64 = 28;
loc_822BF518:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82635430
	ctx.lr = 0x822BF52C;
	sub_82635430(ctx, base);
	// stw r22,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r22.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// bl 0x822ebfa8
	ctx.lr = 0x822BF544;
	sub_822EBFA8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822dfd18
	ctx.lr = 0x822BF550;
	sub_822DFD18(ctx, base);
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r24)
	PPC_STORE_U32(ctx.r24.u32 + 36, ctx.r11.u32);
	// bl 0x822bd538
	ctx.lr = 0x822BF564;
	sub_822BD538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bf590
	if (ctx.cr6.eq) goto loc_822BF590;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822bf590
	if (ctx.cr6.eq) goto loc_822BF590;
	// lbz r10,345(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 345);
	// slw r9,r22,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r28.u8 & 0x3F));
	// lwz r11,2960(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2960);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,345(r3)
	PPC_STORE_U8(ctx.r3.u32 + 345, ctx.r8.u8);
	// stw r11,2960(r24)
	PPC_STORE_U32(ctx.r24.u32 + 2960, ctx.r11.u32);
loc_822BF590:
	// bl 0x822dfda8
	ctx.lr = 0x822BF594;
	sub_822DFDA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822BF5AC:
	// bl 0x822dfd18
	ctx.lr = 0x822BF5B0;
	sub_822DFD18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
	// addi r5,r10,292
	ctx.r5.s64 = ctx.r10.s64 + 292;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r24,56
	ctx.r3.s64 = ctx.r24.s64 + 56;
	// bl 0x822eca80
	ctx.lr = 0x822BF5D0;
	sub_822ECA80(ctx, base);
	// bl 0x822dfda8
	ctx.lr = 0x822BF5D4;
	sub_822DFDA8(ctx, base);
loc_822BF5D4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82634d40
	ctx.lr = 0x822BF5DC;
	sub_82634D40(ctx, base);
loc_822BF5DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BF240) {
	__imp__sub_822BF240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822BF5F0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r19,r11,-348
	ctx.r19.s64 = ctx.r11.s64 + -348;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// addi r26,r11,25668
	ctx.r26.s64 = ctx.r11.s64 + 25668;
	// addi r23,r19,8
	ctx.r23.s64 = ctx.r19.s64 + 8;
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r9,-16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// lwz r8,-20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
loc_822BF61C:
	// lwz r28,-8(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822bf630
	if (!ctx.cr6.eq) goto loc_822BF630;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_822BF630:
	// addi r11,r26,16
	ctx.r11.s64 = ctx.r26.s64 + 16;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822bf64c
	if (!ctx.cr6.lt) goto loc_822BF64C;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// b 0x822bf65c
	goto loc_822BF65C;
loc_822BF64C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bne cr6,0x822bf65c
	if (!ctx.cr6.eq) goto loc_822BF65C;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
loc_822BF65C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822bf66c
	if (!ctx.cr6.gt) goto loc_822BF66C;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_822BF66C:
	// lwz r29,-4(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x822bf76c
	if (!ctx.cr6.lt) goto loc_822BF76C;
	// rlwinm r27,r28,6,0,25
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// slw r25,r20,r28
	ctx.r25.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r28.u8 & 0x3F));
loc_822BF680:
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r9,r26,-11676
	ctx.r9.s64 = ctx.r26.s64 + -11676;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822bd538
	ctx.lr = 0x822BF69C;
	sub_822BD538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bf758
	if (ctx.cr6.eq) goto loc_822BF758;
	// lbz r11,346(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 346);
	// lbz r10,347(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// and r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 & ctx.r25.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822bf758
	if (!ctx.cr6.eq) goto loc_822BF758;
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bf70c
	if (!ctx.cr6.eq) goto loc_822BF70C;
	// ld r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 368);
	// cmpld cr6,r21,r11
	ctx.cr6.compare<uint64_t>(ctx.r21.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822bf758
	if (ctx.cr6.lt) goto loc_822BF758;
	// lbz r11,350(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 350);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x822bf758
	if (!ctx.cr6.lt) goto loc_822BF758;
	// stw r20,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r20.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r22,12
	ctx.r3.s64 = ctx.r22.s64 + 12;
	// bl 0x822eca80
	ctx.lr = 0x822BF700;
	sub_822ECA80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822BF70C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r30,r11,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bf758
	if (ctx.cr6.eq) goto loc_822BF758;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lbz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 348);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bge cr6,0x822bf758
	if (!ctx.cr6.lt) goto loc_822BF758;
	// addi r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 + 44;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// cmpld cr6,r21,r9
	ctx.cr6.compare<uint64_t>(ctx.r21.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x822bf758
	if (ctx.cr6.lt) goto loc_822BF758;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822bf788
	if (ctx.cr6.lt) goto loc_822BF788;
loc_822BF758:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x822bf680
	if (ctx.cr6.lt) goto loc_822BF680;
	// lwz r9,-16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// lwz r8,-20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
loc_822BF76C:
	// addi r23,r23,12
	ctx.r23.s64 = ctx.r23.s64 + 12;
	// addi r11,r19,44
	ctx.r11.s64 = ctx.r19.s64 + 44;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bf61c
	if (ctx.cr6.lt) goto loc_822BF61C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822BF788:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r28.u32);
	// stw r20,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r20.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r9,345(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// and r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 & ctx.r25.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// addi r29,r10,8796
	ctx.r29.s64 = ctx.r10.s64 + 8796;
	// subfe r4,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r4,196(r22)
	PPC_STORE_U32(ctx.r22.u32 + 196, ctx.r4.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r22,12
	ctx.r3.s64 = ctx.r22.s64 + 12;
	// bl 0x822eca80
	ctx.lr = 0x822BF7C8;
	sub_822ECA80(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r22,36
	ctx.r3.s64 = ctx.r22.s64 + 36;
	// bl 0x822eca80
	ctx.lr = 0x822BF7E0;
	sub_822ECA80(ctx, base);
	// lbz r11,347(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 347);
	// li r3,1
	ctx.r3.s64 = 1;
	// or r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 | ctx.r25.u64;
	// stb r10,347(r31)
	PPC_STORE_U8(ctx.r31.u32 + 347, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BF5E8) {
	__imp__sub_822BF5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822BF800;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r26,r11,25120
	ctx.r26.s64 = ctx.r11.s64 + 25120;
loc_822BF81C:
	// addi r25,r26,36
	ctx.r25.s64 = ctx.r26.s64 + 36;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lwzx r11,r29,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bf900
	if (!ctx.cr6.gt) goto loc_822BF900;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_822BF834:
	// addi r11,r26,40
	ctx.r11.s64 = ctx.r26.s64 + 40;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x822bd538
	ctx.lr = 0x822BF848;
	sub_822BD538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bf8ec
	if (ctx.cr6.eq) goto loc_822BF8EC;
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bf8a4
	if (!ctx.cr6.eq) goto loc_822BF8A4;
	// ld r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 368);
	// cmpld cr6,r24,r11
	ctx.cr6.compare<uint64_t>(ctx.r24.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822bf8ec
	if (ctx.cr6.lt) goto loc_822BF8EC;
	// lbz r11,350(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 350);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x822bf8ec
	if (!ctx.cr6.lt) goto loc_822BF8EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r23,12
	ctx.r3.s64 = ctx.r23.s64 + 12;
	// bl 0x822eca80
	ctx.lr = 0x822BF898;
	sub_822ECA80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822BF8A4:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bf8ec
	if (ctx.cr6.eq) goto loc_822BF8EC;
	// lbz r11,345(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bf8ec
	if (!ctx.cr6.eq) goto loc_822BF8EC;
	// lbz r11,347(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 347);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bf8ec
	if (!ctx.cr6.eq) goto loc_822BF8EC;
	// lbz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x822bf8ec
	if (!ctx.cr6.lt) goto loc_822BF8EC;
	// ld r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 352);
	// cmpld cr6,r24,r11
	ctx.cr6.compare<uint64_t>(ctx.r24.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x822bf918
	if (!ctx.cr6.lt) goto loc_822BF918;
loc_822BF8EC:
	// lwzx r11,r29,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bf834
	if (ctx.cr6.lt) goto loc_822BF834;
loc_822BF900:
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmpwi cr6,r29,280
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 280, ctx.xer);
	// blt cr6,0x822bf81c
	if (ctx.cr6.lt) goto loc_822BF81C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822BF918:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r22,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r22.u32);
	// stw r22,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r22.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r22,196(r23)
	PPC_STORE_U32(ctx.r23.u32 + 196, ctx.r22.u32);
	// addi r30,r10,8796
	ctx.r30.s64 = ctx.r10.s64 + 8796;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r23,12
	ctx.r3.s64 = ctx.r23.s64 + 12;
	// bl 0x822eca80
	ctx.lr = 0x822BF948;
	sub_822ECA80(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r23,36
	ctx.r3.s64 = ctx.r23.s64 + 36;
	// bl 0x822eca80
	ctx.lr = 0x822BF95C;
	sub_822ECA80(ctx, base);
	// lbz r9,347(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 347);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stb r8,347(r31)
	PPC_STORE_U8(ctx.r31.u32 + 347, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BF7F8) {
	__imp__sub_822BF7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BF974) {
	__imp__sub_822BF974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822BF980;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,12
	ctx.r27.s64 = ctx.r3.s64 + 12;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,196(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r3,36
	ctx.r5.s64 = ctx.r3.s64 + 36;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// slw r23,r11,r4
	ctx.r23.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// bl 0x822bf240
	ctx.lr = 0x822BF9C4;
	sub_822BF240(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r24,1280
	ctx.r24.s64 = 1280;
	// beq cr6,0x822bf9e4
	if (ctx.cr6.eq) goto loc_822BF9E4;
	// li r24,176
	ctx.r24.s64 = 176;
	// bne cr6,0x822bf9ec
	if (!ctx.cr6.eq) goto loc_822BF9EC;
loc_822BF9E4:
	// li r25,720
	ctx.r25.s64 = 720;
	// b 0x822bf9f0
	goto loc_822BF9F0;
loc_822BF9EC:
	// li r25,264
	ctx.r25.s64 = 264;
loc_822BF9F0:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822bfa20
	if (!ctx.cr6.eq) goto loc_822BFA20;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bfa20
	if (ctx.cr6.eq) goto loc_822BFA20;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8a48
	ctx.lr = 0x822BFA1C;
	sub_822E8A48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822BFA20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822BFA28;
	sub_82634D40(ctx, base);
	// bl 0x822eac70
	ctx.lr = 0x822BFA2C;
	sub_822EAC70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dfd18
	ctx.lr = 0x822BFA34;
	sub_822DFD18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822bd538
	ctx.lr = 0x822BFA3C;
	sub_822BD538(ctx, base);
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r29,r11,22152
	ctx.r29.s64 = ctx.r11.s64 + 22152;
	// bne cr6,0x822bfabc
	if (!ctx.cr6.eq) goto loc_822BFABC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bfa64
	if (!ctx.cr6.eq) goto loc_822BFA64;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
loc_822BFA64:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bfa84
	if (ctx.cr6.eq) goto loc_822BFA84;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822bfa84
	if (!ctx.cr6.eq) goto loc_822BFA84;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
loc_822BFA84:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bfa98
	if (ctx.cr6.eq) goto loc_822BFA98;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822bfabc
	if (ctx.cr6.eq) goto loc_822BFABC;
loc_822BFA98:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822bfac0
	if (!ctx.cr6.eq) goto loc_822BFAC0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bfb3c
	if (ctx.cr6.eq) goto loc_822BFB3C;
	// lbz r10,345(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 345);
	// and r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 & ctx.r23.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bfac0
	if (!ctx.cr6.eq) goto loc_822BFAC0;
loc_822BFABC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFAC0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bfb3c
	if (ctx.cr6.eq) goto loc_822BFB3C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// beq cr6,0x822bfb38
	if (ctx.cr6.eq) goto loc_822BFB38;
	// addi r10,r11,348
	ctx.r10.s64 = ctx.r11.s64 + 348;
	// lbz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 348);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,348(r11)
	PPC_STORE_U8(ctx.r11.u32 + 348, ctx.r10.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r11,348(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 348);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x822bfb00
	if (!ctx.cr6.gt) goto loc_822BFB00;
	// li r11,7
	ctx.r11.s64 = 7;
loc_822BFB00:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r9,2000
	ctx.r9.s64 = 2000;
	// ori r10,r10,37856
	ctx.r10.u64 = ctx.r10.u64 | 37856;
	// sld r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x822bfb20
	if (ctx.cr6.gt) goto loc_822BFB20;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822BFB20:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r8,r3
	PPC_STORE_U64(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u64);
	// b 0x822bfb3c
	goto loc_822BFB3C;
loc_822BFB38:
	// stb r26,348(r11)
	PPC_STORE_U8(ctx.r11.u32 + 348, ctx.r26.u8);
loc_822BFB3C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822bfbb0
	if (ctx.cr6.eq) goto loc_822BFBB0;
	// lis r8,-32038
	ctx.r8.s64 = -2099642368;
	// lwz r11,25668(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25668);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x822bfbb0
	if (!ctx.cr6.lt) goto loc_822BFBB0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r29,152
	ctx.r9.s64 = ctx.r29.s64 + 152;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,25668(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25668, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r8,8796
	ctx.r5.s64 = ctx.r8.s64 + 8796;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BFB88;
	sub_822ECA80(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r24,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r24.u32);
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// b 0x822bfbc4
	goto loc_822BFBC4;
loc_822BFBB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bfbc4
	if (ctx.cr6.eq) goto loc_822BFBC4;
	// lbz r11,347(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// andc r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r23.u64;
	// stb r10,347(r3)
	PPC_STORE_U8(ctx.r3.u32 + 347, ctx.r10.u8);
loc_822BFBC4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bfbe0
	if (ctx.cr6.eq) goto loc_822BFBE0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r11,368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 368);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 368, ctx.r11.u32);
loc_822BFBE0:
	// bl 0x822dfda8
	ctx.lr = 0x822BFBE4;
	sub_822DFDA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x822BFBEC;
	sub_82634D40(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BF978) {
	__imp__sub_822BF978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFBF4) {
	__imp__sub_822BFBF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634430
	ctx.lr = 0x822BFC00;
	__savegprlr_18(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-15520(r1)
	ea = -15520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32038
	ctx.r10.s64 = -2099642368;
	// ori r9,r11,54464
	ctx.r9.u64 = ctx.r11.u64 | 54464;
	// li r4,6144
	ctx.r4.s64 = 6144;
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r3,r1,2848
	ctx.r3.s64 = ctx.r1.s64 + 2848;
	// std r11,17064(r10)
	PPC_STORE_U64(ctx.r10.u32 + 17064, ctx.r11.u64);
	// bl 0x822c1ec8
	ctx.lr = 0x822BFC30;
	sub_822C1EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bfed0
	if (!ctx.cr6.eq) goto loc_822BFED0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,2848
	ctx.r6.s64 = ctx.r1.s64 + 2848;
	// addi r5,r11,568
	ctx.r5.s64 = ctx.r11.s64 + 568;
	// li r4,6400
	ctx.r4.s64 = 6400;
	// addi r3,r1,8992
	ctx.r3.s64 = ctx.r1.s64 + 8992;
	// bl 0x822eca80
	ctx.lr = 0x822BFC50;
	sub_822ECA80(ctx, base);
	// li r5,6144
	ctx.r5.s64 = 6144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2848
	ctx.r3.s64 = ctx.r1.s64 + 2848;
	// bl 0x826344d0
	ctx.lr = 0x822BFC60;
	sub_826344D0(ctx, base);
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822BFC70:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822bfc70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BFC70;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r5,r10,540
	ctx.r5.s64 = ctx.r10.s64 + 540;
	// addi r4,r9,-3692
	ctx.r4.s64 = ctx.r9.s64 + -3692;
	// addi r3,r8,532
	ctx.r3.s64 = ctx.r8.s64 + 532;
	// addi r6,r11,480
	ctx.r6.s64 = ctx.r11.s64 + 480;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,8992
	ctx.r7.s64 = ctx.r1.s64 + 8992;
	// bl 0x822d79a8
	ctx.lr = 0x822BFCBC;
	sub_822D79A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,6400
	ctx.r5.s64 = 6400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,8992
	ctx.r3.s64 = ctx.r1.s64 + 8992;
	// bl 0x826344d0
	ctx.lr = 0x822BFCD0;
	sub_826344D0(ctx, base);
	// cntlzw r3,r31
	ctx.r3.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// bl 0x822be8d8
	ctx.lr = 0x822BFCDC;
	sub_822BE8D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822bfeb4
	if (!ctx.cr6.eq) goto loc_822BFEB4;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r5,200
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 200, ctx.xer);
	// bne cr6,0x822bfeb8
	if (!ctx.cr6.eq) goto loc_822BFEB8;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bfeb8
	if (ctx.cr6.eq) goto loc_822BFEB8;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// bl 0x822dfcd8
	ctx.lr = 0x822BFD08;
	sub_822DFCD8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7e48
	ctx.lr = 0x822BFD14;
	sub_822D7E48(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x822bfe68
	if (ctx.cr6.eq) goto loc_822BFE68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r11,472
	ctx.r4.s64 = ctx.r11.s64 + 472;
	// bl 0x822dcc40
	ctx.lr = 0x822BFD2C;
	sub_822DCC40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bfe68
	if (ctx.cr6.eq) goto loc_822BFE68;
	// lwz r23,8(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822bfe68
	if (ctx.cr6.eq) goto loc_822BFE68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r21,r1,288
	ctx.r21.s64 = ctx.r1.s64 + 288;
	// addi r26,r11,8796
	ctx.r26.s64 = ctx.r11.s64 + 8796;
	// addi r29,r10,456
	ctx.r29.s64 = ctx.r10.s64 + 456;
	// addi r28,r9,448
	ctx.r28.s64 = ctx.r9.s64 + 448;
	// addi r25,r8,432
	ctx.r25.s64 = ctx.r8.s64 + 432;
	// addi r24,r7,424
	ctx.r24.s64 = ctx.r7.s64 + 424;
	// addi r22,r6,408
	ctx.r22.s64 = ctx.r6.s64 + 408;
loc_822BFD74:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822BFD80;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822BFD88;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bfe5c
	if (ctx.cr6.eq) goto loc_822BFE5C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_822BFD98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822bfdbc
	if (ctx.cr6.eq) goto loc_822BFDBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bfd98
	if (ctx.cr6.eq) goto loc_822BFD98;
loc_822BFDBC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bfe5c
	if (!ctx.cr6.eq) goto loc_822BFE5C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// bl 0x822dcc40
	ctx.lr = 0x822BFDD4;
	sub_822DCC40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bfe5c
	if (ctx.cr6.eq) goto loc_822BFE5C;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822bfe5c
	if (ctx.cr6.eq) goto loc_822BFE5C;
loc_822BFDE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822BFDF4;
	sub_822DCC40(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822BFE04;
	sub_822DCC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822de0a8
	ctx.lr = 0x822BFE10;
	sub_822DE0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bfe30
	if (ctx.cr6.eq) goto loc_822BFE30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de140
	ctx.lr = 0x822BFE20;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bfe30
	if (ctx.cr6.eq) goto loc_822BFE30;
	// cmpwi cr6,r27,40
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 40, ctx.xer);
	// blt cr6,0x822bfe40
	if (ctx.cr6.lt) goto loc_822BFE40;
loc_822BFE30:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822bfde8
	if (!ctx.cr6.eq) goto loc_822BFDE8;
	// b 0x822bfe5c
	goto loc_822BFE5C;
loc_822BFE40:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BFE54;
	sub_822ECA80(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r21,r21,64
	ctx.r21.s64 = ctx.r21.s64 + 64;
loc_822BFE5C:
	// lwz r23,0(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822bfd74
	if (!ctx.cr6.eq) goto loc_822BFD74;
loc_822BFE68:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822BFE70;
	sub_822DBAD0(ctx, base);
	// bl 0x822dfd18
	ctx.lr = 0x822BFE74;
	sub_822DFD18(ctx, base);
	// lis r31,-32041
	ctx.r31.s64 = -2099838976;
	// rlwinm r5,r27,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r31,22548
	ctx.r11.s64 = ctx.r31.s64 + 22548;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82635430
	ctx.lr = 0x822BFE8C;
	sub_82635430(ctx, base);
	// stw r27,22548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22548, ctx.r27.u32);
	// bl 0x822bd6b0
	ctx.lr = 0x822BFE94;
	sub_822BD6B0(ctx, base);
	// bl 0x822dfda8
	ctx.lr = 0x822BFE98;
	sub_822DFDA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r11,376
	ctx.r3.s64 = ctx.r11.s64 + 376;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822BFEAC;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,15520
	ctx.r1.s64 = ctx.r1.s64 + 15520;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822BFEB4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_822BFEB8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,344
	ctx.r3.s64 = ctx.r11.s64 + 344;
	// bl 0x822ebbc8
	ctx.lr = 0x822BFEC8;
	sub_822EBBC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7e48
	ctx.lr = 0x822BFED0;
	sub_822D7E48(ctx, base);
loc_822BFED0:
	// addi r1,r1,15520
	ctx.r1.s64 = ctx.r1.s64 + 15520;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BFBF8) {
	__imp__sub_822BFBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822BFEE0;
	__savegprlr_14(ctx, base);
	// stwu r1,-1952(r1)
	ea = -1952 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bl 0x822dfd18
	ctx.lr = 0x822BFEF4;
	sub_822DFD18(ctx, base);
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// addi r25,r11,22152
	ctx.r25.s64 = ctx.r11.s64 + 22152;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// lwz r11,392(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bff90
	if (!ctx.cr6.gt) goto loc_822BFF90;
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r30,r1,1184
	ctx.r30.s64 = ctx.r1.s64 + 1184;
	// addi r10,r10,-30184
	ctx.r10.s64 = ctx.r10.s64 + -30184;
	// addi r31,r10,376
	ctx.r31.s64 = ctx.r10.s64 + 376;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r10,8796
	ctx.r29.s64 = ctx.r10.s64 + 8796;
loc_822BFF28:
	// cmpwi cr6,r26,10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 10, ctx.xer);
	// bge cr6,0x822bff90
	if (!ctx.cr6.lt) goto loc_822BFF90;
	// lbz r10,-32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bff80
	if (ctx.cr6.eq) goto loc_822BFF80;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bff80
	if (!ctx.cr6.eq) goto loc_822BFF80;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x822bff80
	if (!ctx.cr6.lt) goto loc_822BFF80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r31,-376
	ctx.r6.s64 = ctx.r31.s64 + -376;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822BFF6C;
	sub_822ECA80(ctx, base);
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// lwz r11,392(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 392);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rotlwi r26,r10,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822BFF80:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,384
	ctx.r31.s64 = ctx.r31.s64 + 384;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bff28
	if (ctx.cr6.lt) goto loc_822BFF28;
loc_822BFF90:
	// bl 0x822dfda8
	ctx.lr = 0x822BFF94;
	sub_822DFDA8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x822bffb4
	if (!ctx.cr6.eq) goto loc_822BFFB4;
	// lis r10,-32038
	ctx.r10.s64 = -2099642368;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,25272
	ctx.r9.s64 = ctx.r10.s64 + 25272;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// addi r1,r1,1952
	ctx.r1.s64 = ctx.r1.s64 + 1952;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822BFFB4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r5,r11,268
	ctx.r5.s64 = ctx.r11.s64 + 268;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x822eca80
	ctx.lr = 0x822BFFC8;
	sub_822ECA80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822c0038
	if (!ctx.cr6.gt) goto loc_822C0038;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r29,r11,19980
	ctx.r29.s64 = ctx.r11.s64 + 19980;
	// addi r28,r10,8828
	ctx.r28.s64 = ctx.r10.s64 + 8828;
	// addi r27,r9,264
	ctx.r27.s64 = ctx.r9.s64 + 264;
loc_822BFFF0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bne cr6,0x822c0000
	if (!ctx.cr6.eq) goto loc_822C0000;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_822C0000:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,1184
	ctx.r10.s64 = ctx.r1.s64 + 1184;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r9,r1,1424
	ctx.r9.s64 = ctx.r1.s64 + 1424;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r4,r30,368
	ctx.xer.ca = ctx.r30.u32 <= 368;
	ctx.r4.s64 = 368 - ctx.r30.s64;
	// add r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 + ctx.r9.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C0028;
	sub_822ECA80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822bfff0
	if (ctx.cr6.lt) goto loc_822BFFF0;
loc_822C0038:
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,25272
	ctx.r31.s64 = ctx.r11.s64 + 25272;
	// addi r11,r1,1424
	ctx.r11.s64 = ctx.r1.s64 + 1424;
	// addi r7,r31,420
	ctx.r7.s64 = ctx.r31.s64 + 420;
	// addi r6,r31,8136
	ctx.r6.s64 = ctx.r31.s64 + 8136;
	// addi r5,r10,848
	ctx.r5.s64 = ctx.r10.s64 + 848;
	// subfic r4,r30,368
	ctx.xer.ca = ctx.r30.u32 <= 368;
	ctx.r4.s64 = 368 - ctx.r30.s64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C0060;
	sub_822ECA80(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r14,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// bne cr6,0x822c0084
	if (!ctx.cr6.eq) goto loc_822C0084;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r11,r11,-216
	ctx.r11.s64 = ctx.r11.s64 + -216;
loc_822C0084:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r3,r10,184
	ctx.r3.s64 = ctx.r10.s64 + 184;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// addi r4,r1,1424
	ctx.r4.s64 = ctx.r1.s64 + 1424;
	// bctrl 
	ctx.lr = 0x822C00A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c0210
	if (ctx.cr6.eq) goto loc_822C0210;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x822C00BC;
	sub_82634D40(ctx, base);
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// bl 0x822dfd18
	ctx.lr = 0x822C00C4;
	sub_822DFD18(ctx, base);
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822C00D4;
	sub_822DFDA8(ctx, base);
	// lwz r11,2964(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2964);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2964(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2964, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822c00fc
	if (ctx.cr6.lt) goto loc_822C00FC;
	// bl 0x822eac70
	ctx.lr = 0x822C00EC;
	sub_822EAC70(ctx, base);
	// addi r11,r3,15000
	ctx.r11.s64 = ctx.r3.s64 + 15000;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r14,2964(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2964, ctx.r14.u32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_822C00FC:
	// bl 0x822dfd18
	ctx.lr = 0x822C0100;
	sub_822DFD18(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822c03ec
	if (!ctx.cr6.gt) goto loc_822C03EC;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
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
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r15,r1,1184
	ctx.r15.s64 = ctx.r1.s64 + 1184;
	// li r16,1
	ctx.r16.s64 = 1;
	// addi r25,r29,840
	ctx.r25.s64 = ctx.r29.s64 + 840;
	// addi r24,r30,832
	ctx.r24.s64 = ctx.r30.s64 + 832;
	// addi r23,r31,824
	ctx.r23.s64 = ctx.r31.s64 + 824;
	// addi r22,r3,816
	ctx.r22.s64 = ctx.r3.s64 + 816;
	// addi r21,r4,808
	ctx.r21.s64 = ctx.r4.s64 + 808;
	// addi r20,r5,800
	ctx.r20.s64 = ctx.r5.s64 + 800;
	// addi r19,r6,792
	ctx.r19.s64 = ctx.r6.s64 + 792;
	// addi r18,r7,784
	ctx.r18.s64 = ctx.r7.s64 + 784;
	// addi r17,r8,776
	ctx.r17.s64 = ctx.r8.s64 + 776;
	// addi r28,r9,752
	ctx.r28.s64 = ctx.r9.s64 + 752;
	// addi r27,r10,736
	ctx.r27.s64 = ctx.r10.s64 + 736;
	// addi r26,r11,716
	ctx.r26.s64 = ctx.r11.s64 + 716;
loc_822C0174:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822bd538
	ctx.lr = 0x822C017C;
	sub_822BD538(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c039c
	if (ctx.cr6.eq) goto loc_822C039C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c0390
	if (!ctx.cr6.eq) goto loc_822C0390;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bne cr6,0x822c0390
	if (!ctx.cr6.eq) goto loc_822C0390;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c0390
	if (ctx.cr6.eq) goto loc_822C0390;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822eca80
	ctx.lr = 0x822C01C0;
	sub_822ECA80(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634c80
	ctx.lr = 0x822C01CC;
	sub_82634C80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c01fc
	if (ctx.cr6.eq) goto loc_822C01FC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82634c80
	ctx.lr = 0x822C01E4;
	sub_82634C80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634c80
	ctx.lr = 0x822C01F0;
	sub_82634C80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c021c
	if (!ctx.cr6.eq) goto loc_822C021C;
loc_822C01FC:
	// lbz r11,377(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 377);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,377(r29)
	PPC_STORE_U8(ctx.r29.u32 + 377, ctx.r10.u8);
	// b 0x822c039c
	goto loc_822C039C;
loc_822C0210:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// stw r14,2964(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2964, ctx.r14.u32);
	// b 0x822c00fc
	goto loc_822C00FC;
loc_822C021C:
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d00
	ctx.lr = 0x822C0228;
	sub_82634D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c036c
	if (ctx.cr6.eq) goto loc_822C036C;
	// subf r30,r31,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cmplwi cr6,r30,1024
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1024, ctx.xer);
	// blt cr6,0x822c0244
	if (ctx.cr6.lt) goto loc_822C0244;
	// li r30,1023
	ctx.r30.s64 = 1023;
loc_822C0244:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82635430
	ctx.lr = 0x822C0254;
	sub_82635430(ctx, base);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stbx r31,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u8);
	// lbz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c029c
	if (ctx.cr6.eq) goto loc_822C029C;
loc_822C0270:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x822c0290
	if (ctx.cr6.lt) goto loc_822C0290;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// bgt cr6,0x822c0290
	if (ctx.cr6.gt) goto loc_822C0290;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_822C0290:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c0270
	if (!ctx.cr6.eq) goto loc_822C0270;
loc_822C029C:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82634c80
	ctx.lr = 0x822C02A8;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c02dc
	if (!ctx.cr6.eq) goto loc_822C02DC;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82634c80
	ctx.lr = 0x822C02BC;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c02dc
	if (!ctx.cr6.eq) goto loc_822C02DC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82634c80
	ctx.lr = 0x822C02D0;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// beq cr6,0x822c02e0
	if (ctx.cr6.eq) goto loc_822C02E0;
loc_822C02DC:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_822C02E0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82634c80
	ctx.lr = 0x822C02EC;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c031c
	if (!ctx.cr6.eq) goto loc_822C031C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82634c80
	ctx.lr = 0x822C0300;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c031c
	if (!ctx.cr6.eq) goto loc_822C031C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82634c80
	ctx.lr = 0x822C0314;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c0320
	if (ctx.cr6.eq) goto loc_822C0320;
loc_822C031C:
	// li r31,2
	ctx.r31.s64 = 2;
loc_822C0320:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82634c80
	ctx.lr = 0x822C032C;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c0360
	if (!ctx.cr6.eq) goto loc_822C0360;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82634c80
	ctx.lr = 0x822C0340;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c0360
	if (!ctx.cr6.eq) goto loc_822C0360;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82634c80
	ctx.lr = 0x822C0354;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822c0364
	if (ctx.cr6.eq) goto loc_822C0364;
loc_822C0360:
	// li r11,4
	ctx.r11.s64 = 4;
loc_822C0364:
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_822C036C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwimi r10,r16,7,0,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r16.u32, 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// stb r10,376(r29)
	PPC_STORE_U8(ctx.r29.u32 + 376, ctx.r10.u8);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// b 0x822c039c
	goto loc_822C039C;
loc_822C0390:
	// lbz r11,377(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 377);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,377(r29)
	PPC_STORE_U8(ctx.r29.u32 + 377, ctx.r11.u8);
loc_822C039C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r15,r15,24
	ctx.r15.s64 = ctx.r15.s64 + 24;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x822c0174
	if (!ctx.cr0.eq) goto loc_822C0174;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x822c03ec
	if (ctx.cr6.eq) goto loc_822C03EC;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// addi r7,r8,364
	ctx.r7.s64 = ctx.r8.s64 + 364;
	// lwz r11,2960(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2960);
	// lwz r10,364(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 364);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// stw r11,2960(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2960, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,364(r8)
	PPC_STORE_U32(ctx.r8.u32 + 364, ctx.r11.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
loc_822C03EC:
	// bl 0x822dfda8
	ctx.lr = 0x822C03F0;
	sub_822DFDA8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x822C03F8;
	sub_82634D40(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r11,668
	ctx.r3.s64 = ctx.r11.s64 + 668;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C0410;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,1952
	ctx.r1.s64 = ctx.r1.s64 + 1952;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BFED8) {
	__imp__sub_822BFED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C0420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c048c
	if (ctx.cr6.eq) goto loc_822C048C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c048c
	if (ctx.cr6.eq) goto loc_822C048C;
	// bl 0x822dfd18
	ctx.lr = 0x822C0448;
	sub_822DFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bd538
	ctx.lr = 0x822C0450;
	sub_822BD538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c047c
	if (ctx.cr6.eq) goto loc_822C047C;
	// lbz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 376);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c0478
	if (ctx.cr6.eq) goto loc_822C0478;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c047c
	if (!ctx.cr6.eq) goto loc_822C047C;
loc_822C0478:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822C047C:
	// bl 0x822dfda8
	ctx.lr = 0x822C0480;
	sub_822DFDA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C048C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0418) {
	__imp__sub_822C0418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C04A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r31,r11,25272
	ctx.r31.s64 = ctx.r11.s64 + 25272;
	// lwz r11,10072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c04c4
	if (!ctx.cr6.eq) goto loc_822C04C4;
loc_822C04B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C04C4:
	// bl 0x822eac70
	ctx.lr = 0x822C04C8;
	sub_822EAC70(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c04e8
	if (!ctx.cr6.eq) goto loc_822C04E8;
	// bl 0x822be6b0
	ctx.lr = 0x822C04DC;
	sub_822BE6B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C04E8:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r9,10076(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c0510
	if (ctx.cr6.eq) goto loc_822C0510;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c0510
	if (!ctx.cr6.gt) goto loc_822C0510;
	// bl 0x822be790
	ctx.lr = 0x822C0504;
	sub_822BE790(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C0510:
	// lwz r11,-19516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19516);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c0548
	if (!ctx.cr6.eq) goto loc_822C0548;
	// cmpld cr6,r30,r10
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x822c0548
	if (ctx.cr6.lt) goto loc_822C0548;
	// ld r11,-11320(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -11320);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822c0548
	if (ctx.cr6.lt) goto loc_822C0548;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822beb00
	ctx.lr = 0x822C053C;
	sub_822BEB00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C0548:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c0578
	if (!ctx.cr6.gt) goto loc_822C0578;
	// cmpld cr6,r30,r10
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x822c0578
	if (ctx.cr6.lt) goto loc_822C0578;
	// ld r11,-8208(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8208);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822c0578
	if (ctx.cr6.lt) goto loc_822C0578;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bfbf8
	ctx.lr = 0x822C056C;
	sub_822BFBF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C0578:
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826344d0
	ctx.lr = 0x822C0588;
	sub_826344D0(ctx, base);
	// bl 0x822dfd18
	ctx.lr = 0x822C058C;
	sub_822DFD18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bf5e8
	ctx.lr = 0x822C0598;
	sub_822BF5E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822dfda8
	ctx.lr = 0x822C05A0;
	sub_822DFDA8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822c05c0
	if (ctx.cr6.eq) goto loc_822C05C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c061c
	if (!ctx.cr6.eq) goto loc_822C061C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x822c0678
	if (!ctx.cr6.lt) goto loc_822C0678;
loc_822C05C0:
	// ld r10,-11296(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -11296);
	// cmpld cr6,r30,r10
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x822c06cc
	if (ctx.cr6.lt) goto loc_822C06CC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822c06cc
	if (ctx.cr6.lt) goto loc_822C06CC;
	// bl 0x822dfd18
	ctx.lr = 0x822C05DC;
	sub_822DFD18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bf7f8
	ctx.lr = 0x822C05E8;
	sub_822BF7F8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,8148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8148, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822C05FC;
	sub_822DFDA8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822c06c8
	if (ctx.cr6.eq) goto loc_822C06C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c06a0
	if (!ctx.cr6.eq) goto loc_822C06A0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822bec30
	ctx.lr = 0x822C0618;
	sub_822BEC30(ctx, base);
	// b 0x822c06a8
	goto loc_822C06A8;
loc_822C061C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c0670
	if (!ctx.cr6.eq) goto loc_822C0670;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c068c
	if (!ctx.cr6.eq) goto loc_822C068C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x822c068c
	if (!ctx.cr6.lt) goto loc_822C068C;
	// bl 0x822dfd18
	ctx.lr = 0x822C0640;
	sub_822DFD18(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822bd538
	ctx.lr = 0x822C0648;
	sub_822BD538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c0668
	if (ctx.cr6.eq) goto loc_822C0668;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,347(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stb r7,347(r3)
	PPC_STORE_U8(ctx.r3.u32 + 347, ctx.r7.u8);
loc_822C0668:
	// bl 0x822dfda8
	ctx.lr = 0x822C066C;
	sub_822DFDA8(ctx, base);
	// b 0x822c05c0
	goto loc_822C05C0;
loc_822C0670:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c068c
	if (!ctx.cr6.eq) goto loc_822C068C;
loc_822C0678:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822bec30
	ctx.lr = 0x822C0680;
	sub_822BEC30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C068C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bf978
	ctx.lr = 0x822C0694;
	sub_822BF978(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C06A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bf978
	ctx.lr = 0x822C06A8;
	sub_822BF978(ctx, base);
loc_822C06A8:
	// bl 0x822eac70
	ctx.lr = 0x822C06AC;
	sub_822EAC70(ctx, base);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,-11296(r31)
	PPC_STORE_U64(ctx.r31.u32 + -11296, ctx.r11.u64);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C06C8:
	// ld r10,-11296(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -11296);
loc_822C06CC:
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// lwz r11,25112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25112);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x822c06f0
	if (!ctx.cr6.lt) goto loc_822C06F0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	// beq cr6,0x822c0700
	if (ctx.cr6.eq) goto loc_822C0700;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c04b8
	if (ctx.cr6.eq) goto loc_822C04B8;
loc_822C06F0:
	// bl 0x822be840
	ctx.lr = 0x822C06F4;
	sub_822BE840(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C0700:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c04b8
	if (ctx.cr6.eq) goto loc_822C04B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c04b8
	if (!ctx.cr6.eq) goto loc_822C04B8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822c04b8
	if (ctx.cr6.lt) goto loc_822C04B8;
	// cmpld cr6,r30,r10
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x822c04b8
	if (ctx.cr6.lt) goto loc_822C04B8;
	// bl 0x822bfed8
	ctx.lr = 0x822C072C;
	sub_822BFED8(ctx, base);
	// bl 0x822eac70
	ctx.lr = 0x822C0730;
	sub_822EAC70(ctx, base);
	// addi r11,r3,2000
	ctx.r11.s64 = ctx.r3.s64 + 2000;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,-11296(r31)
	PPC_STORE_U64(ctx.r31.u32 + -11296, ctx.r11.u64);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0498) {
	__imp__sub_822C0498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0744) {
	__imp__sub_822C0744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0748) {
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
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r31,r11,25640
	ctx.r31.s64 = ctx.r11.s64 + 25640;
	// lwz r11,9704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c07ac
	if (ctx.cr6.eq) goto loc_822C07AC;
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// lwz r11,25112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c0780
	if (ctx.cr6.eq) goto loc_822C0780;
	// bl 0x822be840
	ctx.lr = 0x822C0780;
	sub_822BE840(ctx, base);
loc_822C0780:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c079c
	if (ctx.cr6.eq) goto loc_822C079C;
	// lwz r11,9708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c079c
	if (!ctx.cr6.gt) goto loc_822C079C;
	// bl 0x822be790
	ctx.lr = 0x822C079C;
	sub_822BE790(ctx, base);
loc_822C079C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c07ac
	if (!ctx.cr6.eq) goto loc_822C07AC;
	// bl 0x822e0048
	ctx.lr = 0x822C07AC;
	sub_822E0048(ctx, base);
loc_822C07AC:
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

PPC_WEAK_FUNC(sub_822C0748) {
	__imp__sub_822C0748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C07C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r11,r11,25284
	ctx.r11.s64 = ctx.r11.s64 + 25284;
	// lwz r10,10060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10060);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822be6b0
	sub_822BE6B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C07C0) {
	__imp__sub_822C07C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C07E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C07E4) {
	__imp__sub_822C07E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C07E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822C07F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x822dfd18
	ctx.lr = 0x822C0800;
	sub_822DFD18(ctx, base);
	// lis r10,-32038
	ctx.r10.s64 = -2099642368;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,25676
	ctx.r31.s64 = ctx.r10.s64 + 25676;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r11,5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5680, ctx.r11.u32);
	// ble cr6,0x822c0878
	if (!ctx.cr6.gt) goto loc_822C0878;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r10,8796
	ctx.r29.s64 = ctx.r10.s64 + 8796;
loc_822C0824:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bge cr6,0x822c0878
	if (!ctx.cr6.lt) goto loc_822C0878;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c0868
	if (ctx.cr6.eq) goto loc_822C0868;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,7748
	ctx.r9.s64 = ctx.r31.s64 + 7748;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5680, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x822eca80
	ctx.lr = 0x822C0864;
	sub_822ECA80(ctx, base);
	// lwz r11,5680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5680);
loc_822C0868:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822c0824
	if (ctx.cr6.lt) goto loc_822C0824;
loc_822C0878:
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,22152
	ctx.r9.s64 = ctx.r10.s64 + 22152;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -412, ctx.r11.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x822bd6b0
	ctx.lr = 0x822C0894;
	sub_822BD6B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822C08A0;
	sub_822DFDA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C07E8) {
	__imp__sub_822C07E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C08A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r8,r11,25640
	ctx.r8.s64 = ctx.r11.s64 + 25640;
	// lwz r11,9704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c094c
	if (ctx.cr6.eq) goto loc_822C094C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c094c
	if (ctx.cr6.eq) goto loc_822C094C;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c094c
	if (ctx.cr6.eq) goto loc_822C094C;
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C08F4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822c08f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C08F4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822cb220
	ctx.lr = 0x822C0910;
	sub_822CB220(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c0934
	if (!ctx.cr6.eq) goto loc_822C0934;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822c07e8
	ctx.lr = 0x822C0924;
	sub_822C07E8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r11,920
	ctx.r3.s64 = ctx.r11.s64 + 920;
	// b 0x822c0940
	goto loc_822C0940;
loc_822C0934:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,896
	ctx.r3.s64 = ctx.r11.s64 + 896;
loc_822C0940:
	// bl 0x822ebbc8
	ctx.lr = 0x822C0944;
	sub_822EBBC8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x822C094C;
	sub_82634D40(ctx, base);
loc_822C094C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C08A8) {
	__imp__sub_822C08A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C095C) {
	__imp__sub_822C095C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822C0968;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r23,r11,25676
	ctx.r23.s64 = ctx.r11.s64 + 25676;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,9668(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c0a70
	if (ctx.cr6.eq) goto loc_822C0A70;
	// cmpwi cr6,r4,2048
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2048, ctx.xer);
	// ble cr6,0x822c099c
	if (!ctx.cr6.gt) goto loc_822C099C;
	// li r24,2048
	ctx.r24.s64 = 2048;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x822c09b0
	goto loc_822C09B0;
loc_822C099C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822c09ac
	if (!ctx.cr6.gt) goto loc_822C09AC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x822c09b0
	goto loc_822C09B0;
loc_822C09AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C09B0:
	// li r4,140
	ctx.r4.s64 = 140;
	// bl 0x826365a8
	ctx.lr = 0x822C09B8;
	sub_826365A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c0a70
	if (ctx.cr6.eq) goto loc_822C0A70;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822c0a48
	if (!ctx.cr6.gt) goto loc_822C0A48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r29,72
	ctx.r30.s64 = ctx.r29.s64 + 72;
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// subf r26,r3,r29
	ctx.r26.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r27,r11,8796
	ctx.r27.s64 = ctx.r11.s64 + 8796;
loc_822C09E4:
	// addi r29,r30,-72
	ctx.r29.s64 = ctx.r30.s64 + -72;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// bl 0x822eca80
	ctx.lr = 0x822C09FC;
	sub_822ECA80(ctx, base);
	// add r5,r26,r31
	ctx.r5.u64 = ctx.r26.u64 + ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bd4c8
	ctx.lr = 0x822C0A0C;
	sub_822BD4C8(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c0a20
	if (!ctx.cr6.eq) goto loc_822C0A20;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_822C0A20:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822eca80
	ctx.lr = 0x822C0A30;
	sub_822ECA80(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// bne 0x822c09e4
	if (!ctx.cr0.eq) goto loc_822C09E4;
loc_822C0A48:
	// bl 0x822dfd18
	ctx.lr = 0x822C0A4C;
	sub_822DFD18(ctx, base);
	// lwz r3,-11716(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11716);
	// bl 0x82634d40
	ctx.lr = 0x822C0A54;
	sub_82634D40(ctx, base);
	// stw r25,-11716(r23)
	PPC_STORE_U32(ctx.r23.u32 + -11716, ctx.r25.u32);
	// stw r24,9672(r23)
	PPC_STORE_U32(ctx.r23.u32 + 9672, ctx.r24.u32);
	// bl 0x822bd6b0
	ctx.lr = 0x822C0A60;
	sub_822BD6B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822C0A6C;
	sub_822DFDA8(ctx, base);
	// bl 0x822be790
	ctx.lr = 0x822C0A70;
	sub_822BE790(ctx, base);
loc_822C0A70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0960) {
	__imp__sub_822C0960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C0A80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r31,r11,25692
	ctx.r31.s64 = ctx.r11.s64 + 25692;
	// lwz r11,9652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c0bfc
	if (!ctx.cr6.eq) goto loc_822C0BFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,6940
	ctx.r29.s64 = ctx.r11.s64 + 6940;
	// beq cr6,0x822c0adc
	if (ctx.cr6.eq) goto loc_822C0ADC;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r31,-52
	ctx.r10.s64 = ctx.r31.s64 + -52;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C0ABC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c0abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C0ABC;
	// lwz r11,-44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x822c0b2c
	if (!ctx.cr6.lt) goto loc_822C0B2C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822c0b38
	goto loc_822C0B38;
loc_822C0ADC:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,-52
	ctx.r11.s64 = ctx.r31.s64 + -52;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C0AF0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822c0af0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C0AF0;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r29,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r10,-44(r31)
	PPC_STORE_U32(ctx.r31.u32 + -44, ctx.r10.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r11,944
	ctx.r11.s64 = ctx.r11.s64 + 944;
	// li r8,250
	ctx.r8.s64 = 250;
	// stw r9,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r9.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r11,-52(r31)
	PPC_STORE_U32(ctx.r31.u32 + -52, ctx.r11.u32);
	// stw r8,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r8.u32);
	// stw r10,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r10.u32);
	// b 0x822c0b9c
	goto loc_822C0B9C;
loc_822C0B2C:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// ble cr6,0x822c0b3c
	if (!ctx.cr6.gt) goto loc_822C0B3C;
	// li r11,128
	ctx.r11.s64 = 128;
loc_822C0B38:
	// stw r11,-44(r31)
	PPC_STORE_U32(ctx.r31.u32 + -44, ctx.r11.u32);
loc_822C0B3C:
	// lwz r11,-40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822c0b50
	if (!ctx.cr6.lt) goto loc_822C0B50;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c0b5c
	goto loc_822C0B5C;
loc_822C0B50:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x822c0b60
	if (!ctx.cr6.gt) goto loc_822C0B60;
	// li r11,8
	ctx.r11.s64 = 8;
loc_822C0B5C:
	// stw r11,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r11.u32);
loc_822C0B60:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822c0b74
	if (ctx.cr6.gt) goto loc_822C0B74;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
loc_822C0B74:
	// lwz r10,-36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r11,-52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -52);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r10,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r10.u32);
	// bne cr6,0x822c0b9c
	if (!ctx.cr6.eq) goto loc_822C0B9C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,944
	ctx.r11.s64 = ctx.r11.s64 + 944;
loc_822C0B9C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,7716
	ctx.r3.s64 = ctx.r31.s64 + 7716;
	// addi r30,r10,8796
	ctx.r30.s64 = ctx.r10.s64 + 8796;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822eca80
	ctx.lr = 0x822C0BB8;
	sub_822ECA80(ctx, base);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c0bc8
	if (!ctx.cr6.eq) goto loc_822C0BC8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822C0BC8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822eca80
	ctx.lr = 0x822C0BDC;
	sub_822ECA80(ctx, base);
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// addi r3,r11,25120
	ctx.r3.s64 = ctx.r11.s64 + 25120;
	// bl 0x822bdca0
	ctx.lr = 0x822C0BE8;
	sub_822BDCA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,9652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9652, ctx.r11.u32);
	// addi r3,r10,-312
	ctx.r3.s64 = ctx.r10.s64 + -312;
	// bl 0x822c24b0
	ctx.lr = 0x822C0BFC;
	sub_822C24B0(ctx, base);
loc_822C0BFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0A78) {
	__imp__sub_822C0A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822C0C10;
	__savegprlr_14(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r17,r11,25640
	ctx.r17.s64 = ctx.r11.s64 + 25640;
	// lwz r11,9704(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c0fcc
	if (ctx.cr6.eq) goto loc_822C0FCC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r29,r11,368
	ctx.r29.s64 = ctx.r11.s64 + 368;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x822dfd18
	ctx.lr = 0x822C0C44;
	sub_822DFD18(ctx, base);
	// lwz r11,28(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// lis r9,-32041
	ctx.r9.s64 = -2099838976;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r9,22304
	ctx.r4.s64 = ctx.r9.s64 + 22304;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x822C0C68;
	sub_82635430(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,28(r17)
	PPC_STORE_U32(ctx.r17.u32 + 28, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bl 0x822dfda8
	ctx.lr = 0x822C0C78;
	sub_822DFDA8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822c0fcc
	if (!ctx.cr6.gt) goto loc_822C0FCC;
	// addi r16,r1,128
	ctx.r16.s64 = ctx.r1.s64 + 128;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_822C0C88:
	// lwz r15,24(r16)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// addi r14,r16,28
	ctx.r14.s64 = ctx.r16.s64 + 28;
	// addi r18,r17,-352
	ctx.r18.s64 = ctx.r17.s64 + -352;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// beq cr6,0x822c0ca0
	if (ctx.cr6.eq) goto loc_822C0CA0;
	// addi r18,r17,72
	ctx.r18.s64 = ctx.r17.s64 + 72;
loc_822C0CA0:
	// addi r19,r17,-11656
	ctx.r19.s64 = ctx.r17.s64 + -11656;
	// rlwinm r23,r15,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwzx r6,r23,r19
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r19.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822c0d18
	if (!ctx.cr6.gt) goto loc_822C0D18;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
loc_822C0CC0:
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_822C0CC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x822c0cec
	if (ctx.cr6.eq) goto loc_822C0CEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c0cc8
	if (ctx.cr6.eq) goto loc_822C0CC8;
loc_822C0CEC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c0d0c
	if (ctx.cr6.eq) goto loc_822C0D0C;
	// lwzx r11,r23,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r19.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,44
	ctx.r7.s64 = ctx.r7.s64 + 44;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c0cc0
	if (ctx.cr6.lt) goto loc_822C0CC0;
	// b 0x822c0d18
	goto loc_822C0D18;
loc_822C0D0C:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x822c0e40
	if (!ctx.cr6.lt) goto loc_822C0E40;
loc_822C0D18:
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x822c0d28
	if (!ctx.cr6.eq) goto loc_822C0D28;
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// b 0x822c0d2c
	goto loc_822C0D2C;
loc_822C0D28:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
loc_822C0D2C:
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822c0d40
	if (!ctx.cr6.lt) goto loc_822C0D40;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stwx r11,r23,r19
	PPC_STORE_U32(ctx.r23.u32 + ctx.r19.u32, ctx.r11.u32);
loc_822C0D40:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x822c0e40
	if (!ctx.cr6.lt) goto loc_822C0E40;
	// li r21,-1
	ctx.r21.s64 = -1;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// bl 0x822dfd18
	ctx.lr = 0x822C0D54;
	sub_822DFD18(ctx, base);
	// lwzx r11,r23,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c0e2c
	if (!ctx.cr6.gt) goto loc_822C0E2C;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// addi r24,r17,44
	ctx.r24.s64 = ctx.r17.s64 + 44;
	// li r22,-44
	ctx.r22.s64 = -44;
	// addi r28,r18,24
	ctx.r28.s64 = ctx.r18.s64 + 24;
	// subfic r25,r18,-24
	ctx.xer.ca = ctx.r18.u32 <= 4294967272;
	ctx.r25.s64 = -24 - ctx.r18.s64;
	// add r11,r27,r18
	ctx.r11.u64 = ctx.r27.u64 + ctx.r18.u64;
loc_822C0D78:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822c0d90
	if (!ctx.cr6.lt) goto loc_822C0D90;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// add r26,r25,r28
	ctx.r26.u64 = ctx.r25.u64 + ctx.r28.u64;
loc_822C0D90:
	// lwzx r11,r23,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c0de4
	if (!ctx.cr6.gt) goto loc_822C0DE4;
	// addi r30,r28,-24
	ctx.r30.s64 = ctx.r28.s64 + -24;
	// rlwinm r29,r15,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 6) & 0xFFFFFFC0;
loc_822C0DA8:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r10,r17,-11648
	ctx.r10.s64 = ctx.r17.s64 + -11648;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826369b0
	ctx.lr = 0x822C0DC8;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c0e0c
	if (ctx.cr6.eq) goto loc_822C0E0C;
	// lwzx r11,r23,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c0da8
	if (ctx.cr6.lt) goto loc_822C0DA8;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_822C0DE4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x822c0e00
	if (ctx.cr6.lt) goto loc_822C0E00;
	// add r11,r22,r18
	ctx.r11.u64 = ctx.r22.u64 + ctx.r18.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822c0e10
	if (!ctx.cr6.lt) goto loc_822C0E10;
loc_822C0E00:
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// add r22,r25,r28
	ctx.r22.u64 = ctx.r25.u64 + ctx.r28.u64;
	// b 0x822c0e10
	goto loc_822C0E10;
loc_822C0E0C:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_822C0E10:
	// lwzx r11,r23,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r19.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// add r11,r26,r18
	ctx.r11.u64 = ctx.r26.u64 + ctx.r18.u64;
	// blt cr6,0x822c0d78
	if (ctx.cr6.lt) goto loc_822C0D78;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822C0E2C:
	// bl 0x822dfda8
	ctx.lr = 0x822C0E30;
	sub_822DFDA8(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bge cr6,0x822c0e40
	if (!ctx.cr6.lt) goto loc_822C0E40;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_822C0E40:
	// mulli r11,r5,44
	ctx.r11.s64 = ctx.r5.s64 * 44;
	// add. r31,r11,r18
	ctx.r31.u64 = ctx.r11.u64 + ctx.r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822c0e7c
	if (ctx.cr0.eq) goto loc_822C0E7C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822C0E50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c0e50
	if (!ctx.cr6.eq) goto loc_822C0E50;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// blt cr6,0x822c0e84
	if (ctx.cr6.lt) goto loc_822C0E84;
	// li r30,23
	ctx.r30.s64 = 23;
	// b 0x822c0e8c
	goto loc_822C0E8C;
loc_822C0E7C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x822c0e9c
	goto loc_822C0E9C;
loc_822C0E84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c0e9c
	if (ctx.cr6.eq) goto loc_822C0E9C;
loc_822C0E8C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82635430
	ctx.lr = 0x822C0E9C;
	sub_82635430(ctx, base);
loc_822C0E9C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stbx r27,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u8);
	// bl 0x82634d40
	ctx.lr = 0x822C0EAC;
	sub_82634D40(ctx, base);
	// lwz r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// beq cr6,0x822c0eec
	if (ctx.cr6.eq) goto loc_822C0EEC;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_822C0EC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c0ec0
	if (!ctx.cr6.eq) goto loc_822C0EC0;
	// subf r11,r16,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r16.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// blt cr6,0x822c0ef4
	if (ctx.cr6.lt) goto loc_822C0EF4;
	// li r30,23
	ctx.r30.s64 = 23;
	// b 0x822c0efc
	goto loc_822C0EFC;
loc_822C0EEC:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x822c0f0c
	goto loc_822C0F0C;
loc_822C0EF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c0f0c
	if (ctx.cr6.eq) goto loc_822C0F0C;
loc_822C0EFC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822C0F0C;
	sub_82635430(ctx, base);
loc_822C0F0C:
	// stbx r27,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u8);
	// lwz r9,4(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r8,8(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// bl 0x822dfd18
	ctx.lr = 0x822C0F34;
	sub_822DFD18(ctx, base);
	// lbz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822c0f78
	if (ctx.cr6.eq) goto loc_822C0F78;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826369b0
	ctx.lr = 0x822C0F4C;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c0f78
	if (ctx.cr6.eq) goto loc_822C0F78;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822bd538
	ctx.lr = 0x822C0F5C;
	sub_822BD538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c0f78
	if (ctx.cr6.eq) goto loc_822C0F78;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,346(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 346);
	// slw r9,r11,r15
	ctx.r9.u64 = ctx.r15.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r15.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stb r8,346(r3)
	PPC_STORE_U8(ctx.r3.u32 + 346, ctx.r8.u8);
loc_822C0F78:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822bd538
	ctx.lr = 0x822C0F80;
	sub_822BD538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c0fa8
	if (ctx.cr6.eq) goto loc_822C0FA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,346(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 346);
	// lbz r9,347(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// slw r8,r11,r15
	ctx.r8.u64 = ctx.r15.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r15.u8 & 0x3F));
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// andc r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stb r7,346(r3)
	PPC_STORE_U8(ctx.r3.u32 + 346, ctx.r7.u8);
	// stb r6,347(r3)
	PPC_STORE_U8(ctx.r3.u32 + 347, ctx.r6.u8);
loc_822C0FA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822C0FB8;
	sub_822DFDA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r16,r16,40
	ctx.r16.s64 = ctx.r16.s64 + 40;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x822c0c88
	if (!ctx.cr0.eq) goto loc_822C0C88;
loc_822C0FCC:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C0C08) {
	__imp__sub_822C0C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C0FD4) {
	__imp__sub_822C0FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C0FD8) {
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
	// bl 0x822dfd18
	ctx.lr = 0x822C0FEC;
	sub_822DFD18(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r31,368(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// bl 0x822dfda8
	ctx.lr = 0x822C0FF8;
	sub_822DFDA8(ctx, base);
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

PPC_WEAK_FUNC(sub_822C0FD8) {
	__imp__sub_822C0FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1010) {
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
	// lis r11,-32037
	ctx.r11.s64 = -2099576832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-30192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c1054
	if (ctx.cr6.eq) goto loc_822C1054;
	// bl 0x822dfd18
	ctx.lr = 0x822C103C;
	sub_822DFD18(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,364(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822c105c
	if (!ctx.cr6.eq) goto loc_822C105C;
	// bl 0x822dfda8
	ctx.lr = 0x822C1054;
	sub_822DFDA8(ctx, base);
loc_822C1054:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c1088
	goto loc_822C1088;
loc_822C105C:
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r4,r11,25120
	ctx.r4.s64 = ctx.r11.s64 + 25120;
	// ori r5,r5,46172
	ctx.r5.u64 = ctx.r5.u64 | 46172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822C1074;
	sub_82635430(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822C107C;
	sub_822DFDA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bdca0
	ctx.lr = 0x822C1084;
	sub_822BDCA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C1088:
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

PPC_WEAK_FUNC(sub_822C1010) {
	__imp__sub_822C1010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C10A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822C10A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,13992
	ctx.r28.s64 = ctx.r11.s64 + 13992;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,21352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c115c
	if (ctx.cr6.eq) goto loc_822C115C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c115c
	if (ctx.cr6.lt) goto loc_822C115C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x822c115c
	if (ctx.cr6.gt) goto loc_822C115C;
	// bl 0x822dfd18
	ctx.lr = 0x822C10E0;
	sub_822DFD18(ctx, base);
	// addi r29,r28,11692
	ctx.r29.s64 = ctx.r28.s64 + 11692;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stwx r26,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r26.u32);
	// ble cr6,0x822c1158
	if (!ctx.cr6.gt) goto loc_822C1158;
loc_822C10F8:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x822c1158
	if (!ctx.cr6.lt) goto loc_822C1158;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c1148
	if (ctx.cr6.eq) goto loc_822C1148;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c1148
	if (ctx.cr6.eq) goto loc_822C1148;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r27,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// stwx r9,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r9.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x822bd4c8
	ctx.lr = 0x822C1148;
	sub_822BD4C8(ctx, base);
loc_822C1148:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822c10f8
	if (ctx.cr6.lt) goto loc_822C10F8;
loc_822C1158:
	// bl 0x822dfda8
	ctx.lr = 0x822C115C;
	sub_822DFDA8(ctx, base);
loc_822C115C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C10A0) {
	__imp__sub_822C10A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1164) {
	__imp__sub_822C1164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822C1170;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r30,r11,25712
	ctx.r30.s64 = ctx.r11.s64 + 25712;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,9632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c128c
	if (ctx.cr6.eq) goto loc_822C128C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c128c
	if (ctx.cr6.eq) goto loc_822C128C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c128c
	if (ctx.cr6.eq) goto loc_822C128C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r25,r30,-424
	ctx.r25.s64 = ctx.r30.s64 + -424;
	// beq cr6,0x822c11b4
	if (ctx.cr6.eq) goto loc_822C11B4;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_822C11B4:
	// addi r27,r30,-11728
	ctx.r27.s64 = ctx.r30.s64 + -11728;
	// rlwinm r28,r24,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c11f8
	if (!ctx.cr6.gt) goto loc_822C11F8;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_822C11D0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826369b0
	ctx.lr = 0x822C11DC;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c1298
	if (ctx.cr6.eq) goto loc_822C1298;
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c11d0
	if (ctx.cr6.lt) goto loc_822C11D0;
loc_822C11F8:
	// bl 0x822dfd18
	ctx.lr = 0x822C11FC;
	sub_822DFD18(ctx, base);
	// addi r29,r30,-28
	ctx.r29.s64 = ctx.r30.s64 + -28;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c124c
	if (!ctx.cr6.gt) goto loc_822C124C;
	// rlwinm r27,r24,6,0,25
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
loc_822C1214:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r10,r30,-11720
	ctx.r10.s64 = ctx.r30.s64 + -11720;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826369b0
	ctx.lr = 0x822C1234;
	sub_826369B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c1288
	if (ctx.cr6.eq) goto loc_822C1288;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c1214
	if (ctx.cr6.lt) goto loc_822C1214;
loc_822C124C:
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x822c1288
	if (!ctx.cr6.lt) goto loc_822C1288;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r24,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
	// stwx r10,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// addi r10,r30,-11720
	ctx.r10.s64 = ctx.r30.s64 + -11720;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,24
	ctx.r4.s64 = 24;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822bd4c8
	ctx.lr = 0x822C1288;
	sub_822BD4C8(ctx, base);
loc_822C1288:
	// bl 0x822dfda8
	ctx.lr = 0x822C128C;
	sub_822DFDA8(ctx, base);
loc_822C128C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822C1298:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// mulli r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 * 44;
	// lwz r10,372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1168) {
	__imp__sub_822C1168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C12B8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c1168
	sub_822C1168(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C12B8) {
	__imp__sub_822C12B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C12C4) {
	__imp__sub_822C12C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C12C8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822c1168
	sub_822C1168(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C12C8) {
	__imp__sub_822C12C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C12D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C12D4) {
	__imp__sub_822C12D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C12D8) {
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
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,25676
	ctx.r31.s64 = ctx.r11.s64 + 25676;
	// lwz r11,9668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c13e4
	if (ctx.cr6.eq) goto loc_822C13E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c13e4
	if (ctx.cr6.eq) goto loc_822C13E4;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c13e4
	if (ctx.cr6.eq) goto loc_822C13E4;
	// bl 0x822dfd18
	ctx.lr = 0x822C131C;
	sub_822DFD18(ctx, base);
	// lwz r6,5680(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5680);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822c1384
	if (!ctx.cr6.gt) goto loc_822C1384;
	// addi r8,r31,7748
	ctx.r8.s64 = ctx.r31.s64 + 7748;
loc_822C1330:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822C1338:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822c135c
	if (ctx.cr6.eq) goto loc_822C135C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c1338
	if (ctx.cr6.eq) goto loc_822C1338;
loc_822C135C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c1378
	if (ctx.cr6.eq) goto loc_822C1378;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822c1330
	if (ctx.cr6.lt) goto loc_822C1330;
	// b 0x822c1384
	goto loc_822C1384;
loc_822C1378:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x822c13a0
	if (!ctx.cr6.lt) goto loc_822C13A0;
loc_822C1384:
	// cmpwi cr6,r6,40
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 40, ctx.xer);
	// bge cr6,0x822c139c
	if (!ctx.cr6.lt) goto loc_822C139C;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r10,5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5680, ctx.r10.u32);
	// b 0x822c13a0
	goto loc_822C13A0;
loc_822C139C:
	// li r11,39
	ctx.r11.s64 = 39;
loc_822C13A0:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,7748
	ctx.r10.s64 = ctx.r31.s64 + 7748;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r31,7748
	ctx.r4.s64 = ctx.r31.s64 + 7748;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// bl 0x82634bc0
	ctx.lr = 0x822C13BC;
	sub_82634BC0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,7748
	ctx.r3.s64 = ctx.r31.s64 + 7748;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x822eca80
	ctx.lr = 0x822C13D4;
	sub_822ECA80(ctx, base);
	// bl 0x822bd6b0
	ctx.lr = 0x822C13D8;
	sub_822BD6B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822dfda8
	ctx.lr = 0x822C13E4;
	sub_822DFDA8(ctx, base);
loc_822C13E4:
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

PPC_WEAK_FUNC(sub_822C12D8) {
	__imp__sub_822C12D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C13FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C13FC) {
	__imp__sub_822C13FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// lwz r3,25268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25268);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1400) {
	__imp__sub_822C1400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C140C) {
	__imp__sub_822C140C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r10,r11,25680
	ctx.r10.s64 = ctx.r11.s64 + 25680;
	// stw r4,25680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25680, ctx.r4.u32);
	// stw r3,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1410) {
	__imp__sub_822C1410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1424) {
	__imp__sub_822C1424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822C1430;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
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
loc_822C1444:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822c1444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C1444;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6a38
	ctx.lr = 0x822C1454;
	sub_822D6A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c146c
	if (ctx.cr6.eq) goto loc_822C146C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,1020
	ctx.r3.s64 = ctx.r11.s64 + 1020;
	// bl 0x822ebbc8
	ctx.lr = 0x822C146C;
	sub_822EBBC8(ctx, base);
loc_822C146C:
	// lis r11,-32212
	ctx.r11.s64 = -2111045632;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// bl 0x822c1860
	ctx.lr = 0x822C1478;
	sub_822C1860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,996
	ctx.r3.s64 = ctx.r10.s64 + 996;
	// bl 0x822ebbc8
	ctx.lr = 0x822C1484;
	sub_822EBBC8(ctx, base);
	// lis r27,-32038
	ctx.r27.s64 = -2099642368;
	// lwz r9,25268(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25268);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822c1510
	if (!ctx.cr6.eq) goto loc_822C1510;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r30,-32038
	ctx.r30.s64 = -2099642368;
	// lis r28,-32025
	ctx.r28.s64 = -2098790400;
	// addi r29,r11,972
	ctx.r29.s64 = ctx.r11.s64 + 972;
loc_822C14A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82329520
	ctx.lr = 0x822C14AC;
	sub_82329520(ctx, base);
	// bl 0x82329520
	ctx.lr = 0x822C14B0;
	sub_82329520(ctx, base);
	// lwz r11,-30184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -30184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c14c4
	if (ctx.cr6.eq) goto loc_822C14C4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822c14cc
	goto loc_822C14CC;
loc_822C14C4:
	// bl 0x822c0498
	ctx.lr = 0x822C14C8;
	sub_822C0498(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822C14CC:
	// lwz r11,25268(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c14f4
	if (!ctx.cr6.eq) goto loc_822C14F4;
	// lwz r11,25672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c14f4
	if (ctx.cr6.eq) goto loc_822C14F4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C14F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 | ctx.r31.u64;
loc_822C14F4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822c1504
	if (!ctx.cr6.eq) goto loc_822C1504;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x822eac98
	ctx.lr = 0x822C1504;
	sub_822EAC98(ctx, base);
loc_822C1504:
	// lwz r11,25268(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c14a4
	if (ctx.cr6.eq) goto loc_822C14A4;
loc_822C1510:
	// bl 0x822c0748
	ctx.lr = 0x822C1514;
	sub_822C0748(ctx, base);
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r31,r11,25680
	ctx.r31.s64 = ctx.r11.s64 + 25680;
	// lwz r11,25680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c1534
	if (ctx.cr6.eq) goto loc_822C1534;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C1534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C1534:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c1860
	ctx.lr = 0x822C153C;
	sub_822C1860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,948
	ctx.r3.s64 = ctx.r11.s64 + 948;
	// bl 0x822ebbc8
	ctx.lr = 0x822C1548;
	sub_822EBBC8(ctx, base);
	// bl 0x822dfdc0
	ctx.lr = 0x822C154C;
	sub_822DFDC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1428) {
	__imp__sub_822C1428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C155C) {
	__imp__sub_822C155C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C1568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r31,r11,25268
	ctx.r31.s64 = ctx.r11.s64 + 25268;
	// lwz r11,10076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c158c
	if (!ctx.cr6.eq) goto loc_822C158C;
loc_822C1580:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C158C:
	// lis r30,-32038
	ctx.r30.s64 = -2099642368;
	// lwz r11,25708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c15b0
	if (ctx.cr6.eq) goto loc_822C15B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C15B0:
	// bl 0x822f0c38
	ctx.lr = 0x822C15B4;
	sub_822F0C38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c1580
	if (!ctx.cr6.eq) goto loc_822C1580;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r11,25708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25708, ctx.r11.u32);
	// bl 0x822dfdc0
	ctx.lr = 0x822C15D0;
	sub_822DFDC0(ctx, base);
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// addi r3,r10,5160
	ctx.r3.s64 = ctx.r10.s64 + 5160;
	// bl 0x822dfdc8
	ctx.lr = 0x822C15DC;
	sub_822DFDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c15f4
	if (ctx.cr6.eq) goto loc_822C15F4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r29,25708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25708, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C15F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8148, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1560) {
	__imp__sub_822C1560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r11,r11,25708
	ctx.r11.s64 = ctx.r11.s64 + 25708;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-440(r11)
	PPC_STORE_U32(ctx.r11.u32 + -440, ctx.r10.u32);
	// b 0x822dfdc0
	sub_822DFDC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1608) {
	__imp__sub_822C1608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1628) {
	__imp__sub_822C1628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C162C) {
	__imp__sub_822C162C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1630) {
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
	// bl 0x822eac70
	ctx.lr = 0x822C1648;
	sub_822EAC70(ctx, base);
	// lis r10,-32038
	ctx.r10.s64 = -2099642368;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// std r11,25272(r10)
	PPC_STORE_U64(ctx.r10.u32 + 25272, ctx.r11.u64);
	// bl 0x822dfdc0
	ctx.lr = 0x822C165C;
	sub_822DFDC0(ctx, base);
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

PPC_WEAK_FUNC(sub_822C1630) {
	__imp__sub_822C1630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1670) {
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
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r31,r11,25708
	ctx.r31.s64 = ctx.r11.s64 + 25708;
	// lwz r11,25708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c16ac
	if (ctx.cr6.eq) goto loc_822C16AC;
loc_822C1694:
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
loc_822C16AC:
	// lwz r11,7708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c16cc
	if (ctx.cr6.eq) goto loc_822C16CC;
	// bl 0x822f0c38
	ctx.lr = 0x822C16BC;
	sub_822F0C38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c1694
	if (!ctx.cr6.eq) goto loc_822C1694;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7708, ctx.r11.u32);
loc_822C16CC:
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

PPC_WEAK_FUNC(sub_822C1670) {
	__imp__sub_822C1670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C16E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C16E4) {
	__imp__sub_822C16E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C16E8) {
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
	// bl 0x822dfd18
	ctx.lr = 0x822C1704;
	sub_822DFD18(ctx, base);
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// li r5,152
	ctx.r5.s64 = 152;
	// addi r30,r11,22152
	ctx.r30.s64 = ctx.r11.s64 + 22152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822C171C;
	sub_82635430(ctx, base);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// ble cr6,0x822c17a8
	if (!ctx.cr6.gt) goto loc_822C17A8;
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-30184
	ctx.r11.s64 = ctx.r10.s64 + -30184;
	// addi r11,r11,345
	ctx.r11.s64 = ctx.r11.s64 + 345;
loc_822C174C:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c1768
	if (ctx.cr6.eq) goto loc_822C1768;
	// lbz r10,-321(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -321);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c176c
	if (!ctx.cr6.eq) goto loc_822C176C;
loc_822C1768:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_822C176C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r4,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bdnz 0x822c174c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C174C;
loc_822C17A8:
	// bl 0x822dfda8
	ctx.lr = 0x822C17AC;
	sub_822DFDA8(ctx, base);
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// addi r10,r11,13984
	ctx.r10.s64 = ctx.r11.s64 + 13984;
	// lwz r11,13984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822C16E8) {
	__imp__sub_822C16E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C17DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C17DC) {
	__imp__sub_822C17DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C17E0) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822C17E8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822c180c
	if (!ctx.cr6.eq) goto loc_822C180C;
	// stwcx. r10,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822c17e8
	if (!ctx.cr0.eq) goto loc_822C17E8;
	// b 0x822c1814
	goto loc_822C1814;
loc_822C180C:
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822C1814:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822C1820:
	// db16cyc 
loc_822C1824:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822c1848
	if (!ctx.cr6.eq) goto loc_822C1848;
	// stwcx. r10,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822c1824
	if (!ctx.cr0.eq) goto loc_822C1824;
	// b 0x822c1850
	goto loc_822C1850;
loc_822C1848:
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822C1850:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c1820
	if (!ctx.cr6.eq) goto loc_822C1820;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C17E0) {
	__imp__sub_822C17E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// stw r3,-29700(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29700, ctx.r3.u32);
	// sync 
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1860) {
	__imp__sub_822C1860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1870) {
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
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lwz r11,-29700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29700);
	// lwz r9,-29704(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29704);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822c18c0
	if (!ctx.cr6.eq) goto loc_822C18C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c18ac
	if (ctx.cr6.eq) goto loc_822C18AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C18A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c18c0
	if (!ctx.cr6.eq) goto loc_822C18C0;
loc_822C18AC:
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
loc_822C18C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1870) {
	__imp__sub_822C1870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C18D4) {
	__imp__sub_822C18D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C18D8) {
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
	// lis r30,-32021
	ctx.r30.s64 = -2098528256;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,-29720
	ctx.r3.s64 = ctx.r30.s64 + -29720;
	// bl 0x822c17e0
	ctx.lr = 0x822C18FC;
	sub_822C17E0(ctx, base);
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-30176
	ctx.r31.s64 = ctx.r11.s64 + -30176;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822eca80
	ctx.lr = 0x822C1918;
	sub_822ECA80(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwsync 
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-29720(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29720, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822C18D8) {
	__imp__sub_822C18D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822C1950;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-29720
	ctx.r27.s64 = ctx.r11.s64 + -29720;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c17e0
	ctx.lr = 0x822C196C;
	sub_822C17E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c1a14
	if (ctx.cr6.eq) goto loc_822C1A14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1132
	ctx.r4.s64 = ctx.r11.s64 + 1132;
	// bl 0x82634c80
	ctx.lr = 0x822C1984;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,3
	ctx.r30.s64 = ctx.r3.s64 + 3;
	// bne cr6,0x822c1994
	if (!ctx.cr6.eq) goto loc_822C1994;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_822C1994:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,1124
	ctx.r4.s64 = ctx.r11.s64 + 1124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822C19A8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c19b4
	if (!ctx.cr6.eq) goto loc_822C19B4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_822C19B4:
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-30176
	ctx.r31.s64 = ctx.r11.s64 + -30176;
	// addi r29,r10,8796
	ctx.r29.s64 = ctx.r10.s64 + 8796;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x822eca80
	ctx.lr = 0x822C19D8;
	sub_822ECA80(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822c19f8
	if (ctx.cr6.eq) goto loc_822C19F8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x822eca80
	ctx.lr = 0x822C19F4;
	sub_822ECA80(ctx, base);
	// b 0x822c1a2c
	goto loc_822C1A2C;
loc_822C19F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x822eca80
	ctx.lr = 0x822C1A10;
	sub_822ECA80(ctx, base);
	// b 0x822c1a2c
	goto loc_822C1A2C;
loc_822C1A14:
	// lis r10,-32025
	ctx.r10.s64 = -2098790400;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-30176
	ctx.r31.s64 = ctx.r10.s64 + -30176;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r11.u8);
	// stb r10,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r10.u8);
loc_822C1A2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1948) {
	__imp__sub_822C1948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1A4C) {
	__imp__sub_822C1A4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822C1A58;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r30,r11,-29708
	ctx.r30.s64 = ctx.r11.s64 + -29708;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c1a7c
	if (!ctx.cr6.eq) goto loc_822C1A7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x822f1140
	ctx.lr = 0x822C1A7C;
	sub_822F1140(ctx, base);
loc_822C1A7C:
	// lis r11,-32212
	ctx.r11.s64 = -2111045632;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,6360
	ctx.r9.s64 = ctx.r11.s64 + 6360;
	// addi r8,r10,6472
	ctx.r8.s64 = ctx.r10.s64 + 6472;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x822eac70
	ctx.lr = 0x822C1AA4;
	sub_822EAC70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822c2aa0
	ctx.lr = 0x822C1ABC;
	sub_822C2AA0(ctx, base);
	// addi r7,r30,-12
	ctx.r7.s64 = ctx.r30.s64 + -12;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822c17e0
	ctx.lr = 0x822C1ACC;
	sub_822C17E0(ctx, base);
	// lis r10,-32025
	ctx.r10.s64 = -2098790400;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r31,r10,-30176
	ctx.r31.s64 = ctx.r10.s64 + -30176;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stb r29,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r29.u8);
	// stb r29,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r29.u8);
	// bne cr6,0x822c1b30
	if (!ctx.cr6.eq) goto loc_822C1B30;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82634d40
	ctx.lr = 0x822C1AF4;
	sub_82634D40(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r5,r10,1208
	ctx.r5.s64 = ctx.r10.s64 + 1208;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r6,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r6.u32);
	// stw r6,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r6.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r11.u32);
	// bl 0x822eca80
	ctx.lr = 0x822C1B24;
	sub_822ECA80(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r29.u8);
	// b 0x822c1b70
	goto loc_822C1B70;
loc_822C1B30:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82634d40
	ctx.lr = 0x822C1B38;
	sub_82634D40(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c1b54
	if (ctx.cr6.eq) goto loc_822C1B54;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// b 0x822c1b5c
	goto loc_822C1B5C;
loc_822C1B54:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,1188
	ctx.r6.s64 = ctx.r11.s64 + 1188;
loc_822C1B5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x822eca80
	ctx.lr = 0x822C1B70;
	sub_822ECA80(ctx, base);
loc_822C1B70:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwsync 
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r29.u32);
	// bne cr6,0x822c1bcc
	if (!ctx.cr6.eq) goto loc_822C1BCC;
	// bl 0x822eac70
	ctx.lr = 0x822C1B9C;
	sub_822EAC70(ctx, base);
	// subf r11,r27,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r27.s64;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// divdu r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 / ctx.r10.u64;
	// addi r3,r9,1156
	ctx.r3.s64 = ctx.r9.s64 + 1156;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// bl 0x822ebbc8
	ctx.lr = 0x822C1BBC;
	sub_822EBBC8(ctx, base);
	// sync 
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822C1BCC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x822ebbc8
	ctx.lr = 0x822C1BDC;
	sub_822EBBC8(ctx, base);
	// sync 
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1A50) {
	__imp__sub_822C1A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1BEC) {
	__imp__sub_822C1BEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C1BF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r30,r11,-29708
	ctx.r30.s64 = ctx.r11.s64 + -29708;
	// lwz r11,-29708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c1d0c
	if (!ctx.cr6.eq) goto loc_822C1D0C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed818
	ctx.lr = 0x822C1C18;
	sub_822ED818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c1d0c
	if (!ctx.cr6.eq) goto loc_822C1D0C;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// bl 0x822c17e0
	ctx.lr = 0x822C1C28;
	sub_822C17E0(ctx, base);
	// lis r10,-32025
	ctx.r10.s64 = -2098790400;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r10,-30176
	ctx.r31.s64 = ctx.r10.s64 + -30176;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r29,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r29.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r29,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r29.u8);
	// addi r5,r11,1280
	ctx.r5.s64 = ctx.r11.s64 + 1280;
	// stb r29,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r29.u8);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C1C68;
	sub_822ECA80(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwsync 
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// sync 
	// lis r9,-32025
	ctx.r9.s64 = -2098790400;
	// lis r8,-32212
	ctx.r8.s64 = -2111045632;
	// addi r7,r9,-29720
	ctx.r7.s64 = ctx.r9.s64 + -29720;
	// addi r5,r8,6736
	ctx.r5.s64 = ctx.r8.s64 + 6736;
	// addis r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 262144;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// bl 0x822ed700
	ctx.lr = 0x822C1CAC;
	sub_822ED700(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c1d0c
	if (ctx.cr6.eq) goto loc_822C1D0C;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// bl 0x822c17e0
	ctx.lr = 0x822C1CC4;
	sub_822C17E0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r5,r10,1236
	ctx.r5.s64 = ctx.r10.s64 + 1236;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x822eca80
	ctx.lr = 0x822C1CE0;
	sub_822ECA80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwsync 
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r29,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C1D0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1BF0) {
	__imp__sub_822C1BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1D18) {
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
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r10,-29708(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29708);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c1d48
	if (!ctx.cr6.eq) goto loc_822C1D48;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed818
	ctx.lr = 0x822C1D3C;
	sub_822ED818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x822c1d4c
	if (ctx.cr6.eq) goto loc_822C1D4C;
loc_822C1D48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C1D4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1D18) {
	__imp__sub_822C1D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1D5C) {
	__imp__sub_822C1D5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r3,-29708(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29708);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1D60) {
	__imp__sub_822C1D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1D6C) {
	__imp__sub_822C1D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r11,r11,-29708
	ctx.r11.s64 = ctx.r11.s64 + -29708;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1D70) {
	__imp__sub_822C1D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1D8C) {
	__imp__sub_822C1D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1D90) {
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
	// lis r31,-32021
	ctx.r31.s64 = -2098528256;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r31,-29720
	ctx.r3.s64 = ctx.r31.s64 + -29720;
	// bl 0x822c17e0
	ctx.lr = 0x822C1DB0;
	sub_822C17E0(ctx, base);
	// lis r6,-32025
	ctx.r6.s64 = -2098790400;
	// li r5,456
	ctx.r5.s64 = 456;
	// addi r4,r6,-30176
	ctx.r4.s64 = ctx.r6.s64 + -30176;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82635430
	ctx.lr = 0x822C1DC4;
	sub_82635430(ctx, base);
	// lwsync 
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,-29720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29720, ctx.r5.u32);
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

PPC_WEAK_FUNC(sub_822C1D90) {
	__imp__sub_822C1D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1DE4) {
	__imp__sub_822C1DE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1DE8) {
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
	// lis r5,-32021
	ctx.r5.s64 = -2098528256;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r7,r5,-29712
	ctx.r7.s64 = ctx.r5.s64 + -29712;
	// addi r3,r7,-8
	ctx.r3.s64 = ctx.r7.s64 + -8;
	// bl 0x822c17e0
	ctx.lr = 0x822C1E08;
	sub_822C17E0(ctx, base);
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// lwz r10,-29712(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -29712);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r11.u32);
	// stw r10,-29712(r5)
	PPC_STORE_U32(ctx.r5.u32 + -29712, ctx.r10.u32);
	// lwsync 
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,-8(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8, ctx.r4.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
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
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1DE8) {
	__imp__sub_822C1DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1E50) {
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
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,-25584
	ctx.r31.s64 = ctx.r11.s64 + -25584;
loc_822C1E6C:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_822C1E70:
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
	// bne 0x822c1e70
	if (!ctx.cr0.eq) goto loc_822C1E70;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c1e6c
	if (!ctx.cr6.eq) goto loc_822C1E6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r31,460
	ctx.r6.s64 = ctx.r31.s64 + 460;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// bl 0x822eca80
	ctx.lr = 0x822C1EA4;
	sub_822ECA80(ctx, base);
	// lwsync 
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822C1E50) {
	__imp__sub_822C1E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C1EC4) {
	__imp__sub_822C1EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-25584
	ctx.r9.s64 = ctx.r11.s64 + -25584;
loc_822C1ED8:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_822C1EDC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822c1edc
	if (!ctx.cr0.eq) goto loc_822C1EDC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c1ed8
	if (!ctx.cr6.eq) goto loc_822C1ED8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c1f54
	if (ctx.cr6.eq) goto loc_822C1F54;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822C1F10:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822c1f10
	if (!ctx.cr6.eq) goto loc_822C1F10;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822c1f54
	if (!ctx.cr6.lt) goto loc_822C1F54;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_822C1F38:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822c1f38
	if (!ctx.cr6.eq) goto loc_822C1F38;
	// li r8,0
	ctx.r8.s64 = 0;
loc_822C1F54:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C1EC8) {
	__imp__sub_822C1EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1F68) {
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
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,-29688
	ctx.r31.s64 = ctx.r11.s64 + -29688;
loc_822C1F88:
	// addi r9,r31,4104
	ctx.r9.s64 = ctx.r31.s64 + 4104;
loc_822C1F8C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r10,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822c1f8c
	if (!ctx.cr0.eq) goto loc_822C1F8C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822c1f88
	if (!ctx.cr6.eq) goto loc_822C1F88;
	// lwz r30,4620(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4620);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c1fc8
	if (ctx.cr6.eq) goto loc_822C1FC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x82635430
	ctx.lr = 0x822C1FC8;
	sub_82635430(ctx, base);
loc_822C1FC8:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4104, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822C1F68) {
	__imp__sub_822C1F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C1FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822C1FF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C2004:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c2004
	if (!ctx.cr6.eq) goto loc_822C2004;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,96
	ctx.r30.s64 = ctx.r11.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634da0
	ctx.lr = 0x822C202C;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2420
	if (ctx.cr6.eq) goto loc_822C2420;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1720
	ctx.r5.s64 = ctx.r11.s64 + 1720;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C204C;
	sub_822ECA80(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822C2060:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822c2060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C2060;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r26,r11,-3692
	ctx.r26.s64 = ctx.r11.s64 + -3692;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r6,r10,1664
	ctx.r6.s64 = ctx.r10.s64 + 1664;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r5,r9,1640
	ctx.r5.s64 = ctx.r9.s64 + 1640;
	// addi r3,r8,1632
	ctx.r3.s64 = ctx.r8.s64 + 1632;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x822d79a8
	ctx.lr = 0x822C20B0;
	sub_822D79A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822C20C4;
	sub_826344D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822C20CC;
	sub_82634D40(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822c2408
	if (!ctx.cr6.eq) goto loc_822C2408;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r4,200
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 200, ctx.xer);
	// bne cr6,0x822c240c
	if (!ctx.cr6.eq) goto loc_822C240C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c240c
	if (ctx.cr6.eq) goto loc_822C240C;
	// stb r25,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r25.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,1612
	ctx.r4.s64 = ctx.r11.s64 + 1612;
	// bl 0x82634c80
	ctx.lr = 0x822C20FC;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2168
	if (ctx.cr6.eq) goto loc_822C2168;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,1600
	ctx.r4.s64 = ctx.r11.s64 + 1600;
	// bl 0x82634c80
	ctx.lr = 0x822C2110;
	sub_82634C80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2168
	if (ctx.cr6.eq) goto loc_822C2168;
	// lbzu r11,9(r4)
	ea = 9 + ctx.r4.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c2154
	if (ctx.cr6.eq) goto loc_822C2154;
loc_822C2130:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x822c2154
	if (ctx.cr6.eq) goto loc_822C2154;
	// cmplwi cr6,r31,472
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 472, ctx.xer);
	// bge cr6,0x822c2154
	if (!ctx.cr6.lt) goto loc_822C2154;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c2130
	if (!ctx.cr6.eq) goto loc_822C2130;
loc_822C2154:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82635430
	ctx.lr = 0x822C2160;
	sub_82635430(ctx, base);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// stbx r25,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u8);
loc_822C2168:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7e48
	ctx.lr = 0x822C2170;
	sub_822D7E48(ctx, base);
	// lbz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 384);
	// addi r30,r1,384
	ctx.r30.s64 = ctx.r1.s64 + 384;
	// addi r31,r1,384
	ctx.r31.s64 = ctx.r1.s64 + 384;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c21f4
	if (ctx.cr6.eq) goto loc_822C21F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r27,47
	ctx.r27.s64 = 47;
	// li r28,38
	ctx.r28.s64 = 38;
	// addi r29,r11,1592
	ctx.r29.s64 = ctx.r11.s64 + 1592;
loc_822C2194:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x822c21b8
	if (!ctx.cr6.eq) goto loc_822C21B8;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x822c21b8
	if (!ctx.cr6.eq) goto loc_822C21B8;
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x822c21e4
	goto loc_822C21E4;
loc_822C21B8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822C21C8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c21dc
	if (!ctx.cr6.eq) goto loc_822C21DC;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x822c21e4
	goto loc_822C21E4;
loc_822C21DC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_822C21E4:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2194
	if (!ctx.cr6.eq) goto loc_822C2194;
loc_822C21F4:
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,1580
	ctx.r4.s64 = ctx.r11.s64 + 1580;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82635190
	ctx.lr = 0x822C220C;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c2228
	if (ctx.cr6.eq) goto loc_822C2228;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,1544
	ctx.r3.s64 = ctx.r11.s64 + 1544;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2220;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822C2228:
	// li r4,47
	ctx.r4.s64 = 47;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82634d00
	ctx.lr = 0x822C2234;
	sub_82634D00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2420
	if (ctx.cr6.eq) goto loc_822C2420;
	// addi r11,r1,392
	ctx.r11.s64 = ctx.r1.s64 + 392;
	// subf r30,r11,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 96, ctx.xer);
	// bge cr6,0x822c2420
	if (!ctx.cr6.lt) goto loc_822C2420;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82635430
	ctx.lr = 0x822C2260;
	sub_82635430(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r25,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u8);
	// bl 0x82634d00
	ctx.lr = 0x822C2274;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2288
	if (ctx.cr6.eq) goto loc_822C2288;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,1540
	ctx.r7.s64 = ctx.r11.s64 + 1540;
	// b 0x822c2290
	goto loc_822C2290;
loc_822C2288:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r11,10904
	ctx.r7.s64 = ctx.r11.s64 + 10904;
loc_822C2290:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,1512
	ctx.r5.s64 = ctx.r11.s64 + 1512;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x822eca80
	ctx.lr = 0x822C22A8;
	sub_822ECA80(ctx, base);
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C22B8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822c22b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C22B8;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,1504
	ctx.r3.s64 = ctx.r11.s64 + 1504;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,896
	ctx.r6.s64 = ctx.r1.s64 + 896;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x822d79a8
	ctx.lr = 0x822C22F8;
	sub_822D79A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c23e8
	if (!ctx.cr6.eq) goto loc_822C23E8;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r4,200
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 200, ctx.xer);
	// bne cr6,0x822c23ec
	if (!ctx.cr6.eq) goto loc_822C23EC;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c23ec
	if (ctx.cr6.eq) goto loc_822C23EC;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822e8a48
	ctx.lr = 0x822C2328;
	sub_822E8A48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7e48
	ctx.lr = 0x822C2334;
	sub_822D7E48(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822c2350
	if (!ctx.cr6.eq) goto loc_822C2350;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,1472
	ctx.r3.s64 = ctx.r11.s64 + 1472;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2348;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822C2350:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
loc_822C235C:
	// addi r8,r11,4104
	ctx.r8.s64 = ctx.r11.s64 + 4104;
loc_822C2360:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822c2360
	if (!ctx.cr0.eq) goto loc_822C2360;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822c235c
	if (!ctx.cr6.eq) goto loc_822C235C;
	// li r9,1024
	ctx.r9.s64 = 1024;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C2394:
	// lwzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r6,r9,8,8,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF0000;
	// rlwimi r7,r9,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r5,r7,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822c2394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C2394;
	// lwz r10,4620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4620);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4620, ctx.r10.u32);
	// lwsync 
	// stw r25,4104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4104, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822C23D4;
	sub_82634D40(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,1444
	ctx.r3.s64 = ctx.r11.s64 + 1444;
	// bl 0x822ebbc8
	ctx.lr = 0x822C23E0;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822C23E8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822C23EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,1412
	ctx.r3.s64 = ctx.r11.s64 + 1412;
	// bl 0x822ebbc8
	ctx.lr = 0x822C23F8;
	sub_822EBBC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7e48
	ctx.lr = 0x822C2400;
	sub_822D7E48(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822C2408:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_822C240C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,1380
	ctx.r3.s64 = ctx.r11.s64 + 1380;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2418;
	sub_822EBBC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7e48
	ctx.lr = 0x822C2420;
	sub_822D7E48(ctx, base);
loc_822C2420:
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C1FF0) {
	__imp__sub_822C1FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2428) {
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
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-25584
	ctx.r11.s64 = ctx.r11.s64 + -25584;
loc_822C2440:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_822C2444:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822c2444
	if (!ctx.cr0.eq) goto loc_822C2444;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c2440
	if (!ctx.cr6.eq) goto loc_822C2440;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r7,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r7.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stb r7,616(r11)
	PPC_STORE_U8(ctx.r11.u32 + 616, ctx.r7.u8);
	// stb r7,460(r11)
	PPC_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwsync 
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c84c0
	ctx.lr = 0x822C24A0;
	sub_822C84C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C2428) {
	__imp__sub_822C2428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C24B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c24dc
	if (ctx.cr6.eq) goto loc_822C24DC;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,-25080
	ctx.r9.s64 = ctx.r11.s64 + -25080;
	// stw r10,-25080(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25080, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// blr 
	return;
loc_822C24DC:
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-25080
	ctx.r9.s64 = ctx.r10.s64 + -25080;
	// stw r11,-25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25080, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C24B0) {
	__imp__sub_822C24B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C24F8) {
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
	// bl 0x822eac70
	ctx.lr = 0x822C2518;
	sub_822EAC70(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r9,1796
	ctx.r3.s64 = ctx.r9.s64 + 1796;
	// ld r11,-25592(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -25592);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r5,r8,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r8.s64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C253C;
	sub_822EBBC8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c255c
	if (ctx.cr6.eq) goto loc_822C255C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c255c
	if (ctx.cr6.eq) goto loc_822C255C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C255C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C255C:
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

PPC_WEAK_FUNC(sub_822C24F8) {
	__imp__sub_822C24F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2574) {
	__imp__sub_822C2574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2578) {
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
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82634da0
	ctx.lr = 0x822C258C;
	sub_82634DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2670
	if (ctx.cr6.eq) goto loc_822C2670;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,16383
	ctx.r5.s64 = 16383;
	// addi r3,r11,13288
	ctx.r3.s64 = ctx.r11.s64 + 13288;
	// bl 0x822ebf30
	ctx.lr = 0x822C25AC;
	sub_822EBF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822c25d0
	if (ctx.cr6.gt) goto loc_822C25D0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82634d40
	ctx.lr = 0x822C25BC;
	sub_82634D40(ctx, base);
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
loc_822C25D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r7,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C25E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c25e8
	if (!ctx.cr6.eq) goto loc_822C25E8;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2640
	if (ctx.cr6.eq) goto loc_822C2640;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
loc_822C2610:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x822c2630
	if (ctx.cr6.eq) goto loc_822C2630;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x822c2630
	if (ctx.cr6.eq) goto loc_822C2630;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x822c263c
	if (!ctx.cr6.eq) goto loc_822C263C;
loc_822C2630:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r7,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// bne 0x822c2610
	if (!ctx.cr0.eq) goto loc_822C2610;
loc_822C263C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822C2640:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C2644:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c2644
	if (!ctx.cr6.eq) goto loc_822C2644;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bge cr6,0x822c2674
	if (!ctx.cr6.lt) goto loc_822C2674;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c84c0
	ctx.lr = 0x822C2670;
	sub_822C84C0(ctx, base);
loc_822C2670:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C2674:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C2578) {
	__imp__sub_822C2578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2684) {
	__imp__sub_822C2684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2688) {
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
loc_822C26A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c26a0
	if (!ctx.cr6.eq) goto loc_822C26A0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,13288
	ctx.r3.s64 = ctx.r10.s64 + 13288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x822ebfa8
	ctx.lr = 0x822C26CC;
	sub_822EBFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2714
	if (!ctx.cr6.eq) goto loc_822C2714;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822C26D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c26d8
	if (!ctx.cr6.eq) goto loc_822C26D8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,1872
	ctx.r3.s64 = ctx.r10.s64 + 1872;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x822ebbc8
	ctx.lr = 0x822C2700;
	sub_822EBBC8(ctx, base);
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
loc_822C2714:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,1816
	ctx.r3.s64 = ctx.r11.s64 + 1816;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2720;
	sub_822EBBC8(ctx, base);
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

PPC_WEAK_FUNC(sub_822C2688) {
	__imp__sub_822C2688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2734) {
	__imp__sub_822C2734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263442c
	ctx.lr = 0x822C2740;
	__savegprlr_17(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// lis r25,-32021
	ctx.r25.s64 = -2098528256;
	// addi r26,r9,1796
	ctx.r26.s64 = ctx.r9.s64 + 1796;
	// addi r22,r8,2168
	ctx.r22.s64 = ctx.r8.s64 + 2168;
	// addi r21,r7,2144
	ctx.r21.s64 = ctx.r7.s64 + 2144;
	// addi r24,r6,2108
	ctx.r24.s64 = ctx.r6.s64 + 2108;
	// addi r20,r10,2052
	ctx.r20.s64 = ctx.r10.s64 + 2052;
	// addi r23,r11,2024
	ctx.r23.s64 = ctx.r11.s64 + 2024;
loc_822C2790:
	// bl 0x822eac70
	ctx.lr = 0x822C2794;
	sub_822EAC70(ctx, base);
	// ld r11,-25592(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + -25592);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C27B0;
	sub_822EBBC8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822c27d0
	if (ctx.cr6.eq) goto loc_822C27D0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c27d0
	if (ctx.cr6.eq) goto loc_822C27D0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C27D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C27D0:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9e80
	ctx.lr = 0x822C27DC;
	sub_822C9E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c299c
	if (!ctx.cr6.eq) goto loc_822C299C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r6,248(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ebbc8
	ctx.lr = 0x822C27FC;
	sub_822EBBC8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822c2820
	if (ctx.cr6.eq) goto loc_822C2820;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2820
	if (ctx.cr6.eq) goto loc_822C2820;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bctrl 
	ctx.lr = 0x822C2820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C2820:
	// bl 0x822eac70
	ctx.lr = 0x822C2824;
	sub_822EAC70(ctx, base);
	// ld r11,-25592(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + -25592);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2840;
	sub_822EBBC8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822c2860
	if (ctx.cr6.eq) goto loc_822C2860;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2860
	if (ctx.cr6.eq) goto loc_822C2860;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C2860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C2860:
	// bl 0x822eac70
	ctx.lr = 0x822C2864;
	sub_822EAC70(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r29,244(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// li r31,1
	ctx.r31.s64 = 1;
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// add r28,r3,r9
	ctx.r28.u64 = ctx.r3.u64 + ctx.r9.u64;
	// bl 0x822eac70
	ctx.lr = 0x822C2884;
	sub_822EAC70(ctx, base);
	// cmpld cr6,r3,r28
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r28.u64, ctx.xer);
	// bge cr6,0x822c295c
	if (!ctx.cr6.lt) goto loc_822C295C;
loc_822C288C:
	// bl 0x822eac70
	ctx.lr = 0x822C2890;
	sub_822EAC70(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// mulli r10,r11,1000
	ctx.r10.s64 = ctx.r11.s64 * 1000;
	// add r31,r3,r10
	ctx.r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bl 0x822eac70
	ctx.lr = 0x822C28A0;
	sub_822EAC70(ctx, base);
	// cmpld cr6,r3,r31
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r31.u64, ctx.xer);
	// bge cr6,0x822c28c8
	if (!ctx.cr6.lt) goto loc_822C28C8;
loc_822C28A8:
	// bl 0x822c1870
	ctx.lr = 0x822C28AC;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c29a8
	if (!ctx.cr6.eq) goto loc_822C29A8;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822eac98
	ctx.lr = 0x822C28BC;
	sub_822EAC98(ctx, base);
	// bl 0x822eac70
	ctx.lr = 0x822C28C0;
	sub_822EAC70(ctx, base);
	// cmpld cr6,r3,r31
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r31.u64, ctx.xer);
	// blt cr6,0x822c28a8
	if (ctx.cr6.lt) goto loc_822C28A8;
loc_822C28C8:
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C28D8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822c28d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C28D8;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ca120
	ctx.lr = 0x822C28F0;
	sub_822CA120(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c295c
	if (ctx.cr6.eq) goto loc_822C295C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822c290c
	if (!ctx.cr6.eq) goto loc_822C290C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x822c2950
	goto loc_822C2950;
loc_822C290C:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x822c291c
	if (!ctx.cr6.eq) goto loc_822C291C;
	// addi r29,r29,5
	ctx.r29.s64 = ctx.r29.s64 + 5;
	// b 0x822c2950
	goto loc_822C2950;
loc_822C291C:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x822c295c
	if (ctx.cr6.eq) goto loc_822C295C;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x822c29c0
	if (ctx.cr6.eq) goto loc_822C29C0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2938;
	sub_822EBBC8(ctx, base);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,-92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -92, ctx.xer);
	// beq cr6,0x822c2a14
	if (ctx.cr6.eq) goto loc_822C2A14;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bge cr6,0x822c2a14
	if (!ctx.cr6.lt) goto loc_822C2A14;
loc_822C2950:
	// bl 0x822eac70
	ctx.lr = 0x822C2954;
	sub_822EAC70(ctx, base);
	// cmpld cr6,r3,r28
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r28.u64, ctx.xer);
	// blt cr6,0x822c288c
	if (ctx.cr6.lt) goto loc_822C288C;
loc_822C295C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c8530
	ctx.lr = 0x822C2964;
	sub_822C8530(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822c2a5c
	if (ctx.cr6.eq) goto loc_822C2A5C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2974;
	sub_822EBBC8(ctx, base);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpwi cr6,r18,20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 20, ctx.xer);
	// blt cr6,0x822c2790
	if (ctx.cr6.lt) goto loc_822C2790;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,-90
	ctx.r11.s64 = -90;
	// addi r5,r10,1996
	ctx.r5.s64 = ctx.r10.s64 + 1996;
loc_822C298C:
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r17,8
	ctx.r3.s64 = ctx.r17.s64 + 8;
	// bl 0x822eca80
	ctx.lr = 0x822C299C;
	sub_822ECA80(ctx, base);
loc_822C299C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822C29A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c8530
	ctx.lr = 0x822C29B0;
	sub_822C8530(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,-92
	ctx.r11.s64 = -92;
	// addi r5,r10,1980
	ctx.r5.s64 = ctx.r10.s64 + 1980;
	// b 0x822c298c
	goto loc_822C298C;
loc_822C29C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c8530
	ctx.lr = 0x822C29C8;
	sub_822C8530(ctx, base);
	// li r11,-90
	ctx.r11.s64 = -90;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r5,r10,1944
	ctx.r5.s64 = ctx.r10.s64 + 1944;
	// addi r3,r17,8
	ctx.r3.s64 = ctx.r17.s64 + 8;
	// bl 0x822eca80
	ctx.lr = 0x822C29E4;
	sub_822ECA80(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822c299c
	if (ctx.cr6.eq) goto loc_822C299C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c299c
	if (ctx.cr6.eq) goto loc_822C299C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x822C2A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822C2A14:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// li r5,168
	ctx.r5.s64 = 168;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82635430
	ctx.lr = 0x822C2A24;
	sub_82635430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c8530
	ctx.lr = 0x822C2A2C;
	sub_822C8530(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822c299c
	if (ctx.cr6.eq) goto loc_822C299C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c299c
	if (ctx.cr6.eq) goto loc_822C299C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x822C2A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_822C2A5C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822c2a80
	if (ctx.cr6.eq) goto loc_822C2A80;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2a80
	if (ctx.cr6.eq) goto loc_822C2A80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x822C2A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C2A80:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,1924
	ctx.r4.s64 = ctx.r11.s64 + 1924;
	// bl 0x822c24f8
	ctx.lr = 0x822C2A90;
	sub_822C24F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2738) {
	__imp__sub_822C2738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C2A9C) {
	__imp__sub_822C2A9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C2AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822C2AA8;
	__savegprlr_19(ctx, base);
	// stwu r1,-2432(r1)
	ea = -2432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x822eac70
	ctx.lr = 0x822C2AC0;
	sub_822EAC70(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r23,r11,-25080
	ctx.r23.s64 = ctx.r11.s64 + -25080;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r24,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r24.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r24,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r24.u32);
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,-512(r23)
	PPC_STORE_U64(ctx.r23.u32 + -512, ctx.r11.u64);
	// bl 0x826344d0
	ctx.lr = 0x822C2AEC;
	sub_826344D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822d6a38
	ctx.lr = 0x822C2AF4;
	sub_822D6A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2d80
	if (!ctx.cr6.eq) goto loc_822C2D80;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2b14
	if (ctx.cr6.eq) goto loc_822C2B14;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C2B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C2B14:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d6bb8
	ctx.lr = 0x822C2B20;
	sub_822D6BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2b3c
	if (!ctx.cr6.eq) goto loc_822C2B3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r11,2912
	ctx.r3.s64 = ctx.r11.s64 + 2912;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822ebfa8
	ctx.lr = 0x822C2B3C;
	sub_822EBFA8(ctx, base);
loc_822C2B3C:
	// bl 0x822c2578
	ctx.lr = 0x822C2B40;
	sub_822C2578(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2b58
	if (ctx.cr6.eq) goto loc_822C2B58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,8840
	ctx.r4.s64 = ctx.r11.s64 + 8840;
	// b 0x822c2b60
	goto loc_822C2B60;
loc_822C2B58:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,2908
	ctx.r4.s64 = ctx.r11.s64 + 2908;
loc_822C2B60:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,2884
	ctx.r3.s64 = ctx.r11.s64 + 2884;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2B6C;
	sub_822EBBC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r21,r11,1796
	ctx.r21.s64 = ctx.r11.s64 + 1796;
	// addi r29,r10,13288
	ctx.r29.s64 = ctx.r10.s64 + 13288;
	// addi r28,r9,2816
	ctx.r28.s64 = ctx.r9.s64 + 2816;
	// addi r30,r8,2784
	ctx.r30.s64 = ctx.r8.s64 + 2784;
loc_822C2B94:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2bc0
	if (!ctx.cr6.eq) goto loc_822C2BC0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822c2738
	ctx.lr = 0x822C2BB0;
	sub_822C2738(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2d80
	if (!ctx.cr6.eq) goto loc_822C2D80;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x822c2688
	ctx.lr = 0x822C2BC0;
	sub_822C2688(ctx, base);
loc_822C2BC0:
	// bl 0x822eac70
	ctx.lr = 0x822C2BC4;
	sub_822EAC70(ctx, base);
	// ld r11,-512(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + -512);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2BE0;
	sub_822EBBC8(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822c2c00
	if (ctx.cr6.eq) goto loc_822C2C00;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2c00
	if (ctx.cr6.eq) goto loc_822C2C00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C2C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C2C00:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822ca320
	ctx.lr = 0x822C2C18;
	sub_822CA320(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c2d14
	if (ctx.cr6.eq) goto loc_822C2D14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c84c0
	ctx.lr = 0x822C2C2C;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x822c2d78
	if (!ctx.cr6.eq) goto loc_822C2D78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2C3C;
	sub_822EBBC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ec0c0
	ctx.lr = 0x822C2C44;
	sub_822EC0C0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822c84c0
	ctx.lr = 0x822C2C4C;
	sub_822C84C0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x822c2b94
	if (ctx.cr6.lt) goto loc_822C2B94;
loc_822C2C58:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822c84c0
	ctx.lr = 0x822C2C60;
	sub_822C84C0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2d80
	if (ctx.cr6.eq) goto loc_822C2D80;
	// bl 0x822eac70
	ctx.lr = 0x822C2C70;
	sub_822EAC70(ctx, base);
	// ld r11,-512(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + -512);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r10,2756
	ctx.r31.s64 = ctx.r10.s64 + 2756;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C2C94;
	sub_822EBBC8(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822c2cb4
	if (ctx.cr6.eq) goto loc_822C2CB4;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2cb4
	if (ctx.cr6.eq) goto loc_822C2CB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C2CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C2CB4:
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822ca6c0
	ctx.lr = 0x822C2CCC;
	sub_822CA6C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822c84c0
	ctx.lr = 0x822C2CD8;
	sub_822C84C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822c2d80
	if (!ctx.cr6.eq) goto loc_822C2D80;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r11,2728
	ctx.r4.s64 = ctx.r11.s64 + 2728;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x822ca8a8
	ctx.lr = 0x822C2CF8;
	sub_822CA8A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c2d8c
	if (ctx.cr6.eq) goto loc_822C2D8C;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822c84c0
	ctx.lr = 0x822C2D08;
	sub_822C84C0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822C2D14:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2c58
	if (ctx.cr6.eq) goto loc_822C2C58;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C2D28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822c2d4c
	if (ctx.cr6.eq) goto loc_822C2D4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c2d28
	if (ctx.cr6.eq) goto loc_822C2D28;
loc_822C2D4C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c2d5c
	if (ctx.cr6.eq) goto loc_822C2D5C;
	// bl 0x822c2688
	ctx.lr = 0x822C2D58;
	sub_822C2688(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_822C2D5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2c58
	if (ctx.cr6.eq) goto loc_822C2C58;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822c84c0
	ctx.lr = 0x822C2D6C;
	sub_822C84C0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x822c2c58
	goto loc_822C2C58;
loc_822C2D78:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822c84c0
	ctx.lr = 0x822C2D80;
	sub_822C84C0(ctx, base);
loc_822C2D80:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822C2D8C:
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C2DA0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822c2da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C2DA0;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822caa10
	ctx.lr = 0x822C2DD4;
	sub_822CAA10(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c2f4c
	if (!ctx.cr6.eq) goto loc_822C2F4C;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2f4c
	if (ctx.cr6.eq) goto loc_822C2F4C;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822C2DF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c2df4
	if (!ctx.cr6.eq) goto loc_822C2DF4;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_822C2E18:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822c2e18
	if (!ctx.cr6.eq) goto loc_822C2E18;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634da0
	ctx.lr = 0x822C2E44;
	sub_82634DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c2e68
	if (ctx.cr6.eq) goto loc_822C2E68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,2712
	ctx.r5.s64 = ctx.r11.s64 + 2712;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C2E68;
	sub_822ECA80(ctx, base);
loc_822C2E68:
	// addi r10,r23,-504
	ctx.r10.s64 = ctx.r23.s64 + -504;
loc_822C2E6C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r25,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r25.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822c2e6c
	if (!ctx.cr0.eq) goto loc_822C2E6C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822c2e68
	if (!ctx.cr6.eq) goto loc_822C2E68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r23,-44
	ctx.r3.s64 = ctx.r23.s64 + -44;
	// addi r31,r11,8796
	ctx.r31.s64 = ctx.r11.s64 + 8796;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x822eca80
	ctx.lr = 0x822C2EAC;
	sub_822ECA80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r23,112
	ctx.r3.s64 = ctx.r23.s64 + 112;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x822eca80
	ctx.lr = 0x822C2EC0;
	sub_822ECA80(ctx, base);
	// lwz r11,-500(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -500);
	// stw r30,-500(r23)
	PPC_STORE_U32(ctx.r23.u32 + -500, ctx.r30.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwsync 
	// stw r24,-504(r23)
	PPC_STORE_U32(ctx.r23.u32 + -504, ctx.r24.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822c84c0
	ctx.lr = 0x822C2EDC;
	sub_822C84C0(ctx, base);
	// lbz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c2f18
	if (ctx.cr6.eq) goto loc_822C2F18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r5,r11,2704
	ctx.r5.s64 = ctx.r11.s64 + 2704;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x822eca80
	ctx.lr = 0x822C2F04;
	sub_822ECA80(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,13396
	ctx.r3.s64 = ctx.r10.s64 + 13396;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x822ebfa8
	ctx.lr = 0x822C2F18;
	sub_822EBFA8(ctx, base);
loc_822C2F18:
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c2f38
	if (ctx.cr6.eq) goto loc_822C2F38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,2676
	ctx.r3.s64 = ctx.r11.s64 + 2676;
	// b 0x822c2f58
	goto loc_822C2F58;
loc_822C2F38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,2676
	ctx.r3.s64 = ctx.r11.s64 + 2676;
	// b 0x822c2f58
	goto loc_822C2F58;
loc_822C2F4C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r11,2628
	ctx.r3.s64 = ctx.r11.s64 + 2628;
loc_822C2F58:
	// bl 0x822ebbc8
	ctx.lr = 0x822C2F5C;
	sub_822EBBC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c84c0
	ctx.lr = 0x822C2F64;
	sub_822C84C0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822c84c0
	ctx.lr = 0x822C2F6C;
	sub_822C84C0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r11,2604
	ctx.r4.s64 = ctx.r11.s64 + 2604;
	// bl 0x822c24f8
	ctx.lr = 0x822C2F7C;
	sub_822C24F8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r10,2596
	ctx.r3.s64 = ctx.r10.s64 + 2596;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// bl 0x822cacd0
	ctx.lr = 0x822C2F94;
	sub_822CACD0(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822c2fb4
	if (ctx.cr6.eq) goto loc_822C2FB4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// b 0x822c2fc0
	goto loc_822C2FC0;
loc_822C2FB4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r26,8
	ctx.r4.s64 = ctx.r26.s64 + 8;
	// addi r3,r11,2512
	ctx.r3.s64 = ctx.r11.s64 + 2512;
loc_822C2FC0:
	// bl 0x822ebbc8
	ctx.lr = 0x822C2FC4;
	sub_822EBBC8(ctx, base);
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C2FD4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822c2fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C2FD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r3,r11,2500
	ctx.r3.s64 = ctx.r11.s64 + 2500;
	// addi r5,r1,1408
	ctx.r5.s64 = ctx.r1.s64 + 1408;
	// bl 0x822cacd0
	ctx.lr = 0x822C2FF4;
	sub_822CACD0(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x822c3020
	if (!ctx.cr6.eq) goto loc_822C3020;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822c3038
	if (!ctx.cr6.eq) goto loc_822C3038;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822C3014;
	sub_822C84C0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822C3020:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822c3038
	if (!ctx.cr6.eq) goto loc_822C3038;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r11,2464
	ctx.r3.s64 = ctx.r11.s64 + 2464;
	// bl 0x822ebbc8
	ctx.lr = 0x822C3038;
	sub_822EBBC8(ctx, base);
loc_822C3038:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c84c0
	ctx.lr = 0x822C3040;
	sub_822C84C0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r11,2440
	ctx.r4.s64 = ctx.r11.s64 + 2440;
	// bl 0x822c24f8
	ctx.lr = 0x822C3050;
	sub_822C24F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// beq cr6,0x822c30d0
	if (ctx.cr6.eq) goto loc_822C30D0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x822cb1f8
	ctx.lr = 0x822C3078;
	sub_822CB1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c30a0
	if (!ctx.cr6.eq) goto loc_822C30A0;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c30a0
	if (ctx.cr6.eq) goto loc_822C30A0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C30A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C30A0:
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x822c8538
	ctx.lr = 0x822C30A8;
	sub_822C8538(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822c30cc
	if (ctx.cr6.eq) goto loc_822C30CC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822c30c0
	if (ctx.cr6.eq) goto loc_822C30C0;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x822c8538
	ctx.lr = 0x822C30C0;
	sub_822C8538(ctx, base);
loc_822C30C0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822C30CC:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_822C30D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822c3138
	if (ctx.cr6.eq) goto loc_822C3138;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x822cb1f8
	ctx.lr = 0x822C30F4;
	sub_822CB1F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c3114
	if (!ctx.cr6.eq) goto loc_822C3114;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x822c90d8
	ctx.lr = 0x822C3110;
	sub_822C90D8(ctx, base);
	// b 0x822c3124
	goto loc_822C3124;
loc_822C3114:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r11,2408
	ctx.r3.s64 = ctx.r11.s64 + 2408;
	// bl 0x822ebbc8
	ctx.lr = 0x822C3124;
	sub_822EBBC8(ctx, base);
loc_822C3124:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82634d40
	ctx.lr = 0x822C312C;
	sub_82634D40(ctx, base);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x822c8538
	ctx.lr = 0x822C3134;
	sub_822C8538(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_822C3138:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822c3170
	if (!ctx.cr6.gt) goto loc_822C3170;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_822C314C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822c90c0
	ctx.lr = 0x822C3158;
	sub_822C90C0(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822c314c
	if (ctx.cr6.lt) goto loc_822C314C;
loc_822C3170:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822c31dc
	if (!ctx.cr6.gt) goto loc_822C31DC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r5,r11,136
	ctx.r5.s64 = ctx.r11.s64 + 136;
loc_822C3190:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r9,r11,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c31cc
	if (ctx.cr6.eq) goto loc_822C31CC;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c31cc
	if (!ctx.cr6.eq) goto loc_822C31CC;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x822c31d0
	if (ctx.cr6.eq) goto loc_822C31D0;
loc_822C31CC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_822C31D0:
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r5,r5,140
	ctx.r5.s64 = ctx.r5.s64 + 140;
	// bdnz 0x822c3190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C3190;
loc_822C31DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,2320
	ctx.r3.s64 = ctx.r11.s64 + 2320;
	// bl 0x822ebbc8
	ctx.lr = 0x822C31EC;
	sub_822EBBC8(ctx, base);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// bl 0x82634da0
	ctx.lr = 0x822C31F4;
	sub_82634DA0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,2304
	ctx.r27.s64 = ctx.r11.s64 + 2304;
	// beq cr6,0x822c324c
	if (ctx.cr6.eq) goto loc_822C324C;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebf30
	ctx.lr = 0x822C3220;
	sub_822EBF30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822c3244
	if (!ctx.cr6.gt) goto loc_822C3244;
	// stbx r24,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r24.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822c99d8
	ctx.lr = 0x822C3240;
	sub_822C99D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822C3244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822C324C;
	sub_82634D40(ctx, base);
loc_822C324C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c32b8
	if (!ctx.cr6.gt) goto loc_822C32B8;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_822C3268:
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// bl 0x822c90c0
	ctx.lr = 0x822C3270;
	sub_822C90C0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c329c
	if (ctx.cr6.eq) goto loc_822C329C;
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c329c
	if (!ctx.cr6.eq) goto loc_822C329C;
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x822c32a0
	if (!ctx.cr6.eq) goto loc_822C32A0;
loc_822C329C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_822C32A0:
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822c3268
	if (ctx.cr6.lt) goto loc_822C3268;
loc_822C32B8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,2268
	ctx.r3.s64 = ctx.r11.s64 + 2268;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C32CC;
	sub_822EBBC8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822c3398
	if (!ctx.cr6.gt) goto loc_822C3398;
	// bl 0x822eac70
	ctx.lr = 0x822C32D8;
	sub_822EAC70(ctx, base);
	// ld r11,-512(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + -512);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r10,2236
	ctx.r31.s64 = ctx.r10.s64 + 2236;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x822ebbc8
	ctx.lr = 0x822C32FC;
	sub_822EBBC8(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822c331c
	if (ctx.cr6.eq) goto loc_822C331C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c331c
	if (ctx.cr6.eq) goto loc_822C331C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C331C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C331C:
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822cb418
	ctx.lr = 0x822C3330;
	sub_822CB418(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2208
	ctx.r3.s64 = ctx.r11.s64 + 2208;
	// bl 0x822ebbc8
	ctx.lr = 0x822C3344;
	sub_822EBBC8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822c3398
	if (!ctx.cr6.gt) goto loc_822C3398;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822c9ba8
	ctx.lr = 0x822C3358;
	sub_822C9BA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c3398
	if (ctx.cr6.eq) goto loc_822C3398;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C3368:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c3368
	if (!ctx.cr6.eq) goto loc_822C3368;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822ebfa8
	ctx.lr = 0x822C3390;
	sub_822EBFA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822C3398;
	sub_82634D40(ctx, base);
loc_822C3398:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822c9300
	ctx.lr = 0x822C33A4;
	sub_822C9300(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c33c8
	if (ctx.cr6.eq) goto loc_822C33C8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C33C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C33C8:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82634da0
	ctx.lr = 0x822C33D0;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c340c
	if (ctx.cr6.eq) goto loc_822C340C;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// bl 0x822c1ec8
	ctx.lr = 0x822C33E4;
	sub_822C1EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822c33f4
	if (!ctx.cr6.eq) goto loc_822C33F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c1ff0
	ctx.lr = 0x822C33F4;
	sub_822C1FF0(ctx, base);
loc_822C33F4:
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822C3404;
	sub_826344D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822C340C;
	sub_82634D40(ctx, base);
loc_822C340C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// stw r10,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r10.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C2AA0) {
	__imp__sub_822C2AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C3430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,-25584
	ctx.r31.s64 = ctx.r11.s64 + -25584;
loc_822C3444:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_822C3448:
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
	// bne 0x822c3448
	if (!ctx.cr0.eq) goto loc_822C3448;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c3444
	if (!ctx.cr6.eq) goto loc_822C3444;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r30,456(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// li r5,448
	ctx.r5.s64 = 448;
	// bl 0x82635430
	ctx.lr = 0x822C347C;
	sub_82635430(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822c348c
	if (ctx.cr6.eq) goto loc_822C348C;
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_822C348C:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3428) {
	__imp__sub_822C3428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C34A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C34A4) {
	__imp__sub_822C34A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C34A8) {
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
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,-25584
	ctx.r31.s64 = ctx.r11.s64 + -25584;
loc_822C34C4:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_822C34C8:
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
	// bne 0x822c34c8
	if (!ctx.cr0.eq) goto loc_822C34C8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c34c4
	if (!ctx.cr6.eq) goto loc_822C34C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r31,520
	ctx.r6.s64 = ctx.r31.s64 + 520;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// bl 0x822eca80
	ctx.lr = 0x822C34FC;
	sub_822ECA80(ctx, base);
	// lwsync 
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822C34A8) {
	__imp__sub_822C34A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C351C) {
	__imp__sub_822C351C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822C3528;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// beq cr6,0x822c3550
	if (ctx.cr6.eq) goto loc_822C3550;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x822c355c
	goto loc_822C355C;
loc_822C3550:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,8828
	ctx.r10.s64 = ctx.r11.s64 + 8828;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822C355C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a8f90
	ctx.lr = 0x822C3564;
	sub_822A8F90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c363c
	if (ctx.cr6.eq) goto loc_822C363C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r24,r25,-1
	ctx.r24.s64 = ctx.r25.s64 + -1;
	// li r26,32
	ctx.r26.s64 = 32;
	// addi r27,r11,3000
	ctx.r27.s64 = ctx.r11.s64 + 3000;
loc_822C357C:
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x822c363c
	if (!ctx.cr6.lt) goto loc_822C363C;
	// cmplwi cr6,r3,65
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65, ctx.xer);
	// blt cr6,0x822c35a0
	if (ctx.cr6.lt) goto loc_822C35A0;
	// cmplwi cr6,r3,90
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 90, ctx.xer);
	// bgt cr6,0x822c35a0
	if (ctx.cr6.gt) goto loc_822C35A0;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x822c35e8
	goto loc_822C35E8;
loc_822C35A0:
	// cmplwi cr6,r3,97
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 97, ctx.xer);
	// blt cr6,0x822c35b0
	if (ctx.cr6.lt) goto loc_822C35B0;
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// ble cr6,0x822c35c0
	if (!ctx.cr6.gt) goto loc_822C35C0;
loc_822C35B0:
	// cmplwi cr6,r3,48
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 48, ctx.xer);
	// blt cr6,0x822c35c8
	if (ctx.cr6.lt) goto loc_822C35C8;
	// cmplwi cr6,r3,57
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57, ctx.xer);
	// bgt cr6,0x822c35c8
	if (ctx.cr6.gt) goto loc_822C35C8;
loc_822C35C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x822c35e8
	goto loc_822C35E8;
loc_822C35C8:
	// cmplwi cr6,r3,192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 192, ctx.xer);
	// blt cr6,0x822c35e4
	if (ctx.cr6.lt) goto loc_822C35E4;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bgt cr6,0x822c35e4
	if (ctx.cr6.gt) goto loc_822C35E4;
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbz r11,-192(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -192);
	// b 0x822c35e8
	goto loc_822C35E8;
loc_822C35E4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822C35E8:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c3604
	if (!ctx.cr6.eq) goto loc_822C3604;
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// andc r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// rlwinm r29,r10,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// b 0x822c362c
	goto loc_822C362C;
loc_822C3604:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822c3620
	if (ctx.cr6.eq) goto loc_822C3620;
	// addi r10,r25,-2
	ctx.r10.s64 = ctx.r25.s64 + -2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822c3620
	if (!ctx.cr6.lt) goto loc_822C3620;
	// stbx r26,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822C3620:
	// stbx r11,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822C362C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a8f90
	ctx.lr = 0x822C3634;
	sub_822A8F90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c357c
	if (!ctx.cr6.eq) goto loc_822C357C;
loc_822C363C:
	// stbx r28,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3520) {
	__imp__sub_822C3520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3648) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,-24944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24944);
	// rlwinm r9,r7,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822C3670:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r6,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822c3694
	if (ctx.cr6.eq) goto loc_822C3694;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c3670
	if (ctx.cr6.eq) goto loc_822C3670;
loc_822C3694:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3648) {
	__imp__sub_822C3648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C36A4) {
	__imp__sub_822C36A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C36A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822C36B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r5,-30712
	ctx.r5.s64 = ctx.r5.s64 + -30712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bl 0x822c3520
	ctx.lr = 0x822C36D8;
	sub_822C3520(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lwz r10,17408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17408);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r27,r27,-30716
	ctx.r27.s64 = ctx.r27.s64 + -30716;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// ori r29,r11,33796
	ctx.r29.u64 = ctx.r11.u64 | 33796;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// ble cr6,0x822c3794
	if (!ctx.cr6.gt) goto loc_822C3794;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_822C3700:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3730
	if (ctx.cr6.eq) goto loc_822C3730;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822c3520
	ctx.lr = 0x822C371C;
	sub_822C3520(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82634c80
	ctx.lr = 0x822C3728;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c3780
	if (ctx.cr6.eq) goto loc_822C3780;
loc_822C3730:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r11,17412
	ctx.r8.s64 = ctx.r11.s64 + 17412;
	// stw r9,17412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17412, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,17416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17416, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,17420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17420, ctx.r6.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r5,17424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17424, ctx.r5.u32);
	// lbz r4,16384(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16384);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r4,r3,r29
	PPC_STORE_U8(ctx.r3.u32 + ctx.r29.u32, ctx.r4.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_822C3780:
	// lwz r11,17408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17408);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c3700
	if (ctx.cr6.lt) goto loc_822C3700;
loc_822C3794:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// ori r10,r8,34888
	ctx.r10.u64 = ctx.r8.u64 | 34888;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c3800
	if (!ctx.cr6.gt) goto loc_822C3800;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,34887
	ctx.r9.u64 = ctx.r9.u64 | 34887;
loc_822C37B4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822c37d4
	if (ctx.cr6.eq) goto loc_822C37D4;
	// add r8,r26,r31
	ctx.r8.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbzx r5,r7,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822c37f0
	if (ctx.cr6.eq) goto loc_822C37F0;
loc_822C37D4:
	// cmpwi cr6,r26,27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 27, ctx.xer);
	// bge cr6,0x822c37f0
	if (!ctx.cr6.lt) goto loc_822C37F0;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r7,r26,r31
	ctx.r7.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lbzx r6,r8,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// stbx r6,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u8);
loc_822C37F0:
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822c37b4
	if (ctx.cr6.lt) goto loc_822C37B4;
loc_822C3800:
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r6,r6,-30620
	ctx.r6.s64 = ctx.r6.s64 + -30620;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stbx r25,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u8);
	// stw r25,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r25.u32);
	// beq cr6,0x822c3884
	if (ctx.cr6.eq) goto loc_822C3884;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c3884
	if (!ctx.cr6.gt) goto loc_822C3884;
	// addi r8,r31,17412
	ctx.r8.s64 = ctx.r31.s64 + 17412;
loc_822C3830:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_822C3838:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822c385c
	if (ctx.cr6.eq) goto loc_822C385C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c3838
	if (ctx.cr6.eq) goto loc_822C3838;
loc_822C385C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c3880
	if (ctx.cr6.eq) goto loc_822C3880;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c3830
	if (ctx.cr6.lt) goto loc_822C3830;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822C3880:
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
loc_822C3884:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C36A8) {
	__imp__sub_822C36A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C388C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C388C) {
	__imp__sub_822C388C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822C3898;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r18,r3,1
	ctx.r18.s64 = ctx.r3.s64 + 65536;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r18,r18,-30608
	ctx.r18.s64 = ctx.r18.s64 + -30608;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// ori r14,r10,8400
	ctx.r14.u64 = ctx.r10.u64 | 8400;
	// ori r15,r9,34920
	ctx.r15.u64 = ctx.r9.u64 | 34920;
	// ori r16,r8,25256
	ctx.r16.u64 = ctx.r8.u64 | 25256;
	// ori r17,r7,34924
	ctx.r17.u64 = ctx.r7.u64 | 34924;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c3904
	if (ctx.cr6.eq) goto loc_822C3904;
	// lwzx r10,r4,r14
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r14.u32);
	// lwzx r9,r3,r15
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r15.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822c3904
	if (!ctx.cr6.eq) goto loc_822C3904;
	// lwzx r10,r4,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// lwzx r9,r3,r17
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r17.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c3af8
	if (ctx.cr6.eq) goto loc_822C3AF8;
loc_822C3904:
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r19,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r19.u8);
	// beq cr6,0x822c3950
	if (ctx.cr6.eq) goto loc_822C3950;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,34916
	ctx.r9.u64 = ctx.r11.u64 | 34916;
	// ori r8,r10,34820
	ctx.r8.u64 = ctx.r10.u64 | 34820;
	// lwzx r11,r22,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r9.u32);
	// lwzx r7,r22,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822c3950
	if (!ctx.cr6.lt) goto loc_822C3950;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,31
	ctx.r5.s64 = 31;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,17412(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17412);
	// bl 0x82636be0
	ctx.lr = 0x822C394C;
	sub_82636BE0(ctx, base);
	// stb r19,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r19.u8);
loc_822C3950:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,36864
	ctx.r10.u64 = ctx.r11.u64 | 36864;
	// lwzx r11,r21,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// blt cr6,0x822c396c
	if (ctx.cr6.lt) goto loc_822C396C;
	// li r26,1024
	ctx.r26.s64 = 1024;
loc_822C396C:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r25,r11,-24936
	ctx.r25.s64 = ctx.r11.s64 + -24936;
	// addi r30,r10,-24936
	ctx.r30.s64 = ctx.r10.s64 + -24936;
	// ble cr6,0x822c39e8
	if (!ctx.cr6.gt) goto loc_822C39E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r27,r30,-2
	ctx.r27.s64 = ctx.r30.s64 + -2;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addi r24,r11,10424
	ctx.r24.s64 = ctx.r11.s64 + 10424;
loc_822C39A0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822C39B0;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c39d0
	if (ctx.cr6.eq) goto loc_822C39D0;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c3520
	ctx.lr = 0x822C39C8;
	sub_822C3520(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// sthu r29,2(r27)
loc_822C39D0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822c39a0
	if (ctx.cr6.lt) goto loc_822C39A0;
	// lwz r24,332(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_822C39E8:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,13896
	ctx.r6.s64 = ctx.r10.s64 + 13896;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r25,-24944(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24944, ctx.r25.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82636610
	ctx.lr = 0x822C3A08;
	sub_82636610(ctx, base);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x822c3abc
	if (!ctx.cr6.gt) goto loc_822C3ABC;
	// addi r27,r22,16384
	ctx.r27.s64 = ctx.r22.s64 + 16384;
	// addi r31,r22,8
	ctx.r31.s64 = ctx.r22.s64 + 8;
loc_822C3A1C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,100
	ctx.r11.s64 = ctx.r10.s64 * 100;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r29,r4,32
	ctx.r29.s64 = ctx.r4.s64 + 32;
	// stw r4,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r4.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// beq cr6,0x822c3a50
	if (ctx.cr6.eq) goto loc_822C3A50;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x822C3A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822c3a54
	goto loc_822C3A54;
loc_822C3A50:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_822C3A54:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c3520
	ctx.lr = 0x822C3A74;
	sub_822C3520(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x822c3a9c
	if (ctx.cr6.lt) goto loc_822C3A9C;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x822c3a9c
	if (ctx.cr6.gt) goto loc_822C3A9C;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822c3aa0
	goto loc_822C3AA0;
loc_822C3A9C:
	// li r11,35
	ctx.r11.s64 = 35;
loc_822C3AA0:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stbx r11,r27,r28
	PPC_STORE_U8(ctx.r27.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x822c3a1c
	if (ctx.cr6.lt) goto loc_822C3A1C;
loc_822C3ABC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r23,17408(r22)
	PPC_STORE_U32(ctx.r22.u32 + 17408, ctx.r23.u32);
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwzx r8,r21,r14
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r14.u32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// stwx r8,r22,r15
	PPC_STORE_U32(ctx.r22.u32 + ctx.r15.u32, ctx.r8.u32);
	// lwzx r6,r21,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r16.u32);
	// subfic r5,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// stwx r6,r22,r17
	PPC_STORE_U32(ctx.r22.u32 + ctx.r17.u32, ctx.r6.u32);
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ctx.r9.u64;
	// bl 0x822c36a8
	ctx.lr = 0x822C3AF8;
	sub_822C36A8(ctx, base);
loc_822C3AF8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C3890) {
	__imp__sub_822C3890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3B00) {
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
	// bne cr6,0x822c3b24
	if (!ctx.cr6.eq) goto loc_822C3B24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,8828
	ctx.r4.s64 = ctx.r11.s64 + 8828;
loc_822C3B24:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,63
	ctx.r5.s64 = 63;
	// addi r3,r3,-30712
	ctx.r3.s64 = ctx.r3.s64 + -30712;
	// bl 0x82636be0
	ctx.lr = 0x822C3B34;
	sub_82636BE0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,34887
	ctx.r9.u64 = ctx.r11.u64 | 34887;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// bl 0x822c36a8
	ctx.lr = 0x822C3B50;
	sub_822C36A8(ctx, base);
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

PPC_WEAK_FUNC(sub_822C3B00) {
	__imp__sub_822C3B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3B64) {
	__imp__sub_822C3B64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// ori r10,r11,34820
	ctx.r10.u64 = ctx.r11.u64 | 34820;
	// addi r7,r7,-30620
	ctx.r7.s64 = ctx.r7.s64 + -30620;
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-28087
	ctx.r10.s64 = -1840709632;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r9,r10,9363
	ctx.r9.u64 = ctx.r10.u64 | 9363;
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bge cr6,0x822c3bc8
	if (!ctx.cr6.lt) goto loc_822C3BC8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c3bc4
	if (!ctx.cr6.gt) goto loc_822C3BC4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822C3BC4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
loc_822C3BC8:
	// ble cr6,0x822c3be4
	if (!ctx.cr6.gt) goto loc_822C3BE4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x822c3be4
	if (!ctx.cr6.lt) goto loc_822C3BE4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822c3be4
	if (!ctx.cr6.lt) goto loc_822C3BE4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822C3BE4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x822c3bfc
	if (!ctx.cr6.lt) goto loc_822C3BFC;
	// addic. r10,r11,-7
	ctx.xer.ca = ctx.r11.u32 > 6;
	ctx.r10.s64 = ctx.r11.s64 + -7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822c3bf8
	if (ctx.cr0.lt) goto loc_822C3BF8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822C3BF8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
loc_822C3BFC:
	// ble cr6,0x822c3c28
	if (!ctx.cr6.gt) goto loc_822C3C28;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822c3c24
	if (ctx.cr6.lt) goto loc_822C3C24;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// divw r8,r11,r9
	ctx.r8.s32 = ctx.r11.s32 / ctx.r9.s32;
	// divw r6,r10,r9
	ctx.r6.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x822c3c28
	if (!ctx.cr6.lt) goto loc_822C3C28;
loc_822C3C24:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822C3C28:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3B68) {
	__imp__sub_822C3B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3C30) {
	PPC_FUNC_PROLOGUE();
	// addis r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 65536;
	// addis r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 65536;
	// addi r6,r6,-30716
	ctx.r6.s64 = ctx.r6.s64 + -30716;
	// addi r5,r5,-30620
	ctx.r5.s64 = ctx.r5.s64 + -30620;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c3ca0
	if (!ctx.cr6.gt) goto loc_822C3CA0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// ori r10,r11,33796
	ctx.r10.u64 = ctx.r11.u64 | 33796;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// ble cr6,0x822c3ca8
	if (!ctx.cr6.gt) goto loc_822C3CA8;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822c3ca0
	if (!ctx.cr6.lt) goto loc_822C3CA0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
loc_822C3C80:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822c3d20
	if (!ctx.cr6.eq) goto loc_822C3D20;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822c3c80
	if (ctx.cr6.lt) goto loc_822C3C80;
loc_822C3CA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822C3CA8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// ori r10,r10,33795
	ctx.r10.u64 = ctx.r10.u64 | 33795;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822c3ce4
	if (!ctx.cr6.gt) goto loc_822C3CE4;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
loc_822C3CC4:
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822c3cdc
	if (!ctx.cr6.eq) goto loc_822C3CDC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x822c3cc4
	if (ctx.cr0.gt) goto loc_822C3CC4;
loc_822C3CDC:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822c3d20
	if (ctx.cr6.lt) goto loc_822C3D20;
loc_822C3CE4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c3ca0
	if (ctx.cr6.eq) goto loc_822C3CA0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// ble 0x822c3d20
	if (!ctx.cr0.gt) goto loc_822C3D20;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
loc_822C3D08:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822c3d20
	if (!ctx.cr6.eq) goto loc_822C3D20;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x822c3d08
	if (ctx.cr0.gt) goto loc_822C3D08;
loc_822C3D20:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3C30) {
	__imp__sub_822C3C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3D2C) {
	__imp__sub_822C3D2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,34820
	ctx.r10.u64 = ctx.r11.u64 | 34820;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c3d68
	if (!ctx.cr6.gt) goto loc_822C3D68;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,34916
	ctx.r9.u64 = ctx.r11.u64 | 34916;
	// ori r8,r10,33796
	ctx.r8.u64 = ctx.r10.u64 | 33796;
	// lwzx r11,r3,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// blr 
	return;
loc_822C3D68:
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3D30) {
	__imp__sub_822C3D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3D74) {
	__imp__sub_822C3D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,34820
	ctx.r10.u64 = ctx.r11.u64 | 34820;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c3da8
	if (!ctx.cr6.gt) goto loc_822C3DA8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,34916
	ctx.r10.u64 = ctx.r11.u64 | 34916;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,17412
	ctx.r3.s64 = ctx.r11.s64 + 17412;
	// blr 
	return;
loc_822C3DA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3D78) {
	__imp__sub_822C3D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r11,3284
	ctx.r6.s64 = ctx.r11.s64 + 3284;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_822C3DC4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822c3e00
	if (ctx.cr6.eq) goto loc_822C3E00;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_822C3DD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822c3df8
	if (ctx.cr6.eq) goto loc_822C3DF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c3dd4
	if (ctx.cr6.eq) goto loc_822C3DD4;
loc_822C3DF8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822C3E00:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c3dc4
	if (ctx.cr6.lt) goto loc_822C3DC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3DB0) {
	__imp__sub_822C3DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C3E1C) {
	__imp__sub_822C3E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3356
	ctx.r9.s64 = ctx.r11.s64 + 3356;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822C3E30:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822c3e58
	if (ctx.cr6.eq) goto loc_822C3E58;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822c3e30
	if (ctx.cr6.lt) goto loc_822C3E30;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_822C3E58:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3E20) {
	__imp__sub_822C3E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3268
	ctx.r9.s64 = ctx.r11.s64 + 3268;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822C3E70:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822c3e98
	if (ctx.cr6.eq) goto loc_822C3E98;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822c3e70
	if (ctx.cr6.lt) goto loc_822C3E70;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822C3E98:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3E60) {
	__imp__sub_822C3E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r11,3268
	ctx.r9.s64 = ctx.r11.s64 + 3268;
	// ble cr6,0x822c3ef4
	if (!ctx.cr6.gt) goto loc_822C3EF4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822C3EB8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x822c3ee8
	if (ctx.cr6.gt) goto loc_822C3EE8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822c3eb8
	if (ctx.cr6.lt) goto loc_822C3EB8;
	// cmpwi cr6,r3,250
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 250, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,250
	ctx.r3.s64 = 250;
	// blr 
	return;
loc_822C3EE8:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
loc_822C3EF4:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
loc_822C3EFC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822c3ee8
	if (ctx.cr6.lt) goto loc_822C3EE8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822c3efc
	if (!ctx.cr6.lt) goto loc_822C3EFC;
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,100
	ctx.r3.s64 = 100;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3EA0) {
	__imp__sub_822C3EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C3F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x822c414c
	if (ctx.cr6.gt) goto loc_822C414C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822c401c
	// bdzf 4*cr6+eq,0x822c4064
	// bdzf 4*cr6+eq,0x822c4120
	// bdzf 4*cr6+eq,0x822c3ff8
	// bne cr6,0x822c4050
	if (!ctx.cr6.eq) goto loc_822C4050;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c3f8c
	if (!ctx.cr6.gt) goto loc_822C3F8C;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
loc_822C3F68:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x822c3f8c
	if (!ctx.cr6.lt) goto loc_822C3F8C;
	// addi r9,r10,18
	ctx.r9.s64 = ctx.r10.s64 + 18;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822c3f68
	if (ctx.cr6.lt) goto loc_822C3F68;
loc_822C3F8C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,17
	ctx.r7.s64 = 17;
	// stwx r9,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r7,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822c3fd0
	if (ctx.cr6.eq) goto loc_822C3FD0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x822c3fd0
	if (!ctx.cr6.lt) goto loc_822C3FD0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
loc_822C3FD0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stwx r7,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u32);
	// blr 
	return;
loc_822C3FF8:
	// li r11,36
	ctx.r11.s64 = 36;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r9,38
	ctx.r9.s64 = 38;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_822C401C:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c414c
	if (ctx.cr6.eq) goto loc_822C414C;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_822C4050:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_822C4064:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c409c
	if (ctx.cr6.eq) goto loc_822C409C;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r8,7
	ctx.r8.s64 = 7;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
loc_822C409C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,22
	ctx.r8.s64 = 22;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,24
	ctx.r4.s64 = 24;
	// stwx r8,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r4,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c414c
	if (ctx.cr6.eq) goto loc_822C414C;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwx r3,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r3.u32);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stwx r9,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r9.u32);
	// stwx r4,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r4.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_822C4120:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// li r7,21
	ctx.r7.s64 = 21;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r7,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r7.u32);
loc_822C414C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C3F28) {
	__imp__sub_822C3F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C4154) {
	__imp__sub_822C4154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4158) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822C416C:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822c418c
	if (!ctx.cr6.eq) goto loc_822C418C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822c41c4
	goto loc_822C41C4;
loc_822C418C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822c41c4
	if (ctx.cr6.eq) goto loc_822C41C4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822c41c4
	if (ctx.cr6.eq) goto loc_822C41C4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822c41c4
	if (ctx.cr6.eq) goto loc_822C41C4;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x822c41c4
	if (ctx.cr6.eq) goto loc_822C41C4;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x822c41c4
	if (ctx.cr6.eq) goto loc_822C41C4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c41c4
	if (!ctx.cr6.eq) goto loc_822C41C4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822C41C4:
	// addic. r9,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822c416c
	if (!ctx.cr0.eq) goto loc_822C416C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C4158) {
	__imp__sub_822C4158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C41D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822C41D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8240
	ctx.r3.s64 = ctx.r11.s64 + -8240;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C41F4;
	sub_822B7A78(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4218
	if (ctx.cr6.eq) goto loc_822C4218;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c4218
	if (ctx.cr6.eq) goto loc_822C4218;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x822c4228
	goto loc_822C4228;
loc_822C4218:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18384
	ctx.r3.s64 = ctx.r11.s64 + -18384;
	// bl 0x822b7a78
	ctx.lr = 0x822C4224;
	sub_822B7A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822C4228:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r25,r31,2036
	ctx.r25.s64 = ctx.r31.s64 + 2036;
	// addi r3,r11,-23756
	ctx.r3.s64 = ctx.r11.s64 + -23756;
	// bl 0x822b7a78
	ctx.lr = 0x822C4238;
	sub_822B7A78(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r10,-18432
	ctx.r3.s64 = ctx.r10.s64 + -18432;
	// bl 0x822b7a78
	ctx.lr = 0x822C4248;
	sub_822B7A78(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,3596
	ctx.r5.s64 = ctx.r9.s64 + 3596;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4268;
	sub_822ECA80(ctx, base);
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822c42e4
	if (!ctx.cr6.gt) goto loc_822C42E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r26,r11,-18476
	ctx.r26.s64 = ctx.r11.s64 + -18476;
loc_822C4284:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bge cr6,0x822c42e4
	if (!ctx.cr6.lt) goto loc_822C42E4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x822c42b4
	if (!ctx.cr6.eq) goto loc_822C42B4;
	// stw r25,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r25.u32);
loc_822C42B4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stw r9,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r9.u32);
	// bl 0x822b7a78
	ctx.lr = 0x822C42CC;
	sub_822B7A78(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r3.u32);
	// stw r24,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r24.u32);
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822c4284
	if (ctx.cr6.lt) goto loc_822C4284;
loc_822C42E4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x822c4310
	if (!ctx.cr6.eq) goto loc_822C4310;
	// stw r25,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r25.u32);
loc_822C4310:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18548
	ctx.r3.s64 = ctx.r11.s64 + -18548;
	// bl 0x822b7a78
	ctx.lr = 0x822C431C;
	sub_822B7A78(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x822c433c
	if (ctx.cr6.lt) goto loc_822C433C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18616
	ctx.r3.s64 = ctx.r11.s64 + -18616;
	// bl 0x822b7a78
	ctx.lr = 0x822C4338;
	sub_822B7A78(ctx, base);
	// b 0x822c4340
	goto loc_822C4340;
loc_822C433C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C4340:
	// stw r24,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r24.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r3.u32);
	// addi r3,r11,-18692
	ctx.r3.s64 = ctx.r11.s64 + -18692;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4370;
	sub_822B7A78(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r24,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r24.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// addi r3,r7,-8412
	ctx.r3.s64 = ctx.r7.s64 + -8412;
	// bl 0x822b7a78
	ctx.lr = 0x822C438C;
	sub_822B7A78(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r25,r10,3592
	ctx.r25.s64 = ctx.r10.s64 + 3592;
	// bne cr6,0x822c43a8
	if (!ctx.cr6.eq) goto loc_822C43A8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_822C43A8:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,68(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r29,r11,8828
	ctx.r29.s64 = ctx.r11.s64 + 8828;
	// stw r24,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r24.u32);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c43d0
	if (!ctx.cr6.eq) goto loc_822C43D0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822C43D0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r31,764
	ctx.r30.s64 = ctx.r31.s64 + 764;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,3580
	ctx.r5.s64 = ctx.r10.s64 + 3580;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C43EC;
	sub_822ECA80(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r3,r9,-8452
	ctx.r3.s64 = ctx.r9.s64 + -8452;
	// bl 0x822b7a78
	ctx.lr = 0x822C43F8;
	sub_822B7A78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r26,r11,3572
	ctx.r26.s64 = ctx.r11.s64 + 3572;
	// lwz r8,56(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c44a8
	if (ctx.cr6.eq) goto loc_822C44A8;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4480
	if (ctx.cr6.eq) goto loc_822C4480;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c4480
	if (ctx.cr6.eq) goto loc_822C4480;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-2568
	ctx.r10.s64 = ctx.r10.s64 + -2568;
loc_822C4434:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822c4458
	if (ctx.cr6.eq) goto loc_822C4458;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c4434
	if (ctx.cr6.eq) goto loc_822C4434;
loc_822C4458:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822c4470
	if (ctx.cr6.eq) goto loc_822C4470;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r11,r11,3560
	ctx.r11.s64 = ctx.r11.s64 + 3560;
	// b 0x822c4488
	goto loc_822C4488;
loc_822C4470:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r11,r11,3544
	ctx.r11.s64 = ctx.r11.s64 + 3544;
	// b 0x822c4488
	goto loc_822C4488;
loc_822C4480:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_822C4488:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r31,828
	ctx.r30.s64 = ctx.r31.s64 + 828;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r5,r10,3524
	ctx.r5.s64 = ctx.r10.s64 + 3524;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C44A4;
	sub_822ECA80(ctx, base);
	// b 0x822c44c0
	goto loc_822C44C0;
loc_822C44A8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r31,828
	ctx.r30.s64 = ctx.r31.s64 + 828;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,3504
	ctx.r5.s64 = ctx.r11.s64 + 3504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C44C0;
	sub_822ECA80(ctx, base);
loc_822C44C0:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c4568
	if (ctx.cr6.eq) goto loc_822C4568;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x822c4568
	if (!ctx.cr6.lt) goto loc_822C4568;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r8,-18748
	ctx.r3.s64 = ctx.r8.s64 + -18748;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4500;
	sub_822B7A78(ctx, base);
	// stw r3,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r6,20764
	ctx.r3.s64 = ctx.r6.s64 + 20764;
	// bl 0x822b7a78
	ctx.lr = 0x822C4510;
	sub_822B7A78(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bne cr6,0x822c452c
	if (!ctx.cr6.eq) goto loc_822C452C;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// beq cr6,0x822c4534
	if (ctx.cr6.eq) goto loc_822C4534;
loc_822C452C:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x822c4538
	goto loc_822C4538;
loc_822C4534:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_822C4538:
	// lwz r6,80(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822c4548
	if (!ctx.cr6.eq) goto loc_822C4548;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_822C4548:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,892
	ctx.r29.s64 = ctx.r31.s64 + 892;
	// addi r5,r11,3496
	ctx.r5.s64 = ctx.r11.s64 + 3496;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4560;
	sub_822ECA80(ctx, base);
	// stw r29,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r29.u32);
	// stw r24,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r24.u32);
loc_822C4568:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r3,r9,-8520
	ctx.r3.s64 = ctx.r9.s64 + -8520;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4590;
	sub_822B7A78(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lwz r6,72(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// stw r6,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r6.u32);
	// stw r24,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r24.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,168
	ctx.r30.s64 = ctx.r11.s64 + 168;
	// stw r24,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r24.u32);
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c4620
	if (ctx.cr6.eq) goto loc_822C4620;
	// lwz r6,100(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822c4620
	if (ctx.cr6.eq) goto loc_822C4620;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4620
	if (ctx.cr6.eq) goto loc_822C4620;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,1084
	ctx.r29.s64 = ctx.r31.s64 + 1084;
	// addi r5,r11,3472
	ctx.r5.s64 = ctx.r11.s64 + 3472;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4600;
	sub_822ECA80(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,-8604
	ctx.r3.s64 = ctx.r10.s64 + -8604;
	// bl 0x822b7a78
	ctx.lr = 0x822C4610;
	sub_822B7A78(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// b 0x822c4698
	goto loc_822C4698;
loc_822C4620:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8680
	ctx.r3.s64 = ctx.r11.s64 + -8680;
	// bl 0x822b7a78
	ctx.lr = 0x822C462C;
	sub_822B7A78(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r10,92(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c468c
	if (!ctx.cr6.eq) goto loc_822C468C;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822c468c
	if (ctx.cr6.eq) goto loc_822C468C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c465c
	if (!ctx.cr6.eq) goto loc_822C465C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8800
	ctx.r3.s64 = ctx.r11.s64 + -8800;
	// b 0x822c4694
	goto loc_822C4694;
loc_822C465C:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822c4670
	if (!ctx.cr6.eq) goto loc_822C4670;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,3444
	ctx.r3.s64 = ctx.r11.s64 + 3444;
	// b 0x822c4694
	goto loc_822C4694;
loc_822C4670:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x822c4684
	if (!ctx.cr6.eq) goto loc_822C4684;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8980
	ctx.r3.s64 = ctx.r11.s64 + -8980;
	// b 0x822c4694
	goto loc_822C4694;
loc_822C4684:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c4698
	goto loc_822C4698;
loc_822C468C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8740
	ctx.r3.s64 = ctx.r11.s64 + -8740;
loc_822C4694:
	// bl 0x822b7a78
	ctx.lr = 0x822C4698;
	sub_822B7A78(ctx, base);
loc_822C4698:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9088
	ctx.r3.s64 = ctx.r11.s64 + -9088;
	// bl 0x822b7a78
	ctx.lr = 0x822C46A8;
	sub_822B7A78(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C41D0) {
	__imp__sub_822C41D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C46B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C46B4) {
	__imp__sub_822C46B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C46B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822C46C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r11,-8384
	ctx.r3.s64 = ctx.r11.s64 + -8384;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C46DC;
	sub_822B7A78(ctx, base);
	// stw r3,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,-9360
	ctx.r3.s64 = ctx.r10.s64 + -9360;
	// bl 0x822b7a78
	ctx.lr = 0x822C46EC;
	sub_822B7A78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r24,r11,3404
	ctx.r24.s64 = ctx.r11.s64 + 3404;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// li r25,16
	ctx.r25.s64 = 16;
	// addi r23,r11,-9712
	ctx.r23.s64 = ctx.r11.s64 + -9712;
loc_822C470C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// lwz r6,168(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// subf r5,r30,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r30.s64;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// lwz r8,168(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822c4764
	if (!ctx.cr6.eq) goto loc_822C4764;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4760;
	sub_822B7A78(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
loc_822C4764:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r24,12
	ctx.r11.s64 = ctx.r24.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c470c
	if (ctx.cr6.lt) goto loc_822C470C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9512
	ctx.r3.s64 = ctx.r11.s64 + -9512;
	// bl 0x822b7a78
	ctx.lr = 0x822C4784;
	sub_822B7A78(ctx, base);
	// stw r3,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C46B8) {
	__imp__sub_822C46B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C4798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r3,r9,-24340
	ctx.r3.s64 = ctx.r9.s64 + -24340;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C47CC;
	sub_822B7A78(ctx, base);
	// stw r3,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r3.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822c4934
	if (ctx.cr6.gt) goto loc_822C4934;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822c4800
	// bdzf 4*cr6+eq,0x822c480c
	// bne cr6,0x822c48e8
	if (!ctx.cr6.eq) goto loc_822C48E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24396
	ctx.r3.s64 = ctx.r11.s64 + -24396;
	// b 0x822c493c
	goto loc_822C493C;
loc_822C4800:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24468
	ctx.r3.s64 = ctx.r11.s64 + -24468;
	// b 0x822c493c
	goto loc_822C493C;
loc_822C480C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c482c
	if (!ctx.cr6.gt) goto loc_822C482C;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
	// b 0x822c4830
	goto loc_822C4830;
loc_822C482C:
	// li r10,60
	ctx.r10.s64 = 60;
loc_822C4830:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c4854
	if (ctx.cr6.lt) goto loc_822C4854;
	// lwz r9,268(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmpwi cr6,r9,80
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 80, ctx.xer);
	// bge cr6,0x822c4854
	if (!ctx.cr6.lt) goto loc_822C4854;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18764
	ctx.r3.s64 = ctx.r11.s64 + -18764;
	// b 0x822c487c
	goto loc_822C487C;
loc_822C4854:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,3
	ctx.r9.s64 = 3;
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822c4874
	if (ctx.cr6.lt) goto loc_822C4874;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18820
	ctx.r3.s64 = ctx.r11.s64 + -18820;
	// b 0x822c487c
	goto loc_822C487C;
loc_822C4874:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18864
	ctx.r3.s64 = ctx.r11.s64 + -18864;
loc_822C487C:
	// bl 0x822b7a78
	ctx.lr = 0x822C4880;
	sub_822B7A78(ctx, base);
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r6,r11,26215
	ctx.r6.u64 = ctx.r11.u64 | 26215;
	// lwz r8,268(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r4,10
	ctx.r4.s64 = 10;
	// mulhw r11,r7,r6
	ctx.r11.s64 = (int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32)) >> 32;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r30,r30,2948
	ctx.r30.s64 = ctx.r30.s64 + 2948;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r6,3612
	ctx.r5.s64 = ctx.r6.s64 + 3612;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r6,r7,r4
	ctx.r6.s32 = ctx.r7.s32 / ctx.r4.s32;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// bl 0x822eca80
	ctx.lr = 0x822C48D4;
	sub_822ECA80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r30.u32);
	// stw r11,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C48E8:
	// lwz r6,288(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822c4900
	if (ctx.cr6.eq) goto loc_822C4900;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4908
	if (!ctx.cr6.eq) goto loc_822C4908;
loc_822C4900:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,9952
	ctx.r6.s64 = ctx.r11.s64 + 9952;
loc_822C4908:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r30,2948
	ctx.r31.s64 = ctx.r30.s64 + 2948;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4920;
	sub_822ECA80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r31.u32);
	// stw r11,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C4934:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24504
	ctx.r3.s64 = ctx.r11.s64 + -24504;
loc_822C493C:
	// bl 0x822b7a78
	ctx.lr = 0x822C4940;
	sub_822B7A78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r3.u32);
	// stw r11,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C4790) {
	__imp__sub_822C4790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C4954) {
	__imp__sub_822C4954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822C4960;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-8292
	ctx.r3.s64 = ctx.r11.s64 + -8292;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C497C;
	sub_822B7A78(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,-9768
	ctx.r3.s64 = ctx.r10.s64 + -9768;
	// bl 0x822b7a78
	ctx.lr = 0x822C498C;
	sub_822B7A78(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// stw r9,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r9.u32);
	// lwz r8,104(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// stw r8,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r8.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822c49b8
	if (ctx.cr6.eq) goto loc_822C49B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24548
	ctx.r3.s64 = ctx.r11.s64 + -24548;
	// b 0x822c49c0
	goto loc_822C49C0;
loc_822C49B8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24616
	ctx.r3.s64 = ctx.r11.s64 + -24616;
loc_822C49C0:
	// bl 0x822b7a78
	ctx.lr = 0x822C49C4;
	sub_822B7A78(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r5,r11,12812
	ctx.r5.s64 = ctx.r11.s64 + 12812;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r10,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r10,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822eca80
	ctx.lr = 0x822C49F0;
	sub_822ECA80(ctx, base);
	// lwz r9,108(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c4a04
	if (ctx.cr6.eq) goto loc_822C4A04;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// b 0x822c4a0c
	goto loc_822C4A0C;
loc_822C4A04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,3592
	ctx.r6.s64 = ctx.r11.s64 + 3592;
loc_822C4A0C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r30,1308
	ctx.r31.s64 = ctx.r30.s64 + 1308;
	// addi r5,r11,3728
	ctx.r5.s64 = ctx.r11.s64 + 3728;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4A24;
	sub_822ECA80(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,95
	ctx.r5.s64 = 95;
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x826344d0
	ctx.lr = 0x822C4A40;
	sub_826344D0(ctx, base);
	// li r5,119
	ctx.r5.s64 = 119;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x826344d0
	ctx.lr = 0x822C4A54;
	sub_826344D0(ctx, base);
	// lwz r8,272(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x822c4a6c
	if (!ctx.cr6.lt) goto loc_822C4A6C;
	// lwz r11,276(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822c4b18
	if (ctx.cr6.lt) goto loc_822C4B18;
loc_822C4A6C:
	// lwz r11,276(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822c4aa4
	if (ctx.cr6.lt) goto loc_822C4AA4;
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// ori r9,r10,26215
	ctx.r9.u64 = ctx.r10.u64 | 26215;
	// mulhw r7,r11,r9
	ctx.r7.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r5,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r5.s64;
	// b 0x822c4aa8
	goto loc_822C4AA8;
loc_822C4AA4:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_822C4AA8:
	// li r10,10
	ctx.r10.s64 = 10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// divw r29,r11,r10
	ctx.r29.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bge cr6,0x822c4abc
	if (!ctx.cr6.lt) goto loc_822C4ABC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_822C4ABC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x822c4ad0
	if (ctx.cr6.lt) goto loc_822C4AD0;
	// addi r11,r8,5
	ctx.r11.s64 = ctx.r8.s64 + 5;
	// divw r31,r11,r10
	ctx.r31.s32 = ctx.r11.s32 / ctx.r10.s32;
	// b 0x822c4ad4
	goto loc_822C4AD4;
loc_822C4AD0:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822C4AD4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18968
	ctx.r3.s64 = ctx.r11.s64 + -18968;
	// bl 0x822b7a78
	ctx.lr = 0x822C4AE0;
	sub_822B7A78(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r10,-18924
	ctx.r3.s64 = ctx.r10.s64 + -18924;
	// bl 0x822b7a78
	ctx.lr = 0x822C4AF0;
	sub_822B7A78(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,3704
	ctx.r5.s64 = ctx.r9.s64 + 3704;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4B18;
	sub_822ECA80(ctx, base);
loc_822C4B18:
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c4b70
	if (!ctx.cr6.gt) goto loc_822C4B70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r31,284(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	// addi r3,r11,-19120
	ctx.r3.s64 = ctx.r11.s64 + -19120;
	// bl 0x822b7a78
	ctx.lr = 0x822C4B34;
	sub_822B7A78(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r27,280(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// addi r3,r10,-19024
	ctx.r3.s64 = ctx.r10.s64 + -19024;
	// bl 0x822b7a78
	ctx.lr = 0x822C4B48;
	sub_822B7A78(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,3684
	ctx.r5.s64 = ctx.r9.s64 + 3684;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4B6C;
	sub_822ECA80(ctx, base);
	// b 0x822c4b94
	goto loc_822C4B94;
loc_822C4B70:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19192
	ctx.r3.s64 = ctx.r11.s64 + -19192;
	// bl 0x822b7a78
	ctx.lr = 0x822C4B7C;
	sub_822B7A78(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,3680
	ctx.r5.s64 = ctx.r10.s64 + 3680;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822eca80
	ctx.lr = 0x822C4B94;
	sub_822ECA80(ctx, base);
loc_822C4B94:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r30,1436
	ctx.r31.s64 = ctx.r30.s64 + 1436;
	// addi r3,r11,-19344
	ctx.r3.s64 = ctx.r11.s64 + -19344;
	// bl 0x822b7a78
	ctx.lr = 0x822C4BA4;
	sub_822B7A78(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r5,r10,3496
	ctx.r5.s64 = ctx.r10.s64 + 3496;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4BC4;
	sub_822ECA80(ctx, base);
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r8,-23792
	ctx.r3.s64 = ctx.r8.s64 + -23792;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4BF0;
	sub_822B7A78(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r6,11004
	ctx.r3.s64 = ctx.r6.s64 + 11004;
	// bl 0x822b7a78
	ctx.lr = 0x822C4C00;
	sub_822B7A78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// addi r10,r11,3676
	ctx.r10.s64 = ctx.r11.s64 + 3676;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// bge cr6,0x822c4c24
	if (!ctx.cr6.lt) goto loc_822C4C24;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,3672
	ctx.r8.s64 = ctx.r9.s64 + 3672;
	// b 0x822c4c28
	goto loc_822C4C28;
loc_822C4C24:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_822C4C28:
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// ble cr6,0x822c4c38
	if (!ctx.cr6.gt) goto loc_822C4C38;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,3668
	ctx.r10.s64 = ctx.r10.s64 + 3668;
loc_822C4C38:
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// addi r29,r30,2356
	ctx.r29.s64 = ctx.r30.s64 + 2356;
	// addi r5,r7,3652
	ctx.r5.s64 = ctx.r7.s64 + 3652;
	// divw r7,r11,r9
	ctx.r7.s32 = ctx.r11.s32 / ctx.r9.s32;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4C60;
	sub_822ECA80(ctx, base);
	// stw r29,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
	// lwz r6,20(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r6,5000
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5000, ctx.xer);
	// ble cr6,0x822c4c7c
	if (!ctx.cr6.gt) goto loc_822C4C7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19656
	ctx.r3.s64 = ctx.r11.s64 + -19656;
	// b 0x822c4c84
	goto loc_822C4C84;
loc_822C4C7C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19888
	ctx.r3.s64 = ctx.r11.s64 + -19888;
loc_822C4C84:
	// bl 0x822b7a78
	ctx.lr = 0x822C4C88;
	sub_822B7A78(ctx, base);
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c4ca8
	if (ctx.cr6.eq) goto loc_822C4CA8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c4790
	ctx.lr = 0x822C4CA8;
	sub_822C4790(ctx, base);
loc_822C4CA8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C4958) {
	__imp__sub_822C4958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822C4CB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-24716
	ctx.r3.s64 = ctx.r11.s64 + -24716;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4CD4;
	sub_822B7A78(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r10,252(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c4cf0
	if (ctx.cr6.eq) goto loc_822C4CF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24756
	ctx.r3.s64 = ctx.r11.s64 + -24756;
	// b 0x822c4cf8
	goto loc_822C4CF8;
loc_822C4CF0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24808
	ctx.r3.s64 = ctx.r11.s64 + -24808;
loc_822C4CF8:
	// bl 0x822b7a78
	ctx.lr = 0x822C4CFC;
	sub_822B7A78(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,-24852
	ctx.r3.s64 = ctx.r9.s64 + -24852;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4D28;
	sub_822B7A78(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r3,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r3.u32);
	// addi r5,r6,3784
	ctx.r5.s64 = ctx.r6.s64 + 3784;
	// stw r5,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r5.u32);
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822c4db0
	if (ctx.cr6.lt) goto loc_822C4DB0;
	// lwz r9,272(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 272);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822c4d80
	if (ctx.cr6.lt) goto loc_822C4D80;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// addi r29,r31,2660
	ctx.r29.s64 = ctx.r31.s64 + 2660;
	// addi r5,r6,3752
	ctx.r5.s64 = ctx.r6.s64 + 3752;
	// divw r7,r9,r10
	ctx.r7.s32 = ctx.r9.s32 / ctx.r10.s32;
	// divw r6,r8,r10
	ctx.r6.s32 = ctx.r8.s32 / ctx.r10.s32;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4D7C;
	sub_822ECA80(ctx, base);
	// b 0x822c4dc8
	goto loc_822C4DC8;
loc_822C4D80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822c4db0
	if (ctx.cr6.lt) goto loc_822C4DB0;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r31,2660
	ctx.r29.s64 = ctx.r31.s64 + 2660;
	// divw r6,r11,r10
	ctx.r6.s32 = ctx.r11.s32 / ctx.r10.s32;
	// addi r5,r9,15500
	ctx.r5.s64 = ctx.r9.s64 + 15500;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4DAC;
	sub_822ECA80(ctx, base);
	// b 0x822c4dc8
	goto loc_822C4DC8;
loc_822C4DB0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,2660
	ctx.r29.s64 = ctx.r31.s64 + 2660;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r5,r11,3592
	ctx.r5.s64 = ctx.r11.s64 + 3592;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C4DC8;
	sub_822ECA80(ctx, base);
loc_822C4DC8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r29.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r9,-24884
	ctx.r3.s64 = ctx.r9.s64 + -24884;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4DFC;
	sub_822B7A78(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r3,r6,-24936
	ctx.r3.s64 = ctx.r6.s64 + -24936;
	// bl 0x822b7a78
	ctx.lr = 0x822C4E0C;
	sub_822B7A78(ctx, base);
	// stw r3,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r3.u32);
	// lwz r5,256(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822c4e28
	if (ctx.cr6.eq) goto loc_822C4E28;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24984
	ctx.r3.s64 = ctx.r11.s64 + -24984;
	// b 0x822c4e30
	goto loc_822C4E30;
loc_822C4E28:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-25008
	ctx.r3.s64 = ctx.r11.s64 + -25008;
loc_822C4E30:
	// bl 0x822b7a78
	ctx.lr = 0x822C4E34;
	sub_822B7A78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r11.u32);
	// addi r3,r10,-25096
	ctx.r3.s64 = ctx.r10.s64 + -25096;
	// bl 0x822b7a78
	ctx.lr = 0x822C4E4C;
	sub_822B7A78(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C4CB0) {
	__imp__sub_822C4CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C4E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822C4E60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-8320
	ctx.r3.s64 = ctx.r11.s64 + -8320;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4E7C;
	sub_822B7A78(ctx, base);
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,-25720
	ctx.r3.s64 = ctx.r10.s64 + -25720;
	// bl 0x822b7a78
	ctx.lr = 0x822C4E8C;
	sub_822B7A78(ctx, base);
	// stw r3,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r8,-25804
	ctx.r3.s64 = ctx.r8.s64 + -25804;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4EB8;
	sub_822B7A78(ctx, base);
	// stw r3,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r6,10908
	ctx.r3.s64 = ctx.r6.s64 + 10908;
	// bl 0x822b7a78
	ctx.lr = 0x822C4EC8;
	sub_822B7A78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// addi r27,r11,3432
	ctx.r27.s64 = ctx.r11.s64 + 3432;
	// li r26,32
	ctx.r26.s64 = 32;
	// addi r5,r27,-52
	ctx.r5.s64 = ctx.r27.s64 + -52;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r26,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r26.u32);
	// addi r10,r10,3356
	ctx.r10.s64 = ctx.r10.s64 + 3356;
	// stw r5,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r5.u32);
	// stw r4,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,164(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822C4F00:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822c4f24
	if (ctx.cr6.eq) goto loc_822C4F24;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822c4f00
	if (ctx.cr6.lt) goto loc_822C4F00;
	// li r9,2
	ctx.r9.s64 = 2;
loc_822C4F24:
	// stw r9,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r9.u32);
	// li r25,4
	ctx.r25.s64 = 4;
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c4fc0
	if (ctx.cr6.eq) goto loc_822C4FC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r9,-11720
	ctx.r3.s64 = ctx.r9.s64 + -11720;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C4F60;
	sub_822B7A78(ctx, base);
	// stw r3,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r3.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r3,r6,-23348
	ctx.r3.s64 = ctx.r6.s64 + -23348;
	// bl 0x822b7a78
	ctx.lr = 0x822C4F70;
	sub_822B7A78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r27,-116
	ctx.r5.s64 = ctx.r27.s64 + -116;
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// addi r10,r11,3268
	ctx.r10.s64 = ctx.r11.s64 + 3268;
	// stw r26,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r26.u32);
	// stw r5,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r25.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r8,156(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
loc_822C4F98:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822c4fbc
	if (ctx.cr6.eq) goto loc_822C4FBC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822c4f98
	if (ctx.cr6.lt) goto loc_822C4F98;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_822C4FBC:
	// stw r9,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r9.u32);
loc_822C4FC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,152(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x822c4ff0
	if (ctx.cr6.eq) goto loc_822C4FF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c4ffc
	goto loc_822C4FFC;
loc_822C4FF0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-20064
	ctx.r3.s64 = ctx.r11.s64 + -20064;
	// bl 0x822b7a78
	ctx.lr = 0x822C4FFC;
	sub_822B7A78(ctx, base);
loc_822C4FFC:
	// stw r3,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-20112
	ctx.r3.s64 = ctx.r11.s64 + -20112;
	// bl 0x822b7a78
	ctx.lr = 0x822C500C;
	sub_822B7A78(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c5028
	if (ctx.cr6.eq) goto loc_822C5028;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15544
	ctx.r3.s64 = ctx.r11.s64 + 15544;
	// b 0x822c5030
	goto loc_822C5030;
loc_822C5028:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15504
	ctx.r3.s64 = ctx.r11.s64 + 15504;
loc_822C5030:
	// bl 0x822b7a78
	ctx.lr = 0x822C5034;
	sub_822B7A78(ctx, base);
	// stw r3,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,-23400
	ctx.r3.s64 = ctx.r9.s64 + -23400;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C5060;
	sub_822B7A78(ctx, base);
	// stw r3,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r3.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r3,r6,-23460
	ctx.r3.s64 = ctx.r6.s64 + -23460;
	// bl 0x822b7a78
	ctx.lr = 0x822C5070;
	sub_822B7A78(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r24,r11,15368
	ctx.r24.s64 = ctx.r11.s64 + 15368;
	// lwz r5,36(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822c5094
	if (ctx.cr6.eq) goto loc_822C5094;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-23548
	ctx.r3.s64 = ctx.r11.s64 + -23548;
	// b 0x822c5098
	goto loc_822C5098;
loc_822C5094:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_822C5098:
	// bl 0x822b7a78
	ctx.lr = 0x822C509C;
	sub_822B7A78(ctx, base);
	// stw r3,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r3.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c51ec
	if (ctx.cr6.eq) goto loc_822C51EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r9,-23660
	ctx.r3.s64 = ctx.r9.s64 + -23660;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C50D4;
	sub_822B7A78(ctx, base);
	// addi r6,r27,-16
	ctx.r6.s64 = ctx.r27.s64 + -16;
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// stw r6,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r6.u32);
	// stw r26,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r26.u32);
	// stw r25,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r25.u32);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bgt cr6,0x822c50fc
	if (ctx.cr6.gt) goto loc_822C50FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822c511c
	goto loc_822C511C;
loc_822C50FC:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bgt cr6,0x822c510c
	if (ctx.cr6.gt) goto loc_822C510C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c511c
	goto loc_822C511C;
loc_822C510C:
	// cmpwi cr6,r11,150
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 150, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// ble cr6,0x822c511c
	if (!ctx.cr6.gt) goto loc_822C511C;
	// li r11,3
	ctx.r11.s64 = 3;
loc_822C511C:
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r9,-23720
	ctx.r3.s64 = ctx.r9.s64 + -23720;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C5148;
	sub_822B7A78(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r26,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r26.u32);
	// stw r27,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r27.u32);
	// addi r3,r5,-23856
	ctx.r3.s64 = ctx.r5.s64 + -23856;
	// stw r6,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r6.u32);
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stw r4,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C518C;
	sub_822B7A78(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lwz r8,52(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822c51a8
	if (ctx.cr6.eq) goto loc_822C51A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-23924
	ctx.r3.s64 = ctx.r11.s64 + -23924;
	// b 0x822c51ac
	goto loc_822C51AC;
loc_822C51A8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_822C51AC:
	// bl 0x822b7a78
	ctx.lr = 0x822C51B0;
	sub_822B7A78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r28,48(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r3,r11,-23956
	ctx.r3.s64 = ctx.r11.s64 + -23956;
	// addi r30,r29,2404
	ctx.r30.s64 = ctx.r29.s64 + 2404;
	// bl 0x822b7a78
	ctx.lr = 0x822C51C8;
	sub_822B7A78(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r10,3900
	ctx.r5.s64 = ctx.r10.s64 + 3900;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C51E8;
	sub_822ECA80(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
loc_822C51EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,3792
	ctx.r3.s64 = ctx.r11.s64 + 3792;
	// bl 0x822b7a78
	ctx.lr = 0x822C51F8;
	sub_822B7A78(ctx, base);
	// stw r3,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C4E58) {
	__imp__sub_822C4E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C5204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C5204) {
	__imp__sub_822C5204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C5208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822C5210;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-8364
	ctx.r3.s64 = ctx.r11.s64 + -8364;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C522C;
	sub_822B7A78(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,-25864
	ctx.r3.s64 = ctx.r10.s64 + -25864;
	// bl 0x822b7a78
	ctx.lr = 0x822C523C;
	sub_822B7A78(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r8,21184
	ctx.r3.s64 = ctx.r8.s64 + 21184;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C5268;
	sub_822B7A78(ctx, base);
	// stw r3,172(r28)
	PPC_STORE_U32(ctx.r28.u32 + 172, ctx.r3.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r3,r6,-26004
	ctx.r3.s64 = ctx.r6.s64 + -26004;
	// bl 0x822b7a78
	ctx.lr = 0x822C5278;
	sub_822B7A78(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r3,180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 180, ctx.r3.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r27,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r5,-12340
	ctx.r3.s64 = ctx.r5.s64 + -12340;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C52AC;
	sub_822B7A78(ctx, base);
	// stw r3,172(r28)
	PPC_STORE_U32(ctx.r28.u32 + 172, ctx.r3.u32);
	// lwz r24,196(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r25,r31,172
	ctx.r25.s64 = ctx.r31.s64 + 172;
	// lwz r23,188(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r26,r30,1700
	ctx.r26.s64 = ctx.r30.s64 + 1700;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x822a73c8
	ctx.lr = 0x822C52C8;
	sub_822A73C8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x822a73c8
	ctx.lr = 0x822C52D4;
	sub_822A73C8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r21,r10,4164
	ctx.r21.s64 = ctx.r10.s64 + 4164;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C52FC;
	sub_822ECA80(ctx, base);
	// stw r26,180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 180, ctx.r26.u32);
	// stw r27,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r27.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r9,-12388
	ctx.r3.s64 = ctx.r9.s64 + -12388;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C532C;
	sub_822B7A78(ctx, base);
	// stw r3,172(r28)
	PPC_STORE_U32(ctx.r28.u32 + 172, ctx.r3.u32);
	// lwz r24,200(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r26,r30,1796
	ctx.r26.s64 = ctx.r30.s64 + 1796;
	// lwz r23,192(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x822a73c8
	ctx.lr = 0x822C5344;
	sub_822A73C8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x822a73c8
	ctx.lr = 0x822C5350;
	sub_822A73C8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C5370;
	sub_822ECA80(ctx, base);
	// stw r26,180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 180, ctx.r26.u32);
	// stw r27,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r27.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r6,10792
	ctx.r3.s64 = ctx.r6.s64 + 10792;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C53A0;
	sub_822B7A78(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a7370
	ctx.lr = 0x822C53AC;
	sub_822A7370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c53c4
	if (ctx.cr6.eq) goto loc_822C53C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-12460
	ctx.r3.s64 = ctx.r11.s64 + -12460;
	// bl 0x822b7a78
	ctx.lr = 0x822C53C0;
	sub_822B7A78(ctx, base);
	// b 0x822c53c8
	goto loc_822C53C8;
loc_822C53C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C53C8:
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r9,-20356
	ctx.r3.s64 = ctx.r9.s64 + -20356;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822b7a78
	ctx.lr = 0x822C53F4;
	sub_822B7A78(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r3,r6,-20388
	ctx.r3.s64 = ctx.r6.s64 + -20388;
	// bl 0x822b7a78
	ctx.lr = 0x822C5404;
	sub_822B7A78(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r3,r5,-20452
	ctx.r3.s64 = ctx.r5.s64 + -20452;
	// bl 0x822b7a78
	ctx.lr = 0x822C5414;
	sub_822B7A78(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r27,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r27.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r3,r4,3920
	ctx.r3.s64 = ctx.r4.s64 + 3920;
	// bl 0x822b7a78
	ctx.lr = 0x822C5428;
	sub_822B7A78(ctx, base);
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C5208) {
	__imp__sub_822C5208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C5434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C5434) {
	__imp__sub_822C5434(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C5438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822C5440;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,340
	ctx.r5.s64 = 340;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x826344d0
	ctx.lr = 0x822C5460;
	sub_826344D0(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r9,8
	ctx.r9.s64 = 8;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C5480:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c5480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C5480;
	// stw r28,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C5438) {
	__imp__sub_822C5438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C5498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822C54A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822c54c8
	if (ctx.cr6.eq) goto loc_822C54C8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822c54e8
	if (!ctx.cr6.eq) goto loc_822C54E8;
loc_822C54C8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822c54d8
	if (ctx.cr6.eq) goto loc_822C54D8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822c56ac
	if (!ctx.cr6.eq) goto loc_822C56AC;
loc_822C54D8:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stb r29,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r29.u8);
	// beq cr6,0x822c554c
	if (ctx.cr6.eq) goto loc_822C554C;
loc_822C54E8:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x822c56ac
	if (ctx.cr6.gt) goto loc_822C56AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822c5510
	// bdzf 4*cr6+eq,0x822c5558
	// bdzf 4*cr6+eq,0x822c5558
	// bdzf 4*cr6+eq,0x822c5658
	// bdzf 4*cr6+eq,0x822c56ac
	// bne cr6,0x822c559c
	if (!ctx.cr6.eq) goto loc_822C559C;
loc_822C5510:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822c5534
	if (!ctx.cr0.lt) goto loc_822C5534;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x822c5540
	goto loc_822C5540;
loc_822C5534:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x822c5540
	if (!ctx.cr6.gt) goto loc_822C5540;
	// li r11,5
	ctx.r11.s64 = 5;
loc_822C5540:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c56ac
	if (ctx.cr6.eq) goto loc_822C56AC;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822C554C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822C5558:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bgt cr6,0x822c56ac
	if (ctx.cr6.gt) goto loc_822C56AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r6,-1
	ctx.r6.s64 = -1;
	// beq cr6,0x822c5574
	if (ctx.cr6.eq) goto loc_822C5574;
	// li r6,1
	ctx.r6.s64 = 1;
loc_822C5574:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a7718
	ctx.lr = 0x822C5580;
	sub_822A7718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c56ac
	if (ctx.cr6.eq) goto loc_822C56AC;
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r29,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r29.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822C559C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C55B0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822c55b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C55B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a7270
	ctx.lr = 0x822C55C8;
	sub_822A7270(ctx, base);
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r29,r7,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r28,r6,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x822a73c8
	ctx.lr = 0x822C55F8;
	sub_822A73C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// bl 0x822a73c8
	ctx.lr = 0x822C5610;
	sub_822A73C8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,4248
	ctx.r5.s64 = ctx.r11.s64 + 4248;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C5634;
	sub_822ECA80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a72f8
	ctx.lr = 0x822C5640;
	sub_822A72F8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822C5658:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822c5690
	if (!ctx.cr6.eq) goto loc_822C5690;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822a7fe8
	ctx.lr = 0x822C566C;
	sub_822A7FE8(ctx, base);
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r5,r11,4224
	ctx.r5.s64 = ctx.r11.s64 + 4224;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x822eca80
	ctx.lr = 0x822C5684;
	sub_822ECA80(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822C5690:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822C56AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C5498) {
	__imp__sub_822C5498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C56B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822C56C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// xor r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r3,r7,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r7.s64;
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// bge cr6,0x822c5714
	if (!ctx.cr6.lt) goto loc_822C5714;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// subf r7,r10,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r10.s64;
	// srawi r4,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 31;
	// xor r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
	// cmpwi cr6,r7,100
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 100, ctx.xer);
	// bge cr6,0x822c5714
	if (!ctx.cr6.lt) goto loc_822C5714;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_822C5714:
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// subf r7,r10,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplwi cr6,r7,30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 30, ctx.xer);
	// blt cr6,0x822c57cc
	if (ctx.cr6.lt) goto loc_822C57CC;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822c5744
	if (!ctx.cr6.eq) goto loc_822C5744;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822c5744
	if (!ctx.cr6.eq) goto loc_822C5744;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822c57cc
	if (ctx.cr6.eq) goto loc_822C57CC;
loc_822C5744:
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822c5774
	if (!ctx.cr6.eq) goto loc_822C5774;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822c5774
	if (!ctx.cr6.eq) goto loc_822C5774;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c57cc
	if (ctx.cr6.eq) goto loc_822C57CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// b 0x822c57cc
	goto loc_822C57CC;
loc_822C5774:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x822c5788
	if (ctx.cr6.lt) goto loc_822C5788;
	// li r10,8
	ctx.r10.s64 = 8;
loc_822C5788:
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822c57b8
	if (!ctx.cr0.gt) goto loc_822C57B8;
	// addi r7,r11,34
	ctx.r7.s64 = ctx.r11.s64 + 34;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822C57A0:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822c57a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C57A0;
loc_822C57B8:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r7,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
loc_822C57CC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822c57ec
	if (ctx.cr6.eq) goto loc_822C57EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c582c
	if (!ctx.cr6.eq) goto loc_822C582C;
loc_822C57EC:
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a80f8
	ctx.lr = 0x822C5800;
	sub_822A80F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822c5838
	if (!ctx.cr6.eq) goto loc_822C5838;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a8098
	ctx.lr = 0x822C5814;
	sub_822A8098(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,4532
	ctx.r5.s64 = ctx.r11.s64 + 4532;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x822eca80
	ctx.lr = 0x822C582C;
	sub_822ECA80(ctx, base);
loc_822C582C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822C5838:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822c5884
	if (!ctx.cr6.eq) goto loc_822C5884;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a8038
	ctx.lr = 0x822C5848;
	sub_822A8038(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a8098
	ctx.lr = 0x822C5858;
	sub_822A8098(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// bl 0x822eca80
	ctx.lr = 0x822C5878;
	sub_822ECA80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822C5884:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822c582c
	if (!ctx.cr6.eq) goto loc_822C582C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r4,120
	ctx.r4.s64 = 120;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// beq cr6,0x822c58c8
	if (ctx.cr6.eq) goto loc_822C58C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,4400
	ctx.r5.s64 = ctx.r11.s64 + 4400;
	// bl 0x822eca80
	ctx.lr = 0x822C58BC;
	sub_822ECA80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822C58C8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,4312
	ctx.r5.s64 = ctx.r11.s64 + 4312;
	// bl 0x822eca80
	ctx.lr = 0x822C58D4;
	sub_822ECA80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C56B8) {
	__imp__sub_822C56B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C58E0) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c5914
	if (ctx.cr6.eq) goto loc_822C5914;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-12920
	ctx.r3.s64 = ctx.r11.s64 + -12920;
	// bl 0x822b7a78
	ctx.lr = 0x822C5904;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C5914:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c593c
	if (!ctx.cr6.eq) goto loc_822C593C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-13004
	ctx.r3.s64 = ctx.r11.s64 + -13004;
	// bl 0x822b7a78
	ctx.lr = 0x822C592C;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C593C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c59c0
	if (!ctx.cr6.eq) goto loc_822C59C0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822c59a4
	if (ctx.cr6.eq) goto loc_822C59A4;
	// lwz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822c5960
	if (ctx.cr6.eq) goto loc_822C5960;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c597c
	if (!ctx.cr6.eq) goto loc_822C597C;
loc_822C5960:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// bl 0x822b7a78
	ctx.lr = 0x822C596C;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C597C:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x822c59a4
	if (ctx.cr6.lt) goto loc_822C59A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// bl 0x822b7a78
	ctx.lr = 0x822C5994;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C59A4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-13340
	ctx.r3.s64 = ctx.r11.s64 + -13340;
	// bl 0x822b7a78
	ctx.lr = 0x822C59B0;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C59C0:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c5a28
	if (!ctx.cr6.eq) goto loc_822C5A28;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822c59f4
	if (ctx.cr6.lt) goto loc_822C59F4;
loc_822C59D8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-13460
	ctx.r3.s64 = ctx.r11.s64 + -13460;
	// bl 0x822b7a78
	ctx.lr = 0x822C59E4;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C59F4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x822c59d8
	if (ctx.cr6.gt) goto loc_822C59D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-13556
	ctx.r3.s64 = ctx.r11.s64 + -13556;
	// bl 0x822b7a78
	ctx.lr = 0x822C5A18;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C5A28:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x822c5a4c
	if (!ctx.cr6.eq) goto loc_822C5A4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-13656
	ctx.r3.s64 = ctx.r11.s64 + -13656;
	// bl 0x822b7a78
	ctx.lr = 0x822C5A3C;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C5A4C:
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// bne cr6,0x822c5a70
	if (!ctx.cr6.eq) goto loc_822C5A70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26112
	ctx.r3.s64 = ctx.r11.s64 + -26112;
	// bl 0x822b7a78
	ctx.lr = 0x822C5A60;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C5A70:
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// bne cr6,0x822c5a94
	if (!ctx.cr6.eq) goto loc_822C5A94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-20564
	ctx.r3.s64 = ctx.r11.s64 + -20564;
	// bl 0x822b7a78
	ctx.lr = 0x822C5A84;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C5A94:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-13812
	ctx.r3.s64 = ctx.r11.s64 + -13812;
	// bl 0x822b7a78
	ctx.lr = 0x822C5AA0;
	sub_822B7A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C58E0) {
	__imp__sub_822C58E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C5AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822C5AB8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r5,3044
	ctx.r5.s64 = 3044;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x826344d0
	ctx.lr = 0x822C5ADC;
	sub_826344D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r10,r11,3332
	ctx.r10.s64 = ctx.r11.s64 + 3332;
	// li r28,6
	ctx.r28.s64 = 6;
	// subf r27,r30,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_822C5AF0:
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x822b7a78
	ctx.lr = 0x822C5AF8;
	sub_822B7A78(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822c5af0
	if (!ctx.cr0.eq) goto loc_822C5AF0;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c5b28
	if (!ctx.cr6.eq) goto loc_822C5B28;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c5b28
	if (!ctx.cr6.eq) goto loc_822C5B28;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// b 0x822c5b2c
	goto loc_822C5B2C;
loc_822C5B28:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
loc_822C5B2C:
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c5b50
	if (!ctx.cr6.eq) goto loc_822C5B50;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x822c5b54
	if (ctx.cr6.eq) goto loc_822C5B54;
loc_822C5B50:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C5B54:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r9,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r9.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r8,292(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 292);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r8,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r8.u32);
	// lwz r31,8(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c3f28
	ctx.lr = 0x822C5B88;
	sub_822C3F28(ctx, base);
	// lwz r7,12(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822c5bb8
	if (ctx.cr6.eq) goto loc_822C5BB8;
	// addi r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822c5bb8
	if (!ctx.cr6.lt) goto loc_822C5BB8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822c5bbc
	goto loc_822C5BBC;
loc_822C5BB8:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_822C5BBC:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c5cbc
	if (!ctx.cr6.eq) goto loc_822C5CBC;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,-13936
	ctx.r3.s64 = ctx.r10.s64 + -13936;
	// bl 0x822b7a78
	ctx.lr = 0x822C5BD8;
	sub_822B7A78(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c5bf0
	if (!ctx.cr6.eq) goto loc_822C5BF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,4828
	ctx.r11.s64 = ctx.r11.s64 + 4828;
loc_822C5BF0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r30,668
	ctx.r31.s64 = ctx.r30.s64 + 668;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,4812
	ctx.r5.s64 = ctx.r10.s64 + 4812;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C5C0C;
	sub_822ECA80(ctx, base);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// lwz r11,204(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5c8c
	if (ctx.cr6.eq) goto loc_822C5C8C;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5c8c
	if (ctx.cr6.eq) goto loc_822C5C8C;
	// lwz r11,212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c5c70
	if (ctx.cr6.eq) goto loc_822C5C70;
	// lwz r6,208(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822c5c5c
	if (ctx.cr6.eq) goto loc_822C5C5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r30,2036
	ctx.r31.s64 = ctx.r30.s64 + 2036;
	// addi r5,r11,4764
	ctx.r5.s64 = ctx.r11.s64 + 4764;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C5C58;
	sub_822ECA80(ctx, base);
	// b 0x822c5c88
	goto loc_822C5C88;
loc_822C5C5C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c5c70
	if (ctx.cr6.eq) goto loc_822C5C70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,4724
	ctx.r5.s64 = ctx.r11.s64 + 4724;
	// b 0x822c5c78
	goto loc_822C5C78;
loc_822C5C70:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,4696
	ctx.r5.s64 = ctx.r11.s64 + 4696;
loc_822C5C78:
	// addi r31,r30,2036
	ctx.r31.s64 = ctx.r30.s64 + 2036;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C5C88;
	sub_822ECA80(ctx, base);
loc_822C5C88:
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
loc_822C5C8C:
	// lwz r11,204(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 204);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,-14096
	ctx.r3.s64 = ctx.r10.s64 + -14096;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x822b7a78
	ctx.lr = 0x822C5CA0;
	sub_822B7A78(ctx, base);
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// stw r25,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r25.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r3,r9,-14360
	ctx.r3.s64 = ctx.r9.s64 + -14360;
	// bl 0x822b7a78
	ctx.lr = 0x822C5CB4;
	sub_822B7A78(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// b 0x822c5fac
	goto loc_822C5FAC;
loc_822C5CBC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c5e84
	if (!ctx.cr6.eq) goto loc_822C5E84;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822c5e84
	if (ctx.cr6.eq) goto loc_822C5E84;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r10,-14552
	ctx.r3.s64 = ctx.r10.s64 + -14552;
	// bl 0x822b7a78
	ctx.lr = 0x822C5CDC;
	sub_822B7A78(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822c5cf8
	if (!ctx.cr6.eq) goto loc_822C5CF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14604
	ctx.r3.s64 = ctx.r11.s64 + -14604;
	// b 0x822c5d00
	goto loc_822C5D00;
loc_822C5CF8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14684
	ctx.r3.s64 = ctx.r11.s64 + -14684;
loc_822C5D00:
	// bl 0x822b7a78
	ctx.lr = 0x822C5D04;
	sub_822B7A78(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r30,520
	ctx.r31.s64 = ctx.r30.s64 + 520;
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// bl 0x822a73c8
	ctx.lr = 0x822C5D28;
	sub_822A73C8(ctx, base);
	// stw r3,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// bl 0x822a73c8
	ctx.lr = 0x822C5D40;
	sub_822A73C8(ctx, base);
	// stw r3,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwzx r4,r5,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// stw r4,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r4.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r9,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r9.u32);
	// lwz r8,128(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// stw r8,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r8.u32);
	// lwz r7,132(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// stw r7,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r7.u32);
	// lwz r6,200(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// stw r6,612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 612, ctx.r6.u32);
	// lwz r5,200(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822c5dbc
	if (!ctx.cr6.gt) goto loc_822C5DBC;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r10,r29,164
	ctx.r10.s64 = ctx.r29.s64 + 164;
loc_822C5D9C:
	// lwz r8,-28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,-28(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28, ctx.r8.u32);
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r7,200(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822c5d9c
	if (ctx.cr6.lt) goto loc_822C5D9C;
loc_822C5DBC:
	// lwz r4,132(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x822a7f98
	ctx.lr = 0x822C5DC8;
	sub_822A7F98(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// lwz r6,132(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,128(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x822a84e0
	ctx.lr = 0x822C5DE0;
	sub_822A84E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// addi r3,r11,-28336
	ctx.r3.s64 = ctx.r11.s64 + -28336;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// bl 0x822b7a78
	ctx.lr = 0x822C5DFC;
	sub_822B7A78(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822c5e18
	if (ctx.cr6.eq) goto loc_822C5E18;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x822c5e1c
	if (!ctx.cr6.eq) goto loc_822C5E1C;
loc_822C5E18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C5E1C:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r6,r29,220
	ctx.r6.s64 = ctx.r29.s64 + 220;
	// lbz r11,220(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5e4c
	if (ctx.cr6.eq) goto loc_822C5E4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r30,1916
	ctx.r28.s64 = ctx.r30.s64 + 1916;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C5E48;
	sub_822ECA80(ctx, base);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
loc_822C5E4C:
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c5e7c
	if (ctx.cr6.eq) goto loc_822C5E7C;
	// lwz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r30,1892
	ctx.r28.s64 = ctx.r30.s64 + 1892;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,15248
	ctx.r5.s64 = ctx.r10.s64 + 15248;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C5E78;
	sub_822ECA80(ctx, base);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
loc_822C5E7C:
	// stw r31,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
	// b 0x822c5fac
	goto loc_822C5FAC;
loc_822C5E84:
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822c5f18
	if (ctx.cr6.gt) goto loc_822C5F18;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822c5ec8
	// bdzf 4*cr6+eq,0x822c5edc
	// bdzf 4*cr6+eq,0x822c5f18
	// bdzf 4*cr6+eq,0x822c5ef0
	// bne cr6,0x822c5f04
	if (!ctx.cr6.eq) goto loc_822C5F04;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c41d0
	ctx.lr = 0x822C5EC4;
	sub_822C41D0(ctx, base);
	// b 0x822c5f28
	goto loc_822C5F28;
loc_822C5EC8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c4958
	ctx.lr = 0x822C5ED8;
	sub_822C4958(ctx, base);
	// b 0x822c5f28
	goto loc_822C5F28;
loc_822C5EDC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c4e58
	ctx.lr = 0x822C5EEC;
	sub_822C4E58(ctx, base);
	// b 0x822c5f28
	goto loc_822C5F28;
loc_822C5EF0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c46b8
	ctx.lr = 0x822C5F00;
	sub_822C46B8(ctx, base);
	// b 0x822c5f28
	goto loc_822C5F28;
loc_822C5F04:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c4cb0
	ctx.lr = 0x822C5F14;
	sub_822C4CB0(ctx, base);
	// b 0x822c5f28
	goto loc_822C5F28;
loc_822C5F18:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c5208
	ctx.lr = 0x822C5F28;
	sub_822C5208(ctx, base);
loc_822C5F28:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r7.u32);
	// ble cr6,0x822c5f78
	if (!ctx.cr6.gt) goto loc_822C5F78;
	// addi r8,r30,484
	ctx.r8.s64 = ctx.r30.s64 + 484;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
loc_822C5F48:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x822c5f78
	if (!ctx.cr6.lt) goto loc_822C5F78;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r5,r6,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822c5f68
	if (!ctx.cr6.eq) goto loc_822C5F68;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822C5F68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822c5f48
	if (ctx.cr6.lt) goto loc_822C5F48;
loc_822C5F78:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c5fac
	if (ctx.cr6.eq) goto loc_822C5FAC;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822c5fac
	if (!ctx.cr6.lt) goto loc_822C5FAC;
	// addi r11,r11,122
	ctx.r11.s64 = ctx.r11.s64 + 122;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r9,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r9.u32);
loc_822C5FAC:
	// lwz r11,92(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c60c0
	if (ctx.cr6.eq) goto loc_822C60C0;
	// addi r31,r30,648
	ctx.r31.s64 = ctx.r30.s64 + 648;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822c6040
	if (!ctx.cr6.eq) goto loc_822C6040;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14864
	ctx.r3.s64 = ctx.r11.s64 + -14864;
	// bl 0x822b7a78
	ctx.lr = 0x822C5FD0;
	sub_822B7A78(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822a72c0
	ctx.lr = 0x822C5FDC;
	sub_822A72C0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r28,r30,2156
	ctx.r28.s64 = ctx.r30.s64 + 2156;
	// bl 0x822a73c8
	ctx.lr = 0x822C5FE8;
	sub_822A73C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822a73c8
	ctx.lr = 0x822C5FF4;
	sub_822A73C8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x822a73c8
	ctx.lr = 0x822C6000;
	sub_822A73C8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822a73c8
	ctx.lr = 0x822C600C;
	sub_822A73C8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,4560
	ctx.r5.s64 = ctx.r10.s64 + 4560;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// bl 0x822eca80
	ctx.lr = 0x822C6030;
	sub_822ECA80(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r3,r9,-14920
	ctx.r3.s64 = ctx.r9.s64 + -14920;
	// b 0x822c609c
	goto loc_822C609C;
loc_822C6040:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822c6060
	if (ctx.cr6.eq) goto loc_822C6060;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14948
	ctx.r3.s64 = ctx.r11.s64 + -14948;
	// b 0x822c6068
	goto loc_822C6068;
loc_822C6060:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-15012
	ctx.r3.s64 = ctx.r11.s64 + -15012;
loc_822C6068:
	// bl 0x822b7a78
	ctx.lr = 0x822C606C;
	sub_822B7A78(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-15128
	ctx.r3.s64 = ctx.r11.s64 + -15128;
	// bl 0x822b7a78
	ctx.lr = 0x822C607C;
	sub_822B7A78(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822c6094
	if (ctx.cr6.eq) goto loc_822C6094;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-28776
	ctx.r3.s64 = ctx.r11.s64 + -28776;
	// b 0x822c609c
	goto loc_822C609C;
loc_822C6094:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-28764
	ctx.r3.s64 = ctx.r11.s64 + -28764;
loc_822C609C:
	// bl 0x822b7a78
	ctx.lr = 0x822C60A0;
	sub_822B7A78(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-15292
	ctx.r3.s64 = ctx.r11.s64 + -15292;
	// bl 0x822b7a78
	ctx.lr = 0x822C60B0;
	sub_822B7A78(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r10,96(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r31,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r31.u32);
loc_822C60C0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822c58e0
	ctx.lr = 0x822C60D0;
	sub_822C58E0(ctx, base);
	// stw r3,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C5AB0) {
	__imp__sub_822C5AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C60DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C60DC) {
	__imp__sub_822C60DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C60E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C60F0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822c60f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C60F0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C60E0) {
	__imp__sub_822C60E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C60FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C60FC) {
	__imp__sub_822C60FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6100) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6100) {
	__imp__sub_822C6100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6130) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822c6140
	if (!ctx.cr6.eq) goto loc_822C6140;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_822C6140:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c617c
	if (ctx.cr6.lt) goto loc_822C617C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x822c617c
	if (!ctx.cr6.lt) goto loc_822C617C;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x822c6168
	if (!ctx.cr6.gt) goto loc_822C6168;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_822C6168:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r8,r9
	// and r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 & ctx.r11.u64;
	// blr 
	return;
loc_822C617C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6130) {
	__imp__sub_822C6130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C6184) {
	__imp__sub_822C6184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6188) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c61e0
	if (ctx.cr6.lt) goto loc_822C61E0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x822c61e0
	if (!ctx.cr6.lt) goto loc_822C61E0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822c61e0
	if (ctx.cr6.lt) goto loc_822C61E0;
	// bl 0x822c6130
	ctx.lr = 0x822C61B4;
	sub_822C6130(ctx, base);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822c61e0
	if (!ctx.cr6.lt) goto loc_822C61E0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,5028
	ctx.r10.s64 = ctx.r10.s64 + 5028;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r3,r9,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C61E0:
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

PPC_WEAK_FUNC(sub_822C6188) {
	__imp__sub_822C6188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C61F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C61F4) {
	__imp__sub_822C61F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C61F8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822c6250
	if (!ctx.cr6.gt) goto loc_822C6250;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x822c624c
	if (!ctx.cr6.lt) goto loc_822C624C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822c6298
	if (!ctx.cr6.eq) goto loc_822C6298;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x822c6234
	if (ctx.cr6.gt) goto loc_822C6234;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x822c6298
	goto loc_822C6298;
loc_822C6234:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822c6244
	if (!ctx.cr6.gt) goto loc_822C6244;
	// li r11,2
	ctx.r11.s64 = 2;
loc_822C6244:
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x822c6298
	goto loc_822C6298;
loc_822C624C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
loc_822C6250:
	// bge cr6,0x822c6298
	if (!ctx.cr6.lt) goto loc_822C6298;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c6298
	if (!ctx.cr6.gt) goto loc_822C6298;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822c6290
	if (!ctx.cr6.eq) goto loc_822C6290;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c627c
	if (!ctx.cr6.eq) goto loc_822C627C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c628c
	goto loc_822C628C;
loc_822C627C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x822c628c
	if (ctx.cr6.eq) goto loc_822C628C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_822C628C:
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_822C6290:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_822C6298:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// bne cr6,0x822c62b8
	if (!ctx.cr6.eq) goto loc_822C62B8;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x822c62f8
	goto loc_822C62F8;
loc_822C62B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822c6334
	if (ctx.cr6.lt) goto loc_822C6334;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x822c6334
	if (!ctx.cr6.lt) goto loc_822C6334;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x822c62e0
	if (!ctx.cr6.gt) goto loc_822C62E0;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x822c62f8
	goto loc_822C62F8;
loc_822C62E0:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r7,r8
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c6334
	if (!ctx.cr6.gt) goto loc_822C6334;
loc_822C62F8:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c6314
	if (ctx.cr6.lt) goto loc_822C6314;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt cr6,0x822c6310
	if (ctx.cr6.gt) goto loc_822C6310;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822C6310:
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_822C6314:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822c6334
	if (!ctx.cr6.lt) goto loc_822C6334;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// blt cr6,0x822c6330
	if (ctx.cr6.lt) goto loc_822C6330;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C6330:
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_822C6334:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C61F8) {
	__imp__sub_822C61F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C6344) {
	__imp__sub_822C6344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6348) {
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
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x822c6380
	if (ctx.cr6.lt) goto loc_822C6380;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x822c6380
	if (ctx.cr6.gt) goto loc_822C6380;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
loc_822C6380:
	// extsb r4,r30
	ctx.r4.s64 = ctx.r30.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822c63f4
	if (ctx.cr6.eq) goto loc_822C63F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,5028
	ctx.r3.s64 = ctx.r11.s64 + 5028;
	// bl 0x82634d00
	ctx.lr = 0x822C6398;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c63f4
	if (ctx.cr6.eq) goto loc_822C63F4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x822c63f4
	if (!ctx.cr6.lt) goto loc_822C63F4;
	// stbx r30,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bne cr6,0x822c63e0
	if (!ctx.cr6.eq) goto loc_822C63E0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_822C63E0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x822c63f8
	goto loc_822C63F8;
loc_822C63F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C63F8:
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

PPC_WEAK_FUNC(sub_822C6348) {
	__imp__sub_822C6348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6410) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x822c6428
	if (ctx.cr6.gt) goto loc_822C6428;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822C6428:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6410) {
	__imp__sub_822C6410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C644C) {
	__imp__sub_822C644C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6450) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6450) {
	__imp__sub_822C6450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C6464) {
	__imp__sub_822C6464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6468) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822c6544
	if (!ctx.cr6.eq) goto loc_822C6544;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c6500
	if (!ctx.cr6.eq) goto loc_822C6500;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822c64c0
	if (ctx.cr6.gt) goto loc_822C64C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
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
	// blr 
	return;
loc_822C64C0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r9,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// stw r8,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r8.u32);
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
	// blr 
	return;
loc_822C6500:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c651c
	if (!ctx.cr6.eq) goto loc_822C651C;
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
loc_822C651C:
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C6544:
	// lwz r4,20(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// bl 0x822c6188
	ctx.lr = 0x822C654C;
	sub_822C6188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822c6348
	ctx.lr = 0x822C6558;
	sub_822C6348(ctx, base);
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

PPC_WEAK_FUNC(sub_822C6468) {
	__imp__sub_822C6468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6570) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,45
	ctx.r8.s64 = 45;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c65b8
	if (!ctx.cr6.gt) goto loc_822C65B8;
loc_822C658C:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x822c659c
	if (!ctx.cr6.eq) goto loc_822C659C;
	// stbx r8,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822C659C:
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r9,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822c658c
	if (ctx.cr6.lt) goto loc_822C658C;
loc_822C65B8:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bne cr6,0x822c65c8
	if (!ctx.cr6.eq) goto loc_822C65C8;
	// stbx r8,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822C65C8:
	// stbx r7,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6570) {
	__imp__sub_822C6570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C65D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C65D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822C65F4;
	sub_826344D0(ctx, base);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// cmpwi cr6,r30,63
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 63, ctx.xer);
	// ble cr6,0x822c6610
	if (!ctx.cr6.gt) goto loc_822C6610;
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822C6610:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C65D0) {
	__imp__sub_822C65D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C661C) {
	__imp__sub_822C661C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,96
	ctx.r10.s64 = 96;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822C6638:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822c6638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C6638;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6620) {
	__imp__sub_822C6620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C664C) {
	__imp__sub_822C664C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6650) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c66a0
	if (ctx.cr6.lt) goto loc_822C66A0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x822c66a0
	if (!ctx.cr6.lt) goto loc_822C66A0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822c66a0
	if (ctx.cr6.lt) goto loc_822C66A0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x822c66a0
	if (!ctx.cr6.lt) goto loc_822C66A0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x822c66a0
	if (ctx.cr6.lt) goto loc_822C66A0;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bge cr6,0x822c66a0
	if (!ctx.cr6.lt) goto loc_822C66A0;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r10,5060
	ctx.r8.s64 = ctx.r10.s64 + 5060;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lbzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// blr 
	return;
loc_822C66A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6650) {
	__imp__sub_822C6650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C66A8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822c66ec
	if (!ctx.cr6.eq) goto loc_822C66EC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822c6728
	if (ctx.cr6.lt) goto loc_822C6728;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x822c6728
	if (!ctx.cr6.lt) goto loc_822C6728;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,5140
	ctx.r11.s64 = ctx.r11.s64 + 5140;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_822C66EC:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x822c6728
	if (!ctx.cr6.eq) goto loc_822C6728;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822c6728
	if (ctx.cr6.lt) goto loc_822C6728;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x822c6728
	if (!ctx.cr6.lt) goto loc_822C6728;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,5140
	ctx.r11.s64 = ctx.r11.s64 + 5140;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// blr 
	return;
loc_822C6728:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C66A8) {
	__imp__sub_822C66A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C673C) {
	__imp__sub_822C673C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c6758
	if (ctx.cr6.lt) goto loc_822C6758;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x822c675c
	if (!ctx.cr6.lt) goto loc_822C675C;
	// li r6,10
	ctx.r6.s64 = 10;
	// b 0x822c677c
	goto loc_822C677C;
loc_822C6758:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
loc_822C675C:
	// bne cr6,0x822c6768
	if (!ctx.cr6.eq) goto loc_822C6768;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x822c677c
	goto loc_822C677C;
loc_822C6768:
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_822C677C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822c6818
	if (!ctx.cr6.gt) goto loc_822C6818;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,5140
	ctx.r8.s64 = ctx.r11.s64 + 5140;
loc_822C6794:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822c67c4
	if (!ctx.cr6.eq) goto loc_822C67C4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x822c67ec
	if (ctx.cr6.lt) goto loc_822C67EC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822c67ec
	if (!ctx.cr6.lt) goto loc_822C67EC;
	// addi r11,r8,-32
	ctx.r11.s64 = ctx.r8.s64 + -32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822c67f4
	goto loc_822C67F4;
loc_822C67C4:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x822c67ec
	if (!ctx.cr6.eq) goto loc_822C67EC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x822c67ec
	if (ctx.cr6.lt) goto loc_822C67EC;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bge cr6,0x822c67ec
	if (!ctx.cr6.lt) goto loc_822C67EC;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x822c67f4
	goto loc_822C67F4;
loc_822C67EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C67F4:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c6808
	if (ctx.cr6.lt) goto loc_822C6808;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c6820
	if (ctx.cr6.lt) goto loc_822C6820;
loc_822C6808:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822c6794
	if (ctx.cr6.lt) goto loc_822C6794;
loc_822C6818:
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// blr 
	return;
loc_822C6820:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6740) {
	__imp__sub_822C6740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822C6830;
	__savegprlr_29(ctx, base);
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822c68b4
	if (ctx.cr6.eq) goto loc_822C68B4;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x822c6878
	if (ctx.cr6.lt) goto loc_822C6878;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822c66a8
	ctx.lr = 0x822C6864;
	sub_822C66A8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822C6878:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822c6888
	if (ctx.cr6.gt) goto loc_822C6888;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822C6888:
	// add. r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822c68b4
	if (ctx.cr0.lt) goto loc_822C68B4;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bgt cr6,0x822c68b4
	if (ctx.cr6.gt) goto loc_822C68B4;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x822c68ac
	if (!ctx.cr6.lt) goto loc_822C68AC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822c68b0
	goto loc_822C68B0;
loc_822C68AC:
	// bl 0x822c6740
	ctx.lr = 0x822C68B0;
	sub_822C6740(ctx, base);
loc_822C68B0:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_822C68B4:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// blt cr6,0x822c68dc
	if (ctx.cr6.lt) goto loc_822C68DC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x822c68e0
	if (!ctx.cr6.lt) goto loc_822C68E0;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x822c6900
	goto loc_822C6900;
loc_822C68DC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
loc_822C68E0:
	// bne cr6,0x822c68ec
	if (!ctx.cr6.eq) goto loc_822C68EC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822c6900
	goto loc_822C6900;
loc_822C68EC:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// li r9,2
	ctx.r9.s64 = 2;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 & ctx.r9.u64;
loc_822C6900:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c6910
	if (ctx.cr6.lt) goto loc_822C6910;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_822C6910:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822c6924
	if (!ctx.cr6.lt) goto loc_822C6924;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_822C6924:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822C6828) {
	__imp__sub_822C6828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6938) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x822c69b0
	if (ctx.cr6.lt) goto loc_822C69B0;
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// bgt cr6,0x822c69b0
	if (ctx.cr6.gt) goto loc_822C69B0;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822c69b0
	if (!ctx.cr6.lt) goto loc_822C69B0;
	// stbx r4,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stbx r9,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u8);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822c699c
	if (!ctx.cr6.eq) goto loc_822C699C;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x822c699c
	if (ctx.cr6.lt) goto loc_822C699C;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// bgt cr6,0x822c699c
	if (ctx.cr6.gt) goto loc_822C699C;
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
loc_822C699C:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// blr 
	return;
loc_822C69B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6938) {
	__imp__sub_822C6938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C69B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x822c69d0
	if (ctx.cr6.gt) goto loc_822C69D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822C69D0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C69B8) {
	__imp__sub_822C69B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C69F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C69F4) {
	__imp__sub_822C69F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C69F8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r3,4
	ctx.r3.s64 = 4;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r6,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r6.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C69F8) {
	__imp__sub_822C69F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6A20) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,5
	ctx.r3.s64 = 5;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r6,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r6.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6A20) {
	__imp__sub_822C6A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c6a68
	if (ctx.cr6.lt) goto loc_822C6A68;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_822C6A68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6A48) {
	__imp__sub_822C6A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6A70) {
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
	// lwz r8,80(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bge cr6,0x822c6b1c
	if (!ctx.cr6.lt) goto loc_822C6B1C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822c6af8
	if (ctx.cr6.lt) goto loc_822C6AF8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x822c6af8
	if (!ctx.cr6.lt) goto loc_822C6AF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x822c6af8
	if (ctx.cr6.lt) goto loc_822C6AF8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822c6af8
	if (ctx.cr6.lt) goto loc_822C6AF8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bge cr6,0x822c6af8
	if (!ctx.cr6.lt) goto loc_822C6AF8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r5,r7,5060
	ctx.r5.s64 = ctx.r7.s64 + 5060;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lbzx r4,r3,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822c6938
	ctx.lr = 0x822C6AE0;
	sub_822C6938(ctx, base);
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
loc_822C6AF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822c6938
	ctx.lr = 0x822C6B04;
	sub_822C6938(ctx, base);
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
loc_822C6B1C:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bne cr6,0x822c6c10
	if (!ctx.cr6.eq) goto loc_822C6C10;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x822c6be0
	if (ctx.cr6.lt) goto loc_822C6BE0;
	// beq cr6,0x822c6ba4
	if (ctx.cr6.eq) goto loc_822C6BA4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x822c6b80
	if (ctx.cr6.lt) goto loc_822C6B80;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x822c6b54
	if (ctx.cr6.gt) goto loc_822C6B54;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x822c6c74
	goto loc_822C6C74;
loc_822C6B54:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x822c6c74
	goto loc_822C6C74;
loc_822C6B80:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822c6938
	ctx.lr = 0x822C6B8C;
	sub_822C6938(ctx, base);
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
loc_822C6BA4:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C6BE0:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// stw r6,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C6C10:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822c6c48
	if (!ctx.cr6.eq) goto loc_822C6C48;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// stw r6,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822C6C48:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822c6c68
	if (ctx.cr6.lt) goto loc_822C6C68;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822c6c6c
	if (!ctx.cr6.gt) goto loc_822C6C6C;
loc_822C6C68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C6C6C:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r9,3
	ctx.r9.s64 = 3;
loc_822C6C74:
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
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822C6A70) {
	__imp__sub_822C6A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822C6C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822C6C8C) {
	__imp__sub_822C6C8C(ctx, base);
}

