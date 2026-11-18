#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822DE05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE05C) {
	__imp__sub_822DE05C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE060) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de06c
	if (!ctx.cr6.eq) goto loc_822DE06C;
	// blr 
	return;
loc_822DE06C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE060) {
	__imp__sub_822DE060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE080) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de08c
	if (!ctx.cr6.eq) goto loc_822DE08C;
	// blr 
	return;
loc_822DE08C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE080) {
	__imp__sub_822DE080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE0A4) {
	__imp__sub_822DE0A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE0A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de0b4
	if (!ctx.cr6.eq) goto loc_822DE0B4;
	// blr 
	return;
loc_822DE0B4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE0A8) {
	__imp__sub_822DE0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE0CC) {
	__imp__sub_822DE0CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de0dc
	if (!ctx.cr6.eq) goto loc_822DE0DC;
	// blr 
	return;
loc_822DE0DC:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
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

PPC_WEAK_FUNC(sub_822DE0D0) {
	__imp__sub_822DE0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE0F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de0fc
	if (!ctx.cr6.eq) goto loc_822DE0FC;
	// blr 
	return;
loc_822DE0FC:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE0F0) {
	__imp__sub_822DE0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE114) {
	__imp__sub_822DE114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE118) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de124
	if (!ctx.cr6.eq) goto loc_822DE124;
	// blr 
	return;
loc_822DE124:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE118) {
	__imp__sub_822DE118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE13C) {
	__imp__sub_822DE13C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE140) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de14c
	if (!ctx.cr6.eq) goto loc_822DE14C;
	// blr 
	return;
loc_822DE14C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE140) {
	__imp__sub_822DE140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE164) {
	__imp__sub_822DE164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE168) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de174
	if (!ctx.cr6.eq) goto loc_822DE174;
	// blr 
	return;
loc_822DE174:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE168) {
	__imp__sub_822DE168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE18C) {
	__imp__sub_822DE18C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE190) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de19c
	if (!ctx.cr6.eq) goto loc_822DE19C;
	// blr 
	return;
loc_822DE19C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE190) {
	__imp__sub_822DE190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE1B4) {
	__imp__sub_822DE1B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE1B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de1c4
	if (!ctx.cr6.eq) goto loc_822DE1C4;
	// blr 
	return;
loc_822DE1C4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-128
	ctx.r10.s64 = ctx.r11.s64 + -128;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE1B8) {
	__imp__sub_822DE1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE1DC) {
	__imp__sub_822DE1DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822DE1E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de460
	if (ctx.cr6.eq) goto loc_822DE460;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822de460
	if (ctx.cr6.eq) goto loc_822DE460;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822de460
	if (!ctx.cr6.eq) goto loc_822DE460;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x822de260
	if (ctx.cr6.gt) goto loc_822DE260;
	// beq cr6,0x822de278
	if (ctx.cr6.eq) goto loc_822DE278;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x822de460
	if (ctx.cr6.gt) goto loc_822DE460;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822de278
	if (ctx.cr6.eq) goto loc_822DE278;
	// bdz 0x822de278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE278;
	// bdz 0x822de460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE460;
	// bdz 0x822de278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE278;
	// bdz 0x822de460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE460;
	// bdz 0x822de460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE460;
	// bdz 0x822de460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE460;
	// b 0x822de278
	goto loc_822DE278;
loc_822DE260:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822de278
	if (ctx.cr6.eq) goto loc_822DE278;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x822de278
	if (ctx.cr6.eq) goto loc_822DE278;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x822de460
	if (!ctx.cr6.eq) goto loc_822DE460;
loc_822DE278:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822de2bc
	if (ctx.cr6.eq) goto loc_822DE2BC;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x822de30c
	if (ctx.cr6.gt) goto loc_822DE30C;
	// beq cr6,0x822de324
	if (ctx.cr6.eq) goto loc_822DE324;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822de460
	if (ctx.cr6.gt) goto loc_822DE460;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822de2bc
	// bdzf 4*cr6+eq,0x822de460
	// bdzf 4*cr6+eq,0x822de2bc
	// bdzf 4*cr6+eq,0x822de460
	// bdzf 4*cr6+eq,0x822de460
	// bdzf 4*cr6+eq,0x822de460
	// bne cr6,0x822de2c8
	if (!ctx.cr6.eq) goto loc_822DE2C8;
loc_822DE2BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DE2C8:
	// lfd f12,24(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// lfd f11,24(r28)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822de2e4
	if (!ctx.cr6.gt) goto loc_822DE2E4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822DE2E4:
	// fsub f13,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f11.f64 - ctx.f12.f64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfd f12,-9736(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -9736);
	// fmul f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x822de460
	if (ctx.cr6.gt) goto loc_822DE460;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DE30C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822de40c
	if (ctx.cr6.eq) goto loc_822DE40C;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x822de370
	if (ctx.cr6.eq) goto loc_822DE370;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x822de460
	if (!ctx.cr6.eq) goto loc_822DE460;
loc_822DE324:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822de460
	if (ctx.cr6.eq) goto loc_822DE460;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822de460
	if (ctx.cr6.eq) goto loc_822DE460;
loc_822DE33C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822de360
	if (ctx.cr6.eq) goto loc_822DE360;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de33c
	if (ctx.cr6.eq) goto loc_822DE33C;
loc_822DE360:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DE370:
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822de3b8
	if (ctx.cr6.eq) goto loc_822DE3B8;
loc_822DE37C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcaf8
	ctx.lr = 0x822DE38C;
	sub_822DCAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de460
	if (ctx.cr6.eq) goto loc_822DE460;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de1e0
	ctx.lr = 0x822DE3A4;
	sub_822DE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822de460
	if (ctx.cr6.eq) goto loc_822DE460;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822de37c
	if (!ctx.cr6.eq) goto loc_822DE37C;
loc_822DE3B8:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822de400
	if (ctx.cr6.eq) goto loc_822DE400;
loc_822DE3C4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcaf8
	ctx.lr = 0x822DE3D4;
	sub_822DCAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de460
	if (ctx.cr6.eq) goto loc_822DE460;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de1e0
	ctx.lr = 0x822DE3EC;
	sub_822DE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822de460
	if (ctx.cr6.eq) goto loc_822DE460;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822de3c4
	if (!ctx.cr6.eq) goto loc_822DE3C4;
loc_822DE400:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DE40C:
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822de44c
	if (ctx.cr6.eq) goto loc_822DE44C;
loc_822DE41C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822de44c
	if (ctx.cr6.eq) goto loc_822DE44C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de1e0
	ctx.lr = 0x822DE434;
	sub_822DE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822de460
	if (ctx.cr6.eq) goto loc_822DE460;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822de41c
	if (!ctx.cr6.eq) goto loc_822DE41C;
loc_822DE44C:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DE460:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE1E0) {
	__imp__sub_822DE1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE46C) {
	__imp__sub_822DE46C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822DE470) {
	__imp__sub_822DE470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,596
	ctx.r10.s64 = ctx.r11.s64 + 596;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822DE480) {
	__imp__sub_822DE480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE494) {
	__imp__sub_822DE494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE498) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de4bc
	if (ctx.cr6.eq) goto loc_822DE4BC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822de4c4
	if (!ctx.cr6.eq) goto loc_822DE4C4;
loc_822DE4BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822DE4C4:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE498) {
	__imp__sub_822DE498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE4CC) {
	__imp__sub_822DE4CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE4D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de4f4
	if (ctx.cr6.eq) goto loc_822DE4F4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822de504
	if (!ctx.cr6.eq) goto loc_822DE504;
loc_822DE4F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,23424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23424);
	// fsqrt f1,f0
	ctx.f1.f64 = sqrt(ctx.f0.f64);
	// blr 
	return;
loc_822DE504:
	// lfd f1,24(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE4D0) {
	__imp__sub_822DE4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE50C) {
	__imp__sub_822DE50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DE518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822de5f8
	if (ctx.cr6.eq) goto loc_822DE5F8;
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822de5f8
	if (!ctx.cr6.eq) goto loc_822DE5F8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822DE540:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822de540
	if (!ctx.cr6.eq) goto loc_822DE540;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822DE564:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822de564
	if (!ctx.cr6.eq) goto loc_822DE564;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x822de5b0
	if (ctx.cr6.gt) goto loc_822DE5B0;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_822DE590:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bne cr6,0x822de590
	if (!ctx.cr6.eq) goto loc_822DE590;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DE5B0:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r31,r11,596
	ctx.r31.s64 = ctx.r11.s64 + 596;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822db948
	ctx.lr = 0x822DE5C4;
	sub_822DB948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de5f8
	if (ctx.cr6.eq) goto loc_822DE5F8;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de5e8
	if (ctx.cr6.eq) goto loc_822DE5E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DE5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DE5E8:
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DE5F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE510) {
	__imp__sub_822DE510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE604) {
	__imp__sub_822DE604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE608) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822de7e4
	if (ctx.cr6.eq) goto loc_822DE7E4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822de7e4
	if (ctx.cr6.eq) goto loc_822DE7E4;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822de684
	if (ctx.cr6.gt) goto loc_822DE684;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r9,-9728
	ctx.r4.s64 = ctx.r9.s64 + -9728;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82635190
	ctx.lr = 0x822DE660;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822de684
	if (!ctx.cr6.eq) goto loc_822DE684;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x822de7e8
	goto loc_822DE7E8;
loc_822DE684:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822de6d4
	if (ctx.cr6.gt) goto loc_822DE6D4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r9,18456
	ctx.r4.s64 = ctx.r9.s64 + 18456;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82635190
	ctx.lr = 0x822DE6B0;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822de6d4
	if (!ctx.cr6.eq) goto loc_822DE6D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x822de7e8
	goto loc_822DE7E8;
loc_822DE6D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822de72c
	if (ctx.cr6.gt) goto loc_822DE72C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r9,18464
	ctx.r4.s64 = ctx.r9.s64 + 18464;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82635190
	ctx.lr = 0x822DE700;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822de72c
	if (!ctx.cr6.eq) goto loc_822DE72C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x822de7e8
	goto loc_822DE7E8;
loc_822DE72C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822de7e4
	if (!ctx.cr6.lt) goto loc_822DE7E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,34
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 34, ctx.xer);
	// bne cr6,0x822de75c
	if (!ctx.cr6.eq) goto loc_822DE75C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dc238
	ctx.lr = 0x822DE758;
	sub_822DC238(ctx, base);
	// b 0x822de7e8
	goto loc_822DE7E8;
loc_822DE75C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822de7e4
	if (!ctx.cr6.lt) goto loc_822DE7E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// beq cr6,0x822de784
	if (ctx.cr6.eq) goto loc_822DE784;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// blt cr6,0x822de794
	if (ctx.cr6.lt) goto loc_822DE794;
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// bgt cr6,0x822de794
	if (ctx.cr6.gt) goto loc_822DE794;
loc_822DE784:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbb88
	ctx.lr = 0x822DE790;
	sub_822DBB88(ctx, base);
	// b 0x822de7e8
	goto loc_822DE7E8;
loc_822DE794:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822de7e4
	if (!ctx.cr6.lt) goto loc_822DE7E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,91
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 91, ctx.xer);
	// bne cr6,0x822de7bc
	if (!ctx.cr6.eq) goto loc_822DE7BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dc758
	ctx.lr = 0x822DE7B8;
	sub_822DC758(ctx, base);
	// b 0x822de7e8
	goto loc_822DE7E8;
loc_822DE7BC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822de7e4
	if (!ctx.cr6.lt) goto loc_822DE7E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,123
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 123, ctx.xer);
	// bne cr6,0x822de7e4
	if (!ctx.cr6.eq) goto loc_822DE7E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de9f0
	ctx.lr = 0x822DE7E0;
	sub_822DE9F0(ctx, base);
	// b 0x822de7e8
	goto loc_822DE7E8;
loc_822DE7E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DE7E8:
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

PPC_WEAK_FUNC(sub_822DE608) {
	__imp__sub_822DE608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE800) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822de9d4
	if (ctx.cr6.eq) goto loc_822DE9D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822de9d4
	if (ctx.cr6.eq) goto loc_822DE9D4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x822de948
	if (ctx.cr6.gt) goto loc_822DE948;
	// beq cr6,0x822de938
	if (ctx.cr6.eq) goto loc_822DE938;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822de9d4
	if (ctx.cr6.gt) goto loc_822DE9D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822de8b0
	if (ctx.cr6.eq) goto loc_822DE8B0;
	// bdz 0x822de8ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE8EC;
	// bdz 0x822de9d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE9D4;
	// bdz 0x822de874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE874;
	// bdz 0x822de9d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE9D4;
	// bdz 0x822de9d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE9D4;
	// bdz 0x822de9d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DE9D4;
	// b 0x822de928
	goto loc_822DE928;
loc_822DE874:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822dbd38
	ctx.lr = 0x822DE87C;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de9d4
	if (ctx.cr6.eq) goto loc_822DE9D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,-9728
	ctx.r11.s64 = ctx.r11.s64 + -9728;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822DE89C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822de89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DE89C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822de9d8
	goto loc_822DE9D8;
loc_822DE8B0:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x822dbd38
	ctx.lr = 0x822DE8B8;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de9d4
	if (ctx.cr6.eq) goto loc_822DE9D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,18456
	ctx.r11.s64 = ctx.r11.s64 + 18456;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822DE8D8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822de8d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DE8D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822de9d8
	goto loc_822DE9D8;
loc_822DE8EC:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822dbd38
	ctx.lr = 0x822DE8F4;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de9d4
	if (ctx.cr6.eq) goto loc_822DE9D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,18464
	ctx.r11.s64 = ctx.r11.s64 + 18464;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822DE914:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822de914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DE914;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822de9d8
	goto loc_822DE9D8;
loc_822DE928:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbe78
	ctx.lr = 0x822DE934;
	sub_822DBE78(ctx, base);
	// b 0x822de9d8
	goto loc_822DE9D8;
loc_822DE938:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x822dc4b8
	ctx.lr = 0x822DE944;
	sub_822DC4B8(ctx, base);
	// b 0x822de9d8
	goto loc_822DE9D8;
loc_822DE948:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822de9c4
	if (ctx.cr6.eq) goto loc_822DE9C4;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x822de9b4
	if (ctx.cr6.eq) goto loc_822DE9B4;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x822de9d4
	if (!ctx.cr6.eq) goto loc_822DE9D4;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822de9d4
	if (ctx.cr6.eq) goto loc_822DE9D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822DE970:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822de970
	if (!ctx.cr6.eq) goto loc_822DE970;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822dbd38
	ctx.lr = 0x822DE998;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de9d4
	if (ctx.cr6.eq) goto loc_822DE9D4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82635430
	ctx.lr = 0x822DE9AC;
	sub_82635430(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822de9d8
	goto loc_822DE9D8;
loc_822DE9B4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822debe8
	ctx.lr = 0x822DE9C0;
	sub_822DEBE8(ctx, base);
	// b 0x822de9d8
	goto loc_822DE9D8;
loc_822DE9C4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dc900
	ctx.lr = 0x822DE9D0;
	sub_822DC900(ctx, base);
	// b 0x822de9d8
	goto loc_822DE9D8;
loc_822DE9D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DE9D8:
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

PPC_WEAK_FUNC(sub_822DE800) {
	__imp__sub_822DE800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822DE9F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bge cr6,0x822debd8
	if (!ctx.cr6.lt) goto loc_822DEBD8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822debd8
	if (!ctx.cr6.lt) goto loc_822DEBD8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,123
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 123, ctx.xer);
	// bne cr6,0x822debd8
	if (!ctx.cr6.eq) goto loc_822DEBD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bl 0x822dc6f0
	ctx.lr = 0x822DEA54;
	sub_822DC6F0(ctx, base);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822debb4
	if (!ctx.cr6.lt) goto loc_822DEBB4;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,125
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 125, ctx.xer);
	// beq cr6,0x822deb78
	if (ctx.cr6.eq) goto loc_822DEB78;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822debb4
	if (!ctx.cr6.lt) goto loc_822DEBB4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r27,r4,16
	ctx.r27.s64 = ctx.r4.s64 + 16;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_822DEA88:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dba80
	ctx.lr = 0x822DEA90;
	sub_822DBA80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822debc8
	if (ctx.cr6.eq) goto loc_822DEBC8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822deaac
	if (!ctx.cr6.eq) goto loc_822DEAAC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x822deab4
	goto loc_822DEAB4;
loc_822DEAAC:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_822DEAB4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822dc6f0
	ctx.lr = 0x822DEACC;
	sub_822DC6F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dc238
	ctx.lr = 0x822DEAD8;
	sub_822DC238(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822debc8
	if (ctx.cr6.eq) goto loc_822DEBC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc6f0
	ctx.lr = 0x822DEAE8;
	sub_822DC6F0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822debc8
	if (!ctx.cr6.lt) goto loc_822DEBC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,58
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 58, ctx.xer);
	// bne cr6,0x822debc8
	if (!ctx.cr6.eq) goto loc_822DEBC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822dc6f0
	ctx.lr = 0x822DEB24;
	sub_822DC6F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de608
	ctx.lr = 0x822DEB30;
	sub_822DE608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822debc8
	if (ctx.cr6.eq) goto loc_822DEBC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc6f0
	ctx.lr = 0x822DEB40;
	sub_822DC6F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822debc8
	if (!ctx.cr6.lt) goto loc_822DEBC8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,44
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 44, ctx.xer);
	// beq cr6,0x822dea88
	if (ctx.cr6.eq) goto loc_822DEA88;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822debc8
	if (!ctx.cr6.lt) goto loc_822DEBC8;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,125
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 125, ctx.xer);
	// bne cr6,0x822debc8
	if (!ctx.cr6.eq) goto loc_822DEBC8;
loc_822DEB78:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x822deb90
	if (ctx.cr6.eq) goto loc_822DEB90;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
loc_822DEB90:
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822DEBB4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822DEBC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822debd8
	if (ctx.cr6.eq) goto loc_822DEBD8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DEBD8;
	sub_822DBAD0(ctx, base);
loc_822DEBD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE9F0) {
	__imp__sub_822DE9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DEBE4) {
	__imp__sub_822DEBE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822DEBF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822dec10
	if (!ctx.cr6.eq) goto loc_822DEC10;
loc_822DEC04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822DEC10:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// bl 0x822dbd38
	ctx.lr = 0x822DEC30;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dec04
	if (ctx.cr6.eq) goto loc_822DEC04;
	// li r11,123
	ctx.r11.s64 = 123;
	// li r24,10
	ctx.r24.s64 = 10;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x822dec60
	if (ctx.cr6.eq) goto loc_822DEC60;
	// stb r24,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r24.u8);
loc_822DEC60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,9
	ctx.r28.s64 = 9;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x822dee38
	if (ctx.cr6.eq) goto loc_822DEE38;
	// li r26,58
	ctx.r26.s64 = 58;
	// li r25,44
	ctx.r25.s64 = 44;
loc_822DEC84:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822decdc
	if (ctx.cr6.eq) goto loc_822DECDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822dbd38
	ctx.lr = 0x822DEC9C;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dec04
	if (ctx.cr6.eq) goto loc_822DEC04;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822deccc
	if (!ctx.cr6.gt) goto loc_822DECCC;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
loc_822DECB8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r28,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r10.u32 = ea;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822decb8
	if (ctx.cr6.lt) goto loc_822DECB8;
loc_822DECCC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822DECDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x822dc4b8
	ctx.lr = 0x822DECE8;
	sub_822DC4B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dec04
	if (ctx.cr6.eq) goto loc_822DEC04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ded2c
	if (ctx.cr6.eq) goto loc_822DED2C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822DED08:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ded08
	if (!ctx.cr6.eq) goto loc_822DED08;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_822DED2C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822dbd38
	ctx.lr = 0x822DED4C;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dec04
	if (ctx.cr6.eq) goto loc_822DEC04;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r26.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ded68
	if (ctx.cr6.eq) goto loc_822DED68;
	// stb r28,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r28.u8);
loc_822DED68:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822de800
	ctx.lr = 0x822DED80;
	sub_822DE800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dec04
	if (ctx.cr6.eq) goto loc_822DEC04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dedc4
	if (ctx.cr6.eq) goto loc_822DEDC4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822DEDA0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822deda0
	if (!ctx.cr6.eq) goto loc_822DEDA0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_822DEDC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// bl 0x822dbd38
	ctx.lr = 0x822DEDEC;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dec04
	if (ctx.cr6.eq) goto loc_822DEC04;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dee08
	if (ctx.cr6.eq) goto loc_822DEE08;
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r25.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_822DEE08:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dee1c
	if (ctx.cr6.eq) goto loc_822DEE1C;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_822DEE1C:
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822dec84
	if (!ctx.cr6.eq) goto loc_822DEC84;
loc_822DEE38:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dee50
	if (ctx.cr6.eq) goto loc_822DEE50;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x822dee54
	goto loc_822DEE54;
loc_822DEE50:
	// li r4,2
	ctx.r4.s64 = 2;
loc_822DEE54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbd38
	ctx.lr = 0x822DEE5C;
	sub_822DBD38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dec04
	if (ctx.cr6.eq) goto loc_822DEC04;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822deea0
	if (ctx.cr6.eq) goto loc_822DEEA0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addic. r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822deea0
	if (ctx.cr0.eq) goto loc_822DEEA0;
loc_822DEE84:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822dee84
	if (ctx.cr6.lt) goto loc_822DEE84;
loc_822DEEA0:
	// li r10,125
	ctx.r10.s64 = 125;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r27,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r27.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DEBE8) {
	__imp__sub_822DEBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DEEC4) {
	__imp__sub_822DEEC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DEED0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,596
	ctx.r29.s64 = ctx.r11.s64 + 596;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DEEF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822def20
	if (ctx.cr6.eq) goto loc_822DEF20;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_822DEF20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822defac
	if (ctx.cr6.eq) goto loc_822DEFAC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822defac
	if (ctx.cr6.eq) goto loc_822DEFAC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822defac
	if (ctx.cr6.eq) goto loc_822DEFAC;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822defac
	if (ctx.cr6.eq) goto loc_822DEFAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DEF4C;
	sub_822DB948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822defac
	if (ctx.cr6.eq) goto loc_822DEFAC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822def84
	if (!ctx.cr6.eq) goto loc_822DEF84;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822def84
	if (ctx.cr6.eq) goto loc_822DEF84;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DEF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DEF84:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DEF98;
	sub_822DCD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822defac
	if (ctx.cr6.eq) goto loc_822DEFAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DEFAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DEFB4;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DEEC8) {
	__imp__sub_822DEEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DEFC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,596
	ctx.r29.s64 = ctx.r11.s64 + 596;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DEFEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df018
	if (ctx.cr6.eq) goto loc_822DF018;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_822DF018:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822df0a4
	if (ctx.cr6.eq) goto loc_822DF0A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822df0a4
	if (ctx.cr6.eq) goto loc_822DF0A4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822df0a4
	if (ctx.cr6.eq) goto loc_822DF0A4;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822df0a4
	if (ctx.cr6.eq) goto loc_822DF0A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DF044;
	sub_822DB948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df0a4
	if (ctx.cr6.eq) goto loc_822DF0A4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df07c
	if (!ctx.cr6.eq) goto loc_822DF07C;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df07c
	if (ctx.cr6.eq) goto loc_822DF07C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF07C:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DF090;
	sub_822DCD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822df0a4
	if (ctx.cr6.eq) goto loc_822DF0A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DF0A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DF0AC;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DEFC0) {
	__imp__sub_822DEFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DF0C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,596
	ctx.r29.s64 = ctx.r11.s64 + 596;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df110
	if (ctx.cr6.eq) goto loc_822DF110;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_822DF110:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822df19c
	if (ctx.cr6.eq) goto loc_822DF19C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822df19c
	if (ctx.cr6.eq) goto loc_822DF19C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822df19c
	if (ctx.cr6.eq) goto loc_822DF19C;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822df19c
	if (ctx.cr6.eq) goto loc_822DF19C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DF13C;
	sub_822DB948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df19c
	if (ctx.cr6.eq) goto loc_822DF19C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df174
	if (!ctx.cr6.eq) goto loc_822DF174;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df174
	if (ctx.cr6.eq) goto loc_822DF174;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF174:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DF188;
	sub_822DCD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822df19c
	if (ctx.cr6.eq) goto loc_822DF19C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DF19C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DF1A4;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF0B8) {
	__imp__sub_822DF0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DF1B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822dd578
	ctx.lr = 0x822DF1CC;
	sub_822DD578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822df264
	if (ctx.cr6.eq) goto loc_822DF264;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822df264
	if (ctx.cr6.eq) goto loc_822DF264;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df264
	if (ctx.cr6.eq) goto loc_822DF264;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822df264
	if (ctx.cr6.eq) goto loc_822DF264;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DF204;
	sub_822DB948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df264
	if (ctx.cr6.eq) goto loc_822DF264;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df23c
	if (!ctx.cr6.eq) goto loc_822DF23C;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df23c
	if (ctx.cr6.eq) goto loc_822DF23C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF23C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF23C:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DF250;
	sub_822DCD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822df264
	if (ctx.cr6.eq) goto loc_822DF264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DF264:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DF26C;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF1B0) {
	__imp__sub_822DF1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DF280;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822dd5e8
	ctx.lr = 0x822DF290;
	sub_822DD5E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822df328
	if (ctx.cr6.eq) goto loc_822DF328;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822df328
	if (ctx.cr6.eq) goto loc_822DF328;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df328
	if (ctx.cr6.eq) goto loc_822DF328;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822df328
	if (ctx.cr6.eq) goto loc_822DF328;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DF2C8;
	sub_822DB948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df328
	if (ctx.cr6.eq) goto loc_822DF328;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df300
	if (!ctx.cr6.eq) goto loc_822DF300;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df300
	if (ctx.cr6.eq) goto loc_822DF300;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF300:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DF314;
	sub_822DCD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822df328
	if (ctx.cr6.eq) goto loc_822DF328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DF328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DF330;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF278) {
	__imp__sub_822DF278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF33C) {
	__imp__sub_822DF33C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DF348;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822dd6b8
	ctx.lr = 0x822DF35C;
	sub_822DD6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822df3f4
	if (ctx.cr6.eq) goto loc_822DF3F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822df3f4
	if (ctx.cr6.eq) goto loc_822DF3F4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df3f4
	if (ctx.cr6.eq) goto loc_822DF3F4;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822df3f4
	if (ctx.cr6.eq) goto loc_822DF3F4;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DF394;
	sub_822DB948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df3f4
	if (ctx.cr6.eq) goto loc_822DF3F4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df3cc
	if (!ctx.cr6.eq) goto loc_822DF3CC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df3cc
	if (ctx.cr6.eq) goto loc_822DF3CC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF3CC:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DF3E0;
	sub_822DCD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822df3f4
	if (ctx.cr6.eq) goto loc_822DF3F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DF3F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DF3FC;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF340) {
	__imp__sub_822DF340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DF410;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822dd880
	ctx.lr = 0x822DF424;
	sub_822DD880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822df4bc
	if (ctx.cr6.eq) goto loc_822DF4BC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822df4bc
	if (ctx.cr6.eq) goto loc_822DF4BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df4bc
	if (ctx.cr6.eq) goto loc_822DF4BC;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822df4bc
	if (ctx.cr6.eq) goto loc_822DF4BC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DF45C;
	sub_822DB948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df4bc
	if (ctx.cr6.eq) goto loc_822DF4BC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df494
	if (!ctx.cr6.eq) goto loc_822DF494;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df494
	if (ctx.cr6.eq) goto loc_822DF494;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF494:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DF4A8;
	sub_822DCD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822df4bc
	if (ctx.cr6.eq) goto loc_822DF4BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DF4BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DF4C4;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF408) {
	__imp__sub_822DF408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DF4D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,596
	ctx.r29.s64 = ctx.r11.s64 + 596;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df528
	if (ctx.cr6.eq) goto loc_822DF528;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_822DF528:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822df5b4
	if (ctx.cr6.eq) goto loc_822DF5B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822df5b4
	if (ctx.cr6.eq) goto loc_822DF5B4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822df5b4
	if (ctx.cr6.eq) goto loc_822DF5B4;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822df5b4
	if (ctx.cr6.eq) goto loc_822DF5B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DF554;
	sub_822DB948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df5b4
	if (ctx.cr6.eq) goto loc_822DF5B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df58c
	if (!ctx.cr6.eq) goto loc_822DF58C;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df58c
	if (ctx.cr6.eq) goto loc_822DF58C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF58C:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DF5A0;
	sub_822DCD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822df5b4
	if (ctx.cr6.eq) goto loc_822DF5B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DF5B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DF5BC;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF4D0) {
	__imp__sub_822DF4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DF5D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,596
	ctx.r29.s64 = ctx.r11.s64 + 596;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df620
	if (ctx.cr6.eq) goto loc_822DF620;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_822DF620:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822df6ac
	if (ctx.cr6.eq) goto loc_822DF6AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822df6ac
	if (ctx.cr6.eq) goto loc_822DF6AC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822df6ac
	if (ctx.cr6.eq) goto loc_822DF6AC;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822df6ac
	if (ctx.cr6.eq) goto loc_822DF6AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DF64C;
	sub_822DB948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df6ac
	if (ctx.cr6.eq) goto loc_822DF6AC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df684
	if (!ctx.cr6.eq) goto loc_822DF684;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df684
	if (ctx.cr6.eq) goto loc_822DF684;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF684:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DF698;
	sub_822DCD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822df6ac
	if (ctx.cr6.eq) goto loc_822DF6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DF6AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DF6B4;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF5C8) {
	__imp__sub_822DF5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DF6C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822df760
	if (ctx.cr6.eq) goto loc_822DF760;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822df760
	if (ctx.cr6.eq) goto loc_822DF760;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822df71c
	if (!ctx.cr6.eq) goto loc_822DF71C;
	// lwz r3,32(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df71c
	if (ctx.cr6.eq) goto loc_822DF71C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF71C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822db948
	ctx.lr = 0x822DF728;
	sub_822DB948(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r10,r11,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcaf8
	ctx.lr = 0x822DF748;
	sub_822DCAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822dd350
	ctx.lr = 0x822DF758;
	sub_822DD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DF760:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF6C0) {
	__imp__sub_822DF6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF76C) {
	__imp__sub_822DF76C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF770) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822df6c0
	sub_822DF6C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF770) {
	__imp__sub_822DF770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF778) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x822df6c0
	sub_822DF6C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF778) {
	__imp__sub_822DF778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DF788;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,-3412
	ctx.r27.s64 = ctx.r11.s64 + -3412;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// beq cr6,0x822df948
	if (ctx.cr6.eq) goto loc_822DF948;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822df8e4
	if (ctx.cr6.eq) goto loc_822DF8E4;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// addi r10,r11,596
	ctx.r10.s64 = ctx.r11.s64 + 596;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lwz r9,596(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x822DF818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df8dc
	if (ctx.cr6.eq) goto loc_822DF8DC;
	// std r31,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r31.u64);
	// std r31,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r31.u64);
	// std r31,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r31.u64);
	// std r31,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r31.u64);
	// std r31,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r31.u64);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822df888
	if (ctx.cr6.eq) goto loc_822DF888;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822df888
	if (!ctx.cr6.eq) goto loc_822DF888;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x822df880
	if (!ctx.cr6.gt) goto loc_822DF880;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-9688
	ctx.r4.s64 = ctx.r11.s64 + -9688;
	// bl 0x82635190
	ctx.lr = 0x822DF86C;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822df880
	if (!ctx.cr6.eq) goto loc_822DF880;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_822DF880:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x822df88c
	goto loc_822DF88C;
loc_822DF888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822DF88C:
	// bl 0x822dc6f0
	ctx.lr = 0x822DF890;
	sub_822DC6F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de608
	ctx.lr = 0x822DF89C;
	sub_822DE608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822df8d4
	if (ctx.cr6.eq) goto loc_822DF8D4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822df8fc
	if (ctx.cr6.eq) goto loc_822DF8FC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822dc6f0
	ctx.lr = 0x822DF8B4;
	sub_822DC6F0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822df8d4
	if (!ctx.cr6.lt) goto loc_822DF8D4;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822df904
	if (ctx.cr6.eq) goto loc_822DF904;
loc_822DF8D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DF8DC;
	sub_822DBAD0(ctx, base);
loc_822DF8DC:
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_822DF8E4:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bge cr6,0x822df920
	if (!ctx.cr6.lt) goto loc_822DF920;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x822df92c
	goto loc_822DF92C;
loc_822DF8FC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_822DF904:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822df914
	if (ctx.cr6.eq) goto loc_822DF914;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_822DF914:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822DF920:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822df930
	if (ctx.cr6.eq) goto loc_822DF930;
	// addi r31,r9,-1
	ctx.r31.s64 = ctx.r9.s64 + -1;
loc_822DF92C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_822DF930:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822df940
	if (ctx.cr6.eq) goto loc_822DF940;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_822DF940:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
loc_822DF948:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF780) {
	__imp__sub_822DF780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF954) {
	__imp__sub_822DF954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF958) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822df780
	sub_822DF780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF958) {
	__imp__sub_822DF958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF964) {
	__imp__sub_822DF964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DF970;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,256
	ctx.r3.s64 = 256;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// std r28,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r28.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// std r28,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r28.u64);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// bctrl 
	ctx.lr = 0x822DF9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// beq cr6,0x822dfab0
	if (ctx.cr6.eq) goto loc_822DFAB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822de800
	ctx.lr = 0x822DF9EC;
	sub_822DE800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dfa80
	if (ctx.cr6.eq) goto loc_822DFA80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dfa34
	if (ctx.cr6.eq) goto loc_822DFA34;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822DFA0C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822dfa0c
	if (!ctx.cr6.eq) goto loc_822DFA0C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x822dfa38
	goto loc_822DFA38;
loc_822DFA34:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_822DFA38:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dfa64
	if (ctx.cr6.eq) goto loc_822DFA64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DFA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dfa80
	if (ctx.cr6.eq) goto loc_822DFA80;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DFA64:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DFA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dfabc
	if (!ctx.cr6.eq) goto loc_822DFABC;
loc_822DFA80:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dfa98
	if (ctx.cr6.eq) goto loc_822DFA98;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DFA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DFA98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822dfab0
	if (ctx.cr6.eq) goto loc_822DFAB0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DFAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DFAB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DFABC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822dfad4
	if (ctx.cr6.lt) goto loc_822DFAD4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_822DFAD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82635430
	ctx.lr = 0x822DFAE0;
	sub_82635430(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r28,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DFAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF968) {
	__imp__sub_822DF968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DFB04) {
	__imp__sub_822DFB04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,596
	ctx.r5.s64 = ctx.r11.s64 + 596;
	// b 0x822df968
	sub_822DF968(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DFB08) {
	__imp__sub_822DFB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,596
	ctx.r5.s64 = ctx.r11.s64 + 596;
	// b 0x822df968
	sub_822DF968(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DFB18) {
	__imp__sub_822DFB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DFB30;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// blt cr6,0x822dfbe4
	if (ctx.cr6.lt) goto loc_822DFBE4;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r29,r11,596
	ctx.r29.s64 = ctx.r11.s64 + 596;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DFB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dfbe4
	if (ctx.cr6.eq) goto loc_822DFBE4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x822de800
	ctx.lr = 0x822DFBCC;
	sub_822DE800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x822dfbe8
	if (!ctx.cr6.eq) goto loc_822DFBE8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DFBE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DFBE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DFBE8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DFB28) {
	__imp__sub_822DFB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFBF0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// blt cr6,0x822dfc84
	if (ctx.cr6.lt) goto loc_822DFC84;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dfc84
	if (ctx.cr6.eq) goto loc_822DFC84;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,596
	ctx.r8.s64 = ctx.r10.s64 + 596;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r7,596(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// bl 0x822de800
	ctx.lr = 0x822DFC74;
	sub_822DE800(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DFC84:
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

PPC_WEAK_FUNC(sub_822DFBF0) {
	__imp__sub_822DFBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFC98) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dfca8
	if (!ctx.cr6.eq) goto loc_822DFCA8;
	// blr 
	return;
loc_822DFCA8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822DFCAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822dfcac
	if (!ctx.cr6.eq) goto loc_822DFCAC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x822df780
	sub_822DF780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DFC98) {
	__imp__sub_822DFC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DFCD4) {
	__imp__sub_822DFCD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFCD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dfce4
	if (!ctx.cr6.eq) goto loc_822DFCE4;
	// blr 
	return;
loc_822DFCE4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822DFCE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822dfce8
	if (!ctx.cr6.eq) goto loc_822DFCE8;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x822df780
	sub_822DF780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DFCD8) {
	__imp__sub_822DFCD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DFD14) {
	__imp__sub_822DFD14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-3400
	ctx.r11.s64 = ctx.r11.s64 + -3400;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_822DFD2C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822dfd50
	if (!ctx.cr6.eq) goto loc_822DFD50;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822dfd2c
	if (!ctx.cr0.eq) goto loc_822DFD2C;
	// b 0x822dfd58
	goto loc_822DFD58;
loc_822DFD50:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822DFD58:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822DFD64:
	// db16cyc 
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_822DFD6C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822dfd90
	if (!ctx.cr6.eq) goto loc_822DFD90;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822dfd6c
	if (!ctx.cr0.eq) goto loc_822DFD6C;
	// b 0x822dfd98
	goto loc_822DFD98;
loc_822DFD90:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822DFD98:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dfd64
	if (!ctx.cr6.eq) goto loc_822DFD64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DFD18) {
	__imp__sub_822DFD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFDA8) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-3400(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3400, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DFDA8) {
	__imp__sub_822DFDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DFDBC) {
	__imp__sub_822DFDBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFDC0) {
	PPC_FUNC_PROLOGUE();
	// sync 
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DFDC0) {
	__imp__sub_822DFDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFDC8) {
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
	ctx.lr = 0x822DFDE4;
	sub_822ED818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dfe04
	if (ctx.cr6.eq) goto loc_822DFE04;
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
loc_822DFE04:
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r10,r11,-3400
	ctx.r10.s64 = ctx.r11.s64 + -3400;
	// li r3,3
	ctx.r3.s64 = 3;
	// addis r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 262144;
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// bl 0x822ed700
	ctx.lr = 0x822DFE20;
	sub_822ED700(ctx, base);
	// subfic r9,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r3.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_822DFDC8) {
	__imp__sub_822DFDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DFE3C) {
	__imp__sub_822DFE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DFE48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-3396
	ctx.r30.s64 = ctx.r11.s64 + -3396;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_822DFE60:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dfea0
	if (ctx.cr6.eq) goto loc_822DFEA0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x822d7f18
	ctx.lr = 0x822DFE74;
	sub_822D7F18(ctx, base);
loc_822DFE74:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x822dfe98
	if (ctx.cr6.eq) goto loc_822DFE98;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dfe74
	if (ctx.cr6.eq) goto loc_822DFE74;
loc_822DFE98:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dfee0
	if (ctx.cr6.eq) goto loc_822DFEE0;
loc_822DFEA0:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822dfe60
	if (ctx.cr6.lt) goto loc_822DFE60;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822DFEBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822dfef0
	if (ctx.cr6.eq) goto loc_822DFEF0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822dfebc
	if (ctx.cr6.lt) goto loc_822DFEBC;
	// b 0x822dfefc
	goto loc_822DFEFC;
loc_822DFEE0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DFEF0:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822dff10
	if (!ctx.cr6.lt) goto loc_822DFF10;
loc_822DFEFC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d8088
	ctx.lr = 0x822DFF04;
	sub_822D8088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_822DFF10:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d7e98
	ctx.lr = 0x822DFF18;
	sub_822D7E98(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DFE40) {
	__imp__sub_822DFE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822DFF30;
	__savegprlr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822dfe40
	ctx.lr = 0x822DFF60;
	sub_822DFE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0014
	if (ctx.cr6.eq) goto loc_822E0014;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DFF7C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822dff7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DFF7C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r5,r10,-3692
	ctx.r5.s64 = ctx.r10.s64 + -3692;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r9,-9508
	ctx.r4.s64 = ctx.r9.s64 + -9508;
	// addi r7,r11,-9524
	ctx.r7.s64 = ctx.r11.s64 + -9524;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d8978
	ctx.lr = 0x822DFFC4;
	sub_822D8978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e0020
	if (ctx.cr6.eq) goto loc_822E0020;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,-9540
	ctx.r3.s64 = ctx.r11.s64 + -9540;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822DFFE0;
	sub_822EBBC8(ctx, base);
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r28,r11,-3396
	ctx.r28.s64 = ctx.r11.s64 + -3396;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_822DFFEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822e0004
	if (!ctx.cr6.eq) goto loc_822E0004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d8088
	ctx.lr = 0x822E0000;
	sub_822D8088(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_822E0004:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822dffec
	if (ctx.cr6.lt) goto loc_822DFFEC;
loc_822E0014:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E0020:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DFF28) {
	__imp__sub_822DFF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0044) {
	__imp__sub_822E0044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822E0050;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-3396
	ctx.r30.s64 = ctx.r11.s64 + -3396;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822E0064:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0078
	if (ctx.cr6.eq) goto loc_822E0078;
	// bl 0x822d8088
	ctx.lr = 0x822E0074;
	sub_822D8088(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_822E0078:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e0064
	if (ctx.cr6.lt) goto loc_822E0064;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0048) {
	__imp__sub_822E0048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// beq cr6,0x822e00f8
	if (ctx.cr6.eq) goto loc_822E00F8;
	// subfic r7,r3,1
	ctx.xer.ca = ctx.r3.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r3.s64;
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_822E00B0:
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822e00f8
	if (!ctx.cr6.lt) goto loc_822E00F8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x822e00e0
	if (ctx.cr6.lt) goto loc_822E00E0;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// bgt cr6,0x822e00e0
	if (ctx.cr6.gt) goto loc_822E00E0;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_822E00E0:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e00b0
	if (!ctx.cr6.eq) goto loc_822E00B0;
loc_822E00F8:
	// stbx r5,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0090) {
	__imp__sub_822E0090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0100) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E0104:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e0104
	if (!ctx.cr6.eq) goto loc_822E0104;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x822e0184
	if (ctx.cr6.lt) goto loc_822E0184;
	// cmplwi cr6,r9,23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 23, ctx.xer);
	// bgt cr6,0x822e0184
	if (ctx.cr6.gt) goto loc_822E0184;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e017c
	if (ctx.cr6.eq) goto loc_822E017C;
loc_822E0138:
	// lbzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x822e0150
	if (ctx.cr6.lt) goto loc_822E0150;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x822e0170
	if (!ctx.cr6.gt) goto loc_822E0170;
loc_822E0150:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x822e0160
	if (ctx.cr6.lt) goto loc_822E0160;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// ble cr6,0x822e0170
	if (!ctx.cr6.gt) goto loc_822E0170;
loc_822E0160:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822e0184
	if (ctx.cr6.lt) goto loc_822E0184;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x822e0184
	if (ctx.cr6.gt) goto loc_822E0184;
loc_822E0170:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e0138
	if (ctx.cr6.lt) goto loc_822E0138;
loc_822E017C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822E0184:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0100) {
	__imp__sub_822E0100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E018C) {
	__imp__sub_822E018C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634430
	ctx.lr = 0x822E0198;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822e01cc
	if (ctx.cr6.eq) goto loc_822E01CC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822e01cc
	if (ctx.cr6.eq) goto loc_822E01CC;
	// stb r30,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r30.u8);
loc_822E01CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e01dc
	if (!ctx.cr6.eq) goto loc_822E01DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
loc_822E01DC:
	// bl 0x822dfcd8
	ctx.lr = 0x822E01E0;
	sub_822DFCD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0244
	if (ctx.cr6.eq) goto loc_822E0244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de190
	ctx.lr = 0x822E01F4;
	sub_822DE190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e022c
	if (ctx.cr6.eq) goto loc_822E022C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9296
	ctx.r4.s64 = ctx.r11.s64 + -9296;
	// bl 0x822dcc40
	ctx.lr = 0x822E020C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e022c
	if (!ctx.cr6.eq) goto loc_822E022C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r11,-9304
	ctx.r4.s64 = ctx.r11.s64 + -9304;
	// bl 0x822dcc40
	ctx.lr = 0x822E0228;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822E022C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de168
	ctx.lr = 0x822E0234;
	sub_822DE168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e0250
	if (!ctx.cr6.eq) goto loc_822E0250;
loc_822E023C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822E0244;
	sub_822DBAD0(ctx, base);
loc_822E0244:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822E0250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dca68
	ctx.lr = 0x822E0258;
	sub_822DCA68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822e0264
	if (ctx.cr6.gt) goto loc_822E0264;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822E0264:
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x826365a8
	ctx.lr = 0x822E026C;
	sub_826365A8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e023c
	if (ctx.cr6.eq) goto loc_822E023C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e03e4
	if (ctx.cr6.eq) goto loc_822E03E4;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e03e4
	if (ctx.cr6.eq) goto loc_822E03E4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-9312
	ctx.r26.s64 = ctx.r11.s64 + -9312;
	// addi r25,r10,-9320
	ctx.r25.s64 = ctx.r10.s64 + -9320;
	// addi r24,r9,-9324
	ctx.r24.s64 = ctx.r9.s64 + -9324;
loc_822E02AC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822E02B8;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822E02C0;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e02d4
	if (ctx.cr6.eq) goto loc_822E02D4;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822e0348
	if (!ctx.cr6.eq) goto loc_822E0348;
loc_822E02D4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822E02E0;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822E02E8;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e03d8
	if (ctx.cr6.eq) goto loc_822E03D8;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822e03d8
	if (ctx.cr6.eq) goto loc_822E03D8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822e03d8
	if (ctx.cr6.eq) goto loc_822E03D8;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x822e03d8
	if (ctx.cr6.eq) goto loc_822E03D8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822E0318;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822E0320;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e03d8
	if (ctx.cr6.eq) goto loc_822E03D8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e03d8
	if (ctx.cr6.eq) goto loc_822E03D8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822c9388
	ctx.lr = 0x822E0344;
	sub_822C9388(ctx, base);
	// b 0x822e03d8
	goto loc_822E03D8;
loc_822E0348:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822e0100
	ctx.lr = 0x822E0350;
	sub_822E0100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e03d8
	if (ctx.cr6.eq) goto loc_822E03D8;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e0090
	ctx.lr = 0x822E0364;
	sub_822E0090(ctx, base);
	// addi r7,r29,-1
	ctx.r7.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x822e03c0
	if (ctx.cr6.lt) goto loc_822E03C0;
	// addi r6,r29,-64
	ctx.r6.s64 = ctx.r29.s64 + -64;
	// addi r8,r27,-24
	ctx.r8.s64 = ctx.r27.s64 + -24;
loc_822E0378:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822e03c0
	if (ctx.cr6.lt) goto loc_822E03C0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822E0388:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822e03ac
	if (ctx.cr6.eq) goto loc_822E03AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e0388
	if (ctx.cr6.eq) goto loc_822E0388;
loc_822E03AC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e03d8
	if (ctx.cr6.eq) goto loc_822E03D8;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,-24
	ctx.r8.s64 = ctx.r8.s64 + -24;
	// bge 0x822e0378
	if (!ctx.cr0.lt) goto loc_822E0378;
loc_822E03C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// bl 0x82635430
	ctx.lr = 0x822E03D8;
	sub_82635430(ctx, base);
loc_822E03D8:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822e02ac
	if (!ctx.cr6.eq) goto loc_822E02AC;
loc_822E03E4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822E03EC;
	sub_822DBAD0(ctx, base);
	// stw r23,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r23.u32);
	// stw r29,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0190) {
	__imp__sub_822E0190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822E0408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-9272
	ctx.r4.s64 = ctx.r11.s64 + -9272;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822E042C;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e043c
	if (!ctx.cr6.eq) goto loc_822E043C;
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// b 0x822e045c
	goto loc_822E045C;
loc_822E043C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-9280
	ctx.r4.s64 = ctx.r11.s64 + -9280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822E0450;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e045c
	if (!ctx.cr6.eq) goto loc_822E045C;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
loc_822E045C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-9284
	ctx.r4.s64 = ctx.r11.s64 + -9284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822E0470;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e0544
	if (!ctx.cr6.eq) goto loc_822E0544;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82636b60
	ctx.lr = 0x822E0490;
	sub_82636B60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e0544
	if (!ctx.cr6.eq) goto loc_822E0544;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x822e0544
	if (!ctx.cr6.eq) goto loc_822E0544;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d00
	ctx.lr = 0x822E04B4;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e04c4
	if (ctx.cr6.eq) goto loc_822E04C4;
	// subf r31,r30,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r30.s64;
	// b 0x822e04e4
	goto loc_822E04E4;
loc_822E04C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E04C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e04c8
	if (!ctx.cr6.eq) goto loc_822E04C8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_822E04E4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x822e0544
	if (ctx.cr6.gt) goto loc_822E0544;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e0520
	if (ctx.cr6.eq) goto loc_822E0520;
loc_822E04FC:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// ble cr6,0x822e0544
	if (!ctx.cr6.gt) goto loc_822E0544;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x822e0544
	if (ctx.cr6.eq) goto loc_822E0544;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x822e04fc
	if (ctx.cr6.lt) goto loc_822E04FC;
loc_822E0520:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822E0530;
	sub_82635430(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r11,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822E0544:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0400) {
	__imp__sub_822E0400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822E0558;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// stw r20,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r20.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r20,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r20.u32);
	// bne cr6,0x822e0588
	if (!ctx.cr6.eq) goto loc_822E0588;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
loc_822E0588:
	// bl 0x822dfcd8
	ctx.lr = 0x822E058C;
	sub_822DFCD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e05d8
	if (ctx.cr6.eq) goto loc_822E05D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,8348
	ctx.r4.s64 = ctx.r11.s64 + 8348;
	// bl 0x822dcc40
	ctx.lr = 0x822E05A8;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dca68
	ctx.lr = 0x822E05B0;
	sub_822DCA68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822e05bc
	if (ctx.cr6.gt) goto loc_822E05BC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822E05BC:
	// li r4,344
	ctx.r4.s64 = 344;
	// bl 0x826365a8
	ctx.lr = 0x822E05C4;
	sub_826365A8(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e05e4
	if (!ctx.cr6.eq) goto loc_822E05E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822E05D8;
	sub_822DBAD0(ctx, base);
loc_822E05D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E05E4:
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e0880
	if (ctx.cr6.eq) goto loc_822E0880;
	// lwz r21,8(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822e0880
	if (ctx.cr6.eq) goto loc_822E0880;
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// addi r27,r8,608
	ctx.r27.s64 = ctx.r8.s64 + 608;
	// addi r19,r7,-9240
	ctx.r19.s64 = ctx.r7.s64 + -9240;
	// addi r18,r6,-9256
	ctx.r18.s64 = ctx.r6.s64 + -9256;
	// addi r17,r9,-9264
	ctx.r17.s64 = ctx.r9.s64 + -9264;
	// addi r22,r10,8312
	ctx.r22.s64 = ctx.r10.s64 + 8312;
	// addi r16,r11,8300
	ctx.r16.s64 = ctx.r11.s64 + 8300;
loc_822E0630:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822E063C;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822E0644;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e0874
	if (ctx.cr6.eq) goto loc_822E0874;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e0874
	if (ctx.cr6.eq) goto loc_822E0874;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0100
	ctx.lr = 0x822E0660;
	sub_822E0100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e0874
	if (ctx.cr6.eq) goto loc_822E0874;
	// li r5,344
	ctx.r5.s64 = 344;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E0678;
	sub_826344D0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822e0090
	ctx.lr = 0x822E0688;
	sub_822E0090(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r24,99
	ctx.r24.s64 = 99;
	// li r23,99
	ctx.r23.s64 = 99;
	// bl 0x822dcc40
	ctx.lr = 0x822E069C;
	sub_822DCC40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dcaa0
	ctx.lr = 0x822E06A4;
	sub_822DCAA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0850
	if (ctx.cr6.eq) goto loc_822E0850;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822E06B4;
	sub_822DCC40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0850
	if (ctx.cr6.eq) goto loc_822E0850;
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822e0850
	if (ctx.cr6.eq) goto loc_822E0850;
loc_822E06C8:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822E06D4;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822E06DC;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e06f4
	if (ctx.cr6.eq) goto loc_822E06F4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x822e06f8
	if (!ctx.cr6.eq) goto loc_822E06F8;
loc_822E06F4:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_822E06F8:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822dcc40
	ctx.lr = 0x822E0704;
	sub_822DCC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822de140
	ctx.lr = 0x822E070C;
	sub_822DE140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e0724
	if (ctx.cr6.eq) goto loc_822E0724;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x822e0728
	if (!ctx.cr6.eq) goto loc_822E0728;
loc_822E0724:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_822E0728:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822e083c
	if (ctx.cr6.eq) goto loc_822E083C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e083c
	if (ctx.cr6.eq) goto loc_822E083C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
loc_822E0740:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822E0748:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822e076c
	if (ctx.cr6.eq) goto loc_822E076C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e0748
	if (ctx.cr6.eq) goto loc_822E0748;
loc_822E076C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e089c
	if (ctx.cr6.eq) goto loc_822E089C;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e0740
	if (ctx.cr6.lt) goto loc_822E0740;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_822E078C:
	// addi r8,r27,16
	ctx.r8.s64 = ctx.r27.s64 + 16;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_822E0794:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822E079C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x822e07c0
	if (ctx.cr6.eq) goto loc_822E07C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e079c
	if (ctx.cr6.eq) goto loc_822E079C;
loc_822E07C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e07e4
	if (ctx.cr6.eq) goto loc_822E07E4;
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e0794
	if (ctx.cr6.lt) goto loc_822E0794;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822E07E4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822e0810
	if (ctx.cr6.lt) goto loc_822E0810;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x822e0810
	if (!ctx.cr6.lt) goto loc_822E0810;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r25,24
	ctx.r3.s64 = ctx.r25.s64 + 24;
	// bl 0x822e0400
	ctx.lr = 0x822E0804;
	sub_822E0400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e0810
	if (!ctx.cr6.eq) goto loc_822E0810;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_822E0810:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822e083c
	if (ctx.cr6.lt) goto loc_822E083C;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x822e083c
	if (!ctx.cr6.lt) goto loc_822E083C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r25,184
	ctx.r3.s64 = ctx.r25.s64 + 184;
	// bl 0x822e0400
	ctx.lr = 0x822E0830;
	sub_822E0400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e083c
	if (!ctx.cr6.eq) goto loc_822E083C;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
loc_822E083C:
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822e06c8
	if (!ctx.cr6.eq) goto loc_822E06C8;
	// cmpwi cr6,r24,99
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 99, ctx.xer);
	// bne cr6,0x822e0854
	if (!ctx.cr6.eq) goto loc_822E0854;
loc_822E0850:
	// stb r20,24(r25)
	PPC_STORE_U8(ctx.r25.u32 + 24, ctx.r20.u8);
loc_822E0854:
	// cmpwi cr6,r23,99
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 99, ctx.xer);
	// bne cr6,0x822e0860
	if (!ctx.cr6.eq) goto loc_822E0860;
	// stb r20,184(r25)
	PPC_STORE_U8(ctx.r25.u32 + 184, ctx.r20.u8);
loc_822E0860:
	// lwz r28,276(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lwz r29,268(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r25,r25,344
	ctx.r25.s64 = ctx.r25.s64 + 344;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822E0874:
	// lwz r21,0(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x822e0630
	if (!ctx.cr6.eq) goto loc_822E0630;
loc_822E0880:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822E0888;
	sub_822DBAD0(ctx, base);
	// stw r14,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r14.u32);
	// stw r15,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r15.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E089C:
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// b 0x822e078c
	goto loc_822E078C;
}

PPC_WEAK_FUNC(sub_822E0550) {
	__imp__sub_822E0550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E08A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E08A4) {
	__imp__sub_822E08A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E08A8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bne cr6,0x822e08cc
	if (!ctx.cr6.eq) goto loc_822E08CC;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,720
	ctx.r8.s64 = 720;
	// addi r5,r10,-9196
	ctx.r5.s64 = ctx.r10.s64 + -9196;
	// li r7,1280
	ctx.r7.s64 = 1280;
	// b 0x822eca80
	sub_822ECA80(ctx, base);
	return;
loc_822E08CC:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,264
	ctx.r8.s64 = 264;
	// addi r5,r10,-9236
	ctx.r5.s64 = ctx.r10.s64 + -9236;
	// li r7,176
	ctx.r7.s64 = 176;
	// b 0x822eca80
	sub_822ECA80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E08A8) {
	__imp__sub_822E08A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E08E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x822e08f8
	if (!ctx.cr6.eq) goto loc_822E08F8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-9136
	ctx.r6.s64 = ctx.r11.s64 + -9136;
	// b 0x822e0900
	goto loc_822E0900;
loc_822E08F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-9144
	ctx.r6.s64 = ctx.r11.s64 + -9144;
loc_822E0900:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lis r7,-32484
	ctx.r7.s64 = -2128871424;
	// ori r7,r7,40389
	ctx.r7.u64 = ctx.r7.u64 | 40389;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0958
	if (ctx.cr6.eq) goto loc_822E0958;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r5,r10,403
	ctx.r5.u64 = ctx.r10.u64 | 403;
loc_822E091C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,97
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 97, ctx.xer);
	// blt cr6,0x822e093c
	if (ctx.cr6.lt) goto loc_822E093C;
	// cmplwi cr6,r9,122
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 122, ctx.xer);
	// bgt cr6,0x822e093c
	if (ctx.cr6.gt) goto loc_822E093C;
	// addi r11,r9,224
	ctx.r11.s64 = ctx.r9.s64 + 224;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_822E093C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// xor r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e091c
	if (!ctx.cr6.eq) goto loc_822E091C;
loc_822E0958:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,-9156
	ctx.r5.s64 = ctx.r11.s64 + -9156;
	// b 0x822eca80
	sub_822ECA80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E08E0) {
	__imp__sub_822E08E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0964) {
	__imp__sub_822E0964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e09d0
	if (ctx.cr6.lt) goto loc_822E09D0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822e09d0
	if (ctx.cr6.lt) goto loc_822E09D0;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x822e09a8
	if (ctx.cr6.eq) goto loc_822E09A8;
	// divw r10,r11,r4
	ctx.r10.s32 = ctx.r11.s32 / ctx.r4.s32;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r3.s64;
	// twllei r4,0
	// adde r10,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e09d0
	if (ctx.cr6.eq) goto loc_822E09D0;
loc_822E09A8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x822e09d0
	if (ctx.cr6.lt) goto loc_822E09D0;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// adde. r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_822E09D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0968) {
	__imp__sub_822E0968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E09D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e0a74
	if (ctx.cr6.lt) goto loc_822E0A74;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822e0a74
	if (ctx.cr6.lt) goto loc_822E0A74;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x822e0a18
	if (ctx.cr6.eq) goto loc_822E0A18;
	// divw r10,r11,r4
	ctx.r10.s32 = ctx.r11.s32 / ctx.r4.s32;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r3.s64;
	// twllei r4,0
	// adde r10,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e0a74
	if (ctx.cr6.eq) goto loc_822E0A74;
loc_822E0A18:
	// mullw. r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822e0a74
	if (ctx.cr0.lt) goto loc_822E0A74;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x822e0a74
	if (ctx.cr6.lt) goto loc_822E0A74;
	// beq cr6,0x822e0a4c
	if (ctx.cr6.eq) goto loc_822E0A4C;
	// divw r9,r11,r5
	ctx.r9.s32 = ctx.r11.s32 / ctx.r5.s32;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subfc r4,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// twllei r5,0
	// adde r9,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e0a74
	if (ctx.cr6.eq) goto loc_822E0A74;
loc_822E0A4C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x822e0a74
	if (ctx.cr6.lt) goto loc_822E0A74;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// adde. r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_822E0A74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E09D8) {
	__imp__sub_822E09D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0A7C) {
	__imp__sub_822E0A7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822e0aa0
	if (ctx.cr6.eq) goto loc_822E0AA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822E0AA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822e0acc
	if (!ctx.cr6.lt) goto loc_822E0ACC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822e0acc
	if (!ctx.cr6.lt) goto loc_822E0ACC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subfc r8,r9,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// adde r3,r7,r10
	temp.u8 = (ctx.r7.u32 + ctx.r10.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_822E0ACC:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// subfc r6,r3,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r3.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r3.s64;
	// adde r3,r10,r7
	temp.u8 = (ctx.r10.u32 + ctx.r7.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0A80) {
	__imp__sub_822E0A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0AEC) {
	__imp__sub_822E0AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822e0b70
	if (ctx.cr6.eq) goto loc_822E0B70;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x822e0b70
	if (ctx.cr6.eq) goto loc_822E0B70;
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// twllei r4,0
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822e0b38
	if (!ctx.cr6.eq) goto loc_822E0B38;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// divw r9,r11,r4
	ctx.r9.s32 = ctx.r11.s32 / ctx.r4.s32;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// subfc r7,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r3.s64;
	// adde r3,r10,r8
	temp.u8 = (ctx.r10.u32 + ctx.r8.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_822E0B38:
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// divw r9,r11,r4
	ctx.r9.s32 = ctx.r11.s32 / ctx.r4.s32;
	// bge cr6,0x822e0b5c
	if (!ctx.cr6.lt) goto loc_822E0B5C;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r7,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r3.s64;
	// adde r3,r10,r8
	temp.u8 = (ctx.r10.u32 + ctx.r8.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_822E0B5C:
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// subfc r8,r9,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// adde r3,r7,r10
	temp.u8 = (ctx.r7.u32 + ctx.r10.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_822E0B70:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0AF0) {
	__imp__sub_822E0AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822E0B80;
	__savegprlr_23(ctx, base);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi. r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r27,r4,r6
	ctx.r27.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// ble 0x822e0c1c
	if (!ctx.cr0.gt) goto loc_822E0C1C;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// neg r23,r27
	ctx.r23.s64 = -ctx.r27.s64;
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_822E0BA8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822e0c0c
	if (ctx.cr6.eq) goto loc_822E0C0C;
loc_822E0BBC:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// blt cr6,0x822e0bcc
	if (ctx.cr6.lt) goto loc_822E0BCC;
	// li r31,2048
	ctx.r31.s64 = 2048;
loc_822E0BCC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82635430
	ctx.lr = 0x822E0BDC;
	sub_82635430(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822E0BEC;
	sub_82635430(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822E0BFC;
	sub_82635430(ctx, base);
	// subf. r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x822e0bbc
	if (!ctx.cr0.eq) goto loc_822E0BBC;
loc_822E0C0C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r26,r26,r27
	ctx.r26.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r25,r23,r25
	ctx.r25.u64 = ctx.r23.u64 + ctx.r25.u64;
	// bne 0x822e0ba8
	if (!ctx.cr0.eq) goto loc_822E0BA8;
loc_822E0C1C:
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0B78) {
	__imp__sub_822E0B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0C24) {
	__imp__sub_822E0C24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0C28) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// lwz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E0C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// bne cr6,0x822e0c98
	if (!ctx.cr6.eq) goto loc_822E0C98;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,41
	ctx.r10.s64 = ctx.r31.s64 + 41;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x822e0ca4
	goto loc_822E0CA4;
loc_822E0C98:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
loc_822E0CA4:
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

PPC_WEAK_FUNC(sub_822E0C28) {
	__imp__sub_822E0C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0CBC) {
	__imp__sub_822E0CBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0CC0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// bge cr6,0x822e0cd8
	if (!ctx.cr6.lt) goto loc_822E0CD8;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// blr 
	return;
loc_822E0CD8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0d10
	if (ctx.cr6.eq) goto loc_822E0D10;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822e0d10
	if (!ctx.cr6.lt) goto loc_822E0D10;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822E0D10:
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0CC0) {
	__imp__sub_822E0CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0D20) {
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
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e0d58
	if (!ctx.cr6.lt) goto loc_822E0D58;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r9.u32);
	// b 0x822e0d84
	goto loc_822E0D84;
loc_822E0D58:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e0d80
	if (ctx.cr6.eq) goto loc_822E0D80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E0D6C;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// b 0x822e0d84
	goto loc_822E0D84;
loc_822E0D80:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822E0D84:
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822e0db0
	if (ctx.cr6.lt) goto loc_822E0DB0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e0dc0
	if (ctx.cr6.eq) goto loc_822E0DC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E0DAC;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
loc_822E0DB0:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e0dc4
	goto loc_822E0DC4;
loc_822E0DC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E0DC4:
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_822E0D20) {
	__imp__sub_822E0D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822E0DF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822e0e18
	if (!ctx.cr6.eq) goto loc_822E0E18;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E0E18:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822e0ea8
	if (ctx.cr6.lt) goto loc_822E0EA8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x822e0ea8
	if (ctx.cr6.lt) goto loc_822E0EA8;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x822e0e58
	if (ctx.cr6.eq) goto loc_822E0E58;
	// divw r10,r11,r29
	ctx.r10.s32 = ctx.r11.s32 / ctx.r29.s32;
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r31,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r31.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// twllei r29,0
	// adde r10,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e0ea8
	if (ctx.cr6.eq) goto loc_822E0EA8;
loc_822E0E58:
	// mullw. r28,r31,r29
	ctx.r28.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x822e0ea8
	if (ctx.cr0.lt) goto loc_822E0EA8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x822e0ea8
	if (ctx.cr6.lt) goto loc_822E0EA8;
	// beq cr6,0x822e0e8c
	if (ctx.cr6.eq) goto loc_822E0E8C;
	// divw r10,r11,r26
	ctx.r10.s32 = ctx.r11.s32 / ctx.r26.s32;
	// rlwinm r9,r28,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r28,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r28.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r28.s64;
	// twllei r26,0
	// adde r10,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e0ea8
	if (ctx.cr6.eq) goto loc_822E0EA8;
loc_822E0E8C:
	// mullw r3,r28,r26
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r26.s32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822e0ea8
	if (ctx.cr6.gt) goto loc_822E0EA8;
	// bl 0x82634da0
	ctx.lr = 0x822E0E9C;
	sub_82634DA0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e0ecc
	if (!ctx.cr6.eq) goto loc_822E0ECC;
loc_822E0EA8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E0EB0;
	sub_82634D40(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E0ECC:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822e1258
	if (!ctx.cr6.gt) goto loc_822E1258;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r3,r30,r29
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r31,r11,-10
	ctx.r31.s64 = ctx.r11.s64 + -10;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r5,255
	ctx.r5.s64 = 255;
loc_822E0EF4:
	// cmplwi cr6,r31,25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 25, ctx.xer);
	// bgt cr6,0x822e126c
	if (ctx.cr6.gt) goto loc_822E126C;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3860
	ctx.r12.s64 = ctx.r12.s64 + 3860;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,3964(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 3964);
	// lwz r17,4008(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4008);
	// lwz r17,4056(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4056);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4108(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4108);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4148(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4148);
	// lwz r17,4196(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4196);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4312(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4312);
	// lwz r17,4388(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4388);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4252(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4252);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4716(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4716);
	// lwz r17,4468(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4468);
	// lwz r17,4544(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4544);
	// lwz r17,4624(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4624);
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E0F94:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stbu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e0f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E0F94;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E0FC0:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stbu r10,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e0fc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E0FC0;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E0FF0:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e0ff0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E0FF0;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E1024:
	// lbzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822e1024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1024;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E104C:
	// lbzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stbu r10,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e104c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E104C;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E107C:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lbzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e107c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E107C;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E10B4:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbzu r9,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// stbu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e10b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E10B4;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E10F0:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbzu r24,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r24.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mulli r9,r8,77
	ctx.r9.s64 = ctx.r8.s64 * 77;
	// mulli r8,r24,150
	ctx.r8.s64 = ctx.r24.s64 * 150;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r9,r30,29
	ctx.r9.s64 = ctx.r30.s64 * 29;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822e10f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E10F0;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E113C:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbzu r24,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r24.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mulli r9,r8,77
	ctx.r9.s64 = ctx.r8.s64 * 77;
	// mulli r8,r24,150
	ctx.r8.s64 = ctx.r24.s64 * 150;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r9,r30,29
	ctx.r9.s64 = ctx.r30.s64 * 29;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stbu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822e113c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E113C;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r11,r7,-3
	ctx.r11.s64 = ctx.r7.s64 + -3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E118C:
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,5(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbzu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r24.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mulli r9,r8,77
	ctx.r9.s64 = ctx.r8.s64 * 77;
	// mulli r8,r24,150
	ctx.r8.s64 = ctx.r24.s64 * 150;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r9,r30,29
	ctx.r9.s64 = ctx.r30.s64 * 29;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822e118c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E118C;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E11D8:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mulli r9,r9,77
	ctx.r9.s64 = ctx.r9.s64 * 77;
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mulli r8,r8,150
	ctx.r8.s64 = ctx.r8.s64 * 150;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r9,r30,29
	ctx.r9.s64 = ctx.r30.s64 * 29;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822e11d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E11D8;
	// b 0x822e1244
	goto loc_822E1244;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e1244
	if (ctx.cr0.lt) goto loc_822E1244;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E1228:
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,3(r10)
	ea = 3 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822e1228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1228;
loc_822E1244:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822e0ef4
	if (ctx.cr6.lt) goto loc_822E0EF4;
loc_822E1258:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E1260;
	sub_82634D40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E126C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E1274;
	sub_82634D40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E127C;
	sub_82634D40(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7936
	ctx.r11.s64 = ctx.r11.s64 + -7936;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0DE8) {
	__imp__sub_822E0DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822E12A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822e12c8
	if (!ctx.cr6.eq) goto loc_822E12C8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E12C8:
	// mullw r29,r30,r28
	ctx.r29.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// mullw r11,r29,r26
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r26.s32);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82634da0
	ctx.lr = 0x822E12D8;
	sub_82634DA0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e1308
	if (!ctx.cr6.eq) goto loc_822E1308;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E12EC;
	sub_82634D40(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E1308:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822e16a0
	if (!ctx.cr6.gt) goto loc_822E16A0;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r10,r31,r28
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,-10
	ctx.r30.s64 = ctx.r11.s64 + -10;
	// lis r11,0
	ctx.r11.s64 = 0;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// ori r5,r11,65535
	ctx.r5.u64 = ctx.r11.u64 | 65535;
loc_822E133C:
	// cmplwi cr6,r30,25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 25, ctx.xer);
	// bgt cr6,0x822e16b4
	if (ctx.cr6.gt) goto loc_822E16B4;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4956
	ctx.r12.s64 = ctx.r12.s64 + 4956;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,5060(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5060);
	// lwz r17,5104(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5104);
	// lwz r17,5152(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5152);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5204);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5244(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5244);
	// lwz r17,5292(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5292);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5408(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5408);
	// lwz r17,5484(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5484);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5348(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5348);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5812(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5812);
	// lwz r17,5564(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5564);
	// lwz r17,5640(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5640);
	// lwz r17,5720(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5720);
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// addi r10,r7,-2
	ctx.r10.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E13DC:
	// lhzu r9,2(r10)
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sthu r5,4(r11)
	// bdnz 0x822e13dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E13DC;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-6
	ctx.r11.s64 = ctx.r6.s64 + -6;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E1408:
	// lhzu r10,2(r9)
	// sth r10,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// sthu r10,6(r11)
	// bdnz 0x822e1408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1408;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E1438:
	// lhzu r10,2(r9)
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// sthu r5,8(r11)
	// bdnz 0x822e1438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1438;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E146C:
	// lhzu r9,4(r11)
	// sthu r9,2(r10)
	// bdnz 0x822e146c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E146C;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-6
	ctx.r11.s64 = ctx.r6.s64 + -6;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E1494:
	// lhzu r10,4(r9)
	// sth r10,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// sthu r10,6(r11)
	// bdnz 0x822e1494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1494;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// addi r10,r7,-2
	ctx.r10.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E14C4:
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lhzu r9,4(r10)
	// sthu r9,8(r11)
	// bdnz 0x822e14c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E14C4;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// addi r10,r7,-2
	ctx.r10.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E14FC:
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lhzu r9,6(r10)
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// sthu r5,8(r11)
	// bdnz 0x822e14fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E14FC;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E1538:
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhzu r24,6(r11)
	// mulli r9,r8,77
	ctx.r9.s64 = ctx.r8.s64 * 77;
	// mulli r8,r24,150
	ctx.r8.s64 = ctx.r24.s64 * 150;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r9,r29,29
	ctx.r9.s64 = ctx.r29.s64 * 29;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sthu r9,2(r10)
	// bdnz 0x822e1538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1538;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E1584:
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhzu r24,6(r11)
	// mulli r9,r8,77
	ctx.r9.s64 = ctx.r8.s64 * 77;
	// mulli r8,r24,150
	ctx.r8.s64 = ctx.r24.s64 * 150;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r9,r29,29
	ctx.r9.s64 = ctx.r29.s64 * 29;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sthu r5,4(r10)
	// bdnz 0x822e1584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1584;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// addi r11,r7,-6
	ctx.r11.s64 = ctx.r7.s64 + -6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E15D4:
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r29,10(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lhzu r24,8(r11)
	// mulli r9,r8,77
	ctx.r9.s64 = ctx.r8.s64 * 77;
	// mulli r8,r24,150
	ctx.r8.s64 = ctx.r24.s64 * 150;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r9,r29,29
	ctx.r9.s64 = ctx.r29.s64 * 29;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sthu r9,2(r10)
	// bdnz 0x822e15d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E15D4;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E1620:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mulli r9,r9,77
	ctx.r9.s64 = ctx.r9.s64 * 77;
	// lhz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mulli r8,r8,150
	ctx.r8.s64 = ctx.r8.s64 * 150;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r9,r29,29
	ctx.r9.s64 = ctx.r29.s64 * 29;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// lhzu r9,8(r11)
	// sthu r9,4(r10)
	// bdnz 0x822e1620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1620;
	// b 0x822e168c
	goto loc_822E168C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e168c
	if (ctx.cr0.lt) goto loc_822E168C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E1670:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// sth r8,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// lhzu r9,8(r11)
	// sthu r9,6(r10)
	// bdnz 0x822e1670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1670;
loc_822E168C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822e133c
	if (ctx.cr6.lt) goto loc_822E133C;
loc_822E16A0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E16A8;
	sub_82634D40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E16B4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E16BC;
	sub_82634D40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E16C4;
	sub_82634D40(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7936
	ctx.r11.s64 = ctx.r11.s64 + -7936;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1298) {
	__imp__sub_822E1298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E16E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822E16E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_822E16F8:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822e1734
	if (!ctx.cr6.gt) goto loc_822E1734;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// addi r10,r29,1280
	ctx.r10.s64 = ctx.r29.s64 + 1280;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
loc_822E1714:
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// bge cr6,0x822e1860
	if (!ctx.cr6.lt) goto loc_822E1860;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822e1714
	if (ctx.cr6.lt) goto loc_822E1714;
loc_822E1734:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x822e16f8
	if (ctx.cr6.lt) goto loc_822E16F8;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r30,r29,1280
	ctx.r30.s64 = ctx.r29.s64 + 1280;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,1280(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1280, ctx.r9.u8);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r7,r29,1540
	ctx.r7.s64 = ctx.r29.s64 + 1540;
loc_822E176C:
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r8,76(r7)
	PPC_STORE_U32(ctx.r7.u32 + 76, ctx.r8.u32);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822e17bc
	if (!ctx.cr6.eq) goto loc_822E17BC;
	// addi r9,r31,255
	ctx.r9.s64 = ctx.r31.s64 + 255;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_822E178C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// sthu r6,2(r8)
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r5,r30,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e178c
	if (ctx.cr6.eq) goto loc_822E178C;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r6,r28,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x822e187c
	if (!ctx.cr6.lt) goto loc_822E187C;
loc_822E17BC:
	// subfic r8,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r6,r11,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x822e176c
	if (!ctx.cr6.gt) goto loc_822E176C;
	// addi r11,r10,385
	ctx.r11.s64 = ctx.r10.s64 + 385;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x826344d0
	ctx.lr = 0x822E17F8;
	sub_826344D0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822e1854
	if (!ctx.cr6.gt) goto loc_822E1854;
	// addi r6,r29,512
	ctx.r6.s64 = ctx.r29.s64 + 512;
loc_822E1808:
	// lbzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x822e1844
	if (ctx.cr6.gt) goto loc_822E1844;
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// subfic r11,r11,9
	ctx.xer.ca = ctx.r11.u32 <= 9;
	ctx.r11.s64 = 9 - ctx.r11.s64;
	// slw. r10,r28,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x822e1844
	if (!ctx.cr0.gt) goto loc_822E1844;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_822E1838:
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822e1838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1838;
loc_822E1844:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x822e1808
	if (ctx.cr6.lt) goto loc_822E1808;
loc_822E1854:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822E1860:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7904
	ctx.r11.s64 = ctx.r11.s64 + -7904;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822E187C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7924
	ctx.r11.s64 = ctx.r11.s64 + -7924;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E16E0) {
	__imp__sub_822E16E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822E18A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822E18AC:
	// lwz r11,18376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e18c0
	if (ctx.cr6.eq) goto loc_822E18C0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x822e1a44
	goto loc_822E1A44;
loc_822E18C0:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e18e4
	if (!ctx.cr6.lt) goto loc_822E18E4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e1910
	goto loc_822E1910;
loc_822E18E4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e190c
	if (ctx.cr6.eq) goto loc_822E190C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E18F8;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e1910
	goto loc_822E1910;
loc_822E190C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822E1910:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,255
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 255, ctx.xer);
	// bne cr6,0x822e1a44
	if (!ctx.cr6.eq) goto loc_822E1A44;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e1940
	if (!ctx.cr6.lt) goto loc_822E1940;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e196c
	goto loc_822E196C;
loc_822E1940:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e1968
	if (ctx.cr6.eq) goto loc_822E1968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E1954;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e196c
	goto loc_822E196C;
loc_822E1968:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822E196C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x822e1a3c
	if (!ctx.cr6.eq) goto loc_822E1A3C;
loc_822E1978:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e199c
	if (!ctx.cr6.lt) goto loc_822E199C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e1a30
	goto loc_822E1A30;
loc_822E199C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e1a2c
	if (ctx.cr6.eq) goto loc_822E1A2C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E19C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// bne cr6,0x822e1a0c
	if (!ctx.cr6.eq) goto loc_822E1A0C;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e1a30
	goto loc_822E1A30;
loc_822E1A0C:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e1a30
	goto loc_822E1A30;
loc_822E1A2C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822E1A30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x822e1978
	if (ctx.cr6.eq) goto loc_822E1978;
loc_822E1A3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e1a74
	if (!ctx.cr6.eq) goto loc_822E1A74;
loc_822E1A44:
	// lwz r11,18368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18368);
	// lwz r10,18364(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18364);
	// subfic r9,r11,24
	ctx.xer.ca = ctx.r11.u32 <= 24;
	ctx.r9.s64 = 24 - ctx.r11.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// slw r8,r28,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r11,18368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 18368, ctx.r11.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// stw r7,18364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 18364, ctx.r7.u32);
	// ble cr6,0x822e18ac
	if (!ctx.cr6.gt) goto loc_822E18AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E1A74:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,18372(r29)
	PPC_STORE_U8(ctx.r29.u32 + 18372, ctx.r11.u8);
	// stw r10,18376(r29)
	PPC_STORE_U32(ctx.r29.u32 + 18376, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1898) {
	__imp__sub_822E1898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822E1A90;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,18368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e1ac0
	if (!ctx.cr6.lt) goto loc_822E1AC0;
	// bl 0x822e1898
	ctx.lr = 0x822E1AC0;
	sub_822E1898(ctx, base);
loc_822E1AC0:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e1ad4
	if (!ctx.cr6.lt) goto loc_822E1AD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E1AD4;
	sub_822E1898(ctx, base);
loc_822E1AD4:
	// lwz r9,18364(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// rlwinm r10,r9,9,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1FF;
	// addi r27,r11,-8984
	ctx.r27.s64 = ctx.r11.s64 + -8984;
	// lbzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x822e1b1c
	if (!ctx.cr6.lt) goto loc_822E1B1C;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,18368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// lbz r11,1280(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1280);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x822e1b58
	if (ctx.cr6.gt) goto loc_822E1B58;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r9.u32);
	// stw r8,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r8.u32);
	// lbz r30,1024(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1024);
	// b 0x822e1bcc
	goto loc_822E1BCC;
loc_822E1B1C:
	// lwz r7,1580(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addi r10,r30,1580
	ctx.r10.s64 = ctx.r30.s64 + 1580;
	// li r11,10
	ctx.r11.s64 = 10;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822e1b74
	if (ctx.cr6.lt) goto loc_822E1B74;
loc_822E1B34:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822e1b34
	if (!ctx.cr6.lt) goto loc_822E1B34;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x822e1b74
	if (!ctx.cr6.eq) goto loc_822E1B74;
loc_822E1B4C:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r11.u32);
loc_822E1B58:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7852
	ctx.r11.s64 = ctx.r11.s64 + -7852;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822E1B74:
	// lwz r7,18368(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x822e1b58
	if (ctx.cr6.gt) goto loc_822E1B58;
	// addi r10,r27,-72
	ctx.r10.s64 = ctx.r27.s64 + -72;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,403
	ctx.r6.s64 = ctx.r11.s64 + 403;
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r3,r9,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r10,r4,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// add. r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822e1b58
	if (ctx.cr0.lt) goto loc_822E1B58;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x822e1b58
	if (!ctx.cr6.lt) goto loc_822E1B58;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// stw r9,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r9.u32);
	// stw r7,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r7.u32);
	// lbz r30,1024(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1024);
loc_822E1BCC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822e1b58
	if (ctx.cr6.lt) goto loc_822E1B58;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bgt cr6,0x822e1b58
	if (ctx.cr6.gt) goto loc_822E1B58;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E1BEC;
	sub_826344D0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822e1c58
	if (ctx.cr6.eq) goto loc_822E1C58;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x822e1c08
	if (!ctx.cr6.lt) goto loc_822E1C08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E1C08;
	sub_822E1898(ctx, base);
loc_822E1C08:
	// lwz r8,18368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822e1c58
	if (ctx.cr6.lt) goto loc_822E1C58;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,18364(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// addi r10,r27,-72
	ctx.r10.s64 = ctx.r27.s64 + -72;
	// rotlw r7,r9,r30
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, ctx.r30.u8 & 0x1F);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subf r6,r30,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r30.s64;
	// andc r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// stw r3,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r3.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// and r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 & ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822e1c5c
	goto loc_822E1C5C;
loc_822E1C58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822E1C5C:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,18100(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0a80
	ctx.lr = 0x822E1C78;
	sub_822E0A80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e1c98
	if (!ctx.cr6.eq) goto loc_822E1C98;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7864
	ctx.r11.s64 = ctx.r11.s64 + -7864;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822E1C98:
	// add r6,r30,r4
	ctx.r6.u64 = ctx.r30.u64 + ctx.r4.u64;
	// stw r6,18100(r5)
	PPC_STORE_U32(ctx.r5.u32 + 18100, ctx.r6.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lhz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822e0af0
	ctx.lr = 0x822E1CB0;
	sub_822E0AF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e1cd0
	if (!ctx.cr6.eq) goto loc_822E1CD0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7888
	ctx.r11.s64 = ctx.r11.s64 + -7888;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822E1CD0:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// li r28,1
	ctx.r28.s64 = 1;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// sth r10,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r10.u16);
loc_822E1CE0:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e1cf4
	if (!ctx.cr6.lt) goto loc_822E1CF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E1CF4;
	sub_822E1898(ctx, base);
loc_822E1CF4:
	// lwz r7,18364(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// rlwinm r11,r7,10,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x3FE;
	// lhzx r10,r11,r23
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e1d60
	if (ctx.cr6.eq) goto loc_822E1D60;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// lwz r8,18368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// bgt cr6,0x822e1b58
	if (ctx.cr6.gt) goto loc_822E1B58;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
	// addi r5,r27,64
	ctx.r5.s64 = ctx.r27.s64 + 64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r7.u32);
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// addi r28,r9,1
	ctx.r28.s64 = ctx.r9.s64 + 1;
	// lbzx r3,r9,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lhzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// sthx r8,r11,r25
	PPC_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r8.u16);
	// b 0x822e1ef4
	goto loc_822E1EF4;
loc_822E1D60:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e1d74
	if (!ctx.cr6.lt) goto loc_822E1D74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E1D74;
	sub_822E1898(ctx, base);
loc_822E1D74:
	// lwz r7,18364(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// rlwinm r11,r7,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1FF;
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bge cr6,0x822e1db8
	if (!ctx.cr6.lt) goto loc_822E1DB8;
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r9,18368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// lbz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1280);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822e1b58
	if (ctx.cr6.gt) goto loc_822E1B58;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r9,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r9.u32);
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + ctx.r26.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r7.u32);
	// lbz r11,1024(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1024);
	// b 0x822e1e40
	goto loc_822E1E40;
loc_822E1DB8:
	// lwz r8,1580(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1580);
	// rlwinm r9,r7,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// addi r10,r26,1580
	ctx.r10.s64 = ctx.r26.s64 + 1580;
	// li r11,10
	ctx.r11.s64 = 10;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822e1de8
	if (ctx.cr6.lt) goto loc_822E1DE8;
loc_822E1DD0:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822e1dd0
	if (!ctx.cr6.lt) goto loc_822E1DD0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x822e1b4c
	if (ctx.cr6.eq) goto loc_822E1B4C;
loc_822E1DE8:
	// lwz r8,18368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x822e1b58
	if (ctx.cr6.gt) goto loc_822E1B58;
	// addi r10,r27,-72
	ctx.r10.s64 = ctx.r27.s64 + -72;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,403
	ctx.r6.s64 = ctx.r11.s64 + 403;
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r3,r7,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r4,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822e1b58
	if (ctx.cr0.lt) goto loc_822E1B58;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x822e1b58
	if (!ctx.cr6.lt) goto loc_822E1B58;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r9.u32);
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
	// lbz r11,1024(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1024);
loc_822E1E40:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822e1b58
	if (ctx.cr6.lt) goto loc_822E1B58;
	// clrlwi r30,r11,28
	ctx.r30.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822e1e64
	if (!ctx.cr6.eq) goto loc_822E1E64;
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// bne cr6,0x822e1efc
	if (!ctx.cr6.eq) goto loc_822E1EFC;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// b 0x822e1ef4
	goto loc_822E1EF4;
loc_822E1E64:
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lwz r10,18368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// addi r9,r27,64
	ctx.r9.s64 = ctx.r27.s64 + 64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// lbzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// bge cr6,0x822e1ea0
	if (!ctx.cr6.lt) goto loc_822E1EA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E1E8C;
	sub_822E1898(ctx, base);
	// lwz r10,18368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x822e1ea0
	if (!ctx.cr6.lt) goto loc_822E1EA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e1ee0
	goto loc_822E1EE0;
loc_822E1EA0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,18364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// addi r9,r27,-72
	ctx.r9.s64 = ctx.r27.s64 + -72;
	// rotlw r7,r8,r30
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, ctx.r30.u8 & 0x1F);
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// andc r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// stw r3,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r3.u32);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// and r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 & ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822E1EE0:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// sthx r7,r10,r25
	PPC_STORE_U16(ctx.r10.u32 + ctx.r25.u32, ctx.r7.u16);
loc_822E1EF4:
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 64, ctx.xer);
	// blt cr6,0x822e1ce0
	if (ctx.cr6.lt) goto loc_822E1CE0;
loc_822E1EFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1A88) {
	__imp__sub_822E1A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822E1F10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,18388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18388);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e1f4c
	if (ctx.cr6.eq) goto loc_822E1F4C;
loc_822E1F30:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7888
	ctx.r11.s64 = ctx.r11.s64 + -7888;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E1F4C:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e1f60
	if (!ctx.cr6.lt) goto loc_822E1F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E1F60;
	sub_822E1898(ctx, base);
loc_822E1F60:
	// lwz r11,18392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e2164
	if (!ctx.cr6.eq) goto loc_822E2164;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E1F7C;
	sub_826344D0(ctx, base);
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e1f90
	if (!ctx.cr6.lt) goto loc_822E1F90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E1F90;
	sub_822E1898(ctx, base);
loc_822E1F90:
	// lwz r7,18364(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// rlwinm r10,r7,9,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1FF;
	// addi r29,r11,-8984
	ctx.r29.s64 = ctx.r11.s64 + -8984;
	// lbzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x822e1fd8
	if (!ctx.cr6.lt) goto loc_822E1FD8;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,18368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// lbz r11,1280(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1280);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822e1f30
	if (ctx.cr6.gt) goto loc_822E1F30;
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r8.u32);
	// stw r7,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r7.u32);
	// lbz r30,1024(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1024);
	// b 0x822e2070
	goto loc_822E2070;
loc_822E1FD8:
	// lwz r9,1580(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// rlwinm r8,r7,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// addi r10,r30,1580
	ctx.r10.s64 = ctx.r30.s64 + 1580;
	// li r11,10
	ctx.r11.s64 = 10;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e2018
	if (ctx.cr6.lt) goto loc_822E2018;
loc_822E1FF0:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822e1ff0
	if (!ctx.cr6.lt) goto loc_822E1FF0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x822e2018
	if (!ctx.cr6.eq) goto loc_822E2018;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r11.u32);
	// b 0x822e1f30
	goto loc_822E1F30;
loc_822E2018:
	// lwz r8,18368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x822e1f30
	if (ctx.cr6.gt) goto loc_822E1F30;
	// addi r10,r29,-72
	ctx.r10.s64 = ctx.r29.s64 + -72;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,403
	ctx.r6.s64 = ctx.r11.s64 + 403;
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r3,r7,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r4,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822e1f30
	if (ctx.cr0.lt) goto loc_822E1F30;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x822e1f30
	if (!ctx.cr6.lt) goto loc_822E1F30;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r9.u32);
	// lbz r30,1024(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1024);
loc_822E2070:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822e1f30
	if (ctx.cr6.lt) goto loc_822E1F30;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bgt cr6,0x822e1f30
	if (ctx.cr6.gt) goto loc_822E1F30;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822e20ec
	if (ctx.cr6.eq) goto loc_822E20EC;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x822e209c
	if (!ctx.cr6.lt) goto loc_822E209C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E209C;
	sub_822E1898(ctx, base);
loc_822E209C:
	// lwz r8,18368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822e20ec
	if (ctx.cr6.lt) goto loc_822E20EC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,18364(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// addi r10,r29,-72
	ctx.r10.s64 = ctx.r29.s64 + -72;
	// rotlw r7,r9,r30
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, ctx.r30.u8 & 0x1F);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subf r6,r30,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r30.s64;
	// andc r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// stw r3,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r3.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// and r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 & ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822e20f0
	goto loc_822E20F0;
loc_822E20EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822E20F0:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,18100(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0a80
	ctx.lr = 0x822E210C;
	sub_822E0A80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e212c
	if (!ctx.cr6.eq) goto loc_822E212C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7864
	ctx.r11.s64 = ctx.r11.s64 + -7864;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E212C:
	// add r6,r30,r4
	ctx.r6.u64 = ctx.r30.u64 + ctx.r4.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,18100(r5)
	PPC_STORE_U32(ctx.r5.u32 + 18100, ctx.r6.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,18396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18396);
	// slw r4,r11,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// bl 0x822e0af0
	ctx.lr = 0x822E2148;
	sub_822E0AF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e1f30
	if (ctx.cr6.eq) goto loc_822E1F30;
	// mullw r11,r4,r6
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E2164:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822e2178
	if (!ctx.cr6.lt) goto loc_822E2178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E2178;
	sub_822E1898(ctx, base);
loc_822E2178:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x822e21bc
	if (ctx.cr6.lt) goto loc_822E21BC;
	// lwz r10,18364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r9.u32);
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stw r8,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822e21bc
	if (ctx.cr6.eq) goto loc_822E21BC;
	// lwz r11,18396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18396);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r8.u16);
loc_822E21BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1F08) {
	__imp__sub_822E1F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E21C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822E21D0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,18384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18384);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e220c
	if (!ctx.cr6.eq) goto loc_822E220C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7888
	ctx.r11.s64 = ctx.r11.s64 + -7888;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E220C:
	// lwz r10,18392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,18400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18400);
	// bne cr6,0x822e24f8
	if (!ctx.cr6.eq) goto loc_822E24F8;
	// lwz r26,18396(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e223c
	if (ctx.cr6.eq) goto loc_822E223C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r11.u32);
loc_822E2230:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E223C:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r28,r11,-8984
	ctx.r28.s64 = ctx.r11.s64 + -8984;
loc_822E224C:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e2260
	if (!ctx.cr6.lt) goto loc_822E2260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E2260;
	sub_822E1898(ctx, base);
loc_822E2260:
	// lwz r7,18364(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// rlwinm r11,r7,10,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x3FE;
	// lhzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e22c8
	if (ctx.cr6.eq) goto loc_822E22C8;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// lwz r8,18368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// bgt cr6,0x822e28c8
	if (ctx.cr6.gt) goto loc_822E28C8;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r7.u32);
	// addi r5,r28,64
	ctx.r5.s64 = ctx.r28.s64 + 64;
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// slw r3,r22,r26
	ctx.r3.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r26.u8 & 0x3F));
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lbzx r10,r9,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
	// sthx r11,r8,r23
	PPC_STORE_U16(ctx.r8.u32 + ctx.r23.u32, ctx.r11.u16);
	// b 0x822e2458
	goto loc_822E2458;
loc_822E22C8:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e22dc
	if (!ctx.cr6.lt) goto loc_822E22DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E22DC;
	sub_822E1898(ctx, base);
loc_822E22DC:
	// lwz r7,18364(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// rlwinm r11,r7,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1FF;
	// lbzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bge cr6,0x822e2320
	if (!ctx.cr6.lt) goto loc_822E2320;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lwz r9,18368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// lbz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1280);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822e28c8
	if (ctx.cr6.gt) goto loc_822E28C8;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r8.u32);
	// stw r7,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r7.u32);
	// lbz r11,1024(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1024);
	// b 0x822e23a8
	goto loc_822E23A8;
loc_822E2320:
	// lwz r8,1580(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1580);
	// rlwinm r9,r7,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// addi r10,r24,1580
	ctx.r10.s64 = ctx.r24.s64 + 1580;
	// li r11,10
	ctx.r11.s64 = 10;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822e2350
	if (ctx.cr6.lt) goto loc_822E2350;
loc_822E2338:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822e2338
	if (!ctx.cr6.lt) goto loc_822E2338;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x822e28bc
	if (ctx.cr6.eq) goto loc_822E28BC;
loc_822E2350:
	// lwz r8,18368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x822e28c8
	if (ctx.cr6.gt) goto loc_822E28C8;
	// addi r10,r28,-72
	ctx.r10.s64 = ctx.r28.s64 + -72;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,403
	ctx.r6.s64 = ctx.r11.s64 + 403;
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r3,r7,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r4,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r24.u32);
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822e28c8
	if (ctx.cr0.lt) goto loc_822E28C8;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x822e28c8
	if (!ctx.cr6.lt) goto loc_822E28C8;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r9.u32);
	// add r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 + ctx.r24.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r7.u32);
	// lbz r11,1024(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1024);
loc_822E23A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822e28c8
	if (ctx.cr6.lt) goto loc_822E28C8;
	// clrlwi r30,r11,28
	ctx.r30.u64 = ctx.r11.u32 & 0xF;
	// srawi r29,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822e23d0
	if (!ctx.cr6.eq) goto loc_822E23D0;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x822e2470
	if (ctx.cr6.lt) goto loc_822E2470;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// b 0x822e2458
	goto loc_822E2458;
loc_822E23D0:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lwz r10,18368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// addi r9,r28,64
	ctx.r9.s64 = ctx.r28.s64 + 64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lbzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// bge cr6,0x822e2408
	if (!ctx.cr6.lt) goto loc_822E2408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E23F4;
	sub_822E1898(ctx, base);
	// lwz r10,18368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x822e2408
	if (!ctx.cr6.lt) goto loc_822E2408;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e2448
	goto loc_822E2448;
loc_822E2408:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,18364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// addi r9,r28,-72
	ctx.r9.s64 = ctx.r28.s64 + -72;
	// rotlw r7,r8,r30
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, ctx.r30.u8 & 0x1F);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subf r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	// andc r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// stw r3,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r3.u32);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// and r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 & ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822E2448:
	// slw r10,r22,r26
	ctx.r10.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r26.u8 & 0x3F));
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// sthx r8,r9,r23
	PPC_STORE_U16(ctx.r9.u32 + ctx.r23.u32, ctx.r8.u16);
loc_822E2458:
	// lwz r11,18388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18388);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822e224c
	if (!ctx.cr6.gt) goto loc_822E224C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E2470:
	// slw r11,r22,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r11.u32);
	// beq cr6,0x822e24e0
	if (ctx.cr6.eq) goto loc_822E24E0;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822e2494
	if (!ctx.cr6.lt) goto loc_822E2494;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E2494;
	sub_822E1898(ctx, base);
loc_822E2494:
	// lwz r9,18368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822e24a8
	if (!ctx.cr6.lt) goto loc_822E24A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e24d4
	goto loc_822E24D4;
loc_822E24A8:
	// addi r11,r28,-72
	ctx.r11.s64 = ctx.r28.s64 + -72;
	// lwz r8,18364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlw r7,r8,r29
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, ctx.r29.u8 & 0x1F);
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r29.s64;
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// stw r4,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r4.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
loc_822E24D4:
	// lwz r10,18400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18400);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r11.u32);
loc_822E24E0:
	// lwz r11,18400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18400);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E24F8:
	// lwz r9,18396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18396);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r8,r22,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// beq cr6,0x822e25e4
	if (ctx.cr6.eq) goto loc_822E25E4;
	// lwz r9,18388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18388);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r8,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822e2230
	if (ctx.cr6.gt) goto loc_822E2230;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,-8984
	ctx.r11.s64 = ctx.r11.s64 + -8984;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_822E2538:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// rotlwi r30,r11,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r10,r30,r23
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r23.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e25c4
	if (ctx.cr6.eq) goto loc_822E25C4;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822e2560
	if (!ctx.cr6.lt) goto loc_822E2560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E2560;
	sub_822E1898(ctx, base);
loc_822E2560:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x822e25c4
	if (ctx.cr6.lt) goto loc_822E25C4;
	// lwz r10,18364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r9.u32);
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stw r8,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822e25c4
	if (ctx.cr6.eq) goto loc_822E25C4;
	// lhzx r11,r30,r23
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r23.u32);
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822e25c4
	if (!ctx.cr6.eq) goto loc_822E25C4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822e25bc
	if (!ctx.cr6.gt) goto loc_822E25BC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sthx r10,r30,r23
	PPC_STORE_U16(ctx.r30.u32 + ctx.r23.u32, ctx.r10.u16);
	// b 0x822e25c4
	goto loc_822E25C4;
loc_822E25BC:
	// subf r9,r27,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r27.s64;
	// sthx r9,r30,r23
	PPC_STORE_U16(ctx.r30.u32 + ctx.r23.u32, ctx.r9.u16);
loc_822E25C4:
	// lwz r11,18388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18388);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822e2538
	if (!ctx.cr6.gt) goto loc_822E2538;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E25E4:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r26,r11,-8984
	ctx.r26.s64 = ctx.r11.s64 + -8984;
loc_822E25F0:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e2604
	if (!ctx.cr6.lt) goto loc_822E2604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E2604;
	sub_822E1898(ctx, base);
loc_822E2604:
	// lwz r7,18364(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// rlwinm r11,r7,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1FF;
	// lbzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bge cr6,0x822e2648
	if (!ctx.cr6.lt) goto loc_822E2648;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lwz r9,18368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// lbz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1280);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822e28c8
	if (ctx.cr6.gt) goto loc_822E28C8;
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r8.u32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stw r7,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r7.u32);
	// lbz r11,1024(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1024);
	// b 0x822e26d0
	goto loc_822E26D0;
loc_822E2648:
	// lwz r8,1580(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1580);
	// rlwinm r9,r7,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// addi r10,r24,1580
	ctx.r10.s64 = ctx.r24.s64 + 1580;
	// li r11,10
	ctx.r11.s64 = 10;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822e2678
	if (ctx.cr6.lt) goto loc_822E2678;
loc_822E2660:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822e2660
	if (!ctx.cr6.lt) goto loc_822E2660;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x822e28bc
	if (ctx.cr6.eq) goto loc_822E28BC;
loc_822E2678:
	// lwz r8,18368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x822e28c8
	if (ctx.cr6.gt) goto loc_822E28C8;
	// addi r10,r26,-72
	ctx.r10.s64 = ctx.r26.s64 + -72;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,403
	ctx.r6.s64 = ctx.r11.s64 + 403;
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r3,r7,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r4,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r24.u32);
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822e28c8
	if (ctx.cr0.lt) goto loc_822E28C8;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x822e28c8
	if (!ctx.cr6.lt) goto loc_822E28C8;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r9.u32);
	// add r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 + ctx.r24.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r7.u32);
	// lbz r11,1024(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1024);
loc_822E26D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822e28c8
	if (ctx.cr6.lt) goto loc_822E28C8;
	// clrlwi r28,r11,28
	ctx.r28.u64 = ctx.r11.u32 & 0xF;
	// srawi r29,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822e277c
	if (!ctx.cr6.eq) goto loc_822E277C;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// bge cr6,0x822e27d4
	if (!ctx.cr6.lt) goto loc_822E27D4;
	// slw r11,r22,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r11.u32);
	// beq cr6,0x822e2774
	if (ctx.cr6.eq) goto loc_822E2774;
	// lwz r9,18368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822e273c
	if (!ctx.cr6.lt) goto loc_822E273C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E2718;
	sub_822E1898(ctx, base);
	// lwz r9,18368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822e273c
	if (!ctx.cr6.lt) goto loc_822E273C;
	// lwz r10,18400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18400);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,64
	ctx.r29.s64 = 64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r11.u32);
	// b 0x822e27d4
	goto loc_822E27D4;
loc_822E273C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,18364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// addi r10,r26,-72
	ctx.r10.s64 = ctx.r26.s64 + -72;
	// rotlw r7,r8,r29
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, ctx.r29.u8 & 0x1F);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r29.s64;
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// stw r4,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r4.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// lwz r10,18400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18400);
	// stw r6,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r11.u32);
loc_822E2774:
	// li r29,64
	ctx.r29.s64 = 64;
	// b 0x822e27d4
	goto loc_822E27D4;
loc_822E277C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x822e28c8
	if (!ctx.cr6.eq) goto loc_822E28C8;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822e27a4
	if (!ctx.cr6.lt) goto loc_822E27A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E2798;
	sub_822E1898(ctx, base);
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x822e27cc
	if (ctx.cr6.lt) goto loc_822E27CC;
loc_822E27A4:
	// lwz r10,18364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r9.u32);
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stw r8,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822e27cc
	if (ctx.cr6.eq) goto loc_822E27CC;
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// b 0x822e27d4
	goto loc_822E27D4;
loc_822E27CC:
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// neg r28,r11
	ctx.r28.s64 = -ctx.r11.s64;
loc_822E27D4:
	// lwz r11,18388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18388);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822e28a4
	if (ctx.cr6.gt) goto loc_822E28A4;
loc_822E27E0:
	// addi r11,r26,64
	ctx.r11.s64 = ctx.r26.s64 + 64;
	// lbzx r10,r25,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// rotlwi r30,r10,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r9,r30,r23
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e2884
	if (ctx.cr6.eq) goto loc_822E2884;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822e281c
	if (!ctx.cr6.lt) goto loc_822E281C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E2810;
	sub_822E1898(ctx, base);
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x822e2890
	if (ctx.cr6.lt) goto loc_822E2890;
loc_822E281C:
	// lwz r10,18364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18364);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r9.u32);
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stw r8,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822e2890
	if (ctx.cr6.eq) goto loc_822E2890;
	// lhzx r11,r30,r23
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r23.u32);
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822e2890
	if (!ctx.cr6.eq) goto loc_822E2890;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822e286c
	if (!ctx.cr6.gt) goto loc_822E286C;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sthx r10,r30,r23
	PPC_STORE_U16(ctx.r30.u32 + ctx.r23.u32, ctx.r10.u16);
	// b 0x822e2890
	goto loc_822E2890;
loc_822E286C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthx r8,r30,r23
	PPC_STORE_U16(ctx.r30.u32 + ctx.r23.u32, ctx.r8.u16);
	// b 0x822e2890
	goto loc_822E2890;
loc_822E2884:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822e28a0
	if (ctx.cr6.eq) goto loc_822E28A0;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_822E2890:
	// lwz r11,18388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18388);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822e27e0
	if (!ctx.cr6.gt) goto loc_822E27E0;
	// b 0x822e28a4
	goto loc_822E28A4;
loc_822E28A0:
	// sthx r28,r30,r23
	PPC_STORE_U16(ctx.r30.u32 + ctx.r23.u32, ctx.r28.u16);
loc_822E28A4:
	// lwz r11,18388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18388);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822e25f0
	if (!ctx.cr6.gt) goto loc_822E25F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E28BC:
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r11.u32);
loc_822E28C8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7852
	ctx.r11.s64 = ctx.r11.s64 + -7852;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E21C8) {
	__imp__sub_822E21C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E28E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E28E4) {
	__imp__sub_822E28E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E28E8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822E28F0;
	__savegprlr_20(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,-336
	ctx.r11.s64 = ctx.r1.s64 + -336;
	// addi r10,r5,96
	ctx.r10.s64 = ctx.r5.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E2900:
	// lhz r9,-80(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -80);
	// extsh r26,r9
	ctx.r26.s64 = ctx.r9.s16;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x822e2984
	if (!ctx.cr6.eq) goto loc_822E2984;
	// lhz r8,-64(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822e2984
	if (!ctx.cr6.eq) goto loc_822E2984;
	// lhz r8,-48(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -48);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822e2984
	if (!ctx.cr6.eq) goto loc_822E2984;
	// lhz r8,-32(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822e2984
	if (!ctx.cr6.eq) goto loc_822E2984;
	// lhz r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822e2984
	if (!ctx.cr6.eq) goto loc_822E2984;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822e2984
	if (!ctx.cr6.eq) goto loc_822E2984;
	// lhz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822e2984
	if (!ctx.cr6.eq) goto loc_822E2984;
	// lhz r9,-96(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -96);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r7.u32);
	// stw r7,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r7.u32);
	// stw r7,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r7.u32);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r7,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r7.u32);
	// b 0x822e2ac0
	goto loc_822E2AC0;
loc_822E2984:
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// mulli r24,r26,6149
	ctx.r24.s64 = ctx.r26.s64 * 6149;
	// lhz r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r31,-48(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + -48);
	// lhz r6,-64(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -64);
	// lhz r29,-96(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + -96);
	// lhz r28,-32(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + -32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// add r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r27,r30,r6
	ctx.r27.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r5,r9,r26
	ctx.r5.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r22,r28,r29
	ctx.r22.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r23,r5,r31
	ctx.r23.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 + ctx.r26.u64;
	// mulli r6,r6,3135
	ctx.r6.s64 = ctx.r6.s64 * 3135;
	// mulli r27,r27,2217
	ctx.r27.s64 = ctx.r27.s64 * 2217;
	// mulli r21,r30,7567
	ctx.r21.s64 = ctx.r30.s64 * 7567;
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r29,r28,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r28.s64;
	// rlwinm r30,r22,12,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 12) & 0xFFFFF000;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// mulli r28,r5,-1597
	ctx.r28.s64 = ctx.r5.s64 * -1597;
	// mulli r22,r26,3685
	ctx.r22.s64 = ctx.r26.s64 * 3685;
	// mulli r20,r23,4816
	ctx.r20.s64 = ctx.r23.s64 * 4816;
	// subf r5,r21,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r21.s64;
	// mulli r26,r8,12586
	ctx.r26.s64 = ctx.r8.s64 * 12586;
	// mulli r27,r31,-8034
	ctx.r27.s64 = ctx.r31.s64 * -8034;
	// mulli r21,r25,10497
	ctx.r21.s64 = ctx.r25.s64 * 10497;
	// add r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r25,r24,r28
	ctx.r25.u64 = ctx.r24.u64 + ctx.r28.u64;
	// rlwinm r29,r29,12,0,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0xFFFFF000;
	// subf r31,r22,r20
	ctx.r31.s64 = ctx.r20.s64 - ctx.r22.s64;
	// subf r23,r6,r30
	ctx.r23.s64 = ctx.r30.s64 - ctx.r6.s64;
	// mulli r24,r9,8410
	ctx.r24.s64 = ctx.r9.s64 * 8410;
	// subf r30,r21,r20
	ctx.r30.s64 = ctx.r20.s64 - ctx.r21.s64;
	// add r26,r26,r27
	ctx.r26.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r6,r29,r5
	ctx.r6.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r9,r25,r31
	ctx.r9.u64 = ctx.r25.u64 + ctx.r31.u64;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// mulli r25,r7,1223
	ctx.r25.s64 = ctx.r7.s64 * 1223;
	// subf r29,r5,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r5.s64;
	// add r7,r26,r30
	ctx.r7.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r5,r24,r28
	ctx.r5.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r26,r8,r9
	ctx.r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r24,r6,r7
	ctx.r24.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r28,r25,r31
	ctx.r28.u64 = ctx.r25.u64 + ctx.r31.u64;
	// srawi r30,r26,10
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3FF) != 0);
	ctx.r30.s64 = ctx.r26.s32 >> 10;
	// subf r25,r7,r6
	ctx.r25.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r31,r29,512
	ctx.r31.s64 = ctx.r29.s64 + 512;
	// stw r30,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r30.u32);
	// srawi r7,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 10;
	// add r9,r28,r27
	ctx.r9.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r8,r23,512
	ctx.r8.s64 = ctx.r23.s64 + 512;
	// stw r7,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r7.u32);
	// srawi r6,r24,10
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3FF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 10;
	// add r30,r31,r5
	ctx.r30.u64 = ctx.r31.u64 + ctx.r5.u64;
	// subf r5,r5,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r5.s64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// srawi r7,r25,10
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r25.s32 >> 10;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r29,r9,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r7,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r7.u32);
	// srawi r6,r30,10
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 10;
	// srawi r9,r5,10
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 10;
	// srawi r8,r31,10
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 10;
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// srawi r7,r29,10
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 10;
	// stw r9,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r9.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
loc_822E2AC0:
	// stw r7,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r7.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822e2900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E2900;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r23,r3,1
	ctx.r23.s64 = ctx.r3.s64 + 1;
	// addi r11,r1,-344
	ctx.r11.s64 = ctx.r1.s64 + -344;
	// lis r24,257
	ctx.r24.s64 = 16842752;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E2AE4:
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r28,r3,3135
	ctx.r28.s64 = ctx.r3.s64 * 3135;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r7,-12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r29,-8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r30,-24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mulli r3,r3,2217
	ctx.r3.s64 = ctx.r3.s64 * 2217;
	// add r26,r29,r30
	ctx.r26.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r25,r9,1223
	ctx.r25.s64 = ctx.r9.s64 * 1223;
	// add r9,r28,r3
	ctx.r9.u64 = ctx.r28.u64 + ctx.r3.u64;
	// add r22,r6,r5
	ctx.r22.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r28,r26,12,0,19
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 12) & 0xFFFFF000;
	// mulli r26,r10,6149
	ctx.r26.s64 = ctx.r10.s64 * 6149;
	// mulli r6,r6,-1597
	ctx.r6.s64 = ctx.r6.s64 * -1597;
	// mulli r22,r22,4816
	ctx.r22.s64 = ctx.r22.s64 * 4816;
	// mulli r27,r27,3685
	ctx.r27.s64 = ctx.r27.s64 * 3685;
	// add r10,r28,r9
	ctx.r10.u64 = ctx.r28.u64 + ctx.r9.u64;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mulli r29,r31,7567
	ctx.r29.s64 = ctx.r31.s64 * 7567;
	// subf r21,r9,r28
	ctx.r21.s64 = ctx.r28.s64 - ctx.r9.s64;
	// add r26,r26,r6
	ctx.r26.u64 = ctx.r26.u64 + ctx.r6.u64;
	// subf r27,r27,r22
	ctx.r27.s64 = ctx.r22.s64 - ctx.r27.s64;
	// add r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r28,r10,r24
	ctx.r28.u64 = ctx.r10.u64 + ctx.r24.u64;
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r29.s64;
	// rlwinm r9,r30,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFFFF000;
	// mulli r30,r8,8410
	ctx.r30.s64 = ctx.r8.s64 * 8410;
	// add r29,r26,r27
	ctx.r29.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mulli r3,r7,12586
	ctx.r3.s64 = ctx.r7.s64 * 12586;
	// mulli r5,r5,-8034
	ctx.r5.s64 = ctx.r5.s64 * -8034;
	// mulli r8,r31,10497
	ctx.r8.s64 = ctx.r31.s64 * 10497;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r31,r10,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// subf r8,r8,r22
	ctx.r8.s64 = ctx.r22.s64 - ctx.r8.s64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r3,r25,r27
	ctx.r3.u64 = ctx.r25.u64 + ctx.r27.u64;
	// srawi r10,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 17;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r8,r7,r24
	ctx.r8.u64 = ctx.r7.u64 + ctx.r24.u64;
	// add r7,r31,r24
	ctx.r7.u64 = ctx.r31.u64 + ctx.r24.u64;
	// add r3,r21,r24
	ctx.r3.u64 = ctx.r21.u64 + ctx.r24.u64;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x822e2bdc
	if (!ctx.cr6.gt) goto loc_822E2BDC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822e2bcc
	if (!ctx.cr6.lt) goto loc_822E2BCC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e2be0
	goto loc_822E2BE0;
loc_822E2BCC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x822e2bdc
	if (!ctx.cr6.gt) goto loc_822E2BDC;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x822e2be0
	goto loc_822E2BE0;
loc_822E2BDC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822E2BE0:
	// subf r31,r29,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r29.s64;
	// stb r10,-1(r23)
	PPC_STORE_U8(ctx.r23.u32 + -1, ctx.r10.u8);
	// srawi r10,r31,17
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 17;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x822e2c14
	if (!ctx.cr6.gt) goto loc_822E2C14;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822e2c04
	if (!ctx.cr6.lt) goto loc_822E2C04;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e2c18
	goto loc_822E2C18;
loc_822E2C04:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x822e2c14
	if (!ctx.cr6.gt) goto loc_822E2C14;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x822e2c18
	goto loc_822E2C18;
loc_822E2C14:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822E2C18:
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r10,6(r23)
	PPC_STORE_U8(ctx.r23.u32 + 6, ctx.r10.u8);
	// srawi r10,r31,17
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 17;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x822e2c4c
	if (!ctx.cr6.gt) goto loc_822E2C4C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822e2c3c
	if (!ctx.cr6.lt) goto loc_822E2C3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e2c50
	goto loc_822E2C50;
loc_822E2C3C:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x822e2c4c
	if (!ctx.cr6.gt) goto loc_822E2C4C;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x822e2c50
	goto loc_822E2C50;
loc_822E2C4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822E2C50:
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stb r10,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r10.u8);
	// srawi r10,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 17;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x822e2c84
	if (!ctx.cr6.gt) goto loc_822E2C84;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822e2c74
	if (!ctx.cr6.lt) goto loc_822E2C74;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e2c88
	goto loc_822E2C88;
loc_822E2C74:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x822e2c84
	if (!ctx.cr6.gt) goto loc_822E2C84;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x822e2c88
	goto loc_822E2C88;
loc_822E2C84:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822E2C88:
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stb r10,5(r23)
	PPC_STORE_U8(ctx.r23.u32 + 5, ctx.r10.u8);
	// srawi r10,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 17;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x822e2cbc
	if (!ctx.cr6.gt) goto loc_822E2CBC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822e2cac
	if (!ctx.cr6.lt) goto loc_822E2CAC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e2cc0
	goto loc_822E2CC0;
loc_822E2CAC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x822e2cbc
	if (!ctx.cr6.gt) goto loc_822E2CBC;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x822e2cc0
	goto loc_822E2CC0;
loc_822E2CBC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822E2CC0:
	// subf r9,r6,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r6.s64;
	// stb r10,1(r23)
	PPC_STORE_U8(ctx.r23.u32 + 1, ctx.r10.u8);
	// srawi r10,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 17;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x822e2cf4
	if (!ctx.cr6.gt) goto loc_822E2CF4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822e2ce4
	if (!ctx.cr6.lt) goto loc_822E2CE4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e2cf8
	goto loc_822E2CF8;
loc_822E2CE4:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x822e2cf4
	if (!ctx.cr6.gt) goto loc_822E2CF4;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x822e2cf8
	goto loc_822E2CF8;
loc_822E2CF4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822E2CF8:
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stb r10,4(r23)
	PPC_STORE_U8(ctx.r23.u32 + 4, ctx.r10.u8);
	// srawi r10,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 17;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x822e2d2c
	if (!ctx.cr6.gt) goto loc_822E2D2C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822e2d1c
	if (!ctx.cr6.lt) goto loc_822E2D1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e2d30
	goto loc_822E2D30;
loc_822E2D1C:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x822e2d2c
	if (!ctx.cr6.gt) goto loc_822E2D2C;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x822e2d30
	goto loc_822E2D30;
loc_822E2D2C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822E2D30:
	// subf r9,r5,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r5.s64;
	// stb r10,2(r23)
	PPC_STORE_U8(ctx.r23.u32 + 2, ctx.r10.u8);
	// srawi r10,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 17;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x822e2d64
	if (!ctx.cr6.gt) goto loc_822E2D64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822e2d54
	if (!ctx.cr6.lt) goto loc_822E2D54;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e2d68
	goto loc_822E2D68;
loc_822E2D54:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x822e2d64
	if (!ctx.cr6.gt) goto loc_822E2D64;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x822e2d68
	goto loc_822E2D68;
loc_822E2D64:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822E2D68:
	// stb r10,3(r23)
	PPC_STORE_U8(ctx.r23.u32 + 3, ctx.r10.u8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// add r23,r23,r4
	ctx.r23.u64 = ctx.r23.u64 + ctx.r4.u64;
	// bdnz 0x822e2ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E2AE4;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E28E8) {
	__imp__sub_822E28E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E2D7C) {
	__imp__sub_822E2D7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2D80) {
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
	// lbz r3,18372(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18372);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// beq cr6,0x822e2db0
	if (ctx.cr6.eq) goto loc_822E2DB0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,18372(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18372, ctx.r11.u8);
	// b 0x822e2e70
	goto loc_822E2E70;
loc_822E2DB0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e2dd4
	if (!ctx.cr6.lt) goto loc_822E2DD4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e2e00
	goto loc_822E2E00;
loc_822E2DD4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e2dfc
	if (ctx.cr6.eq) goto loc_822E2DFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E2DE8;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e2e00
	goto loc_822E2E00;
loc_822E2DFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E2E00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822e2e14
	if (ctx.cr6.eq) goto loc_822E2E14;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x822e2e70
	goto loc_822E2E70;
loc_822E2E14:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e2e38
	if (!ctx.cr6.lt) goto loc_822E2E38;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e2e64
	goto loc_822E2E64;
loc_822E2E38:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e2e60
	if (ctx.cr6.eq) goto loc_822E2E60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E2E4C;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e2e64
	goto loc_822E2E64;
loc_822E2E60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E2E64:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822e2e14
	if (ctx.cr6.eq) goto loc_822E2E14;
loc_822E2E70:
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

PPC_WEAK_FUNC(sub_822E2D80) {
	__imp__sub_822E2D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634430
	ctx.lr = 0x822E2E90;
	__savegprlr_18(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,18436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18436);
	// li r19,255
	ctx.r19.s64 = 255;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r20,18368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18368, ctx.r20.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r20,18364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18364, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,18376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18376, ctx.r20.u32);
	// ori r18,r10,65535
	ctx.r18.u64 = ctx.r10.u64 | 65535;
	// stw r20,18316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18316, ctx.r20.u32);
	// stw r20,18244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18244, ctx.r20.u32);
	// stw r20,18172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18172, ctx.r20.u32);
	// stw r20,18100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18100, ctx.r20.u32);
	// stb r19,18372(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18372, ctx.r19.u8);
	// bne cr6,0x822e2ed8
	if (!ctx.cr6.eq) goto loc_822E2ED8;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E2ED8:
	// lwz r10,18380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18380);
	// stw r11,18440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18440, ctx.r11.u32);
	// lwz r11,18416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18416);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r20,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r20.u32);
	// bne cr6,0x822e3214
	if (!ctx.cr6.eq) goto loc_822E3214;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822e3048
	if (!ctx.cr6.eq) goto loc_822E3048;
	// lwz r29,18420(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18420);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,18104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18104);
	// lwz r10,18108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18108);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// srawi r26,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r9.s32 >> 3;
	// srawi. r25,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble 0x822e34e8
	if (!ctx.cr0.gt) goto loc_822E34E8;
loc_822E2F2C:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822e3030
	if (!ctx.cr6.gt) goto loc_822E3030;
loc_822E2F38:
	// lwz r10,18088(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18088);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,18096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18096);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,18092(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18092);
	// rlwinm r9,r10,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r11,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// mulli r10,r11,1680
	ctx.r10.s64 = ctx.r11.s64 * 1680;
	// mulli r11,r6,1680
	ctx.r11.s64 = ctx.r6.s64 * 1680;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r9,13444
	ctx.r9.s64 = ctx.r9.s64 + 13444;
	// addi r7,r7,13956
	ctx.r7.s64 = ctx.r7.s64 + 13956;
	// addi r6,r10,6724
	ctx.r6.s64 = ctx.r10.s64 + 6724;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1a88
	ctx.lr = 0x822E2F84;
	sub_822E1A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e3360
	if (ctx.cr6.eq) goto loc_822E3360;
	// lwz r4,18112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18112);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,18444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18444);
	// mullw r11,r4,r27
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// lwz r10,18120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E2FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,18440(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18440);
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,18440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18440, ctx.r11.u32);
	// bgt 0x822e3024
	if (ctx.cr0.gt) goto loc_822E3024;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x822e2fd8
	if (!ctx.cr6.lt) goto loc_822E2FD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E2FD8;
	sub_822E1898(ctx, base);
loc_822E2FD8:
	// lbz r11,18372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18372);
	// cmplwi cr6,r11,208
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 208, ctx.xer);
	// blt cr6,0x822e34e8
	if (ctx.cr6.lt) goto loc_822E34E8;
	// cmplwi cr6,r11,215
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 215, ctx.xer);
	// bgt cr6,0x822e34e8
	if (ctx.cr6.gt) goto loc_822E34E8;
	// lwz r11,18436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18436);
	// stw r20,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r20.u32);
	// stw r20,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,18376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18376, ctx.r20.u32);
	// stw r20,18316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18316, ctx.r20.u32);
	// stw r20,18244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18244, ctx.r20.u32);
	// stw r20,18172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18172, ctx.r20.u32);
	// stw r20,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r20.u32);
	// stb r19,18372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18372, ctx.r19.u8);
	// bne cr6,0x822e301c
	if (!ctx.cr6.eq) goto loc_822E301C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E301C:
	// stw r11,18440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18440, ctx.r11.u32);
	// stw r20,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r20.u32);
loc_822E3024:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822e2f38
	if (ctx.cr6.lt) goto loc_822E2F38;
loc_822E3030:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822e2f2c
	if (ctx.cr6.lt) goto loc_822E2F2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822E3048:
	// lwz r11,18064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18064);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e34e8
	if (!ctx.cr6.gt) goto loc_822E34E8;
loc_822E3058:
	// lwz r11,18060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18060);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e31f8
	if (!ctx.cr6.gt) goto loc_822E31F8;
loc_822E3068:
	// lwz r11,18416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18416);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e3178
	if (!ctx.cr6.gt) goto loc_822E3178;
	// addi r22,r31,18420
	ctx.r22.s64 = ctx.r31.s64 + 18420;
loc_822E307C:
	// lwz r25,0(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,18084(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18084);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822e3164
	if (!ctx.cr6.gt) goto loc_822E3164;
loc_822E30A0:
	// lwz r11,18080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18080);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e3154
	if (!ctx.cr6.gt) goto loc_822E3154;
loc_822E30B0:
	// lwz r10,18096(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18096);
	// mullw r6,r11,r24
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// lwz r8,18092(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18092);
	// lwz r9,18088(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18088);
	// lwz r5,18084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18084);
	// rlwinm r7,r10,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// mulli r11,r8,1680
	ctx.r11.s64 = ctx.r8.s64 * 1680;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// mulli r10,r10,1680
	ctx.r10.s64 = ctx.r10.s64 * 1680;
	// mullw r8,r5,r23
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r23.s32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r28,r6,r29
	ctx.r28.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r27,r8,r26
	ctx.r27.u64 = ctx.r8.u64 + ctx.r26.u64;
	// addi r9,r9,13444
	ctx.r9.s64 = ctx.r9.s64 + 13444;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r7,13956
	ctx.r7.s64 = ctx.r7.s64 + 13956;
	// addi r6,r10,6724
	ctx.r6.s64 = ctx.r10.s64 + 6724;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r27,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822e1a88
	ctx.lr = 0x822E3118;
	sub_822E1A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e3360
	if (ctx.cr6.eq) goto loc_822E3360;
	// lwz r4,18112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18112);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,18120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18120);
	// mullw r11,r4,r27
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// lwz r9,18444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18444);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x822E3144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,18080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18080);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e30b0
	if (ctx.cr6.lt) goto loc_822E30B0;
loc_822E3154:
	// lwz r11,18084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18084);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e30a0
	if (ctx.cr6.lt) goto loc_822E30A0;
loc_822E3164:
	// lwz r11,18416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18416);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e307c
	if (ctx.cr6.lt) goto loc_822E307C;
loc_822E3178:
	// lwz r11,18440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18440);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,18440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18440, ctx.r11.u32);
	// bgt 0x822e31e8
	if (ctx.cr0.gt) goto loc_822E31E8;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x822e319c
	if (!ctx.cr6.lt) goto loc_822E319C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E319C;
	sub_822E1898(ctx, base);
loc_822E319C:
	// lbz r11,18372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18372);
	// cmplwi cr6,r11,208
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 208, ctx.xer);
	// blt cr6,0x822e34e8
	if (ctx.cr6.lt) goto loc_822E34E8;
	// cmplwi cr6,r11,215
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 215, ctx.xer);
	// bgt cr6,0x822e34e8
	if (ctx.cr6.gt) goto loc_822E34E8;
	// lwz r11,18436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18436);
	// stw r20,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r20.u32);
	// stw r20,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,18376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18376, ctx.r20.u32);
	// stw r20,18316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18316, ctx.r20.u32);
	// stw r20,18244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18244, ctx.r20.u32);
	// stw r20,18172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18172, ctx.r20.u32);
	// stw r20,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r20.u32);
	// stb r19,18372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18372, ctx.r19.u8);
	// bne cr6,0x822e31e0
	if (!ctx.cr6.eq) goto loc_822E31E0;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E31E0:
	// stw r11,18440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18440, ctx.r11.u32);
	// stw r20,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r20.u32);
loc_822E31E8:
	// lwz r11,18060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18060);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e3068
	if (ctx.cr6.lt) goto loc_822E3068;
loc_822E31F8:
	// lwz r11,18064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18064);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e3058
	if (ctx.cr6.lt) goto loc_822E3058;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822E3214:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822e336c
	if (!ctx.cr6.eq) goto loc_822E336C;
	// lwz r27,18420(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18420);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,18104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18104);
	// lwz r11,18108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18108);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// srawi r26,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 3;
	// srawi. r25,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble 0x822e34e8
	if (!ctx.cr0.gt) goto loc_822E34E8;
loc_822E3250:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822e3348
	if (!ctx.cr6.gt) goto loc_822E3348;
loc_822E325C:
	// lwz r11,18140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18140);
	// lwz r10,18136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18136);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r9,18384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18384);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x822e32a0
	if (!ctx.cr6.eq) goto loc_822E32A0;
	// lwz r11,18092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18092);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x822e1f08
	ctx.lr = 0x822E329C;
	sub_822E1F08(ctx, base);
	// b 0x822e32c4
	goto loc_822E32C4;
loc_822E32A0:
	// lwz r11,18096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r10,13956
	ctx.r6.s64 = ctx.r10.s64 + 13956;
	// addi r5,r11,6724
	ctx.r5.s64 = ctx.r11.s64 + 6724;
	// bl 0x822e21c8
	ctx.lr = 0x822E32C4;
	sub_822E21C8(ctx, base);
loc_822E32C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e3360
	if (ctx.cr6.eq) goto loc_822E3360;
	// lwz r11,18440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18440);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,18440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18440, ctx.r11.u32);
	// bgt 0x822e333c
	if (ctx.cr0.gt) goto loc_822E333C;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x822e32f0
	if (!ctx.cr6.lt) goto loc_822E32F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E32F0;
	sub_822E1898(ctx, base);
loc_822E32F0:
	// lbz r11,18372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18372);
	// cmplwi cr6,r11,208
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 208, ctx.xer);
	// blt cr6,0x822e34e8
	if (ctx.cr6.lt) goto loc_822E34E8;
	// cmplwi cr6,r11,215
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 215, ctx.xer);
	// bgt cr6,0x822e34e8
	if (ctx.cr6.gt) goto loc_822E34E8;
	// lwz r11,18436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18436);
	// stw r20,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r20.u32);
	// stw r20,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,18376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18376, ctx.r20.u32);
	// stw r20,18316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18316, ctx.r20.u32);
	// stw r20,18244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18244, ctx.r20.u32);
	// stw r20,18172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18172, ctx.r20.u32);
	// stw r20,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r20.u32);
	// stb r19,18372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18372, ctx.r19.u8);
	// bne cr6,0x822e3334
	if (!ctx.cr6.eq) goto loc_822E3334;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E3334:
	// stw r11,18440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18440, ctx.r11.u32);
	// stw r20,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r20.u32);
loc_822E333C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822e325c
	if (ctx.cr6.lt) goto loc_822E325C;
loc_822E3348:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822e3250
	if (ctx.cr6.lt) goto loc_822E3250;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822E3360:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822E336C:
	// lwz r11,18064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18064);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e34e8
	if (!ctx.cr6.gt) goto loc_822E34E8;
loc_822E337C:
	// lwz r11,18060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18060);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e34d8
	if (!ctx.cr6.gt) goto loc_822E34D8;
loc_822E338C:
	// lwz r11,18416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18416);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e3458
	if (!ctx.cr6.gt) goto loc_822E3458;
	// addi r24,r31,18420
	ctx.r24.s64 = ctx.r31.s64 + 18420;
loc_822E33A0:
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,18084(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18084);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822e3444
	if (!ctx.cr6.gt) goto loc_822E3444;
loc_822E33C4:
	// lwz r11,18080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18080);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e3434
	if (!ctx.cr6.gt) goto loc_822E3434;
loc_822E33D4:
	// lwz r9,18084(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18084);
	// mullw r8,r11,r26
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// lwz r7,18140(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18140);
	// lwz r6,18092(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18092);
	// lwz r10,18136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18136);
	// mullw r11,r9,r25
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r9,r6,1680
	ctx.r9.s64 = ctx.r6.s64 * 1680;
	// mullw r11,r5,r7
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1f08
	ctx.lr = 0x822E341C;
	sub_822E1F08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e3360
	if (ctx.cr6.eq) goto loc_822E3360;
	// lwz r11,18080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18080);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e33d4
	if (ctx.cr6.lt) goto loc_822E33D4;
loc_822E3434:
	// lwz r11,18084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18084);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e33c4
	if (ctx.cr6.lt) goto loc_822E33C4;
loc_822E3444:
	// lwz r11,18416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18416);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e33a0
	if (ctx.cr6.lt) goto loc_822E33A0;
loc_822E3458:
	// lwz r11,18440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18440);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,18440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18440, ctx.r11.u32);
	// bgt 0x822e34c8
	if (ctx.cr0.gt) goto loc_822E34C8;
	// lwz r11,18368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18368);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x822e347c
	if (!ctx.cr6.lt) goto loc_822E347C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1898
	ctx.lr = 0x822E347C;
	sub_822E1898(ctx, base);
loc_822E347C:
	// lbz r11,18372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18372);
	// cmplwi cr6,r11,208
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 208, ctx.xer);
	// blt cr6,0x822e34e8
	if (ctx.cr6.lt) goto loc_822E34E8;
	// cmplwi cr6,r11,215
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 215, ctx.xer);
	// bgt cr6,0x822e34e8
	if (ctx.cr6.gt) goto loc_822E34E8;
	// lwz r11,18436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18436);
	// stw r20,18368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18368, ctx.r20.u32);
	// stw r20,18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18364, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,18376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18376, ctx.r20.u32);
	// stw r20,18316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18316, ctx.r20.u32);
	// stw r20,18244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18244, ctx.r20.u32);
	// stw r20,18172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18172, ctx.r20.u32);
	// stw r20,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r20.u32);
	// stb r19,18372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18372, ctx.r19.u8);
	// bne cr6,0x822e34c0
	if (!ctx.cr6.eq) goto loc_822E34C0;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E34C0:
	// stw r11,18440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18440, ctx.r11.u32);
	// stw r20,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r20.u32);
loc_822E34C8:
	// lwz r11,18060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18060);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e338c
	if (ctx.cr6.lt) goto loc_822E338C;
loc_822E34D8:
	// lwz r11,18064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18064);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e337c
	if (ctx.cr6.lt) goto loc_822E337C;
loc_822E34E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2E88) {
	__imp__sub_822E2E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E34F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E34F4) {
	__imp__sub_822E34F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E34F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822E3500;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,18380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18380);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e365c
	if (ctx.cr6.eq) goto loc_822E365C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822e365c
	if (!ctx.cr6.gt) goto loc_822E365C;
	// addi r26,r3,18108
	ctx.r26.s64 = ctx.r3.s64 + 18108;
loc_822E352C:
	// lwz r11,-4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// srawi r27,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 3;
	// srawi. r25,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble 0x822e3644
	if (!ctx.cr0.gt) goto loc_822E3644;
	// addi r31,r26,-18108
	ctx.r31.s64 = ctx.r26.s64 + -18108;
loc_822E3550:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822e3638
	if (!ctx.cr6.gt) goto loc_822E3638;
loc_822E355C:
	// lwz r10,18140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18140);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r8,18088(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18088);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lwz r9,18136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,13444
	ctx.r9.s64 = ctx.r11.s64 + 13444;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
loc_822E3598:
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// sth r6,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r6.u16);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// lhzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// mullw r7,r8,r7
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lhz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mullw r4,r3,r7
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lhzu r8,8(r10)
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r7,r6,r8
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x822e3598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3598;
	// lwz r4,18112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18112);
	// lwz r9,18444(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18444);
	// mullw r11,r4,r29
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// lwz r10,18120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E362C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822e355c
	if (ctx.cr6.lt) goto loc_822E355C;
loc_822E3638:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822e3550
	if (ctx.cr6.lt) goto loc_822E3550;
loc_822E3644:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,72
	ctx.r26.s64 = ctx.r26.s64 + 72;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822e352c
	if (ctx.cr6.lt) goto loc_822E352C;
loc_822E365C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E34F8) {
	__imp__sub_822E34F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3664) {
	__imp__sub_822E3664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822E3670;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,221
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 221, ctx.xer);
	// bgt cr6,0x822e3b08
	if (ctx.cr6.gt) goto loc_822E3B08;
	// beq cr6,0x822e3ac4
	if (ctx.cr6.eq) goto loc_822E3AC4;
	// cmpwi cr6,r4,196
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 196, ctx.xer);
	// beq cr6,0x822e3820
	if (ctx.cr6.eq) goto loc_822E3820;
	// cmpwi cr6,r4,219
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 219, ctx.xer);
	// bne cr6,0x822e3b10
	if (!ctx.cr6.eq) goto loc_822E3B10;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E36A0;
	sub_822E0D20(ctx, base);
	// addic. r26,r3,-2
	ctx.xer.ca = ctx.r3.u32 > 1;
	ctx.r26.s64 = ctx.r3.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble 0x822e37d8
	if (!ctx.cr0.gt) goto loc_822E37D8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r11,-8832
	ctx.r27.s64 = ctx.r11.s64 + -8832;
loc_822E36B0:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e36d4
	if (!ctx.cr6.lt) goto loc_822E36D4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3700
	goto loc_822E3700;
loc_822E36D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e36fc
	if (ctx.cr6.eq) goto loc_822E36FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E36E8;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3700
	goto loc_822E3700;
loc_822E36FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3700:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// srawi. r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r28,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq 0x822e3720
	if (ctx.cr0.eq) goto loc_822E3720;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822e37e8
	if (!ctx.cr6.eq) goto loc_822E37E8;
loc_822E3720:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bgt cr6,0x822e3804
	if (ctx.cr6.gt) goto loc_822E3804;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r29,r10,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
loc_822E3730:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822e3744
	if (ctx.cr6.eq) goto loc_822E3744;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E3740;
	sub_822E0D20(ctx, base);
	// b 0x822e3798
	goto loc_822E3798;
loc_822E3744:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e3768
	if (!ctx.cr6.lt) goto loc_822E3768;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3794
	goto loc_822E3794;
loc_822E3768:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3790
	if (ctx.cr6.eq) goto loc_822E3790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E377C;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3794
	goto loc_822E3794;
loc_822E3790:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3794:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_822E3798:
	// addi r11,r27,-88
	ctx.r11.s64 = ctx.r27.s64 + -88;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// addi r9,r11,6722
	ctx.r9.s64 = ctx.r11.s64 + 6722;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r8,r23
	PPC_STORE_U16(ctx.r8.u32 + ctx.r23.u32, ctx.r10.u16);
	// blt cr6,0x822e3730
	if (ctx.cr6.lt) goto loc_822E3730;
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// addi r9,r11,65
	ctx.r9.s64 = ctx.r11.s64 + 65;
	// subf. r26,r9,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt 0x822e36b0
	if (ctx.cr0.gt) goto loc_822E36B0;
loc_822E37D8:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E37E8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7732
	ctx.r11.s64 = ctx.r11.s64 + -7732;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3804:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7748
	ctx.r11.s64 = ctx.r11.s64 + -7748;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3820:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E3828;
	sub_822E0D20(ctx, base);
	// addic. r28,r3,-2
	ctx.xer.ca = ctx.r3.u32 > 1;
	ctx.r28.s64 = ctx.r3.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x822e3a98
	if (!ctx.cr0.gt) goto loc_822E3A98;
	// li r22,1
	ctx.r22.s64 = 1;
loc_822E3834:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e385c
	if (!ctx.cr6.lt) goto loc_822E385C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3888
	goto loc_822E3888;
loc_822E385C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3884
	if (ctx.cr6.eq) goto loc_822E3884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E3870;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3888
	goto loc_822E3888;
loc_822E3884:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3888:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r27,r11,28
	ctx.r27.u64 = ctx.r11.u32 & 0xF;
	// srawi r26,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 4;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bgt cr6,0x822e3aa8
	if (ctx.cr6.gt) goto loc_822E3AA8;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x822e3aa8
	if (ctx.cr6.gt) goto loc_822E3AA8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_822E38B0:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e38d4
	if (!ctx.cr6.lt) goto loc_822E38D4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3900
	goto loc_822E3900;
loc_822E38D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e38fc
	if (ctx.cr6.eq) goto loc_822E38FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E38E8;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3900
	goto loc_822E3900;
loc_822E38FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3900:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bne 0x822e38b0
	if (!ctx.cr0.eq) goto loc_822E38B0;
	// cmpwi cr6,r25,256
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 256, ctx.xer);
	// bgt cr6,0x822e3aa8
	if (ctx.cr6.gt) goto loc_822E3AA8;
	// mulli r11,r27,1680
	ctx.r11.s64 = ctx.r27.s64 * 1680;
	// addi r24,r28,-17
	ctx.r24.s64 = ctx.r28.s64 + -17;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bne cr6,0x822e394c
	if (!ctx.cr6.eq) goto loc_822E394C;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x822e16e0
	ctx.lr = 0x822E393C;
	sub_822E16E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e3dac
	if (ctx.cr6.eq) goto loc_822E3DAC;
	// addi r28,r29,1028
	ctx.r28.s64 = ctx.r29.s64 + 1028;
	// b 0x822e3960
	goto loc_822E3960;
loc_822E394C:
	// addi r3,r29,6724
	ctx.r3.s64 = ctx.r29.s64 + 6724;
	// bl 0x822e16e0
	ctx.lr = 0x822E3954;
	sub_822E16E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e3dac
	if (ctx.cr6.eq) goto loc_822E3DAC;
	// addi r28,r29,7748
	ctx.r28.s64 = ctx.r29.s64 + 7748;
loc_822E3960:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x822e39cc
	if (!ctx.cr6.gt) goto loc_822E39CC;
loc_822E396C:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e3990
	if (!ctx.cr6.lt) goto loc_822E3990;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e39bc
	goto loc_822E39BC;
loc_822E3990:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e39b8
	if (ctx.cr6.eq) goto loc_822E39B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E39A4;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e39bc
	goto loc_822E39BC;
loc_822E39B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E39BC:
	// stbx r11,r28,r30
	PPC_STORE_U8(ctx.r28.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822e396c
	if (ctx.cr6.lt) goto loc_822E396C;
loc_822E39CC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822e3a90
	if (ctx.cr6.eq) goto loc_822E3A90;
	// rlwinm r10,r27,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 10) & 0xFFFFFC00;
	// li r11,512
	ctx.r11.s64 = 512;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addi r5,r29,6724
	ctx.r5.s64 = ctx.r29.s64 + 6724;
	// addi r8,r10,13956
	ctx.r8.s64 = ctx.r10.s64 + 13956;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E39F0:
	// lbzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bge cr6,0x822e3a84
	if (!ctx.cr6.lt) goto loc_822E3A84;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1024);
	// lbz r9,1280(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1280);
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3a84
	if (ctx.cr6.eq) goto loc_822E3A84;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bgt cr6,0x822e3a84
	if (ctx.cr6.gt) goto loc_822E3A84;
	// slw r10,r6,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// clrlwi r4,r10,23
	ctx.r4.u64 = ctx.r10.u32 & 0x1FF;
	// subfic r3,r11,9
	ctx.xer.ca = ctx.r11.u32 <= 9;
	ctx.r3.s64 = 9 - ctx.r11.s64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// sraw r10,r4,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// slw r4,r22,r31
	ctx.r4.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822e3a5c
	if (!ctx.cr6.lt) goto loc_822E3A5C;
	// slw r4,r22,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822E3A5C:
	// cmpwi cr6,r10,-128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -128, ctx.xer);
	// blt cr6,0x822e3a84
	if (ctx.cr6.lt) goto loc_822E3A84;
	// cmpwi cr6,r10,127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 127, ctx.xer);
	// bgt cr6,0x822e3a84
	if (ctx.cr6.gt) goto loc_822E3A84;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
loc_822E3A84:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x822e39f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E39F0;
loc_822E3A90:
	// subf. r28,r25,r24
	ctx.r28.s64 = ctx.r24.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt 0x822e3834
	if (ctx.cr0.gt) goto loc_822E3834;
loc_822E3A98:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3AA8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7764
	ctx.r11.s64 = ctx.r11.s64 + -7764;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3AC4:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E3ACC;
	sub_822E0D20(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x822e3af0
	if (ctx.cr6.eq) goto loc_822E3AF0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7776
	ctx.r11.s64 = ctx.r11.s64 + -7776;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3AF0:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E3AF8;
	sub_822E0D20(ctx, base);
	// stw r3,18436(r23)
	PPC_STORE_U32(ctx.r23.u32 + 18436, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3B08:
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// beq cr6,0x822e3d9c
	if (ctx.cr6.eq) goto loc_822E3D9C;
loc_822E3B10:
	// cmpwi cr6,r31,224
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 224, ctx.xer);
	// blt cr6,0x822e3b20
	if (ctx.cr6.lt) goto loc_822E3B20;
	// cmpwi cr6,r31,239
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 239, ctx.xer);
	// ble cr6,0x822e3b28
	if (!ctx.cr6.gt) goto loc_822E3B28;
loc_822E3B20:
	// cmpwi cr6,r31,254
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 254, ctx.xer);
	// bne cr6,0x822e3d80
	if (!ctx.cr6.eq) goto loc_822E3D80;
loc_822E3B28:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E3B30;
	sub_822E0D20(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x822e3b70
	if (!ctx.cr6.lt) goto loc_822E3B70;
	// cmpwi cr6,r31,254
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 254, ctx.xer);
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x822e3b5c
	if (!ctx.cr6.eq) goto loc_822E3B5C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,-7788
	ctx.r11.s64 = ctx.r11.s64 + -7788;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3B5C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,-7800
	ctx.r11.s64 = ctx.r11.s64 + -7800;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3B70:
	// addi r27,r3,-2
	ctx.r27.s64 = ctx.r3.s64 + -2;
	// cmpwi cr6,r31,224
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 224, ctx.xer);
	// bne cr6,0x822e3c38
	if (!ctx.cr6.eq) goto loc_822E3C38;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// blt cr6,0x822e3d68
	if (ctx.cr6.lt) goto loc_822E3D68;
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r28,r11,-8832
	ctx.r28.s64 = ctx.r11.s64 + -8832;
loc_822E3B98:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e3bbc
	if (!ctx.cr6.lt) goto loc_822E3BBC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3be8
	goto loc_822E3BE8;
loc_822E3BBC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3be4
	if (ctx.cr6.eq) goto loc_822E3BE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E3BD0;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3be8
	goto loc_822E3BE8;
loc_822E3BE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3BE8:
	// addi r10,r28,-8
	ctx.r10.s64 = ctx.r28.s64 + -8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 & ctx.r29.u64;
	// blt cr6,0x822e3b98
	if (ctx.cr6.lt) goto loc_822E3B98;
	// addi r27,r27,-5
	ctx.r27.s64 = ctx.r27.s64 + -5;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822e3d68
	if (ctx.cr6.eq) goto loc_822E3D68;
	// stw r22,18404(r23)
	PPC_STORE_U32(ctx.r23.u32 + 18404, ctx.r22.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x822e0cc0
	ctx.lr = 0x822E3C2C;
	sub_822E0CC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3C38:
	// cmpwi cr6,r31,238
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 238, ctx.xer);
	// bne cr6,0x822e3d68
	if (!ctx.cr6.eq) goto loc_822E3D68;
	// cmpwi cr6,r27,12
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 12, ctx.xer);
	// blt cr6,0x822e3d68
	if (ctx.cr6.lt) goto loc_822E3D68;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-8832
	ctx.r28.s64 = ctx.r11.s64 + -8832;
loc_822E3C58:
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e3c7c
	if (!ctx.cr6.lt) goto loc_822E3C7C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3ca8
	goto loc_822E3CA8;
loc_822E3C7C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3ca4
	if (ctx.cr6.eq) goto loc_822E3CA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E3C90;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3ca8
	goto loc_822E3CA8;
loc_822E3CA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3CA8:
	// lbzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 & ctx.r29.u64;
	// blt cr6,0x822e3c58
	if (ctx.cr6.lt) goto loc_822E3C58;
	// addi r27,r27,-6
	ctx.r27.s64 = ctx.r27.s64 + -6;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822e3d68
	if (ctx.cr6.eq) goto loc_822E3D68;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822e3d04
	if (ctx.cr6.lt) goto loc_822E3D04;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3d0c
	if (ctx.cr6.eq) goto loc_822E3D0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E3D00;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
loc_822E3D04:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_822E3D0C:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E3D14;
	sub_822E0D20(ctx, base);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E3D1C;
	sub_822E0D20(ctx, base);
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822e3d48
	if (ctx.cr6.lt) goto loc_822E3D48;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3d58
	if (ctx.cr6.eq) goto loc_822E3D58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E3D44;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
loc_822E3D48:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3d5c
	goto loc_822E3D5C;
loc_822E3D58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3D5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r27,r27,-6
	ctx.r27.s64 = ctx.r27.s64 + -6;
	// stw r11,18408(r23)
	PPC_STORE_U32(ctx.r23.u32 + 18408, ctx.r11.u32);
loc_822E3D68:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x822e0cc0
	ctx.lr = 0x822E3D74;
	sub_822E0CC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3D80:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7816
	ctx.r11.s64 = ctx.r11.s64 + -7816;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822E3D9C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7832
	ctx.r11.s64 = ctx.r11.s64 + -7832;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
loc_822E3DAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E3668) {
	__imp__sub_822E3668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822E3DC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E3DD0;
	sub_822E0D20(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e3df8
	if (!ctx.cr6.lt) goto loc_822E3DF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3e24
	goto loc_822E3E24;
loc_822E3DF8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3e20
	if (ctx.cr6.eq) goto loc_822E3E20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E3E0C;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3e24
	goto loc_822E3E24;
loc_822E3E20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3E24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,18416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18416, ctx.r11.u32);
	// blt cr6,0x822e418c
	if (ctx.cr6.lt) goto loc_822E418C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x822e418c
	if (ctx.cr6.gt) goto loc_822E418C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822e418c
	if (ctx.cr6.gt) goto loc_822E418C;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822e3e78
	if (ctx.cr6.eq) goto loc_822E3E78;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7660
	ctx.r11.s64 = ctx.r11.s64 + -7660;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E3E78:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e3fb8
	if (!ctx.cr6.gt) goto loc_822E3FB8;
	// addi r27,r30,18416
	ctx.r27.s64 = ctx.r30.s64 + 18416;
loc_822E3E88:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e3eac
	if (!ctx.cr6.lt) goto loc_822E3EAC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3ed8
	goto loc_822E3ED8;
loc_822E3EAC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3ed4
	if (ctx.cr6.eq) goto loc_822E3ED4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E3EC0;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3ed8
	goto loc_822E3ED8;
loc_822E3ED4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3ED8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e3f00
	if (!ctx.cr6.lt) goto loc_822E3F00;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3f2c
	goto loc_822E3F2C;
loc_822E3F00:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3f28
	if (ctx.cr6.eq) goto loc_822E3F28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E3F14;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e3f2c
	goto loc_822E3F2C;
loc_822E3F28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E3F2C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822e3f6c
	if (!ctx.cr6.gt) goto loc_822E3F6C;
	// addi r10,r30,18076
	ctx.r10.s64 = ctx.r30.s64 + 18076;
loc_822E3F48:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x822e3f6c
	if (ctx.cr6.eq) goto loc_822E3F6C;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822e3f48
	if (ctx.cr6.lt) goto loc_822E3F48;
loc_822E3F6C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822e419c
	if (ctx.cr6.eq) goto loc_822E419C;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,18092(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18092, ctx.r10.u32);
	// bgt cr6,0x822e3fdc
	if (ctx.cr6.gt) goto loc_822E3FDC;
	// clrlwi r10,r8,28
	ctx.r10.u64 = ctx.r8.u32 & 0xF;
	// stw r10,18096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18096, ctx.r10.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bgt cr6,0x822e3ff8
	if (ctx.cr6.gt) goto loc_822E3FF8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
	// lwz r11,18416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18416);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e3e88
	if (ctx.cr6.lt) goto loc_822E3E88;
loc_822E3FB8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e4014
	if (!ctx.cr6.lt) goto loc_822E4014;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e4040
	goto loc_822E4040;
loc_822E3FDC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7672
	ctx.r11.s64 = ctx.r11.s64 + -7672;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E3FF8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7684
	ctx.r11.s64 = ctx.r11.s64 + -7684;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E4014:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e403c
	if (ctx.cr6.eq) goto loc_822E403C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E4028;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e4040
	goto loc_822E4040;
loc_822E403C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E4040:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,18384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18384, ctx.r11.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e406c
	if (!ctx.cr6.lt) goto loc_822E406C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e4098
	goto loc_822E4098;
loc_822E406C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4094
	if (ctx.cr6.eq) goto loc_822E4094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E4080;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e4098
	goto loc_822E4098;
loc_822E4094:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E4098:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,18388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18388, ctx.r11.u32);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e40c4
	if (!ctx.cr6.lt) goto loc_822E40C4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e40f0
	goto loc_822E40F0;
loc_822E40C4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e40ec
	if (ctx.cr6.eq) goto loc_822E40EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E40D8;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e40f0
	goto loc_822E40F0;
loc_822E40EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E40F0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,18380(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18380);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// stw r8,18396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18396, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,18392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18392, ctx.r9.u32);
	// beq cr6,0x822e415c
	if (ctx.cr6.eq) goto loc_822E415C;
	// lwz r10,18384(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18384);
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bgt cr6,0x822e4140
	if (ctx.cr6.gt) goto loc_822E4140;
	// lwz r11,18388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18388);
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// bgt cr6,0x822e4140
	if (ctx.cr6.gt) goto loc_822E4140;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822e4140
	if (ctx.cr6.gt) goto loc_822E4140;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// bgt cr6,0x822e4140
	if (ctx.cr6.gt) goto loc_822E4140;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// ble cr6,0x822e4180
	if (!ctx.cr6.gt) goto loc_822E4180;
loc_822E4140:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7692
	ctx.r11.s64 = ctx.r11.s64 + -7692;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E415C:
	// lwz r11,18384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e4140
	if (!ctx.cr6.eq) goto loc_822E4140;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822e4140
	if (!ctx.cr6.eq) goto loc_822E4140;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822e4140
	if (!ctx.cr6.eq) goto loc_822E4140;
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,18388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18388, ctx.r11.u32);
loc_822E4180:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E418C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7716
	ctx.r11.s64 = ctx.r11.s64 + -7716;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
loc_822E419C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E3DB8) {
	__imp__sub_822E3DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E41A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822E41B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822e421c
	if (!ctx.cr6.gt) goto loc_822E421C;
	// addi r31,r3,18124
	ctx.r31.s64 = ctx.r3.s64 + 18124;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822E41CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e41e4
	if (ctx.cr6.eq) goto loc_822E41E4;
	// bl 0x82634d40
	ctx.lr = 0x822E41DC;
	sub_82634D40(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
loc_822E41E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e41fc
	if (ctx.cr6.eq) goto loc_822E41FC;
	// bl 0x82634d40
	ctx.lr = 0x822E41F4;
	sub_82634D40(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_822E41FC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e4210
	if (ctx.cr6.eq) goto loc_822E4210;
	// bl 0x82634d40
	ctx.lr = 0x822E420C;
	sub_82634D40(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_822E4210:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bne 0x822e41cc
	if (!ctx.cr0.eq) goto loc_822E41CC;
loc_822E421C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E41A8) {
	__imp__sub_822E41A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822E4230;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r22,1
	ctx.r22.s64 = 1;
	// bl 0x822e0d20
	ctx.lr = 0x822E4250;
	sub_822E0D20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bge cr6,0x822e4278
	if (!ctx.cr6.lt) goto loc_822E4278;
loc_822E425C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7552
	ctx.r11.s64 = ctx.r11.s64 + -7552;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E4278:
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e429c
	if (!ctx.cr6.lt) goto loc_822E429C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e42c8
	goto loc_822E42C8;
loc_822E429C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e42c4
	if (ctx.cr6.eq) goto loc_822E42C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E42B0;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e42c8
	goto loc_822E42C8;
loc_822E42C4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E42C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x822e42f0
	if (ctx.cr6.eq) goto loc_822E42F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7564
	ctx.r11.s64 = ctx.r11.s64 + -7564;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E42F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E42F8;
	sub_822E0D20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x822e4320
	if (!ctx.cr6.eq) goto loc_822E4320;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7584
	ctx.r11.s64 = ctx.r11.s64 + -7584;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E4320:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E4328;
	sub_822E0D20(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e434c
	if (!ctx.cr6.eq) goto loc_822E434C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7592
	ctx.r11.s64 = ctx.r11.s64 + -7592;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E434C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x822e4374
	if (!ctx.cr6.gt) goto loc_822E4374;
loc_822E4358:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7604
	ctx.r11.s64 = ctx.r11.s64 + -7604;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E4374:
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bgt cr6,0x822e4358
	if (ctx.cr6.gt) goto loc_822E4358;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e439c
	if (!ctx.cr6.lt) goto loc_822E439C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e43c8
	goto loc_822E43C8;
loc_822E439C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e43c4
	if (ctx.cr6.eq) goto loc_822E43C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E43B0;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e43c8
	goto loc_822E43C8;
loc_822E43C4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E43C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822e4400
	if (ctx.cr6.eq) goto loc_822E4400;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822e4400
	if (ctx.cr6.eq) goto loc_822E4400;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822e4400
	if (ctx.cr6.eq) goto loc_822E4400;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7624
	ctx.r11.s64 = ctx.r11.s64 + -7624;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E4400:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// ble cr6,0x822e4420
	if (!ctx.cr6.gt) goto loc_822E4420;
	// addi r10,r24,18060
	ctx.r10.s64 = ctx.r24.s64 + 18060;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E4414:
	// stw r23,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r23.u32);
	// stwu r23,72(r10)
	ea = 72 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822e4414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E4414;
loc_822E4420:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822e425c
	if (!ctx.cr6.eq) goto loc_822E425C;
	// stw r23,18412(r24)
	PPC_STORE_U32(ctx.r24.u32 + 18412, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e45bc
	if (!ctx.cr6.gt) goto loc_822E45BC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r24,18080
	ctx.r31.s64 = ctx.r24.s64 + 18080;
	// addi r28,r11,-9060
	ctx.r28.s64 = ctx.r11.s64 + -9060;
loc_822E4458:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e4478
	if (!ctx.cr6.lt) goto loc_822E4478;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e44a4
	goto loc_822E44A4;
loc_822E4478:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e44a0
	if (ctx.cr6.eq) goto loc_822E44A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E448C;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e44a4
	goto loc_822E44A4;
loc_822E44A0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E44A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822e44d0
	if (!ctx.cr6.eq) goto loc_822E44D0;
	// lbzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822e44d0
	if (!ctx.cr6.eq) goto loc_822E44D0;
	// lwz r11,18412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 18412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,18412(r24)
	PPC_STORE_U32(ctx.r24.u32 + 18412, ctx.r11.u32);
loc_822E44D0:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e44f0
	if (!ctx.cr6.lt) goto loc_822E44F0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e451c
	goto loc_822E451C;
loc_822E44F0:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4518
	if (ctx.cr6.eq) goto loc_822E4518;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E4504;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e451c
	goto loc_822E451C;
loc_822E4518:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E451C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// srawi. r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x822e47f8
	if (ctx.cr0.eq) goto loc_822E47F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x822e47f8
	if (ctx.cr6.gt) goto loc_822E47F8;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e47dc
	if (ctx.cr6.eq) goto loc_822E47DC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x822e47dc
	if (ctx.cr6.gt) goto loc_822E47DC;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e456c
	if (!ctx.cr6.lt) goto loc_822E456C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e4598
	goto loc_822E4598;
loc_822E456C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4594
	if (ctx.cr6.eq) goto loc_822E4594;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E4580;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// b 0x822e4598
	goto loc_822E4598;
loc_822E4594:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E4598:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x822e47c0
	if (ctx.cr6.gt) goto loc_822E47C0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e4458
	if (ctx.cr6.lt) goto loc_822E4458;
loc_822E45BC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x822e48fc
	if (!ctx.cr6.eq) goto loc_822E48FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e09d8
	ctx.lr = 0x822E45D8;
	sub_822E09D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e4358
	if (ctx.cr6.eq) goto loc_822E4358;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822e4624
	if (!ctx.cr6.gt) goto loc_822E4624;
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r11,r24,18084
	ctx.r11.s64 = ctx.r24.s64 + 18084;
loc_822E45F4:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x822e4604
	if (!ctx.cr6.gt) goto loc_822E4604;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
loc_822E4604:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x822e4614
	if (!ctx.cr6.gt) goto loc_822E4614;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
loc_822E4614:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822e45f4
	if (ctx.cr6.lt) goto loc_822E45F4;
loc_822E4624:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822e4698
	if (!ctx.cr6.gt) goto loc_822E4698;
	// addi r11,r24,18084
	ctx.r11.s64 = ctx.r24.s64 + 18084;
loc_822E4634:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rotlwi r10,r21,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r21.u32, 1);
	// divw r7,r21,r8
	ctx.r7.s32 = ctx.r21.s32 / ctx.r8.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// andc r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// twllei r8,0
	// subf. r3,r5,r21
	ctx.r3.s64 = ctx.r21.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// twlgei r4,-1
	// bne 0x822e47f8
	if (!ctx.cr0.eq) goto loc_822E47F8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r10,r22,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r22.u32, 1);
	// divw r7,r22,r8
	ctx.r7.s32 = ctx.r22.s32 / ctx.r8.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// andc r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// twllei r8,0
	// subf. r3,r5,r22
	ctx.r3.s64 = ctx.r22.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// twlgei r4,-1
	// bne 0x822e47dc
	if (!ctx.cr0.eq) goto loc_822E47DC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822e4634
	if (ctx.cr6.lt) goto loc_822E4634;
loc_822E4698:
	// rlwinm r10,r22,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r21,18052(r24)
	PPC_STORE_U32(ctx.r24.u32 + 18052, ctx.r21.u32);
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r22,18056(r24)
	PPC_STORE_U32(ctx.r24.u32 + 18056, ctx.r22.u32);
	// stw r10,18072(r24)
	PPC_STORE_U32(ctx.r24.u32 + 18072, ctx.r10.u32);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// stw r11,18068(r24)
	PPC_STORE_U32(ctx.r24.u32 + 18068, ctx.r11.u32);
	// twllei r11,0
	// twllei r10,0
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divwu r8,r9,r11
	ctx.r8.u32 = ctx.r9.u32 / ctx.r11.u32;
	// stw r8,18060(r24)
	PPC_STORE_U32(ctx.r24.u32 + 18060, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// divwu r6,r7,r10
	ctx.r6.u32 = ctx.r7.u32 / ctx.r10.u32;
	// stw r6,18064(r24)
	PPC_STORE_U32(ctx.r24.u32 + 18064, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822e48fc
	if (!ctx.cr6.gt) goto loc_822E48FC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r31,r24,18080
	ctx.r31.s64 = ctx.r24.s64 + 18080;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// ori r26,r10,65520
	ctx.r26.u64 = ctx.r10.u64 | 65520;
loc_822E4704:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// twllei r21,0
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// twllei r22,0
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// divwu r7,r8,r21
	ctx.r7.u32 = ctx.r8.u32 / ctx.r21.u32;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// divwu r4,r5,r22
	ctx.r4.u32 = ctx.r5.u32 / ctx.r22.u32;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r3,18060(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 18060);
	// mullw r11,r10,r3
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// rotlwi r29,r10,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r8,18064(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 18064);
	// stw r23,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r23.u32);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r23,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r23.u32);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// rotlwi r28,r6,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// blt cr6,0x822e47b8
	if (ctx.cr6.lt) goto loc_822E47B8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x822e47b8
	if (ctx.cr6.lt) goto loc_822E47B8;
	// beq cr6,0x822e47ac
	if (ctx.cr6.eq) goto loc_822E47AC;
	// divw r11,r27,r28
	ctx.r11.s32 = ctx.r27.s32 / ctx.r28.s32;
	// rlwinm r10,r29,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r8,r29,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r29.s64;
	// twllei r28,0
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e47b8
	if (ctx.cr6.eq) goto loc_822E47B8;
loc_822E47AC:
	// mullw r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x822e4814
	if (!ctx.cr6.gt) goto loc_822E4814;
loc_822E47B8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x822e481c
	goto loc_822E481C;
loc_822E47C0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7632
	ctx.r11.s64 = ctx.r11.s64 + -7632;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E47DC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7640
	ctx.r11.s64 = ctx.r11.s64 + -7640;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E47F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7648
	ctx.r11.s64 = ctx.r11.s64 + -7648;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E4814:
	// addi r3,r11,15
	ctx.r3.s64 = ctx.r11.s64 + 15;
	// bl 0x82634da0
	ctx.lr = 0x822E481C;
	sub_82634DA0(ctx, base);
loc_822E481C:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e4908
	if (ctx.cr6.eq) goto loc_822E4908;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r9,18380(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 18380);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e48e8
	if (ctx.cr6.eq) goto loc_822E48E8;
	// srawi r11,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 3;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// blt cr6,0x822e48c0
	if (ctx.cr6.lt) goto loc_822E48C0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x822e48c0
	if (ctx.cr6.lt) goto loc_822E48C0;
	// beq cr6,0x822e488c
	if (ctx.cr6.eq) goto loc_822E488C;
	// divw r11,r27,r28
	ctx.r11.s32 = ctx.r27.s32 / ctx.r28.s32;
	// rlwinm r10,r29,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r8,r29,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r29.s64;
	// twllei r28,0
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e48c0
	if (ctx.cr6.eq) goto loc_822E48C0;
loc_822E488C:
	// mullw. r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e48c0
	if (ctx.cr0.lt) goto loc_822E48C0;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r10,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e48c0
	if (ctx.cr6.eq) goto loc_822E48C0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x822e48c8
	if (!ctx.cr6.gt) goto loc_822E48C8;
loc_822E48C0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x822e48d0
	goto loc_822E48D0;
loc_822E48C8:
	// addi r3,r11,15
	ctx.r3.s64 = ctx.r11.s64 + 15;
	// bl 0x82634da0
	ctx.lr = 0x822E48D0;
	sub_82634DA0(ctx, base);
loc_822E48D0:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e4908
	if (ctx.cr6.eq) goto loc_822E4908;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_822E48E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e4704
	if (ctx.cr6.lt) goto loc_822E4704;
loc_822E48FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822E4908:
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// addi r4,r25,1
	ctx.r4.s64 = ctx.r25.s64 + 1;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822e41a8
	ctx.lr = 0x822E4928;
	sub_822E41A8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4228) {
	__imp__sub_822E4228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822E4938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r11,18404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18404, ctx.r11.u32);
	// stb r10,18372(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18372, ctx.r10.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,18408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18408, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x822e2d80
	ctx.lr = 0x822E4960;
	sub_822E2D80(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,216
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 216, ctx.xer);
	// beq cr6,0x822e4988
	if (ctx.cr6.eq) goto loc_822E4988;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7532
	ctx.r11.s64 = ctx.r11.s64 + -7532;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822E4988:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x822e499c
	if (!ctx.cr6.eq) goto loc_822E499C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822E499C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e2d80
	ctx.lr = 0x822E49A4;
	sub_822E2D80(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r4,192
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 192, ctx.xer);
	// beq cr6,0x822e4a48
	if (ctx.cr6.eq) goto loc_822E4A48;
loc_822E49B0:
	// cmpwi cr6,r4,193
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 193, ctx.xer);
	// beq cr6,0x822e4a48
	if (ctx.cr6.eq) goto loc_822E4A48;
	// cmpwi cr6,r4,194
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 194, ctx.xer);
	// beq cr6,0x822e4a48
	if (ctx.cr6.eq) goto loc_822E4A48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e3668
	ctx.lr = 0x822E49C8;
	sub_822E3668(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e4a74
	if (ctx.cr6.eq) goto loc_822E4A74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e2d80
	ctx.lr = 0x822E49D8;
	sub_822E2D80(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// bne cr6,0x822e4a40
	if (!ctx.cr6.eq) goto loc_822E4A40;
loc_822E49E4:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4a18
	if (ctx.cr6.eq) goto loc_822E4A18;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E4A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e4a2c
	if (ctx.cr6.eq) goto loc_822E4A2C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4a80
	if (ctx.cr6.eq) goto loc_822E4A80;
loc_822E4A18:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze. r11,r29
	// bne 0x822e4a80
	if (!ctx.cr0.eq) goto loc_822E4A80;
loc_822E4A2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e2d80
	ctx.lr = 0x822E4A34;
	sub_822E2D80(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// beq cr6,0x822e49e4
	if (ctx.cr6.eq) goto loc_822E49E4;
loc_822E4A40:
	// cmpwi cr6,r4,192
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 192, ctx.xer);
	// bne cr6,0x822e49b0
	if (!ctx.cr6.eq) goto loc_822E49B0;
loc_822E4A48:
	// addi r11,r4,-194
	ctx.r11.s64 = ctx.r4.s64 + -194;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,18380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18380, ctx.r9.u32);
	// bl 0x822e4228
	ctx.lr = 0x822E4A64;
	sub_822E4228(ctx, base);
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// subfe r3,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822E4A74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822E4A80:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7540
	ctx.r11.s64 = ctx.r11.s64 + -7540;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4930) {
	__imp__sub_822E4930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4A9C) {
	__imp__sub_822E4A9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822E4AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
loc_822E4AB8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4aec
	if (ctx.cr6.eq) goto loc_822E4AEC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E4AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e4b00
	if (ctx.cr6.eq) goto loc_822E4B00;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4c7c
	if (ctx.cr6.eq) goto loc_822E4C7C;
loc_822E4AEC:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze. r11,r27
	// bne 0x822e4c7c
	if (!ctx.cr0.eq) goto loc_822E4C7C;
loc_822E4B00:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e4b24
	if (!ctx.cr6.lt) goto loc_822E4B24;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e4b50
	goto loc_822E4B50;
loc_822E4B24:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4b4c
	if (ctx.cr6.eq) goto loc_822E4B4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E4B38;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e4b50
	goto loc_822E4B50;
loc_822E4B4C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822E4B50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x822e4ab8
	if (!ctx.cr6.eq) goto loc_822E4AB8;
loc_822E4B5C:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4b90
	if (ctx.cr6.eq) goto loc_822E4B90;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E4B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e4ba4
	if (ctx.cr6.eq) goto loc_822E4BA4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4c7c
	if (ctx.cr6.eq) goto loc_822E4C7C;
loc_822E4B90:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze. r11,r27
	// bne 0x822e4c7c
	if (!ctx.cr0.eq) goto loc_822E4C7C;
loc_822E4BA4:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e4bc8
	if (!ctx.cr6.lt) goto loc_822E4BC8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e4c5c
	goto loc_822E4C5C;
loc_822E4BC8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4c58
	if (ctx.cr6.eq) goto loc_822E4C58;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E4BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// bne cr6,0x822e4c38
	if (!ctx.cr6.eq) goto loc_822E4C38;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e4c5c
	goto loc_822E4C5C;
loc_822E4C38:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e4c5c
	goto loc_822E4C5C;
loc_822E4C58:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822E4C5C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4c70
	if (ctx.cr6.eq) goto loc_822E4C70;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x822e4c80
	if (!ctx.cr6.eq) goto loc_822E4C80;
loc_822E4C70:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822e4b5c
	if (ctx.cr6.eq) goto loc_822E4B5C;
	// b 0x822e4ab8
	goto loc_822E4AB8;
loc_822E4C7C:
	// li r3,255
	ctx.r3.s64 = 255;
loc_822E4C80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4AA0) {
	__imp__sub_822E4AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4C88) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,18124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18124, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,18128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18128, ctx.r11.u32);
	// stw r11,18196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18196, ctx.r11.u32);
	// stw r11,18200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18200, ctx.r11.u32);
	// stw r11,18268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18268, ctx.r11.u32);
	// stw r11,18272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18272, ctx.r11.u32);
	// stw r11,18340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18340, ctx.r11.u32);
	// stw r11,18344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18344, ctx.r11.u32);
	// stw r11,18436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18436, ctx.r11.u32);
	// bl 0x822e4930
	ctx.lr = 0x822E4CD0;
	sub_822E4930(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e4ce0
	if (!ctx.cr6.eq) goto loc_822E4CE0;
loc_822E4CD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e4ddc
	goto loc_822E4DDC;
loc_822E4CE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e2d80
	ctx.lr = 0x822E4CE8;
	sub_822E2D80(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r4,217
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 217, ctx.xer);
	// beq cr6,0x822e4dc4
	if (ctx.cr6.eq) goto loc_822E4DC4;
loc_822E4CF4:
	// cmpwi cr6,r4,218
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 218, ctx.xer);
	// bne cr6,0x822e4d54
	if (!ctx.cr6.eq) goto loc_822E4D54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e3db8
	ctx.lr = 0x822E4D04;
	sub_822E3DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e4cd8
	if (ctx.cr6.eq) goto loc_822E4CD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e2e88
	ctx.lr = 0x822E4D14;
	sub_822E2E88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e4cd8
	if (ctx.cr6.eq) goto loc_822E4CD8;
	// lbz r11,18372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18372);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x822e4d34
	if (!ctx.cr6.eq) goto loc_822E4D34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4aa0
	ctx.lr = 0x822E4D30;
	sub_822E4AA0(ctx, base);
	// stb r3,18372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18372, ctx.r3.u8);
loc_822E4D34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e2d80
	ctx.lr = 0x822E4D3C;
	sub_822E2D80(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r4,208
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 208, ctx.xer);
	// blt cr6,0x822e4dbc
	if (ctx.cr6.lt) goto loc_822E4DBC;
	// cmpwi cr6,r4,215
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 215, ctx.xer);
	// bgt cr6,0x822e4dbc
	if (ctx.cr6.gt) goto loc_822E4DBC;
	// b 0x822e4db0
	goto loc_822E4DB0;
loc_822E4D54:
	// cmpwi cr6,r4,220
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 220, ctx.xer);
	// bne cr6,0x822e4da0
	if (!ctx.cr6.eq) goto loc_822E4DA0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E4D64;
	sub_822E0D20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e0d20
	ctx.lr = 0x822E4D70;
	sub_822E0D20(ctx, base);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x822e4df4
	if (!ctx.cr6.eq) goto loc_822E4DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e4db0
	if (ctx.cr6.eq) goto loc_822E4DB0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7512
	ctx.r11.s64 = ctx.r11.s64 + -7512;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// b 0x822e4ddc
	goto loc_822E4DDC;
loc_822E4DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e3668
	ctx.lr = 0x822E4DA8;
	sub_822E3668(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e4dd8
	if (ctx.cr6.eq) goto loc_822E4DD8;
loc_822E4DB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e2d80
	ctx.lr = 0x822E4DB8;
	sub_822E2D80(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
loc_822E4DBC:
	// cmpwi cr6,r4,217
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 217, ctx.xer);
	// bne cr6,0x822e4cf4
	if (!ctx.cr6.eq) goto loc_822E4CF4;
loc_822E4DC4:
	// lwz r11,18380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4dd8
	if (ctx.cr6.eq) goto loc_822E4DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e34f8
	ctx.lr = 0x822E4DD8;
	sub_822E34F8(ctx, base);
loc_822E4DD8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822E4DDC:
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
loc_822E4DF4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7524
	ctx.r11.s64 = ctx.r11.s64 + -7524;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// b 0x822e4ddc
	goto loc_822E4DDC;
}

PPC_WEAK_FUNC(sub_822E4C88) {
	__imp__sub_822E4C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4E0C) {
	__imp__sub_822E4E0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4E10) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4E10) {
	__imp__sub_822E4E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4E18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r7,r5,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r6,r5,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_822E4E30:
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822e4e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E4E30;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4E18) {
	__imp__sub_822E4E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x822e4e7c
	if (!ctx.cr6.eq) goto loc_822E4E7C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_822E4E7C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// ble cr6,0x822e4f04
	if (!ctx.cr6.gt) goto loc_822E4F04;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E4EC8:
	// lbzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lbzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822e4ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E4EC8;
loc_822E4F04:
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r6,-1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4E60) {
	__imp__sub_822E4E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x822e4f78
	if (!ctx.cr6.eq) goto loc_822E4F78;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// blr 
	return;
loc_822E4F78:
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// ble cr6,0x822e5008
	if (!ctx.cr6.gt) goto loc_822E5008;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// subf r31,r5,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E4FB0:
	// lbzx r7,r31,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r4,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stbu r4,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x822e4fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E4FB0;
loc_822E5008:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r9,-1(r8)
	PPC_STORE_U8(ctx.r8.u32 + -1, ctx.r9.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4F40) {
	__imp__sub_822E4F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5024) {
	__imp__sub_822E5024(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5028) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_822E5038:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822e5058
	if (!ctx.cr6.gt) goto loc_822E5058;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_822E5048:
	// lbzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822e5048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E5048;
loc_822E5058:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822e5038
	if (ctx.cr6.lt) goto loc_822E5038;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5028) {
	__imp__sub_822E5028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E506C) {
	__imp__sub_822E506C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5070) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822E5078;
	__savegprlr_24(ctx, base);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822e516c
	if (!ctx.cr6.gt) goto loc_822E516C;
	// subf r29,r6,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r6.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r28,r6,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lis r11,-6
	ctx.r11.s64 = -393216;
	// lis r9,11
	ctx.r9.s64 = 720896;
	// lis r7,22
	ctx.r7.s64 = 1441792;
	// lis r6,28
	ctx.r6.s64 = 1835008;
	// addi r30,r3,2
	ctx.r30.s64 = ctx.r3.s64 + 2;
	// ori r31,r11,32256
	ctx.r31.u64 = ctx.r11.u64 | 32256;
	// ori r3,r9,27904
	ctx.r3.u64 = ctx.r9.u64 | 27904;
	// lis r27,8
	ctx.r27.s64 = 524288;
	// ori r4,r7,28416
	ctx.r4.u64 = ctx.r7.u64 | 28416;
	// ori r5,r6,23040
	ctx.r5.u64 = ctx.r6.u64 | 23040;
	// li r26,255
	ctx.r26.s64 = 255;
loc_822E50BC:
	// lbzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// lbzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// rotlwi r11,r11,20
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 20);
	// mullw r6,r9,r31
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// mullw r25,r7,r3
	ctx.r25.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r6,r6,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// add r24,r7,r11
	ctx.r24.u64 = ctx.r7.u64 + ctx.r11.u64;
	// subf r6,r25,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r25.s64;
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// srawi r9,r24,20
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r24.s32 >> 20;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// srawi r7,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 20;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x822e511c
	if (!ctx.cr6.gt) goto loc_822E511C;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 & ctx.r26.u64;
loc_822E511C:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x822e5130
	if (!ctx.cr6.gt) goto loc_822E5130;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 & ctx.r26.u64;
loc_822E5130:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x822e5144
	if (!ctx.cr6.gt) goto loc_822E5144;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
loc_822E5144:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r26,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r26.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,-2(r30)
	PPC_STORE_U8(ctx.r30.u32 + -2, ctx.r9.u8);
	// stb r7,-1(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r6,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r6.u8);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// bdnz 0x822e50bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E50BC;
loc_822E516C:
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E5070) {
	__imp__sub_822E5070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822E5178;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r20,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x822e5b34
	if (ctx.cr6.lt) goto loc_822E5B34;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bgt cr6,0x822e5b34
	if (ctx.cr6.gt) goto loc_822E5B34;
	// bl 0x822e4c88
	ctx.lr = 0x822E51B4;
	sub_822E4C88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e51dc
	if (!ctx.cr6.eq) goto loc_822E51DC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822e41a8
	ctx.lr = 0x822E51D0;
	sub_822E41A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E51DC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822e51ec
	if (ctx.cr6.eq) goto loc_822E51EC;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// b 0x822e5204
	goto loc_822E5204;
loc_822E51EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r22,3
	ctx.r22.s64 = 3;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x822e5204
	if (!ctx.cr6.lt) goto loc_822E5204;
	// li r22,1
	ctx.r22.s64 = 1;
loc_822E5204:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x822e5240
	if (!ctx.cr6.eq) goto loc_822E5240;
	// lwz r11,18412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18412);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822e5238
	if (ctx.cr6.eq) goto loc_822E5238;
	// lwz r11,18408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e5240
	if (!ctx.cr6.eq) goto loc_822E5240;
	// lwz r11,18404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e5240
	if (!ctx.cr6.eq) goto loc_822E5240;
loc_822E5238:
	// li r16,1
	ctx.r16.s64 = 1;
	// b 0x822e5244
	goto loc_822E5244;
loc_822E5240:
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
loc_822E5244:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x822e5344
	if (!ctx.cr6.eq) goto loc_822E5344;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 3, ctx.xer);
	// bge cr6,0x822e5344
	if (!ctx.cr6.lt) goto loc_822E5344;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x822e5344
	if (!ctx.cr6.eq) goto loc_822E5344;
	// li r17,1
	ctx.r17.s64 = 1;
loc_822E5260:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x822e53cc
	if (!ctx.cr6.gt) goto loc_822E53CC;
	// addi r31,r1,116
	ctx.r31.s64 = ctx.r1.s64 + 116;
	// addi r30,r29,18080
	ctx.r30.s64 = ctx.r29.s64 + 18080;
loc_822E5294:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x82634da0
	ctx.lr = 0x822E52A0;
	sub_82634DA0(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e54a0
	if (ctx.cr6.eq) goto loc_822E54A0;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,18052(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18052);
	// lwz r4,18056(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18056);
	// twllei r6,0
	// divw r11,r5,r6
	ctx.r11.s32 = ctx.r5.s32 / ctx.r6.s32;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rotlwi r8,r4,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// divw r10,r4,r3
	ctx.r10.s32 = ctx.r4.s32 / ctx.r3.s32;
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// stw r5,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r5.u32);
	// andc r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// stw r5,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r5.u32);
	// andc r6,r3,r9
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r9.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// divwu r5,r8,r11
	ctx.r5.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r3,0
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// twllei r11,0
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// twlgei r7,-1
	// twlgei r6,-1
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822e537c
	if (!ctx.cr6.eq) goto loc_822E537C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822e5368
	if (!ctx.cr6.eq) goto loc_822E5368;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,19984
	ctx.r10.s64 = ctx.r11.s64 + 19984;
	// b 0x822e53b4
	goto loc_822E53B4;
loc_822E5344:
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x822e5260
	if (ctx.cr6.gt) goto loc_822E5260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e41a8
	ctx.lr = 0x822E535C;
	sub_822E41A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E5368:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822e537c
	if (!ctx.cr6.eq) goto loc_822E537C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,19992
	ctx.r10.s64 = ctx.r11.s64 + 19992;
	// b 0x822e53b4
	goto loc_822E53B4;
loc_822E537C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822e53ac
	if (!ctx.cr6.eq) goto loc_822E53AC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822e5398
	if (!ctx.cr6.eq) goto loc_822E5398;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,20064
	ctx.r10.s64 = ctx.r11.s64 + 20064;
	// b 0x822e53b4
	goto loc_822E53B4;
loc_822E5398:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822e53ac
	if (!ctx.cr6.eq) goto loc_822E53AC;
	// lwz r11,18452(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18452);
	// stw r11,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r11.u32);
	// b 0x822e53b8
	goto loc_822E53B8;
loc_822E53AC:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,20520
	ctx.r10.s64 = ctx.r11.s64 + 20520;
loc_822E53B4:
	// stw r10,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r10.u32);
loc_822E53B8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmpw cr6,r27,r17
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x822e5294
	if (ctx.cr6.lt) goto loc_822E5294;
loc_822E53CC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// blt cr6,0x822e5474
	if (ctx.cr6.lt) goto loc_822E5474;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822e5474
	if (ctx.cr6.lt) goto loc_822E5474;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x822e5414
	if (ctx.cr6.eq) goto loc_822E5414;
	// divw r11,r9,r10
	ctx.r11.s32 = ctx.r9.s32 / ctx.r10.s32;
	// rlwinm r7,r22,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x1;
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// subfc r5,r22,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r22.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r22.s64;
	// twllei r10,0
	// adde r11,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e5474
	if (ctx.cr6.eq) goto loc_822E5474;
loc_822E5414:
	// mullw. r11,r10,r22
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e5474
	if (ctx.cr0.lt) goto loc_822E5474;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x822e5474
	if (ctx.cr6.lt) goto loc_822E5474;
	// beq cr6,0x822e5448
	if (ctx.cr6.eq) goto loc_822E5448;
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// subfc r5,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// twllei r8,0
	// adde r11,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e5474
	if (ctx.cr6.eq) goto loc_822E5474;
loc_822E5448:
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822e5474
	if (ctx.cr6.gt) goto loc_822E5474;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82634da0
	ctx.lr = 0x822E5468;
	sub_82634DA0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e54d0
	if (!ctx.cr6.eq) goto loc_822E54D0;
loc_822E5474:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e41a8
	ctx.lr = 0x822E5484;
	sub_822E41A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E54A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822e41a8
	ctx.lr = 0x822E54B4;
	sub_822E41A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E54D0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822e5adc
	if (!ctx.cr6.gt) goto loc_822E5ADC;
	// li r21,255
	ctx.r21.s64 = 255;
loc_822E54E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// mullw r10,r11,r19
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// mullw r11,r10,r22
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// add r31,r11,r18
	ctx.r31.u64 = ctx.r11.u64 + ctx.r18.u64;
	// ble cr6,0x822e55b8
	if (!ctx.cr6.gt) goto loc_822E55B8;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// addi r28,r29,18108
	ctx.r28.s64 = ctx.r29.s64 + 18108;
	// addi r30,r1,120
	ctx.r30.s64 = ctx.r1.s64 + 120;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_822E550C:
	// lwz r25,-8(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e5530
	if (ctx.cr6.lt) goto loc_822E5530;
	// lwz r27,-16(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r5,-20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x822e553c
	goto loc_822E553C;
loc_822E5530:
	// lwz r27,-16(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_822E553C:
	// lwz r11,-24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r7,-12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E5554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822e5594
	if (ctx.cr6.lt) goto loc_822E5594;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r27,-20(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20, ctx.r27.u32);
	// stw r20,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r20.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822e5594
	if (!ctx.cr6.lt) goto loc_822E5594;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r11.u32);
loc_822E5594:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// bne 0x822e550c
	if (!ctx.cr0.eq) goto loc_822E550C;
	// lwz r23,92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822E55B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 3, ctx.xer);
	// blt cr6,0x822e5828
	if (ctx.cr6.lt) goto loc_822E5828;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822e565c
	if (!ctx.cr6.eq) goto loc_822E565C;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x822e5634
	if (ctx.cr6.eq) goto loc_822E5634;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// subf r8,r24,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r24.s64;
	// subf r7,r24,r25
	ctx.r7.s64 = ctx.r25.s64 - ctx.r24.s64;
loc_822E55F8:
	// lbzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r6,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r6.u8);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r5,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r5.u8);
	// lbzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stb r21,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r21.u8);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822e55f8
	if (ctx.cr6.lt) goto loc_822E55F8;
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E5634:
	// lwz r10,18448(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18448);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E5654:
	// bctrl 
	ctx.lr = 0x822E5658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E565C:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822e57e4
	if (!ctx.cr6.eq) goto loc_822E57E4;
	// lwz r10,18408(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e5710
	if (!ctx.cr6.eq) goto loc_822E5710;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r6,r26,r23
	ctx.r6.s64 = ctx.r23.s64 - ctx.r26.s64;
	// subf r5,r26,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r26.s64;
	// subf r4,r26,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r26.s64;
loc_822E5694:
	// lbzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r9,r7,r3
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// rlwinm r7,r9,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r7,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r7.u8);
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// rlwinm r7,r9,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r9,r7,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// lbzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// mullw r9,r7,r3
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// stb r21,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r21.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x822e5694
	if (ctx.cr6.lt) goto loc_822E5694;
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E5710:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r10,18448(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18448);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x822e5654
	if (!ctx.cr6.eq) goto loc_822E5654;
	// bctrl 
	ctx.lr = 0x822E573C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
loc_822E5754:
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subfic r6,r9,255
	ctx.xer.ca = ctx.r9.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r9.s64;
	// lbzx r4,r10,r23
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// subfic r5,r8,255
	ctx.xer.ca = ctx.r8.u32 <= 255;
	ctx.r5.s64 = 255 - ctx.r8.s64;
	// subfic r3,r7,255
	ctx.xer.ca = ctx.r7.u32 <= 255;
	ctx.r3.s64 = 255 - ctx.r7.s64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r5,r7
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// rlwinm r6,r9,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r5,r8,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r4,r7,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r7,r3,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r9,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r8,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r7.u8);
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x822e5754
	if (ctx.cr6.lt) goto loc_822E5754;
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E57E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_822E57F8:
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r21,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r21.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822e57f8
	if (ctx.cr6.lt) goto loc_822E57F8;
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E5828:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x822e590c
	if (ctx.cr6.eq) goto loc_822E590C;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x822e58a0
	if (!ctx.cr6.eq) goto loc_822E58A0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r7,r25,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r25.s64;
	// subf r6,r25,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r25.s64;
	// subf r5,r25,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r25.s64;
loc_822E5858:
	// lbzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mulli r8,r9,77
	ctx.r8.s64 = ctx.r9.s64 * 77;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mulli r9,r4,150
	ctx.r9.s64 = ctx.r4.s64 * 150;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r9,r3,29
	ctx.r9.s64 = ctx.r3.s64 * 29;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// stbx r4,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e5858
	if (ctx.cr6.lt) goto loc_822E5858;
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E58A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r6,r25,r24
	ctx.r6.s64 = ctx.r24.s64 - ctx.r25.s64;
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
loc_822E58C0:
	// lbzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// mulli r7,r8,77
	ctx.r7.s64 = ctx.r8.s64 * 77;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mulli r8,r4,150
	ctx.r8.s64 = ctx.r4.s64 * 150;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r8,r3,29
	ctx.r8.s64 = ctx.r3.s64 * 29;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// stbu r21,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r21.u8);
	ctx.r10.u32 = ea;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822e58c0
	if (ctx.cr6.lt) goto loc_822E58C0;
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E590C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822e5a4c
	if (!ctx.cr6.eq) goto loc_822E5A4C;
	// lwz r9,18408(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822e59d4
	if (!ctx.cr6.eq) goto loc_822E59D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r4,r26,r23
	ctx.r4.s64 = ctx.r23.s64 - ctx.r26.s64;
	// subf r3,r26,r24
	ctx.r3.s64 = ctx.r24.s64 - ctx.r26.s64;
	// subf r30,r26,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r26.s64;
loc_822E5944:
	// lbzx r6,r4,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// mullw r10,r9,r6
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r21,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r21.u8);
	// mullw r9,r8,r6
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// mullw r8,r5,r6
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// rlwinm r6,r10,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r5,r9,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r10,r8,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r5,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r9,r5,29
	ctx.r9.s64 = ctx.r5.s64 * 29;
	// mulli r10,r6,150
	ctx.r10.s64 = ctx.r6.s64 * 150;
	// rlwinm r6,r8,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r9,r6,77
	ctx.r9.s64 = ctx.r6.s64 * 77;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822e5944
	if (ctx.cr6.lt) goto loc_822E5944;
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E59D4:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822e5a4c
	if (!ctx.cr6.eq) goto loc_822E5A4C;
	// lwz r10,18408(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18408);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822e5a4c
	if (!ctx.cr6.eq) goto loc_822E5A4C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// subf r7,r23,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r23.s64;
loc_822E5A00:
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r6,r10,255
	ctx.xer.ca = ctx.r10.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r10.s64;
	// stb r21,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r21.u8);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r3,r4,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822e5a00
	if (ctx.cr6.lt) goto loc_822E5A00;
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E5A4C:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x822e5a90
	if (!ctx.cr6.eq) goto loc_822E5A90;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r31.s64;
loc_822E5A6C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822e5a6c
	if (ctx.cr6.lt) goto loc_822E5A6C;
	// b 0x822e5ac4
	goto loc_822E5AC4;
loc_822E5A90:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822e5ac4
	if (!ctx.cr6.gt) goto loc_822E5AC4;
loc_822E5AA0:
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stbu r21,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r21.u8);
	ctx.r31.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822e5aa0
	if (ctx.cr6.lt) goto loc_822E5AA0;
loc_822E5AC4:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e54e4
	if (ctx.cr6.lt) goto loc_822E54E4;
	// lwz r21,428(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
loc_822E5ADC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e41a8
	ctx.lr = 0x822E5AEC;
	sub_822E41A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r8.u32);
	// beq cr6,0x822e5b28
	if (ctx.cr6.eq) goto loc_822E5B28;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x822e5b24
	if (!ctx.cr6.lt) goto loc_822E5B24;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822E5B24:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_822E5B28:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E5B34:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7496
	ctx.r11.s64 = ctx.r11.s64 + -7496;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E5170) {
	__imp__sub_822E5170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822E5B58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18456
	ctx.r3.s64 = 18456;
	// bl 0x82634da0
	ctx.lr = 0x822E5B68;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e5b8c
	if (!ctx.cr6.eq) goto loc_822E5B8C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822E5B8C:
	// li r5,18456
	ctx.r5.s64 = 18456;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E5B9C;
	sub_826344D0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r8,r11,10472
	ctx.r8.s64 = ctx.r11.s64 + 10472;
	// addi r7,r10,20592
	ctx.r7.s64 = ctx.r10.s64 + 20592;
	// addi r6,r9,20288
	ctx.r6.s64 = ctx.r9.s64 + 20288;
	// stw r8,18444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18444, ctx.r8.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,18448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18448, ctx.r7.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r6,18452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18452, ctx.r6.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,18408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18408, ctx.r5.u32);
	// stb r4,18372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18372, ctx.r4.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,18404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18404, ctx.r29.u32);
	// bl 0x822e2d80
	ctx.lr = 0x822E5BE4;
	sub_822E2D80(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,216
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 216, ctx.xer);
	// beq cr6,0x822e5c04
	if (ctx.cr6.eq) goto loc_822E5C04;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7532
	ctx.r11.s64 = ctx.r11.s64 + -7532;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// b 0x822e5c08
	goto loc_822E5C08;
loc_822E5C04:
	// li r29,1
	ctx.r29.s64 = 1;
loc_822E5C08:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// stw r10,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r10.u32);
	// bl 0x82634d40
	ctx.lr = 0x822E5C20;
	sub_82634D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E5B50) {
	__imp__sub_822E5B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5C2C) {
	__imp__sub_822E5C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822E5C38;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822E5C5C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822e5c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E5C5C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E5C78;
	sub_826344D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822e5ca8
	if (!ctx.cr6.gt) goto loc_822E5CA8;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_822E5C88:
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// bdnz 0x822e5c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E5C88;
loc_822E5CA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E5CBC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x822e5e70
	if (ctx.cr6.gt) goto loc_822E5E70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x822e5cbc
	if (ctx.cr6.lt) goto loc_822E5CBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r4,r31,1056
	ctx.r4.s64 = ctx.r31.s64 + 1056;
	// addi r10,r31,1126
	ctx.r10.s64 = ctx.r31.s64 + 1126;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
loc_822E5CFC:
	// lwzx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
	// sth r11,-100(r10)
	PPC_STORE_U16(ctx.r10.u32 + -100, ctx.r11.u16);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// sth r30,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r30.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822e5d28
	if (ctx.cr6.eq) goto loc_822E5D28;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// slw r27,r3,r5
	ctx.r27.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// cmpw cr6,r6,r27
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x822e5e8c
	if (!ctx.cr6.lt) goto loc_822E5E8C;
loc_822E5D28:
	// slw r6,r11,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// stwu r6,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r4.u32 = ea;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// bgt 0x822e5cfc
	if (ctx.cr0.gt) goto loc_822E5CFC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822e5e64
	if (!ctx.cr6.gt) goto loc_822E5E64;
loc_822E5D68:
	// lbzx r11,r6,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e5e58
	if (ctx.cr6.eq) goto loc_822E5E58;
	// addi r10,r11,562
	ctx.r10.s64 = ctx.r11.s64 + 562;
	// addi r9,r11,512
	ctx.r9.s64 = ctx.r11.s64 + 512;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// lhzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// lhzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// or r27,r10,r6
	ctx.r27.u64 = ctx.r10.u64 | ctx.r6.u64;
	// lwzx r8,r4,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r10,722
	ctx.r9.s64 = ctx.r10.s64 + 722;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r11,1156(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1156, ctx.r11.u8);
	// sthx r6,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u16);
	// bgt cr6,0x822e5e50
	if (ctx.cr6.gt) goto loc_822E5E50;
	// li r12,-21845
	ctx.r12.s64 = -21845;
	// rlwinm r9,r8,1,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFE;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// li r12,21845
	ctx.r12.s64 = 21845;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,-13105
	ctx.r12.s64 = -13105;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// rlwinm r9,r9,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// li r12,13107
	ctx.r12.s64 = 13107;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// rlwinm r9,r9,4,16,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFF0;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r9,r9,0,24,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// subfic r30,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r30.s64 = 16 - ctx.r11.s64;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sraw r10,r9,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// bge cr6,0x822e5e50
	if (!ctx.cr6.lt) goto loc_822E5E50;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
loc_822E5E3C:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthx r7,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u16);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x822e5e3c
	if (ctx.cr6.lt) goto loc_822E5E3C;
loc_822E5E50:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stwx r11,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
loc_822E5E58:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822e5d68
	if (ctx.cr6.lt) goto loc_822E5D68;
loc_822E5E64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822E5E70:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7464
	ctx.r11.s64 = ctx.r11.s64 + -7464;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822E5E8C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7480
	ctx.r11.s64 = ctx.r11.s64 + -7480;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E5C30) {
	__imp__sub_822E5C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
loc_822E5EB0:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e5f0c
	if (!ctx.cr6.lt) goto loc_822E5F0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822e5ed8
	if (ctx.cr6.lt) goto loc_822E5ED8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e5ee4
	goto loc_822E5EE4;
loc_822E5ED8:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
loc_822E5EE4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x822e5eb0
	if (!ctx.cr6.gt) goto loc_822E5EB0;
	// blr 
	return;
loc_822E5F0C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5EA8) {
	__imp__sub_822E5EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r12,-21845
	ctx.r12.s64 = -21845;
	// lwz r8,1096(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1096);
	// addi r9,r4,1096
	ctx.r9.s64 = ctx.r4.s64 + 1096;
	// rlwinm r5,r7,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// li r12,21845
	ctx.r12.s64 = 21845;
	// li r11,10
	ctx.r11.s64 = 10;
	// and r10,r6,r12
	ctx.r10.u64 = ctx.r6.u64 & ctx.r12.u64;
	// li r12,-13105
	ctx.r12.s64 = -13105;
	// or r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwinm r10,r6,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,13107
	ctx.r12.s64 = 13107;
	// and r6,r5,r12
	ctx.r6.u64 = ctx.r5.u64 & ctx.r12.u64;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// rlwinm r6,r5,4,16,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFF0;
	// clrlwi r5,r10,20
	ctx.r5.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r6,r6,0,24,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// rlwinm r5,r5,0,28,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// rlwimi r6,r10,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822e5fac
	if (ctx.cr6.lt) goto loc_822E5FAC;
loc_822E5F8C:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822e5f8c
	if (!ctx.cr6.lt) goto loc_822E5F8C;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x822e5fac
	if (ctx.cr6.lt) goto loc_822E5FAC;
loc_822E5FA4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822E5FAC:
	// addi r9,r11,512
	ctx.r9.s64 = ctx.r11.s64 + 512;
	// addi r8,r11,562
	ctx.r8.s64 = ctx.r11.s64 + 562;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r5,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r5.s64 = 16 - ctx.r11.s64;
	// sraw r8,r10,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// lhzx r6,r6,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// lhzx r10,r9,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// subf r9,r6,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r6.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 288, ctx.xer);
	// bge cr6,0x822e5fa4
	if (!ctx.cr6.lt) goto loc_822E5FA4;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r8,1156(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1156);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822e5fa4
	if (!ctx.cr6.eq) goto loc_822E5FA4;
	// addi r10,r10,722
	ctx.r10.s64 = ctx.r10.s64 + 722;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// srw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lhzx r3,r7,r4
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5F18) {
	__imp__sub_822E5F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822E6018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e604c
	if (!ctx.cr6.eq) goto loc_822E604C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7452
	ctx.r11.s64 = ctx.r11.s64 + -7452;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822E604C:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subf r29,r3,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r31,r3,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r29.s64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x822e6084
	if (!ctx.cr6.lt) goto loc_822E6084;
loc_822E6068:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822E6084:
	// add r11,r29,r5
	ctx.r11.u64 = ctx.r29.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x822e60ac
	if (!ctx.cr6.gt) goto loc_822E60AC;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_822E6098:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822e6068
	if (ctx.cr6.gt) goto loc_822E6068;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x822e6098
	if (ctx.cr6.gt) goto loc_822E6098;
loc_822E60AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82636a08
	ctx.lr = 0x822E60B4;
	sub_82636A08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e6068
	if (ctx.cr6.eq) goto loc_822E6068;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E6010) {
	__imp__sub_822E6010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E60DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E60DC) {
	__imp__sub_822E60DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E60E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822E60E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r28,20(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r3,36
	ctx.r25.s64 = ctx.r3.s64 + 36;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r26,r11,-8440
	ctx.r26.s64 = ctx.r11.s64 + -8440;
loc_822E6104:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e6144
	if (!ctx.cr6.lt) goto loc_822E6144;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e613c
	if (ctx.cr6.lt) goto loc_822E613C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e6408
	if (!ctx.cr6.eq) goto loc_822E6408;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x822e6144
	goto loc_822E6144;
loc_822E613C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E6144;
	sub_822E5EA8(ctx, base);
loc_822E6144:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r9,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e6178
	if (ctx.cr6.eq) goto loc_822E6178;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r10,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r30,r11,23
	ctx.r30.u64 = ctx.r11.u32 & 0x1FF;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// b 0x822e6188
	goto loc_822E6188;
loc_822E6178:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5f18
	ctx.lr = 0x822E6184;
	sub_822E5F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822E6188:
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// bge cr6,0x822e61d0
	if (!ctx.cr6.lt) goto loc_822E61D0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822e6408
	if (ctx.cr6.lt) goto loc_822E6408;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e61c0
	if (ctx.cr6.lt) goto loc_822E61C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6010
	ctx.lr = 0x822E61B4;
	sub_822E6010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e6418
	if (ctx.cr6.eq) goto loc_822E6418;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_822E61C0:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x822e6104
	goto loc_822E6104;
loc_822E61D0:
	// beq cr6,0x822e63a8
	if (ctx.cr6.eq) goto loc_822E63A8;
	// cmpwi cr6,r30,286
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 286, ctx.xer);
	// bge cr6,0x822e6408
	if (!ctx.cr6.lt) goto loc_822E6408;
	// addi r11,r30,-257
	ctx.r11.s64 = ctx.r30.s64 + -257;
	// addi r10,r26,-256
	ctx.r10.s64 = ctx.r26.s64 + -256;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r26,-384
	ctx.r8.s64 = ctx.r26.s64 + -384;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r30,r9,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822e6238
	if (ctx.cr6.eq) goto loc_822E6238;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822e6210
	if (!ctx.cr6.lt) goto loc_822E6210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E6210;
	sub_822E5EA8(ctx, base);
loc_822E6210:
	// slw r11,r27,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// srw r7,r10,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
loc_822E6238:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,2056
	ctx.r4.s64 = ctx.r31.s64 + 2056;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e627c
	if (!ctx.cr6.lt) goto loc_822E627C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e6274
	if (ctx.cr6.lt) goto loc_822E6274;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e6408
	if (!ctx.cr6.eq) goto loc_822E6408;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x822e627c
	goto loc_822E627C;
loc_822E6274:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E627C;
	sub_822E5EA8(ctx, base);
loc_822E627C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r9,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e62b0
	if (ctx.cr6.eq) goto loc_822E62B0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r10,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r3,r11,23
	ctx.r3.u64 = ctx.r11.u32 & 0x1FF;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// b 0x822e62b8
	goto loc_822E62B8;
loc_822E62B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5f18
	ctx.lr = 0x822E62B8;
	sub_822E5F18(ctx, base);
loc_822E62B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e6408
	if (ctx.cr6.lt) goto loc_822E6408;
	// cmpwi cr6,r3,30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 30, ctx.xer);
	// bge cr6,0x822e6408
	if (!ctx.cr6.lt) goto loc_822E6408;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,-128
	ctx.r10.s64 = ctx.r26.s64 + -128;
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822e631c
	if (ctx.cr6.eq) goto loc_822E631C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822e62f4
	if (!ctx.cr6.lt) goto loc_822E62F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E62F4;
	sub_822E5EA8(ctx, base);
loc_822E62F4:
	// slw r11,r27,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// srw r7,r10,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
loc_822E631C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822e63ec
	if (ctx.cr6.lt) goto loc_822E63EC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822e6358
	if (!ctx.cr6.gt) goto loc_822E6358;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6010
	ctx.lr = 0x822E634C;
	sub_822E6010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e6418
	if (ctx.cr6.eq) goto loc_822E6418;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_822E6358:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x822e6384
	if (!ctx.cr6.eq) goto loc_822E6384;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822e6104
	if (ctx.cr6.eq) goto loc_822E6104;
loc_822E6370:
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x822e6370
	if (!ctx.cr0.eq) goto loc_822E6370;
	// b 0x822e6104
	goto loc_822E6104;
loc_822E6384:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822e6104
	if (ctx.cr6.eq) goto loc_822E6104;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822E6390:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x822e6390
	if (!ctx.cr0.eq) goto loc_822E6390;
	// b 0x822e6104
	goto loc_822E6104;
loc_822E63A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e63e0
	if (ctx.cr6.eq) goto loc_822E63E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e63e0
	if (!ctx.cr6.lt) goto loc_822E63E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7420
	ctx.r11.s64 = ctx.r11.s64 + -7420;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822E63E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822E63EC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7432
	ctx.r11.s64 = ctx.r11.s64 + -7432;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822E6408:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7852
	ctx.r11.s64 = ctx.r11.s64 + -7852;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
loc_822E6418:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E60E0) {
	__imp__sub_822E60E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6424) {
	__imp__sub_822E6424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822E6430;
	__savegprlr_24(ctx, base);
	// stwu r1,-2672(r1)
	ea = -2672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x822e6448
	if (!ctx.cr6.lt) goto loc_822E6448;
	// bl 0x822e5ea8
	ctx.lr = 0x822E6448;
	sub_822E5EA8(ctx, base);
loc_822E6448:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r24,r11,257
	ctx.r24.s64 = ctx.r11.s64 + 257;
	// bge cr6,0x822e6478
	if (!ctx.cr6.lt) goto loc_822E6478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E6478;
	sub_822E5EA8(ctx, base);
loc_822E6478:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x822e64a8
	if (!ctx.cr6.lt) goto loc_822E64A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E64A8;
	sub_822E5EA8(ctx, base);
loc_822E64A8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r7,r9,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// addic. r30,r8,4
	ctx.xer.ca = ctx.r8.u32 > 4294967291;
	ctx.r30.s64 = ctx.r8.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// add r27,r25,r24
	ctx.r27.u64 = ctx.r25.u64 + ctx.r24.u64;
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// sth r28,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r28.u16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stb r28,18(r10)
	PPC_STORE_U8(ctx.r10.u32 + 18, ctx.r28.u8);
	// ble 0x822e6544
	if (!ctx.cr0.gt) goto loc_822E6544;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,-8312
	ctx.r29.s64 = ctx.r11.s64 + -8312;
loc_822E64FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x822e6510
	if (!ctx.cr6.lt) goto loc_822E6510;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E6510;
	sub_822E5EA8(ctx, base);
loc_822E6510:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// clrlwi r6,r10,29
	ctx.r6.u64 = ctx.r10.u32 & 0x7;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lbzx r5,r4,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stbx r6,r5,r9
	PPC_STORE_U8(ctx.r5.u32 + ctx.r9.u32, ctx.r6.u8);
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822e64fc
	if (ctx.cr6.lt) goto loc_822E64FC;
loc_822E6544:
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x822e5c30
	ctx.lr = 0x822E6554;
	sub_822E5C30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e6568
	if (!ctx.cr6.eq) goto loc_822E6568;
loc_822E655C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2672
	ctx.r1.s64 = ctx.r1.s64 + 2672;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E6568:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822e671c
	if (!ctx.cr6.gt) goto loc_822E671C;
	// li r26,1
	ctx.r26.s64 = 1;
loc_822E6578:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822e65b8
	if (!ctx.cr6.lt) goto loc_822E65B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e65b0
	if (ctx.cr6.lt) goto loc_822E65B0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e6760
	if (!ctx.cr6.eq) goto loc_822E6760;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x822e65b8
	goto loc_822E65B8;
loc_822E65B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E65B8;
	sub_822E5EA8(ctx, base);
loc_822E65B8:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// rlwinm r10,r9,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e65f0
	if (ctx.cr6.eq) goto loc_822E65F0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r10,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r3,r11,23
	ctx.r3.u64 = ctx.r11.u32 & 0x1FF;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// b 0x822e65fc
	goto loc_822E65FC;
loc_822E65F0:
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5f18
	ctx.lr = 0x822E65FC;
	sub_822E5F18(ctx, base);
loc_822E65FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e6760
	if (ctx.cr6.lt) goto loc_822E6760;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// bge cr6,0x822e6760
	if (!ctx.cr6.lt) goto loc_822E6760;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x822e6624
	if (!ctx.cr6.lt) goto loc_822E6624;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stbx r3,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x822e6714
	goto loc_822E6714;
loc_822E6624:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bne cr6,0x822e667c
	if (!ctx.cr6.eq) goto loc_822E667C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x822e6644
	if (!ctx.cr6.lt) goto loc_822E6644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E6644;
	sub_822E5EA8(ctx, base);
loc_822E6644:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r30,r10,3
	ctx.r30.s64 = ctx.r10.s64 + 3;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// beq cr6,0x822e6760
	if (ctx.cr6.eq) goto loc_822E6760;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// b 0x822e66f0
	goto loc_822E66F0;
loc_822E667C:
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x822e66b4
	if (!ctx.cr6.eq) goto loc_822E66B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x822e6698
	if (!ctx.cr6.lt) goto loc_822E6698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E6698;
	sub_822E5EA8(ctx, base);
loc_822E6698:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// addi r30,r10,3
	ctx.r30.s64 = ctx.r10.s64 + 3;
	// b 0x822e66e8
	goto loc_822E66E8;
loc_822E66B4:
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// bne cr6,0x822e6760
	if (!ctx.cr6.eq) goto loc_822E6760;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x822e66d0
	if (!ctx.cr6.lt) goto loc_822E66D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E66D0;
	sub_822E5EA8(ctx, base);
loc_822E66D0:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r9,25
	ctx.r10.u64 = ctx.r9.u32 & 0x7F;
	// rlwinm r8,r9,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r7,r11,-7
	ctx.r7.s64 = ctx.r11.s64 + -7;
	// addi r30,r10,11
	ctx.r30.s64 = ctx.r10.s64 + 11;
loc_822E66E8:
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_822E66F0:
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822e6760
	if (ctx.cr6.lt) goto loc_822E6760;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E6710;
	sub_826344D0(ctx, base);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_822E6714:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822e6578
	if (ctx.cr6.lt) goto loc_822E6578;
loc_822E671C:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x822e6760
	if (!ctx.cr6.eq) goto loc_822E6760;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822e5c30
	ctx.lr = 0x822E6734;
	sub_822E5C30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e655c
	if (ctx.cr6.eq) goto loc_822E655C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r4,r24,r11
	ctx.r4.u64 = ctx.r24.u64 + ctx.r11.u64;
	// addi r3,r31,2056
	ctx.r3.s64 = ctx.r31.s64 + 2056;
	// bl 0x822e5c30
	ctx.lr = 0x822E6750;
	sub_822E5C30(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,2672
	ctx.r1.s64 = ctx.r1.s64 + 2672;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E6760:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7480
	ctx.r11.s64 = ctx.r11.s64 + -7480;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,2672
	ctx.r1.s64 = ctx.r1.s64 + 2672;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E6428) {
	__imp__sub_822E6428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E677C) {
	__imp__sub_822E677C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6780) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822e67cc
	if (ctx.cr6.eq) goto loc_822E67CC;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822e67b4
	if (!ctx.cr6.lt) goto loc_822E67B4;
	// bl 0x822e5ea8
	ctx.lr = 0x822E67B4;
	sub_822E5EA8(ctx, base);
loc_822E67B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srw r8,r10,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_822E67CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e6810
	if (!ctx.cr6.gt) goto loc_822E6810;
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
loc_822E67E0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x822e67e0
	if (ctx.cr6.gt) goto loc_822E67E0;
loc_822E6810:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822e6834
	if (!ctx.cr6.lt) goto loc_822E6834;
loc_822E681C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7384
	ctx.r11.s64 = ctx.r11.s64 + -7384;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// b 0x822e692c
	goto loc_822E692C;
loc_822E6834:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bge cr6,0x822e687c
	if (!ctx.cr6.lt) goto loc_822E687C;
	// subfic r11,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r10.s64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E6848:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e685c
	if (ctx.cr6.lt) goto loc_822E685C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e6868
	goto loc_822E6868;
loc_822E685C:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_822E6868:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// stbx r7,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x822e6848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E6848;
loc_822E687C:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xori r6,r30,65535
	ctx.r6.u64 = ctx.r30.u64 ^ 65535;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x822e681c
	if (!ctx.cr6.eq) goto loc_822E681C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822e68d8
	if (!ctx.cr6.gt) goto loc_822E68D8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7404
	ctx.r11.s64 = ctx.r11.s64 + -7404;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// b 0x822e692c
	goto loc_822E692C;
loc_822E68D8:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822e6900
	if (!ctx.cr6.gt) goto loc_822E6900;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6010
	ctx.lr = 0x822E68F8;
	sub_822E6010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e692c
	if (ctx.cr6.eq) goto loc_822E692C;
loc_822E6900:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82635430
	ctx.lr = 0x822E6910;
	sub_82635430(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_822E692C:
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

PPC_WEAK_FUNC(sub_822E6780) {
	__imp__sub_822E6780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6944) {
	__imp__sub_822E6944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e6960
	if (ctx.cr6.lt) goto loc_822E6960;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e696c
	goto loc_822E696C;
loc_822E6960:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_822E696C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e6988
	if (ctx.cr6.lt) goto loc_822E6988;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e6994
	goto loc_822E6994;
loc_822E6988:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_822E6994:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e69bc
	if (ctx.cr6.lt) goto loc_822E69BC;
loc_822E69A4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7336
	ctx.r11.s64 = ctx.r11.s64 + -7336;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// blr 
	return;
loc_822E69BC:
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lis r10,-31711
	ctx.r10.s64 = -2078212096;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ori r9,r10,2115
	ctx.r9.u64 = ctx.r10.u64 | 2115;
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r10,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf. r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e69a4
	if (!ctx.cr0.eq) goto loc_822E69A4;
	// rlwinm r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e6a14
	if (ctx.cr6.eq) goto loc_822E6A14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7352
	ctx.r11.s64 = ctx.r11.s64 + -7352;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// blr 
	return;
loc_822E6A14:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x822e6a34
	if (ctx.cr6.eq) goto loc_822E6A34;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7368
	ctx.r11.s64 = ctx.r11.s64 + -7368;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// blr 
	return;
loc_822E6A34:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E6948) {
	__imp__sub_822E6948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6A3C) {
	__imp__sub_822E6A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822E6A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822e6a70
	if (ctx.cr6.eq) goto loc_822E6A70;
	// bl 0x822e6948
	ctx.lr = 0x822E6A5C;
	sub_822E6948(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e6a70
	if (!ctx.cr6.eq) goto loc_822E6A70;
loc_822E6A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822E6A70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,-8000
	ctx.r29.s64 = ctx.r11.s64 + -8000;
loc_822E6A88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822e6a9c
	if (!ctx.cr6.lt) goto loc_822E6A9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E6A9C;
	sub_822E5EA8(ctx, base);
loc_822E6A9C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r30,r10,31
	ctx.r30.u64 = ctx.r10.u32 & 0x1;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x822e6ac8
	if (!ctx.cr6.lt) goto loc_822E6AC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ea8
	ctx.lr = 0x822E6AC8;
	sub_822E5EA8(ctx, base);
loc_822E6AC8:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x822e6af8
	if (!ctx.cr6.eq) goto loc_822E6AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6780
	ctx.lr = 0x822E6AF4;
	sub_822E6780(ctx, base);
	// b 0x822e6b4c
	goto loc_822E6B4C;
loc_822E6AF8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822e6a64
	if (ctx.cr6.eq) goto loc_822E6A64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822e6b34
	if (!ctx.cr6.eq) goto loc_822E6B34;
	// addi r4,r29,-288
	ctx.r4.s64 = ctx.r29.s64 + -288;
	// li r5,288
	ctx.r5.s64 = 288;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822e5c30
	ctx.lr = 0x822E6B18;
	sub_822E5C30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e6a64
	if (ctx.cr6.eq) goto loc_822E6A64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r31,2056
	ctx.r3.s64 = ctx.r31.s64 + 2056;
	// bl 0x822e5c30
	ctx.lr = 0x822E6B30;
	sub_822E5C30(ctx, base);
	// b 0x822e6b3c
	goto loc_822E6B3C;
loc_822E6B34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6428
	ctx.lr = 0x822E6B3C;
	sub_822E6428(ctx, base);
loc_822E6B3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e6a64
	if (ctx.cr6.eq) goto loc_822E6A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e60e0
	ctx.lr = 0x822E6B4C;
	sub_822E60E0(ctx, base);
loc_822E6B4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e6a64
	if (ctx.cr6.eq) goto loc_822E6A64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822e6a88
	if (ctx.cr6.eq) goto loc_822E6A88;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E6A40) {
	__imp__sub_822E6A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822E6B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-7968
	ctx.r29.s64 = ctx.r11.s64 + -7968;
loc_822E6B84:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e6ba4
	if (!ctx.cr6.lt) goto loc_822E6BA4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e6bd0
	goto loc_822E6BD0;
loc_822E6BA4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e6bcc
	if (ctx.cr6.eq) goto loc_822E6BCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E6BB8;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e6bd0
	goto loc_822E6BD0;
loc_822E6BCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E6BD0:
	// lbzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822e6bf8
	if (!ctx.cr6.eq) goto loc_822E6BF8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x822e6b84
	if (ctx.cr6.lt) goto loc_822E6B84;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822E6BF8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7320
	ctx.r11.s64 = ctx.r11.s64 + -7320;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E6B68) {
	__imp__sub_822E6B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6C14) {
	__imp__sub_822E6C14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bne cr6,0x822e6c58
	if (!ctx.cr6.eq) goto loc_822E6C58;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,255
	ctx.r8.s64 = 255;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_822E6C40:
	// stb r8,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r8.u8);
	// lbzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbu r9,-2(r10)
	ea = -2 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822e6c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E6C40;
	// blr 
	return;
loc_822E6C58:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,255
	ctx.r8.s64 = 255;
loc_822E6C74:
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stb r9,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r9.u8);
	// lbz r7,-2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// stb r7,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r7.u8);
	// lbzu r9,-3(r10)
	ea = -3 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r9,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e6c74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E6C74;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E6C18) {
	__imp__sub_822E6C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822E6CA0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,-16
	ctx.r11.s64 = ctx.r9.s64 + -16;
	// stw r10,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r6,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r18,8(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// ori r31,r7,65535
	ctx.r31.u64 = ctx.r7.u64 | 65535;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mullw r16,r10,r25
	ctx.r16.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// mullw r27,r18,r11
	ctx.r27.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r11.s32);
	// blt cr6,0x822e6d74
	if (ctx.cr6.lt) goto loc_822E6D74;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// blt cr6,0x822e6d74
	if (ctx.cr6.lt) goto loc_822E6D74;
	// beq cr6,0x822e6d30
	if (ctx.cr6.eq) goto loc_822E6D30;
	// divw r11,r31,r14
	ctx.r11.s32 = ctx.r31.s32 / ctx.r14.s32;
	// rlwinm r9,r25,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x1;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r25,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r25.s64;
	// twllei r14,0
	// adde r11,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e6d74
	if (ctx.cr6.eq) goto loc_822E6D74;
loc_822E6D30:
	// mullw. r11,r25,r14
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r14.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822e6d74
	if (ctx.cr0.lt) goto loc_822E6D74;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822e6d74
	if (ctx.cr6.lt) goto loc_822E6D74;
	// beq cr6,0x822e6d64
	if (ctx.cr6.eq) goto loc_822E6D64;
	// divw r9,r31,r10
	ctx.r9.s32 = ctx.r31.s32 / ctx.r10.s32;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subfc r6,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// twllei r10,0
	// adde r11,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e6d74
	if (ctx.cr6.eq) goto loc_822E6D74;
loc_822E6D64:
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// mullw r3,r11,r14
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x822e6d7c
	if (!ctx.cr6.gt) goto loc_822E6D7C;
loc_822E6D74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e6d80
	goto loc_822E6D80;
loc_822E6D7C:
	// bl 0x82634da0
	ctx.lr = 0x822E6D80;
	sub_82634DA0(ctx, base);
loc_822E6D80:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r3.u32);
	// bne cr6,0x822e6da8
	if (!ctx.cr6.eq) goto loc_822E6DA8;
loc_822E6D8C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E6DA8:
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822e09d8
	ctx.lr = 0x822E6DBC;
	sub_822E09D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e6de0
	if (!ctx.cr6.eq) goto loc_822E6DE0;
loc_822E6DC4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7604
	ctx.r11.s64 = ctx.r11.s64 + -7604;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E6DE0:
	// mullw r22,r18,r25
	ctx.r22.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r25.s32);
	// mullw r11,r22,r19
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r19.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// rlwinm r23,r11,29,3,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822e0968
	ctx.lr = 0x822E6E00;
	sub_822E0968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e6dc4
	if (ctx.cr6.eq) goto loc_822E6DC4;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// mullw r10,r11,r14
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e6e34
	if (!ctx.cr6.lt) goto loc_822E6E34;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7292
	ctx.r11.s64 = ctx.r11.s64 + -7292;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E6E34:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x822e6d8c
	if (ctx.cr6.lt) goto loc_822E6D8C;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r10,r23,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r8,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r23.s64;
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e6d8c
	if (ctx.cr6.eq) goto loc_822E6D8C;
	// rlwinm r3,r23,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x822e6d8c
	if (ctx.cr6.gt) goto loc_822E6D8C;
	// bl 0x82634da0
	ctx.lr = 0x822E6E6C;
	sub_82634DA0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e6d8c
	if (ctx.cr6.eq) goto loc_822E6D8C;
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 8, ctx.xer);
	// bge cr6,0x822e6e88
	if (!ctx.cr6.lt) goto loc_822E6E88;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_822E6E88:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x822e739c
	if (ctx.cr6.eq) goto loc_822E739C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r11,644
	ctx.r7.s64 = ctx.r11.s64 + 644;
	// mullw r26,r29,r27
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r27.s32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// ori r21,r9,65535
	ctx.r21.u64 = ctx.r9.u64 | 65535;
	// addi r15,r10,-7960
	ctx.r15.s64 = ctx.r10.s64 + -7960;
	// b 0x822e6ebc
	goto loc_822E6EBC;
loc_822E6EB8:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_822E6EBC:
	// clrlwi r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// not r8,r24
	ctx.r8.u64 = ~ctx.r24.u64;
	// lwz r9,12(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// add r31,r10,r20
	ctx.r31.u64 = ctx.r10.u64 + ctx.r20.u64;
	// mullw r10,r6,r23
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// mullw r8,r24,r16
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r16.s32);
	// add r6,r10,r20
	ctx.r6.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x822e7384
	if (ctx.cr6.gt) goto loc_822E7384;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x822e6f00
	if (!ctx.cr6.eq) goto loc_822E6F00;
	// lbzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
loc_822E6F00:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822e7150
	if (ctx.cr6.gt) goto loc_822E7150;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822e6f38
	// bdzf 4*cr6+eq,0x822e6f88
	// bdzf 4*cr6+eq,0x822e6fc0
	// bdzf 4*cr6+eq,0x822e7048
	// bne cr6,0x822e7104
	if (!ctx.cr6.eq) goto loc_822E7104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822E6F34;
	sub_82635430(ctx, base);
	// b 0x822e7150
	goto loc_822E7150;
loc_822E6F38:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822E6F48;
	sub_82635430(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x822e7150
	if (!ctx.cr6.lt) goto loc_822E7150;
	// subf r10,r27,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r27.s64;
	// subf r7,r27,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r6,r31,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E6F64:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// bdnz 0x822e6f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E6F64;
	// b 0x822e7150
	goto loc_822E7150;
loc_822E6F88:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822e7150
	if (!ctx.cr6.gt) goto loc_822E7150;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// subf r8,r30,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r30.s64;
	// subf r7,r30,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_822E6FA0:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822e6fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E6FA0;
	// b 0x822e7150
	goto loc_822E7150;
loc_822E6FC0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822e6ff4
	if (!ctx.cr6.gt) goto loc_822E6FF4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// subf r8,r30,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r30.s64;
	// subf r7,r30,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_822E6FD8:
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stbx r5,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822e6fd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E6FD8;
loc_822E6FF4:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x822e7150
	if (!ctx.cr6.lt) goto loc_822E7150;
	// subf r9,r27,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r27.s64;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// subf r5,r27,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r6,r30,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r30.s64;
	// subf r4,r30,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E7018:
	// lbzx r8,r11,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbzx r9,r5,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822e7018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7018;
	// b 0x822e7150
	goto loc_822E7150;
loc_822E7048:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822e707c
	if (!ctx.cr6.gt) goto loc_822E707C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// subf r8,r30,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r30.s64;
	// subf r7,r30,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_822E7060:
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822e7060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7060;
loc_822E707C:
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x822e7150
	if (!ctx.cr6.lt) goto loc_822E7150;
	// subf r11,r27,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r27.s64;
	// add r5,r27,r30
	ctx.r5.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// subf r4,r31,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r3,r30,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r30.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E709C:
	// lbzx r8,r4,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r10,r5,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// blt cr6,0x822e70cc
	if (ctx.cr6.lt) goto loc_822E70CC;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822E70CC:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822e70d8
	if (ctx.cr6.gt) goto loc_822E70D8;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_822E70D8:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x822e70e4
	if (!ctx.cr6.gt) goto loc_822E70E4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_822E70E4:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r7,r27
	PPC_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r10.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x822e709c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E709C;
	// b 0x822e7150
	goto loc_822E7150;
loc_822E7104:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822E7114;
	sub_82635430(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x822e7150
	if (!ctx.cr6.lt) goto loc_822E7150;
	// subf r10,r27,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r27.s64;
	// subf r7,r27,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r6,r31,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E7130:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// bdnz 0x822e7130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7130;
loc_822E7150:
	// add r28,r26,r30
	ctx.r28.u64 = ctx.r26.u64 + ctx.r30.u64;
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 8, ctx.xer);
	// bge cr6,0x822e7264
	if (!ctx.cr6.lt) goto loc_822E7264;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e7170
	if (!ctx.cr6.eq) goto loc_822E7170;
	// lbzx r11,r19,r15
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r15.u32);
	// b 0x822e7174
	goto loc_822E7174;
loc_822E7170:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822E7174:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x822e71c4
	if (!ctx.cr6.eq) goto loc_822E71C4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822e7240
	if (ctx.cr6.eq) goto loc_822E7240;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
loc_822E7198:
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822e71a8
	if (!ctx.cr6.eq) goto loc_822E71A8;
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
loc_822E71A8:
	// rlwinm r7,r11,28,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stbx r6,r10,r29
	PPC_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x822e7198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7198;
	// b 0x822e7240
	goto loc_822E7240;
loc_822E71C4:
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x822e7208
	if (!ctx.cr6.eq) goto loc_822E7208;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822e7240
	if (ctx.cr6.eq) goto loc_822E7240;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
loc_822E71DC:
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822e71ec
	if (!ctx.cr6.eq) goto loc_822E71EC;
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
loc_822E71EC:
	// rlwinm r7,r11,26,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stbx r6,r10,r29
	PPC_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x822e71dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E71DC;
	// b 0x822e7240
	goto loc_822E7240;
loc_822E7208:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822e7240
	if (ctx.cr6.eq) goto loc_822E7240;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
loc_822E7218:
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822e7228
	if (!ctx.cr6.eq) goto loc_822E7228;
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
loc_822E7228:
	// rlwinm r7,r11,25,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// rlwinm r11,r11,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stbx r6,r10,r29
	PPC_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x822e7218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7218;
loc_822E7240:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822e7374
	if (ctx.cr6.eq) goto loc_822E7374;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e6c18
	ctx.lr = 0x822E7260;
	sub_822E6C18(ctx, base);
	// b 0x822e7374
	goto loc_822E7374;
loc_822E7264:
	// bne cr6,0x822e7298
	if (!ctx.cr6.eq) goto loc_822E7298;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822e7288
	if (!ctx.cr6.eq) goto loc_822E7288;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82635430
	ctx.lr = 0x822E7284;
	sub_82635430(ctx, base);
	// b 0x822e7374
	goto loc_822E7374;
loc_822E7288:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x822e6c18
	ctx.lr = 0x822E7294;
	sub_822E6C18(ctx, base);
	// b 0x822e7374
	goto loc_822E7374;
loc_822E7298:
	// cmpwi cr6,r19,16
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 16, ctx.xer);
	// bne cr6,0x822e7374
	if (!ctx.cr6.eq) goto loc_822E7374;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822e72e0
	if (!ctx.cr6.eq) goto loc_822E72E0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822e7374
	if (ctx.cr6.eq) goto loc_822E7374;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
loc_822E72BC:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// sthx r6,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bdnz 0x822e72bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E72BC;
	// b 0x822e7374
	goto loc_822E7374;
loc_822E72E0:
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// bne cr6,0x822e731c
	if (!ctx.cr6.eq) goto loc_822E731C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822e7374
	if (ctx.cr6.eq) goto loc_822E7374;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
loc_822E72FC:
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// sthu r21,4(r10)
	// bdnz 0x822e72fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E72FC;
	// b 0x822e7374
	goto loc_822E7374;
loc_822E731C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822e7374
	if (ctx.cr6.eq) goto loc_822E7374;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
loc_822E7330:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwimi r6,r5,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbzu r9,6(r11)
	ea = 6 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r3,r9,8,16,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r9,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
	// sthu r21,8(r10)
	// bdnz 0x822e7330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7330;
loc_822E7374:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r14
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x822e6eb8
	if (ctx.cr6.lt) goto loc_822E6EB8;
	// b 0x822e739c
	goto loc_822E739C;
loc_822E7384:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7308
	ctx.r11.s64 = ctx.r11.s64 + -7308;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
loc_822E739C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E73A4;
	sub_82634D40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E6C98) {
	__imp__sub_822E6C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E73B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822E73C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,-16
	ctx.r11.s64 = ctx.r7.s64 + -16;
	// stw r8,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r4,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r5,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r6,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r7,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mullw r28,r8,r6
	ctx.r28.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// bne cr6,0x822e7424
	if (!ctx.cr6.eq) goto loc_822E7424;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e6c98
	ctx.lr = 0x822E741C;
	sub_822E6C98(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E7424:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822e74bc
	if (ctx.cr6.lt) goto loc_822E74BC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822e74bc
	if (ctx.cr6.lt) goto loc_822E74BC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x822e746c
	if (ctx.cr6.eq) goto loc_822E746C;
	// divw r8,r11,r9
	ctx.r8.s32 = ctx.r11.s32 / ctx.r9.s32;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// subfc r5,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// twllei r9,0
	// adde r8,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822e74bc
	if (ctx.cr6.eq) goto loc_822E74BC;
loc_822E746C:
	// mullw. r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822e74bc
	if (ctx.cr0.lt) goto loc_822E74BC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x822e74bc
	if (ctx.cr6.lt) goto loc_822E74BC;
	// beq cr6,0x822e74a0
	if (ctx.cr6.eq) goto loc_822E74A0;
	// divw r9,r11,r28
	ctx.r9.s32 = ctx.r11.s32 / ctx.r28.s32;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subfc r6,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// twllei r28,0
	// adde r9,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e74bc
	if (ctx.cr6.eq) goto loc_822E74BC;
loc_822E74A0:
	// mullw r3,r10,r28
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822e74bc
	if (ctx.cr6.gt) goto loc_822E74BC;
	// bl 0x82634da0
	ctx.lr = 0x822E74B0;
	sub_82634DA0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e74d8
	if (!ctx.cr6.eq) goto loc_822E74D8;
loc_822E74BC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E74D8:
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,4
	ctx.r21.s64 = 4;
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r15,1
	ctx.r15.s64 = 1;
	// li r19,8
	ctx.r19.s64 = 8;
loc_822E74F0:
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// stw r22,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stw r15,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// stw r23,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// stw r22,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r22.u32);
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// stw r15,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r15.u32);
	// lwzx r24,r17,r7
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r7.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// lwzx r25,r17,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r10.u32);
	// lwzx r27,r17,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r8.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// lwzx r18,r17,r9
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r9.u32);
	// twllei r18,0
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r24,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r24.s64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// twllei r27,0
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r25,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r25.s64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// add r10,r9,r18
	ctx.r10.u64 = ctx.r9.u64 + ctx.r18.u64;
	// divwu. r30,r5,r27
	ctx.r30.u32 = ctx.r5.u32 / ctx.r27.u32;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// divwu r31,r4,r18
	ctx.r31.u32 = ctx.r4.u32 / ctx.r18.u32;
	// beq 0x822e76a4
	if (ctx.cr0.eq) goto loc_822E76A4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822e76a4
	if (ctx.cr6.eq) goto loc_822E76A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r10,428(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mullw r11,r8,r26
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// srawi r11,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 3;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r14,r11,r31
	ctx.r14.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// bl 0x822e6c98
	ctx.lr = 0x822E7600;
	sub_822E6C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e76c0
	if (ctx.cr6.eq) goto loc_822E76C0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822e7680
	if (!ctx.cr6.gt) goto loc_822E7680;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
loc_822E7618:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822e7668
	if (!ctx.cr6.gt) goto loc_822E7668;
loc_822E7624:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mullw r10,r27,r31
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r25
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r26,r31
	ctx.r7.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mullw r10,r7,r28
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// mullw r11,r6,r28
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82635430
	ctx.lr = 0x822E765C;
	sub_82635430(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822e7624
	if (ctx.cr6.lt) goto loc_822E7624;
loc_822E7668:
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r25,r18,r25
	ctx.r25.u64 = ctx.r18.u64 + ctx.r25.u64;
	// bne 0x822e7618
	if (!ctx.cr0.eq) goto loc_822E7618;
	// lwz r26,420(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r16,396(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
loc_822E7680:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82634d40
	ctx.lr = 0x822E7688;
	sub_82634D40(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// add r10,r14,r16
	ctx.r10.u64 = ctx.r14.u64 + ctx.r16.u64;
	// subf r9,r14,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r14.s64;
	// lwz r14,412(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// rotlwi r16,r10,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r9.u32);
loc_822E76A4:
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// cmpwi cr6,r17,28
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 28, ctx.xer);
	// blt cr6,0x822e74f0
	if (ctx.cr6.lt) goto loc_822E74F0;
	// stw r20,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r20.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E76C0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E76C8;
	sub_82634D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E73B8) {
	__imp__sub_822E73B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E76D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E76D4) {
	__imp__sub_822E76D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E76D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822E76E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw. r30,r10,r9
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822e775c
	if (ctx.cr0.lt) goto loc_822E775C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x822e775c
	if (ctx.cr6.lt) goto loc_822E775C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x822e7740
	if (ctx.cr6.eq) goto loc_822E7740;
	// divw r10,r11,r5
	ctx.r10.s32 = ctx.r11.s32 / ctx.r5.s32;
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r30,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r30.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// twllei r5,0
	// adde r10,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e775c
	if (ctx.cr6.eq) goto loc_822E775C;
loc_822E7740:
	// mullw r3,r30,r29
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822e775c
	if (ctx.cr6.gt) goto loc_822E775C;
	// bl 0x82634da0
	ctx.lr = 0x822E7750;
	sub_82634DA0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e7778
	if (!ctx.cr6.eq) goto loc_822E7778;
loc_822E775C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822E7778:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x822e77c8
	if (!ctx.cr6.eq) goto loc_822E77C8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822e7814
	if (ctx.cr6.eq) goto loc_822E7814;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
loc_822E779C:
	// lbzx r7,r10,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// lbzx r4,r9,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// lbzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stbu r3,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e779c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E779C;
	// b 0x822e7814
	goto loc_822E7814;
loc_822E77C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822e7814
	if (ctx.cr6.eq) goto loc_822E7814;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// addi r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 3;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
loc_822E77E4:
	// lbzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbzx r4,r5,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// lbzx r3,r9,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// stb r3,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// lbzx r6,r8,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// lbzx r5,r7,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stbu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e77e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E77E4;
loc_822E7814:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x82634d40
	ctx.lr = 0x822E781C;
	sub_82634D40(ctx, base);
	// stw r27,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E76D8) {
	__imp__sub_822E76D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E782C) {
	__imp__sub_822E782C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// bne cr6,0x822e7880
	if (!ctx.cr6.eq) goto loc_822E7880;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7988
	if (ctx.cr6.eq) goto loc_822E7988;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822E7864:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e7864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7864;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822E7880:
	// lis r9,-32012
	ctx.r9.s64 = -2097938432;
	// lwz r9,-3376(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3376);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e7964
	if (ctx.cr6.eq) goto loc_822E7964;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7988
	if (ctx.cr6.eq) goto loc_822E7988;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E789C:
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822e7948
	if (ctx.cr6.eq) goto loc_822E7948;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r4,r9,8,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// rotlwi r3,r7,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// rlwinm r9,r8,31,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7F;
	// subf r8,r7,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r7.s64;
	// rotlwi r3,r5,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r7,r6,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r6.s64;
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r7,r6,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r4,r5,r11
	ctx.r4.s32 = ctx.r5.s32 / ctx.r11.s32;
	// rotlwi r8,r31,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r9,r31,r11
	ctx.r9.s32 = ctx.r31.s32 / ctx.r11.s32;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// divw r6,r6,r11
	ctx.r6.s32 = ctx.r6.s32 / ctx.r11.s32;
	// andc r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// andc r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// andc r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// twllei r11,0
	// twllei r11,0
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// twllei r11,0
	// twlgei r3,-1
	// twlgei r4,-1
	// twlgei r8,-1
	// b 0x822e7954
	goto loc_822E7954;
loc_822E7948:
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_822E7954:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822e789c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E789C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822E7964:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7988
	if (ctx.cr6.eq) goto loc_822E7988;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
loc_822E7974:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stbu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e7974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7974;
loc_822E7988:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7830) {
	__imp__sub_822E7830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822E7998;
	__savegprlr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5376(r1)
	ea = -5376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,83
	ctx.r11.s64 = ctx.r1.s64 + 83;
	// stw r5,5412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 5412, ctx.r5.u32);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// li r17,1
	ctx.r17.s64 = 1;
	// stw r18,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r18,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r18.u8);
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// stb r18,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r18.u8);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// stb r18,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r18.u8);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// stb r18,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// stb r18,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r18.u8);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// bl 0x822e6b68
	ctx.lr = 0x822E7A04;
	sub_822E6B68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e8788
	if (ctx.cr6.eq) goto loc_822E8788;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x822e8564
	if (ctx.cr6.eq) goto loc_822E8564;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,18760
	ctx.r10.s64 = 1229455360;
	// lis r20,16384
	ctx.r20.s64 = 1073741824;
	// ori r16,r10,17490
	ctx.r16.u64 = ctx.r10.u64 | 17490;
	// addi r19,r11,-7960
	ctx.r19.s64 = ctx.r11.s64 + -7960;
loc_822E7A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E7A30;
	sub_822E0D20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E7A3C;
	sub_822E0D20(ctx, base);
	// rlwinm r11,r29,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E7A4C;
	sub_822E0D20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E7A58;
	sub_822E0D20(ctx, base);
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x822e7ef4
	if (ctx.cr6.gt) goto loc_822E7EF4;
	// beq cr6,0x822e7c00
	if (ctx.cr6.eq) goto loc_822E7C00;
	// lis r10,17255
	ctx.r10.s64 = 1130823680;
	// ori r9,r10,16969
	ctx.r9.u64 = ctx.r10.u64 | 16969;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822e7bec
	if (ctx.cr6.eq) goto loc_822E7BEC;
	// lis r10,18756
	ctx.r10.s64 = 1229193216;
	// ori r9,r10,16724
	ctx.r9.u64 = ctx.r10.u64 | 16724;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822e7ac0
	if (ctx.cr6.eq) goto loc_822E7AC0;
	// lis r10,18757
	ctx.r10.s64 = 1229258752;
	// ori r9,r10,20036
	ctx.r9.u64 = ctx.r10.u64 | 20036;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822e7f14
	if (!ctx.cr6.eq) goto loc_822E7F14;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x822e81f0
	if (ctx.cr6.eq) goto loc_822E81F0;
loc_822E7AA4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7004
	ctx.r11.s64 = ctx.r11.s64 + -7004;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E7AC0:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x822e7aa4
	if (!ctx.cr6.eq) goto loc_822E7AA4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7adc
	if (ctx.cr6.eq) goto loc_822E7ADC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822e853c
	if (ctx.cr6.eq) goto loc_822E853C;
loc_822E7ADC:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x822e8558
	if (ctx.cr6.eq) goto loc_822E8558;
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x822e8570
	if (ctx.cr6.gt) goto loc_822E8570;
	// add r27,r28,r22
	ctx.r27.u64 = ctx.r28.u64 + ctx.r22.u64;
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x822e8788
	if (ctx.cr6.lt) goto loc_822E8788;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x822e7b44
	if (!ctx.cr6.gt) goto loc_822E7B44;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822e7b18
	if (!ctx.cr6.eq) goto loc_822E7B18;
	// cmplwi cr6,r28,4096
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4096, ctx.xer);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// bgt cr6,0x822e7b18
	if (ctx.cr6.gt) goto loc_822E7B18;
	// li r23,4096
	ctx.r23.s64 = 4096;
loc_822E7B18:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x822e7b2c
	if (!ctx.cr6.gt) goto loc_822E7B2C;
loc_822E7B20:
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x822e7b20
	if (ctx.cr6.gt) goto loc_822E7B20;
loc_822E7B2C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82636a08
	ctx.lr = 0x822E7B38;
	sub_82636A08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e858c
	if (ctx.cr6.eq) goto loc_822E858C;
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
loc_822E7B44:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r29,r22,r11
	ctx.r29.u64 = ctx.r22.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7bb8
	if (ctx.cr6.eq) goto loc_822E7BB8;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subf r30,r4,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822e7bb8
	if (!ctx.cr6.lt) goto loc_822E7BB8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822E7B78;
	sub_82635430(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r28,r30,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r30.s64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E7B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r9,r3,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r3.s64;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e85a8
	if (ctx.cr6.eq) goto loc_822E85A8;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// b 0x822e81d8
	goto loc_822E81D8;
loc_822E7BB8:
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// add r10,r28,r4
	ctx.r10.u64 = ctx.r28.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822e85a8
	if (ctx.cr6.gt) goto loc_822E85A8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822E7BD8;
	sub_82635430(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// b 0x822e81d8
	goto loc_822E81D8;
loc_822E7BEC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0cc0
	ctx.lr = 0x822E7BFC;
	sub_822E0CC0(ctx, base);
	// b 0x822e81d8
	goto loc_822E81D8;
loc_822E7C00:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x822e85c4
	if (ctx.cr6.eq) goto loc_822E85C4;
	// mr r15,r18
	ctx.r15.u64 = ctx.r18.u64;
	// cmplwi cr6,r28,13
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 13, ctx.xer);
	// bne cr6,0x822e85e0
	if (!ctx.cr6.eq) goto loc_822E85E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E7C1C;
	sub_822E0D20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E7C28;
	sub_822E0D20(ctx, base);
	// rlwinm r11,r29,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822e0d20
	ctx.lr = 0x822E7C3C;
	sub_822E0D20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E7C48;
	sub_822E0D20(ctx, base);
	// rlwinm r9,r29,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,4096
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4096, ctx.xer);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bgt cr6,0x822e7ec0
	if (ctx.cr6.gt) goto loc_822E7EC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgt cr6,0x822e7ec0
	if (ctx.cr6.gt) goto loc_822E7EC0;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e7c88
	if (!ctx.cr6.lt) goto loc_822E7C88;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7cb4
	goto loc_822E7CB4;
loc_822E7C88:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e7cb0
	if (ctx.cr6.eq) goto loc_822E7CB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E7C9C;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7cb4
	goto loc_822E7CB4;
loc_822E7CB0:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E7CB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// beq cr6,0x822e7ce4
	if (ctx.cr6.eq) goto loc_822E7CE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822e7ce4
	if (ctx.cr6.eq) goto loc_822E7CE4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822e7ce4
	if (ctx.cr6.eq) goto loc_822E7CE4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822e7ce4
	if (ctx.cr6.eq) goto loc_822E7CE4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x822e85fc
	if (!ctx.cr6.eq) goto loc_822E85FC;
loc_822E7CE4:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e7d04
	if (!ctx.cr6.lt) goto loc_822E7D04;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7d30
	goto loc_822E7D30;
loc_822E7D04:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e7d2c
	if (ctx.cr6.eq) goto loc_822E7D2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E7D18;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7d30
	goto loc_822E7D30;
loc_822E7D2C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E7D30:
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,6
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 6, ctx.xer);
	// bgt cr6,0x822e8618
	if (ctx.cr6.gt) goto loc_822E8618;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// bne cr6,0x822e7d5c
	if (!ctx.cr6.eq) goto loc_822E7D5C;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x822e8618
	if (ctx.cr6.eq) goto loc_822E8618;
	// li r30,3
	ctx.r30.s64 = 3;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// b 0x822e7d68
	goto loc_822E7D68;
loc_822E7D5C:
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e8618
	if (!ctx.cr6.eq) goto loc_822E8618;
loc_822E7D68:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e7d88
	if (!ctx.cr6.lt) goto loc_822E7D88;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7db4
	goto loc_822E7DB4;
loc_822E7D88:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e7db0
	if (ctx.cr6.eq) goto loc_822E7DB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E7D9C;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7db4
	goto loc_822E7DB4;
loc_822E7DB0:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E7DB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e8634
	if (!ctx.cr6.eq) goto loc_822E8634;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e7de0
	if (!ctx.cr6.lt) goto loc_822E7DE0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7e0c
	goto loc_822E7E0C;
loc_822E7DE0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e7e08
	if (ctx.cr6.eq) goto loc_822E7E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E7DF4;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7e0c
	goto loc_822E7E0C;
loc_822E7E08:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E7E0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e8650
	if (!ctx.cr6.eq) goto loc_822E8650;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e7e38
	if (!ctx.cr6.lt) goto loc_822E7E38;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7e64
	goto loc_822E7E64;
loc_822E7E38:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e7e60
	if (ctx.cr6.eq) goto loc_822E7E60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E7E4C;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7e64
	goto loc_822E7E64;
loc_822E7E60:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E7E64:
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bgt cr6,0x822e866c
	if (ctx.cr6.gt) goto loc_822E866C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e8688
	if (ctx.cr6.eq) goto loc_822E8688;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e8688
	if (ctx.cr6.eq) goto loc_822E8688;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// twllei r10,0
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e7edc
	if (!ctx.cr6.eq) goto loc_822E7EDC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// rlwinm r8,r24,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x1;
	// rlwimi r9,r17,0,31,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r17.u32, 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r9.u64 & 0x2);
	// divwu r7,r20,r10
	ctx.r7.u32 = ctx.r20.u32 / ctx.r10.u32;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// divwu r5,r7,r6
	ctx.r5.u32 = ctx.r7.u32 / ctx.r6.u32;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// twllei r6,0
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e81d8
	if (!ctx.cr6.lt) goto loc_822E81D8;
loc_822E7EC0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7604
	ctx.r11.s64 = ctx.r11.s64 + -7604;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E7EDC:
	// divwu r10,r20,r10
	ctx.r10.u32 = ctx.r20.u32 / ctx.r10.u32;
	// stw r17,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e7ec0
	if (ctx.cr6.lt) goto loc_822E7EC0;
	// b 0x822e81d8
	goto loc_822E81D8;
loc_822E7EF4:
	// lis r10,20556
	ctx.r10.s64 = 1347158016;
	// ori r9,r10,21573
	ctx.r9.u64 = ctx.r10.u64 | 21573;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822e809c
	if (ctx.cr6.eq) goto loc_822E809C;
	// lis r10,29778
	ctx.r10.s64 = 1951531008;
	// ori r9,r10,20051
	ctx.r9.u64 = ctx.r10.u64 | 20051;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822e7f38
	if (ctx.cr6.eq) goto loc_822E7F38;
loc_822E7F14:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x822e7aa4
	if (!ctx.cr6.eq) goto loc_822E7AA4;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e86a4
	if (ctx.cr6.eq) goto loc_822E86A4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0cc0
	ctx.lr = 0x822E7F34;
	sub_822E0CC0(ctx, base);
	// b 0x822e81d8
	goto loc_822E81D8;
loc_822E7F38:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x822e7aa4
	if (!ctx.cr6.eq) goto loc_822E7AA4;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e86e0
	if (!ctx.cr6.eq) goto loc_822E86E0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7fe4
	if (ctx.cr6.eq) goto loc_822E7FE4;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x822e86fc
	if (ctx.cr6.eq) goto loc_822E86FC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822e8710
	if (ctx.cr6.eq) goto loc_822E8710;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x822e872c
	if (ctx.cr6.gt) goto loc_822E872C;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x822e81d8
	if (ctx.cr6.eq) goto loc_822E81D8;
	// addi r11,r1,115
	ctx.r11.s64 = ctx.r1.s64 + 115;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_822E7F88:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e7fa8
	if (!ctx.cr6.lt) goto loc_822E7FA8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7fd4
	goto loc_822E7FD4;
loc_822E7FA8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e7fd0
	if (ctx.cr6.eq) goto loc_822E7FD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E7FBC;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e7fd4
	goto loc_822E7FD4;
loc_822E7FD0:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E7FD4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stbu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r30.u32 = ea;
	// bne 0x822e7f88
	if (!ctx.cr0.eq) goto loc_822E7F88;
	// b 0x822e81d8
	goto loc_822E81D8;
loc_822E7FE4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e8748
	if (ctx.cr6.eq) goto loc_822E8748;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822e872c
	if (!ctx.cr6.eq) goto loc_822E872C;
	// stb r17,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r17.u8);
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x822e8764
	if (ctx.cr6.eq) goto loc_822E8764;
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x822e8058
	if (!ctx.cr6.eq) goto loc_822E8058;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e81d8
	if (!ctx.cr6.gt) goto loc_822E81D8;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_822E802C:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bge cr6,0x822e81d8
	if (!ctx.cr6.lt) goto loc_822E81D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E803C;
	sub_822E0D20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthu r10,2(r29)
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e802c
	if (ctx.cr6.lt) goto loc_822E802C;
	// b 0x822e81d8
	goto loc_822E81D8;
loc_822E8058:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e81d8
	if (!ctx.cr6.gt) goto loc_822E81D8;
loc_822E8060:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bge cr6,0x822e81d8
	if (!ctx.cr6.lt) goto loc_822E81D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E8070;
	sub_822E0D20(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbzx r8,r11,r19
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stbx r6,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822e8060
	if (ctx.cr6.lt) goto loc_822E8060;
	// b 0x822e81d8
	goto loc_822E81D8;
loc_822E809C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x822e7aa4
	if (!ctx.cr6.eq) goto loc_822E7AA4;
	// cmplwi cr6,r28,768
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 768, ctx.xer);
	// bgt cr6,0x822e8778
	if (ctx.cr6.gt) goto loc_822E8778;
	// li r11,3
	ctx.r11.s64 = 3;
	// divwu r21,r28,r11
	ctx.r21.u32 = ctx.r28.u32 / ctx.r11.u32;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r21,r11
	ctx.r10.u64 = ctx.r21.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x822e8778
	if (!ctx.cr6.eq) goto loc_822E8778;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822e81d8
	if (ctx.cr6.eq) goto loc_822E81D8;
	// addi r11,r1,113
	ctx.r11.s64 = ctx.r1.s64 + 113;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r30,r11,-2
	ctx.r30.s64 = ctx.r11.s64 + -2;
	// li r28,255
	ctx.r28.s64 = 255;
loc_822E80DC:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e80fc
	if (!ctx.cr6.lt) goto loc_822E80FC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// b 0x822e8128
	goto loc_822E8128;
loc_822E80FC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e8124
	if (ctx.cr6.eq) goto loc_822E8124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E8110;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// b 0x822e8128
	goto loc_822E8128;
loc_822E8124:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_822E8128:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822e814c
	if (!ctx.cr6.lt) goto loc_822E814C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// b 0x822e8178
	goto loc_822E8178;
loc_822E814C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e8174
	if (ctx.cr6.eq) goto loc_822E8174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E8160;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// b 0x822e8178
	goto loc_822E8178;
loc_822E8174:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_822E8178:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stb r10,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r10.u8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822e819c
	if (!ctx.cr6.lt) goto loc_822E819C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e81c8
	goto loc_822E81C8;
loc_822E819C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e81c4
	if (ctx.cr6.eq) goto loc_822E81C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0c28
	ctx.lr = 0x822E81B0;
	sub_822E0C28(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// b 0x822e81c8
	goto loc_822E81C8;
loc_822E81C4:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E81C8:
	// stb r11,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stbu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// bne 0x822e80dc
	if (!ctx.cr0.eq) goto loc_822E80DC;
loc_822E81D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E81E0;
	sub_822E0D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E81E8;
	sub_822E0D20(ctx, base);
	// lbz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x822e7a28
	goto loc_822E7A28;
loc_822E81F0:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x822e8564
	if (!ctx.cr6.eq) goto loc_822E8564;
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822e8220
	if (!ctx.cr6.eq) goto loc_822E8220;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7012
	ctx.r11.s64 = ctx.r11.s64 + -7012;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8220:
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r29,r5,r8
	ctx.r29.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634da0
	ctx.lr = 0x822E8250;
	sub_82634DA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e82ac
	if (ctx.cr6.eq) goto loc_822E82AC;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r3,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, ctx.r3.u32);
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// stw r3,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r3.u32);
	// stw r30,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r30.u32);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// stw r10,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r10.u32);
	// stw r11,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r11.u32);
	// stw r17,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r17.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x822e6a40
	ctx.lr = 0x822E828C;
	sub_822E6A40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e82a4
	if (ctx.cr6.eq) goto loc_822E82A4;
	// lwz r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// lwz r10,1156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x822e82b0
	goto loc_822E82B0;
loc_822E82A4:
	// lwz r3,1160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// bl 0x82634d40
	ctx.lr = 0x822E82AC;
	sub_82634D40(ctx, base);
loc_822E82AC:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822E82B0:
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e8788
	if (ctx.cr6.eq) goto loc_822E8788;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82634d40
	ctx.lr = 0x822E82C4;
	sub_82634D40(ctx, base);
	// stw r18,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r18.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r28,5412(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5412);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822e82f0
	if (!ctx.cr6.eq) goto loc_822E82F0;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x822e82f0
	if (ctx.cr6.eq) goto loc_822E82F0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822e82fc
	if (ctx.cr6.eq) goto loc_822E82FC;
loc_822E82F0:
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822e8304
	if (ctx.cr6.eq) goto loc_822E8304;
loc_822E82FC:
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x822e8308
	goto loc_822E8308;
loc_822E8304:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_822E8308:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r7,16(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822e73b8
	ctx.lr = 0x822E8328;
	sub_822E73B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e8788
	if (ctx.cr6.eq) goto loc_822E8788;
	// lbz r30,81(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822e848c
	if (ctx.cr6.eq) goto loc_822E848C;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// bne cr6,0x822e83f8
	if (!ctx.cr6.eq) goto loc_822E83F8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x822e83a4
	if (!ctx.cr6.eq) goto loc_822E83A4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e848c
	if (ctx.cr6.eq) goto loc_822E848C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lhz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_822E8384:
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 & ctx.r10.u64;
	// sthu r8,4(r11)
	// bdnz 0x822e8384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E8384;
	// b 0x822e848c
	goto loc_822E848C;
loc_822E83A4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e848c
	if (ctx.cr6.eq) goto loc_822E848C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lhz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
loc_822E83BC:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822e83ec
	if (!ctx.cr6.eq) goto loc_822E83EC;
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822e83ec
	if (!ctx.cr6.eq) goto loc_822E83EC;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822e83ec
	if (!ctx.cr6.eq) goto loc_822E83EC;
	// sth r18,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r18.u16);
loc_822E83EC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x822e83bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E83BC;
	// b 0x822e848c
	goto loc_822E848C;
loc_822E83F8:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x822e843c
	if (!ctx.cr6.eq) goto loc_822E843C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e848c
	if (ctx.cr6.eq) goto loc_822E848C;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,255
	ctx.r9.s64 = 255;
loc_822E841C:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// stbu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822e841c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E841C;
	// b 0x822e848c
	goto loc_822E848C;
loc_822E843C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e848c
	if (ctx.cr6.eq) goto loc_822E848C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
loc_822E8454:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822e8484
	if (!ctx.cr6.eq) goto loc_822E8484;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822e8484
	if (!ctx.cr6.eq) goto loc_822E8484;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822e8484
	if (!ctx.cr6.eq) goto loc_822E8484;
	// stb r18,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r18.u8);
loc_822E8484:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822e8454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E8454;
loc_822E848C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e84c0
	if (ctx.cr6.eq) goto loc_822E84C0;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r10,r11,-3384
	ctx.r10.s64 = ctx.r11.s64 + -3384;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e84c0
	if (ctx.cr6.eq) goto loc_822E84C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x822e84c0
	if (!ctx.cr6.gt) goto loc_822E84C0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822e7830
	ctx.lr = 0x822E84C0;
	sub_822E7830(ctx, base);
loc_822E84C0:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e8500
	if (ctx.cr6.eq) goto loc_822E8500;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// blt cr6,0x822e84e0
	if (ctx.cr6.lt) goto loc_822E84E0;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_822E84E0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822e76d8
	ctx.lr = 0x822E84F0;
	sub_822E76D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e8514
	if (!ctx.cr6.eq) goto loc_822E8514;
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8500:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822e8514
	if (ctx.cr6.eq) goto loc_822E8514;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822E8514:
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x822E851C;
	sub_82634D40(ctx, base);
	// stw r18,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E8528;
	sub_822E0D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d20
	ctx.lr = 0x822E8530;
	sub_822E0D20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E853C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7020
	ctx.r11.s64 = ctx.r11.s64 + -7020;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8558:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e8564
	if (ctx.cr6.eq) goto loc_822E8564;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822E8564:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8570:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7036
	ctx.r11.s64 = ctx.r11.s64 + -7036;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E858C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E85A8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7048
	ctx.r11.s64 = ctx.r11.s64 + -7048;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E85C4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7064
	ctx.r11.s64 = ctx.r11.s64 + -7064;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E85E0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7080
	ctx.r11.s64 = ctx.r11.s64 + -7080;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E85FC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7100
	ctx.r11.s64 = ctx.r11.s64 + -7100;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8618:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7112
	ctx.r11.s64 = ctx.r11.s64 + -7112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8634:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7128
	ctx.r11.s64 = ctx.r11.s64 + -7128;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8650:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7148
	ctx.r11.s64 = ctx.r11.s64 + -7148;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E866C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7172
	ctx.r11.s64 = ctx.r11.s64 + -7172;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8688:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7188
	ctx.r11.s64 = ctx.r11.s64 + -7188;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E86A4:
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// addi r7,r8,652
	ctx.r7.s64 = ctx.r8.s64 + 652;
	// lis r6,-32012
	ctx.r6.s64 = -2097938432;
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// stb r10,652(r8)
	PPC_STORE_U8(ctx.r8.u32 + 652, ctx.r10.u8);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stb r9,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r9.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,-3384(r6)
	PPC_STORE_U32(ctx.r6.u32 + -3384, ctx.r7.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r11,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r11.u8);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E86E0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7204
	ctx.r11.s64 = ctx.r11.s64 + -7204;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E86FC:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8710:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7224
	ctx.r11.s64 = ctx.r11.s64 + -7224;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E872C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7240
	ctx.r11.s64 = ctx.r11.s64 + -7240;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8748:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7256
	ctx.r11.s64 = ctx.r11.s64 + -7256;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8764:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8778:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7272
	ctx.r11.s64 = ctx.r11.s64 + -7272;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
loc_822E8788:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,5376
	ctx.r1.s64 = ctx.r1.s64 + 5376;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E7990) {
	__imp__sub_822E7990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E8794) {
	__imp__sub_822E8794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822E87A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// blt cr6,0x822e88dc
	if (ctx.cr6.lt) goto loc_822E88DC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bgt cr6,0x822e88dc
	if (ctx.cr6.gt) goto loc_822E88DC;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e7990
	ctx.lr = 0x822E87E0;
	sub_822E7990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e8890
	if (ctx.cr6.eq) goto loc_822E8890;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x822e87fc
	if (ctx.cr6.gt) goto loc_822E87FC;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x822e8804
	goto loc_822E8804;
loc_822E87FC:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x822e88c0
	if (!ctx.cr6.eq) goto loc_822E88C0;
loc_822E8804:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// beq cr6,0x822e8864
	if (ctx.cr6.eq) goto loc_822E8864;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822e8864
	if (ctx.cr6.eq) goto loc_822E8864;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x822e884c
	if (!ctx.cr6.eq) goto loc_822E884C;
	// bl 0x822e0de8
	ctx.lr = 0x822E8848;
	sub_822E0DE8(ctx, base);
	// b 0x822e8850
	goto loc_822E8850;
loc_822E884C:
	// bl 0x822e1298
	ctx.lr = 0x822E8850;
	sub_822E1298(ctx, base);
loc_822E8850:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// beq cr6,0x822e88ec
	if (ctx.cr6.eq) goto loc_822E88EC;
loc_822E8864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// beq cr6,0x822e8890
	if (ctx.cr6.eq) goto loc_822E8890;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_822E8890:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82634d40
	ctx.lr = 0x822E8898;
	sub_82634D40(ctx, base);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x822E88A4;
	sub_82634D40(ctx, base);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82634d40
	ctx.lr = 0x822E88B0;
	sub_82634D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E88C0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-6988
	ctx.r11.s64 = ctx.r11.s64 + -6988;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822E88DC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7496
	ctx.r11.s64 = ctx.r11.s64 + -7496;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
loc_822E88EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E8798) {
	__imp__sub_822E8798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E88F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822E8900;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r29.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r29,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r29.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r29,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x822e6b68
	ctx.lr = 0x822E8940;
	sub_822E6B68(ctx, base);
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r9,184(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// stw r9,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r9.u32);
	// beq cr6,0x822e8980
	if (ctx.cr6.eq) goto loc_822E8980;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8798
	ctx.lr = 0x822E8978;
	sub_822E8798(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822E8980:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5b50
	ctx.lr = 0x822E8988;
	sub_822E5B50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e8a28
	if (ctx.cr6.eq) goto loc_822E8A28;
	// li r3,18456
	ctx.r3.s64 = 18456;
	// bl 0x82634da0
	ctx.lr = 0x822E8998;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e89c0
	if (!ctx.cr6.eq) goto loc_822E89C0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822E89C0:
	// li r5,18456
	ctx.r5.s64 = 18456;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E89D0;
	sub_826344D0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r7,r10,20592
	ctx.r7.s64 = ctx.r10.s64 + 20592;
	// addi r6,r9,20288
	ctx.r6.s64 = ctx.r9.s64 + 20288;
	// addi r8,r11,10472
	ctx.r8.s64 = ctx.r11.s64 + 10472;
	// stw r7,18448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18448, ctx.r7.u32);
	// stw r6,18452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18452, ctx.r6.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r8,18444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18444, ctx.r8.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5170
	ctx.lr = 0x822E8A10;
	sub_822E5170(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E8A1C;
	sub_82634D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822E8A28:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// addi r11,r11,-6964
	ctx.r11.s64 = ctx.r11.s64 + -6964;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3384, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E88F8) {
	__imp__sub_822E88F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E8A44) {
	__imp__sub_822E8A44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822E8A50;
	__savegprlr_14(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stw r5,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r5.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r6,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8bbc
	if (ctx.cr6.eq) goto loc_822E8BBC;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x822e8bbc
	if (ctx.cr6.lt) goto loc_822E8BBC;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822e8bbc
	if (ctx.cr6.gt) goto loc_822E8BBC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822e8bbc
	if (!ctx.cr6.gt) goto loc_822E8BBC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822e8bbc
	if (!ctx.cr6.gt) goto loc_822E8BBC;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stw r25,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r25.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x822e88f8
	ctx.lr = 0x822E8ADC;
	sub_822E88F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8bbc
	if (ctx.cr6.eq) goto loc_822E8BBC;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// addi r29,r11,-3384
	ctx.r29.s64 = ctx.r11.s64 + -3384;
	// beq cr6,0x822e8b70
	if (ctx.cr6.eq) goto loc_822E8B70;
	// mullw r11,r27,r28
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634da0
	ctx.lr = 0x822E8B1C;
	sub_82634DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e8b3c
	if (!ctx.cr6.eq) goto loc_822E8B3C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822e8b6c
	goto loc_822E8B6C;
loc_822E8B3C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822e8b60
	if (!ctx.cr6.gt) goto loc_822E8B60;
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_822E8B50:
	// lbzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbx r9,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822e8b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E8B50;
loc_822E8B60:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E8B68;
	sub_82634D40(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_822E8B6C:
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822E8B70:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e8b90
	if (ctx.cr6.eq) goto loc_822E8B90;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e0b78
	ctx.lr = 0x822E8B90;
	sub_822E0B78(ctx, base);
loc_822E8B90:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822e8bbc
	if (ctx.cr6.eq) goto loc_822E8BBC;
	// mullw r31,r21,r22
	ctx.r31.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r22.s32);
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82634da0
	ctx.lr = 0x822E8BA4;
	sub_82634DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e8bc8
	if (!ctx.cr6.eq) goto loc_822E8BC8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E8BBC;
	sub_82634D40(ctx, base);
loc_822E8BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8BC8:
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x822e8c24
	if (!ctx.cr6.eq) goto loc_822E8C24;
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x822e8c24
	if (!ctx.cr6.eq) goto loc_822E8C24;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822e8f74
	if (!ctx.cr6.gt) goto loc_822E8F74;
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
loc_822E8BEC:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r9,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwimi r7,r6,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822e8bec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E8BEC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E8C18;
	sub_82634D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822E8C24:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// extsw r16,r21
	ctx.r16.s64 = ctx.r21.s32;
	// extsw r7,r22
	ctx.r7.s64 = ctx.r22.s32;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// mulld r9,r16,r10
	ctx.r9.s64 = ctx.r16.s64 * ctx.r10.s64;
	// mulld r8,r7,r11
	ctx.r8.s64 = ctx.r7.s64 * ctx.r11.s64;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// cmpd cr6,r8,r9
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r9.s64, ctx.xer);
	// ble cr6,0x822e8c68
	if (!ctx.cr6.gt) goto loc_822E8C68;
	// rotldi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// divd r15,r9,r7
	ctx.r15.s64 = ctx.r9.s64 / ctx.r7.s64;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// tdllei r7,0
	// andc r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// tdlgei r8,-1
	// b 0x822e8c84
	goto loc_822E8C84;
loc_822E8C68:
	// rotldi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 1);
	// divd r8,r8,r16
	ctx.r8.s64 = ctx.r8.s64 / ctx.r16.s64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// tdllei r16,0
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// andc r6,r16,r7
	ctx.r6.u64 = ctx.r16.u64 & ~ctx.r7.u64;
	// tdlgei r6,-1
loc_822E8C84:
	// cmpdi cr6,r15,1
	ctx.cr6.compare<int64_t>(ctx.r15.s64, 1, ctx.xer);
	// bge cr6,0x822e8c90
	if (!ctx.cr6.lt) goto loc_822E8C90;
	// li r15,1
	ctx.r15.s64 = 1;
loc_822E8C90:
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// cmpdi cr6,r9,1
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 1, ctx.xer);
	// bge cr6,0x822e8ca4
	if (!ctx.cr6.lt) goto loc_822E8CA4;
	// li r9,1
	ctx.r9.s64 = 1;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
loc_822E8CA4:
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf r11,r15,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r15.s64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rldicl r9,r11,1,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// rldicl r8,r10,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sradi r9,r11,1
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s64 >> 1;
	// sradi r8,r10,1
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s64 >> 1;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// ble cr6,0x822e8f74
	if (!ctx.cr6.gt) goto loc_822E8F74;
	// std r25,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r25.u64);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_822E8CEC:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r9,r22
	ctx.r9.s64 = ctx.r22.s32;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// rotldi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// mulld r3,r10,r5
	ctx.r3.s64 = ctx.r10.s64 * ctx.r5.s64;
	// rotldi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 1);
	// divd r31,r7,r9
	ctx.r31.s64 = ctx.r7.s64 / ctx.r9.s64;
	// divd r3,r3,r9
	ctx.r3.s64 = ctx.r3.s64 / ctx.r9.s64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// add r18,r11,r4
	ctx.r18.u64 = ctx.r11.u64 + ctx.r4.u64;
	// andc r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r29.u64;
	// andc r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r24.u64;
	// add r17,r10,r4
	ctx.r17.u64 = ctx.r10.u64 + ctx.r4.u64;
	// tdllei r9,0
	// tdllei r9,0
	// tdlgei r3,-1
	// tdlgei r11,-1
	// cmpw cr6,r17,r18
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r18.s32, ctx.xer);
	// bgt cr6,0x822e8d50
	if (ctx.cr6.gt) goto loc_822E8D50;
	// addi r17,r18,1
	ctx.r17.s64 = ctx.r18.s64 + 1;
loc_822E8D50:
	// cmpw cr6,r17,r27
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x822e8d5c
	if (!ctx.cr6.gt) goto loc_822E8D5C;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
loc_822E8D5C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x822e8f50
	if (!ctx.cr6.gt) goto loc_822E8F50;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// addi r14,r10,-4
	ctx.r14.s64 = ctx.r10.s64 + -4;
loc_822E8D74:
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// rotldi r10,r20,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u64, 1);
	// extsw r11,r19
	ctx.r11.s64 = ctx.r19.s32;
	// divd r9,r20,r16
	ctx.r9.s64 = ctx.r20.s64 / ctx.r16.s64;
	// mulld r8,r11,r15
	ctx.r8.s64 = ctx.r11.s64 * ctx.r15.s64;
	// rotldi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 1);
	// divd r7,r8,r16
	ctx.r7.s64 = ctx.r8.s64 / ctx.r16.s64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// add r24,r10,r6
	ctx.r24.u64 = ctx.r10.u64 + ctx.r6.u64;
	// andc r3,r16,r5
	ctx.r3.u64 = ctx.r16.u64 & ~ctx.r5.u64;
	// andc r10,r16,r4
	ctx.r10.u64 = ctx.r16.u64 & ~ctx.r4.u64;
	// add r23,r11,r6
	ctx.r23.u64 = ctx.r11.u64 + ctx.r6.u64;
	// tdllei r16,0
	// tdllei r16,0
	// tdlgei r3,-1
	// tdlgei r10,-1
	// cmpw cr6,r23,r24
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x822e8dcc
	if (ctx.cr6.gt) goto loc_822E8DCC;
	// addi r23,r24,1
	ctx.r23.s64 = ctx.r24.s64 + 1;
loc_822E8DCC:
	// cmpw cr6,r23,r28
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x822e8dd8
	if (!ctx.cr6.gt) goto loc_822E8DD8;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
loc_822E8DD8:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpw cr6,r18,r17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x822e8ee8
	if (!ctx.cr6.lt) goto loc_822E8EE8;
	// mullw r11,r18,r28
	ctx.r11.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r28.s32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r7,r18,r17
	ctx.r7.s64 = ctx.r17.s64 - ctx.r18.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r21,r28,r10
	ctx.r21.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// add r22,r11,r8
	ctx.r22.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_822E8E14:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x822e8ed0
	if (!ctx.cr6.lt) goto loc_822E8ED0;
	// subf r3,r24,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r24.s64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x822e8e94
	if (ctx.cr6.lt) goto loc_822E8E94;
	// addi r28,r23,-1
	ctx.r28.s64 = ctx.r23.s64 + -1;
loc_822E8E4C:
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822e8e4c
	if (ctx.cr6.lt) goto loc_822E8E4C;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_822E8E94:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x822e8eb8
	if (!ctx.cr6.lt) goto loc_822E8EB8;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_822E8EB8:
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_822E8ED0:
	// add r22,r21,r22
	ctx.r22.u64 = ctx.r21.u64 + ctx.r22.u64;
	// bdnz 0x822e8e14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E8E14;
	// lwz r21,532(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r22,540(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// bne cr6,0x822e8eec
	if (!ctx.cr6.eq) goto loc_822E8EEC;
loc_822E8EE8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_822E8EEC:
	// divwu r11,r27,r29
	ctx.r11.u32 = ctx.r27.u32 / ctx.r29.u32;
	// divwu r10,r26,r29
	ctx.r10.u32 = ctx.r26.u32 / ctx.r29.u32;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// divwu r8,r25,r29
	ctx.r8.u32 = ctx.r25.u32 / ctx.r29.u32;
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// twllei r29,0
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// twllei r29,0
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// twllei r29,0
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// add r20,r20,r15
	ctx.r20.u64 = ctx.r20.u64 + ctx.r15.u64;
	// stwu r4,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r14.u32 = ea;
	// cmpw cr6,r19,r21
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r21.s32, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// blt cr6,0x822e8d74
	if (ctx.cr6.lt) goto loc_822E8D74;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_822E8F50:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x822e8cec
	if (ctx.cr6.lt) goto loc_822E8CEC;
loc_822E8F74:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82634d40
	ctx.lr = 0x822E8F7C;
	sub_82634D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E8A48) {
	__imp__sub_822E8A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8F88) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822E8F90;
	__savegprlr_29(ctx, base);
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// bge cr6,0x822e8fa0
	if (!ctx.cr6.lt) goto loc_822E8FA0;
loc_822E8F98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822E8FA0:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r31,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x1;
	// lbz r7,3(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lbz r30,2(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rotlwi r30,r30,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 8);
	// or r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 | ctx.r7.u64;
	// rlwinm r7,r31,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// sth r30,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r30.u16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r31,6(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// lbz r30,7(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rotlwi r29,r29,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 8);
	// or r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 | ctx.r5.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blt cr6,0x822e8f98
	if (ctx.cr6.lt) goto loc_822E8F98;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e9048
	if (ctx.cr6.eq) goto loc_822E9048;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822e8f98
	if (ctx.cr6.lt) goto loc_822E8F98;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rotlwi r10,r6,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e8f98
	if (ctx.cr6.lt) goto loc_822E8F98;
loc_822E9048:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822e9074
	if (ctx.cr6.eq) goto loc_822E9074;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e9074
	if (ctx.cr6.eq) goto loc_822E9074;
	// add r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r7,-1(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + -1);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// ble cr6,0x822e9074
	if (!ctx.cr6.gt) goto loc_822E9074;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822E9074:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E8F88) {
	__imp__sub_822E8F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9088) {
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
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822e90c4
	if (!ctx.cr6.gt) goto loc_822E90C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e90e4
	goto loc_822E90E4;
loc_822E90C4:
	// lwz r10,1644(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1644);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x822E90D4;
	sub_82635430(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822E90E4:
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

PPC_WEAK_FUNC(sub_822E9088) {
	__imp__sub_822E9088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E90FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E90FC) {
	__imp__sub_822E90FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822E9108;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822e9258
	if (ctx.cr6.eq) goto loc_822E9258;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822e9184
	if (ctx.cr6.lt) goto loc_822E9184;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bgt cr6,0x822e9184
	if (ctx.cr6.gt) goto loc_822E9184;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-6876
	ctx.r5.s64 = ctx.r11.s64 + -6876;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e9088
	ctx.lr = 0x822E9150;
	sub_822E9088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e9178
	if (ctx.cr6.eq) goto loc_822E9178;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e9088
	ctx.lr = 0x822E916C;
	sub_822E9088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x822e925c
	if (!ctx.cr6.eq) goto loc_822E925C;
loc_822E9178:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822E9184:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x822e9264
	if (!ctx.cr6.eq) goto loc_822E9264;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// blt cr6,0x822e9258
	if (ctx.cr6.lt) goto loc_822E9258;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r23,r27,1
	ctx.r23.s64 = ctx.r27.s64 + 1;
	// lis r25,32
	ctx.r25.s64 = 2097152;
	// addi r24,r10,-6876
	ctx.r24.s64 = ctx.r10.s64 + -6876;
loc_822E91A8:
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbzx r8,r23,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822e9258
	if (ctx.cr6.eq) goto loc_822E9258;
	// add r29,r30,r9
	ctx.r29.u64 = ctx.r30.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x822e9258
	if (ctx.cr6.gt) goto loc_822E9258;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x822e9178
	if (ctx.cr6.gt) goto loc_822E9178;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r11,1644(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1644);
	// lbz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r6,1(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lbz r5,2(r24)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// lbz r4,3(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 3);
	// stb r4,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x822e9178
	if (ctx.cr6.gt) goto loc_822E9178;
	// lwz r10,1644(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1644);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82635430
	ctx.lr = 0x822E923C;
	sub_82635430(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 2;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// ble cr6,0x822e91a8
	if (!ctx.cr6.gt) goto loc_822E91A8;
loc_822E9258:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822E925C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822E9264:
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x822e9258
	if (!ctx.cr6.eq) goto loc_822E9258;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// blt cr6,0x822e9258
	if (ctx.cr6.lt) goto loc_822E9258;
	// lbz r11,1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e92c8
	if (ctx.cr6.eq) goto loc_822E92C8;
	// rlwimi r11,r10,0,24,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r6,4
	ctx.r6.s64 = 4;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r10,-6876
	ctx.r5.s64 = ctx.r10.s64 + -6876;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e9088
	ctx.lr = 0x822E92A4;
	sub_822E9088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e9178
	if (ctx.cr6.eq) goto loc_822E9178;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e9088
	ctx.lr = 0x822E92C0;
	sub_822E9088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e9178
	if (ctx.cr6.eq) goto loc_822E9178;
loc_822E92C8:
	// addi r6,r26,-2
	ctx.r6.s64 = ctx.r26.s64 + -2;
	// addi r5,r27,2
	ctx.r5.s64 = ctx.r27.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e9088
	ctx.lr = 0x822E92DC;
	sub_822E9088(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E9100) {
	__imp__sub_822E9100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E92E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E92E4) {
	__imp__sub_822E92E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E92E8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82634d40
	ctx.lr = 0x822E9304;
	sub_82634D40(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82634d40
	ctx.lr = 0x822E930C;
	sub_82634D40(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x822E9314;
	sub_82634D40(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82634d40
	ctx.lr = 0x822E931C;
	sub_82634D40(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82634d40
	ctx.lr = 0x822E9324;
	sub_82634D40(ctx, base);
	// lwz r3,1644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// bl 0x82634d40
	ctx.lr = 0x822E932C;
	sub_82634D40(ctx, base);
	// lwz r3,1648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// bl 0x82634d40
	ctx.lr = 0x822E9334;
	sub_82634D40(ctx, base);
	// li r5,1656
	ctx.r5.s64 = 1656;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E9344;
	sub_826344D0(ctx, base);
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

PPC_WEAK_FUNC(sub_822E92E8) {
	__imp__sub_822E92E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r8,2048
	ctx.r8.s64 = 2048;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822E9370:
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subfic r7,r10,2047
	ctx.xer.ca = ctx.r10.u32 <= 2047;
	ctx.r7.s64 = 2047 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// sthx r6,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x822e9370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E9370;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E9398:
	// sthu r11,24(r10)
	// bdnz 0x822e9398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E9398;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,1560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1560, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,1564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1564, ctx.r11.u32);
	// stw r11,1568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1568, ctx.r11.u32);
	// addi r10,r3,1604
	ctx.r10.s64 = ctx.r3.s64 + 1604;
	// stw r11,1572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1572, ctx.r11.u32);
	// stw r8,1576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1576, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E93C4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822e93c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E93C4;
	// stw r11,1580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1580, ctx.r11.u32);
	// sth r11,1584(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1584, ctx.r11.u16);
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,1600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1600, ctx.r11.u32);
	// stw r11,1596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1596, ctx.r11.u32);
	// stw r11,1592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1592, ctx.r11.u32);
	// stw r11,1588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1588, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9358) {
	__imp__sub_822E9358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E93EC) {
	__imp__sub_822E93EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E93F0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,1580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e9408
	if (!ctx.cr6.eq) goto loc_822E9408;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822E9408:
	// lhz r11,1584(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1584);
	// lwz r10,1588(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1588);
	// lwz r9,1592(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1592);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,1596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1596);
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bgt cr6,0x822e9434
	if (ctx.cr6.gt) goto loc_822E9434;
	// li r7,0
	ctx.r7.s64 = 0;
loc_822E9434:
	// lwz r9,1604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// lwz r31,1600(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1600);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r10.u32);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r11,1600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1600, ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bgt cr6,0x822e945c
	if (ctx.cr6.gt) goto loc_822E945C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E945C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e9480
	if (ctx.cr6.eq) goto loc_822E9480;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e9480
	if (ctx.cr6.eq) goto loc_822E9480;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// twllei r9,0
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// b 0x822e9484
	goto loc_822E9484;
loc_822E9480:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E9484:
	// clrlwi r10,r7,8
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E93F0) {
	__imp__sub_822E93F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E94A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822e9514
	if (ctx.cr6.eq) goto loc_822E9514;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822E94DC:
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// sthx r4,r5,r6
	PPC_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r4.u16);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lhz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822e94dc
	if (ctx.cr6.lt) goto loc_822E94DC;
loc_822E9514:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lwz r10,1564(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1564);
	// lwz r11,1560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// stw r8,1564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1564, ctx.r8.u32);
	// rlwinm r6,r7,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r5,1560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1560, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E94A0) {
	__imp__sub_822E94A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822E9550;
	__savegprlr_27(ctx, base);
	// lwz r6,1564(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1564);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822e95ac
	if (!ctx.cr6.gt) goto loc_822E95AC;
	// lwz r7,1560(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
loc_822E9568:
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r9,r3,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822e9788
	if (ctx.cr6.eq) goto loc_822E9788;
	// lwz r11,1564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1564);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e9568
	if (ctx.cr6.lt) goto loc_822E9568;
loc_822E95AC:
	// lwz r11,1568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1568);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e95e4
	if (ctx.cr6.eq) goto loc_822E95E4;
	// lwz r11,1572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1572);
	// subf. r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e95d0
	if (ctx.cr0.eq) goto loc_822E95D0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822e95e4
	if (ctx.cr6.lt) goto loc_822E95E4;
loc_822E95D0:
	// lwz r11,1636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1636);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1636, ctx.r11.u32);
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E95E4:
	// cmpwi cr6,r6,64
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 64, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x822e9600
	if (ctx.cr6.lt) goto loc_822E9600;
	// lwz r11,1632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1632);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1632, ctx.r11.u32);
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E9600:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822e9654
	if (!ctx.cr6.gt) goto loc_822E9654;
	// lwz r8,1560(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1560);
loc_822E960C:
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// subf. r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e9654
	if (ctx.cr0.eq) goto loc_822E9654;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822e9654
	if (!ctx.cr6.lt) goto loc_822E9654;
	// lwz r11,1564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1564);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e960c
	if (ctx.cr6.lt) goto loc_822E960C;
loc_822E9654:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r11,1564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1564, ctx.r11.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x822e974c
	if (!ctx.cr6.gt) goto loc_822E974C;
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_822E966C:
	// lwz r11,1560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1560);
	// addi r31,r1,-80
	ctx.r31.s64 = ctx.r1.s64 + -80;
	// addi r30,r1,-80
	ctx.r30.s64 = ctx.r1.s64 + -80;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r29,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 6;
	// rlwinm r6,r6,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// addze r29,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r29.s64 = temp.s64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r6,r29,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// ld r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ldx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// std r28,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r28.u64);
	// std r27,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r27.u64);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// ld r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// ld r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// lwz r11,1560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1560);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// srawi r7,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 6;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r6,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stdx r31,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u64);
	// std r29,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r29.u64);
	// std r30,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r30.u64);
	// bne 0x822e966c
	if (!ctx.cr0.eq) goto loc_822E966C;
loc_822E974C:
	// lwz r11,1560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1560);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi r7,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 6;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r3,r6,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// sth r8,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
loc_822E9788:
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E9548) {
	__imp__sub_822E9548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E978C) {
	__imp__sub_822E978C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822E9798;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822e97c0
	if (!ctx.cr6.eq) goto loc_822E97C0;
loc_822E97B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E97C0:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ble cr6,0x822e97b4
	if (!ctx.cr6.gt) goto loc_822E97B4;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
loc_822E97DC:
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822e9808
	if (!ctx.cr6.eq) goto loc_822E9808;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822e97dc
	if (ctx.cr6.lt) goto loc_822E97DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E9808:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822e97b4
	if (ctx.cr6.lt) goto loc_822E97B4;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822e97b4
	if (!ctx.cr6.eq) goto loc_822E97B4;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mulli r10,r10,1500
	ctx.r10.s64 = ctx.r10.s64 * 1500;
	// lhzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e9850
	if (ctx.cr6.eq) goto loc_822E9850;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x822e9854
	goto loc_822E9854;
loc_822E9850:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E9854:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x822e9884
	if (!ctx.cr6.eq) goto loc_822E9884;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x822e97b4
	if (!ctx.cr6.gt) goto loc_822E97B4;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e9894
	if (!ctx.cr6.eq) goto loc_822E9894;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822E9884:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822e97b4
	if (ctx.cr6.lt) goto loc_822E97B4;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x822e97b4
	if (ctx.cr6.gt) goto loc_822E97B4;
loc_822E9894:
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x822e98e8
	if (!ctx.cr6.gt) goto loc_822E98E8;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_822E98AC:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r4,r5,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lhz r3,-2(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lhzx r5,r4,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822e97b4
	if (!ctx.cr6.eq) goto loc_822E97B4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822e98ac
	if (ctx.cr6.lt) goto loc_822E98AC;
loc_822E98E8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822e9944
	if (!ctx.cr6.gt) goto loc_822E9944;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822E98F8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mulli r11,r8,1500
	ctx.r11.s64 = ctx.r8.s64 * 1500;
	// lhzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// bl 0x822e9100
	ctx.lr = 0x822E9928;
	sub_822E9100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e97b4
	if (ctx.cr6.eq) goto loc_822E97B4;
	// lhz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e98f8
	if (ctx.cr6.lt) goto loc_822E98F8;
loc_822E9944:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E9790) {
	__imp__sub_822E9790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822E9960;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x822e8f88
	ctx.lr = 0x822E999C;
	sub_822E8F88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e9da4
	if (ctx.cr6.eq) goto loc_822E9DA4;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,1580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lhz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r9.u32);
	// bne cr6,0x822e99e0
	if (!ctx.cr6.eq) goto loc_822E99E0;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// sth r27,1584(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1584, ctx.r27.u16);
	// stw r26,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r26.u32);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stw r25,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r25.u32);
	// stw r25,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r25.u32);
loc_822E99E0:
	// lhz r10,1584(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1584);
	// clrlwi r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r7,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e9acc
	if (ctx.cr6.eq) goto loc_822E9ACC;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x822e9acc
	if (!ctx.cr6.lt) goto loc_822E9ACC;
	// clrlwi r29,r27,16
	ctx.r29.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822e9a28
	if (!ctx.cr6.lt) goto loc_822E9A28;
	// lwz r9,1588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// stw r8,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r8.u32);
loc_822E9A28:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e9ac8
	if (ctx.cr6.eq) goto loc_822E9AC8;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x822e9ac8
	if (ctx.cr6.gt) goto loc_822E9AC8;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822e9ac8
	if (ctx.cr6.eq) goto loc_822E9AC8;
loc_822E9A58:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_822E9A70:
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822e9aa0
	if (ctx.cr6.eq) goto loc_822E9AA0;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r30,r6,16
	ctx.r30.u64 = ctx.r6.u32 & 0xFFFF;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x822e9a70
	if (ctx.cr6.lt) goto loc_822E9A70;
loc_822E9AA0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x822E9AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// stw r9,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r9.u32);
	// bne cr6,0x822e9a58
	if (!ctx.cr6.eq) goto loc_822E9A58;
loc_822E9AC8:
	// sth r27,1584(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1584, ctx.r27.u16);
loc_822E9ACC:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e9da4
	if (ctx.cr6.eq) goto loc_822E9DA4;
	// cmplwi cr6,r28,1500
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1500, ctx.xer);
	// bgt cr6,0x822e9d98
	if (ctx.cr6.gt) goto loc_822E9D98;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9548
	ctx.lr = 0x822E9AF0;
	sub_822E9548(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e9da4
	if (ctx.cr6.eq) goto loc_822E9DA4;
	// lhz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822e9b44
	if (!ctx.cr6.gt) goto loc_822E9B44;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r8,r27,16
	ctx.r8.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_822E9B1C:
	// lhzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r4,r5,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lhzx r3,r4,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822e9d0c
	if (ctx.cr6.eq) goto loc_822E9D0C;
	// lhz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822e9b1c
	if (ctx.cr6.lt) goto loc_822E9B1C;
loc_822E9B44:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e9d98
	if (ctx.cr6.eq) goto loc_822E9D98;
	// cmplwi cr6,r6,1024
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1024, ctx.xer);
	// bge cr6,0x822e9d98
	if (!ctx.cr6.lt) goto loc_822E9D98;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhzx r29,r8,r9
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// mulli r11,r29,1500
	ctx.r11.s64 = ctx.r29.s64 * 1500;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822E9B88;
	sub_82635430(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// sthx r28,r3,r7
	PPC_STORE_U16(ctx.r3.u32 + ctx.r7.u32, ctx.r28.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// sthx r27,r7,r11
	PPC_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r27.u16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stbx r5,r10,r29
	PPC_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r5.u8);
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e9bf0
	if (!ctx.cr6.gt) goto loc_822E9BF0;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_822E9BB8:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lhzx r3,r5,r6
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// subf r7,r3,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r3.s64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x822e9bf0
	if (!ctx.cr6.lt) goto loc_822E9BF0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// bgt 0x822e9bb8
	if (ctx.cr0.gt) goto loc_822E9BB8;
loc_822E9BF0:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u16);
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r8.u16);
	// lwz r6,1564(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822e9da4
	if (ctx.cr6.eq) goto loc_822E9DA4;
loc_822E9C14:
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e9790
	ctx.lr = 0x822E9C50;
	sub_822E9790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e9d4c
	if (ctx.cr6.eq) goto loc_822E9D4C;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r26.u32);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// bl 0x822e94a0
	ctx.lr = 0x822E9C6C;
	sub_822E94A0(ctx, base);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e9d24
	if (ctx.cr6.eq) goto loc_822E9D24;
	// lwz r10,1644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x822e9cf8
	if (!ctx.cr6.gt) goto loc_822E9CF8;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r25
	ctx.r9.u64 = ctx.r8.u64 + ctx.r25.u64;
loc_822E9C94:
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e9ce4
	if (!ctx.cr6.eq) goto loc_822E9CE4;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822e9ce4
	if (!ctx.cr6.eq) goto loc_822E9CE4;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822e9ce4
	if (!ctx.cr6.eq) goto loc_822E9CE4;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x822e9ce4
	if (!ctx.cr6.eq) goto loc_822E9CE4;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// clrlwi r6,r7,27
	ctx.r6.u64 = ctx.r7.u32 & 0x1F;
	// cmplwi cr6,r6,5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 5, ctx.xer);
	// beq cr6,0x822e9d20
	if (ctx.cr6.eq) goto loc_822E9D20;
loc_822E9CE4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822e9c94
	if (ctx.cr6.lt) goto loc_822E9C94;
loc_822E9CF8:
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// b 0x822e9d84
	goto loc_822E9D84;
loc_822E9D0C:
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822E9D20:
	// stw r25,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r25.u32);
loc_822E9D24:
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r5,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r5.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,1644(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x822E9D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822e9d84
	goto loc_822E9D84;
loc_822E9D4C:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// subf r10,r11,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,500
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 500, ctx.xer);
	// ble cr6,0x822e9da4
	if (!ctx.cr6.gt) goto loc_822E9DA4;
	// stw r26,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// bl 0x822e94a0
	ctx.lr = 0x822E9D70;
	sub_822E94A0(ctx, base);
	// stw r26,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r26.u32);
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
loc_822E9D84:
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e9c14
	if (!ctx.cr6.eq) goto loc_822E9C14;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822E9D98:
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
loc_822E9DA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E9958) {
	__imp__sub_822E9958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E9DAC) {
	__imp__sub_822E9DAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822E9DB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1656
	ctx.r5.s64 = 1656;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E9DCC;
	sub_826344D0(ctx, base);
	// lis r3,46
	ctx.r3.s64 = 3014656;
	// ori r3,r3,57344
	ctx.r3.u64 = ctx.r3.u64 | 57344;
	// bl 0x82634da0
	ctx.lr = 0x822E9DD8;
	sub_82634DA0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// bl 0x826365a8
	ctx.lr = 0x822E9DEC;
	sub_826365A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x826365a8
	ctx.lr = 0x822E9E00;
	sub_826365A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x826365a8
	ctx.lr = 0x822E9E14;
	sub_826365A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x826365a8
	ctx.lr = 0x822E9E28;
	sub_826365A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// bl 0x82634da0
	ctx.lr = 0x822E9E38;
	sub_82634DA0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r26,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r26.u32);
	// bl 0x826365a8
	ctx.lr = 0x822E9E4C;
	sub_826365A8(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822e9eb8
	if (ctx.cr6.eq) goto loc_822E9EB8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822e9eb8
	if (ctx.cr6.eq) goto loc_822E9EB8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822e9eb8
	if (ctx.cr6.eq) goto loc_822E9EB8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e9eb8
	if (ctx.cr6.eq) goto loc_822E9EB8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822e9eb8
	if (ctx.cr6.eq) goto loc_822E9EB8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822e9eb8
	if (ctx.cr6.eq) goto loc_822E9EB8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e9eb8
	if (ctx.cr6.eq) goto loc_822E9EB8;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E9E94:
	// stwu r11,24(r10)
	ea = 24 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// bdnz 0x822e9e94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E9E94;
	// stw r3,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9358
	ctx.lr = 0x822E9EAC;
	sub_822E9358(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822E9EB8:
	// bl 0x82634d40
	ctx.lr = 0x822E9EBC;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e92e8
	ctx.lr = 0x822E9EC4;
	sub_822E92E8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E9DB0) {
	__imp__sub_822E9DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9ED0) {
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
	// li r5,16644
	ctx.r5.s64 = 16644;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822E9EF8;
	sub_826344D0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,16512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16512, ctx.r30.u32);
	// stw r11,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822E9ED0) {
	__imp__sub_822E9ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E9F1C) {
	__imp__sub_822E9F1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9F20) {
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
	// lwz r3,16500(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16500);
	// bl 0x82634d40
	ctx.lr = 0x822E9F3C;
	sub_82634D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16500, ctx.r11.u32);
	// stw r11,16508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16508, ctx.r11.u32);
	// stw r11,16504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16504, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822E9F20) {
	__imp__sub_822E9F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822E9F68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16504);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16512);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822e9f98
	if (!ctx.cr6.gt) goto loc_822E9F98;
loc_822E9F8C:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822E9F98:
	// lwz r30,16508(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16508);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x822e9ff0
	if (!ctx.cr6.gt) goto loc_822E9FF0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822e9fb4
	if (!ctx.cr6.eq) goto loc_822E9FB4;
	// li r30,4096
	ctx.r30.s64 = 4096;
loc_822E9FB4:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e9fd4
	if (!ctx.cr6.lt) goto loc_822E9FD4;
	// lwz r11,16504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16504);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822E9FC8:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e9fc8
	if (ctx.cr6.lt) goto loc_822E9FC8;
loc_822E9FD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16500);
	// bl 0x82636a08
	ctx.lr = 0x822E9FE0;
	sub_82636A08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e9f8c
	if (ctx.cr6.eq) goto loc_822E9F8C;
	// stw r3,16500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16500, ctx.r3.u32);
	// stw r30,16508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16508, ctx.r30.u32);
loc_822E9FF0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822ea010
	if (ctx.cr6.eq) goto loc_822EA010;
	// lwz r11,16500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16500);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,16504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16504);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82635430
	ctx.lr = 0x822EA010;
	sub_82635430(ctx, base);
loc_822EA010:
	// lwz r11,16504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16504);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16500(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16500);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,16504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16504, ctx.r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E9F60) {
	__imp__sub_822E9F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA034) {
	__imp__sub_822EA034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA038) {
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
loc_822EA054:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ea054
	if (!ctx.cr6.eq) goto loc_822EA054;
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
	// bl 0x82636b60
	ctx.lr = 0x822EA07C;
	sub_82636B60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ea094
	if (!ctx.cr6.eq) goto loc_822EA094;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x822ea098
	if (ctx.cr6.eq) goto loc_822EA098;
loc_822EA094:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EA098:
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

PPC_WEAK_FUNC(sub_822EA038) {
	__imp__sub_822EA038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA0B0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ea13c
	if (ctx.cr6.eq) goto loc_822EA13C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfic r6,r3,1
	ctx.xer.ca = ctx.r3.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r3.s64;
	// subf r7,r3,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r3.s64;
loc_822EA0D8:
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// beq cr6,0x822ea110
	if (ctx.cr6.eq) goto loc_822EA110;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x822ea110
	if (ctx.cr6.eq) goto loc_822EA110;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822ea110
	if (!ctx.cr6.lt) goto loc_822EA110;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822ea0d8
	if (!ctx.cr6.eq) goto loc_822EA0D8;
loc_822EA110:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ea13c
	if (ctx.cr6.eq) goto loc_822EA13C;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
loc_822EA11C:
	// lbzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822ea134
	if (ctx.cr6.eq) goto loc_822EA134;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822ea13c
	if (!ctx.cr6.eq) goto loc_822EA13C;
loc_822EA134:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822ea11c
	if (!ctx.cr0.eq) goto loc_822EA11C;
loc_822EA13C:
	// stbx r31,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r31.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA0B0) {
	__imp__sub_822EA0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822EA150;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,2200
	ctx.r4.s64 = ctx.r11.s64 + 2200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822EA170;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ea408
	if (!ctx.cr6.eq) goto loc_822EA408;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d00
	ctx.lr = 0x822EA184;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ea408
	if (ctx.cr6.eq) goto loc_822EA408;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82635b80
	ctx.lr = 0x822EA194;
	sub_82635B80(ctx, base);
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// stw r3,16396(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16396, ctx.r3.u32);
	// blt cr6,0x822ea408
	if (ctx.cr6.lt) goto loc_822EA408;
	// cmpwi cr6,r3,999
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 999, ctx.xer);
	// bgt cr6,0x822ea408
	if (ctx.cr6.gt) goto loc_822EA408;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r21,r11,10856
	ctx.r21.s64 = ctx.r11.s64 + 10856;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82634c80
	ctx.lr = 0x822EA1BC;
	sub_82634C80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ea3dc
	if (ctx.cr6.eq) goto loc_822EA3DC;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r7,2184
	ctx.r24.s64 = ctx.r7.s64 + 2184;
	// addi r23,r8,2176
	ctx.r23.s64 = ctx.r8.s64 + 2176;
	// addi r27,r9,2168
	ctx.r27.s64 = ctx.r9.s64 + 2168;
	// addi r22,r10,2148
	ctx.r22.s64 = ctx.r10.s64 + 2148;
	// addi r28,r11,2132
	ctx.r28.s64 = ctx.r11.s64 + 2132;
loc_822EA1F8:
	// lbzu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822ea3dc
	if (ctx.cr6.eq) goto loc_822EA3DC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ea3dc
	if (ctx.cr6.eq) goto loc_822EA3DC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634c80
	ctx.lr = 0x822EA21C;
	sub_82634C80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ea3dc
	if (ctx.cr6.eq) goto loc_822EA3DC;
	// lbz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r25.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ea038
	ctx.lr = 0x822EA23C;
	sub_822EA038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ea284
	if (ctx.cr6.eq) goto loc_822EA284;
	// addi r3,r31,15
	ctx.r3.s64 = ctx.r31.s64 + 15;
loc_822EA248:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822ea260
	if (ctx.cr6.eq) goto loc_822EA260;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822ea268
	if (!ctx.cr6.eq) goto loc_822EA268;
loc_822EA260:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x822ea248
	goto loc_822EA248;
loc_822EA268:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82635140
	ctx.lr = 0x822EA274;
	sub_82635140(ctx, base);
	// stw r3,16400(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16400, ctx.r3.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x822ea1f8
	goto loc_822EA1F8;
loc_822EA284:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ea038
	ctx.lr = 0x822EA290;
	sub_822EA038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ea33c
	if (ctx.cr6.eq) goto loc_822EA33C;
	// addi r9,r31,18
	ctx.r9.s64 = ctx.r31.s64 + 18;
loc_822EA29C:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822ea2b4
	if (ctx.cr6.eq) goto loc_822EA2B4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822ea2bc
	if (!ctx.cr6.eq) goto loc_822EA2BC;
loc_822EA2B4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x822ea29c
	goto loc_822EA29C;
loc_822EA2BC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822EA2C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ea2c0
	if (!ctx.cr6.eq) goto loc_822EA2C0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea308
	if (ctx.cr6.eq) goto loc_822EA308;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_822EA2E8:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x822ea300
	if (ctx.cr6.eq) goto loc_822EA300;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x822ea308
	if (!ctx.cr6.eq) goto loc_822EA308;
loc_822EA300:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ea2e8
	if (!ctx.cr0.eq) goto loc_822EA2E8;
loc_822EA308:
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x822ea3d0
	if (ctx.cr6.lt) goto loc_822EA3D0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r11,-7
	ctx.r3.s64 = ctx.r11.s64 + -7;
	// bl 0x82636b60
	ctx.lr = 0x822EA324;
	sub_82636B60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ea3d0
	if (!ctx.cr6.eq) goto loc_822EA3D0;
	// stw r20,16404(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16404, ctx.r20.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// b 0x822ea1f8
	goto loc_822EA1F8;
loc_822EA33C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ea038
	ctx.lr = 0x822EA348;
	sub_822EA038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ea38c
	if (ctx.cr6.eq) goto loc_822EA38C;
	// addi r5,r31,5
	ctx.r5.s64 = ctx.r31.s64 + 5;
loc_822EA354:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822ea36c
	if (ctx.cr6.eq) goto loc_822EA36C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822ea374
	if (!ctx.cr6.eq) goto loc_822EA374;
loc_822EA36C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x822ea354
	goto loc_822EA354;
loc_822EA374:
	// addi r3,r26,16516
	ctx.r3.s64 = ctx.r26.s64 + 16516;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822ea0b0
	ctx.lr = 0x822EA380;
	sub_822EA0B0(ctx, base);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x822ea1f8
	goto loc_822EA1F8;
loc_822EA38C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ea038
	ctx.lr = 0x822EA398;
	sub_822EA038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ea3d0
	if (ctx.cr6.eq) goto loc_822EA3D0;
	// addi r5,r31,13
	ctx.r5.s64 = ctx.r31.s64 + 13;
loc_822EA3A4:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822ea3bc
	if (ctx.cr6.eq) goto loc_822EA3BC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822ea3c4
	if (!ctx.cr6.eq) goto loc_822EA3C4;
loc_822EA3BC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x822ea3a4
	goto loc_822EA3A4;
loc_822EA3C4:
	// addi r3,r26,16580
	ctx.r3.s64 = ctx.r26.s64 + 16580;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822ea0b0
	ctx.lr = 0x822EA3D0;
	sub_822EA0B0(ctx, base);
loc_822EA3D0:
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x822ea1f8
	goto loc_822EA1F8;
loc_822EA3DC:
	// lwz r11,16396(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16396);
	// cmpwi cr6,r11,204
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 204, ctx.xer);
	// beq cr6,0x822ea3f8
	if (ctx.cr6.eq) goto loc_822EA3F8;
	// cmpwi cr6,r11,304
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 304, ctx.xer);
	// beq cr6,0x822ea3f8
	if (ctx.cr6.eq) goto loc_822EA3F8;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x822ea3fc
	if (!ctx.cr6.lt) goto loc_822EA3FC;
loc_822EA3F8:
	// stw r20,16408(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16408, ctx.r20.u32);
loc_822EA3FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822EA408:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EA148) {
	__imp__sub_822EA148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA414) {
	__imp__sub_822EA414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634430
	ctx.lr = 0x822EA420;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// beq cr6,0x822ea7bc
	if (ctx.cr6.eq) goto loc_822EA7BC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r19,6
	ctx.r19.s64 = 6;
	// li r20,5
	ctx.r20.s64 = 5;
	// li r22,3
	ctx.r22.s64 = 3;
	// addi r25,r11,2208
	ctx.r25.s64 = ctx.r11.s64 + 2208;
	// li r23,4
	ctx.r23.s64 = 4;
loc_822EA464:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bgt cr6,0x822ea81c
	if (ctx.cr6.gt) goto loc_822EA81C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822ea5ac
	// bdzf 4*cr6+eq,0x822ea608
	// bdzf 4*cr6+eq,0x822ea76c
	// bdzf 4*cr6+eq,0x822ea608
	// bdzf 4*cr6+eq,0x822ea608
	// bdzf 4*cr6+eq,0x822ea7d4
	// bne cr6,0x822ea810
	if (!ctx.cr6.eq) goto loc_822EA810;
	// lwz r11,16392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16392);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bge cr6,0x822ea740
	if (!ctx.cr6.lt) goto loc_822EA740;
	// lbzx r10,r29,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r10,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r10.u8);
	// lwz r11,16392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16392);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,16392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16392, ctx.r11.u32);
	// stb r28,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r28.u8);
	// lwz r11,16392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16392);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x822ea7b4
	if (ctx.cr6.lt) goto loc_822EA7B4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_822EA4DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822ea4fc
	if (!ctx.cr0.eq) goto loc_822EA4FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822ea4dc
	if (!ctx.cr6.eq) goto loc_822EA4DC;
loc_822EA4FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822ea7b4
	if (!ctx.cr6.eq) goto loc_822EA7B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ea148
	ctx.lr = 0x822EA50C;
	sub_822EA148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea740
	if (ctx.cr6.lt) goto loc_822EA740;
	// lwz r11,16396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// blt cr6,0x822ea540
	if (ctx.cr6.lt) goto loc_822EA540;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x822ea540
	if (!ctx.cr6.lt) goto loc_822EA540;
	// stw r28,16392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16392, ctx.r28.u32);
	// stb r28,16516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16516, ctx.r28.u8);
	// stw r21,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r21.u32);
	// stw r28,16404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16404, ctx.r28.u32);
	// stw r28,16408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16408, ctx.r28.u32);
	// b 0x822ea7b4
	goto loc_822EA7B4;
loc_822EA540:
	// lwz r11,16408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ea5f4
	if (!ctx.cr6.eq) goto loc_822EA5F4;
	// lwz r11,16404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ea560
	if (ctx.cr6.eq) goto loc_822EA560;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x822ea7b4
	goto loc_822EA7B4;
loc_822EA560:
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ea5a4
	if (ctx.cr6.lt) goto loc_822EA5A4;
	// lwz r10,16512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16512);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822ea7fc
	if (ctx.cr6.gt) goto loc_822EA7FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9f60
	ctx.lr = 0x822EA588;
	sub_822E9F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea7fc
	if (ctx.cr6.lt) goto loc_822EA7FC;
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ea5f4
	if (ctx.cr6.eq) goto loc_822EA5F4;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// b 0x822ea7b4
	goto loc_822EA7B4;
loc_822EA5A4:
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
	// b 0x822ea7b4
	goto loc_822EA7B4;
loc_822EA5AC:
	// lwz r10,16504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16504);
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// lwz r9,16400(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x822ea5c8
	if (!ctx.cr6.lt) goto loc_822EA5C8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822EA5C8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9f60
	ctx.lr = 0x822EA5D8;
	sub_822E9F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea7ec
	if (ctx.cr6.lt) goto loc_822EA7EC;
	// lwz r11,16504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16504);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r10,16400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ea7b4
	if (!ctx.cr6.eq) goto loc_822EA7B4;
loc_822EA5F4:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822EA608:
	// lbzx r10,r29,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,16496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16496);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x822ea72c
	if (!ctx.cr6.eq) goto loc_822EA72C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822ea64c
	if (!ctx.cr6.gt) goto loc_822EA64C;
loc_822EA624:
	// lwz r11,16496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16496);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,16415(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16415);
	// cmplwi cr6,r9,13
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 13, ctx.xer);
	// bne cr6,0x822ea64c
	if (!ctx.cr6.eq) goto loc_822EA64C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,16496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16496, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x822ea624
	if (ctx.cr6.gt) goto loc_822EA624;
loc_822EA64C:
	// lwz r11,16496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16496);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r28,16416(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16416, ctx.r28.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ea704
	if (!ctx.cr6.eq) goto loc_822EA704;
	// lwz r11,16496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea740
	if (ctx.cr6.eq) goto loc_822EA740;
	// addi r30,r31,16416
	ctx.r30.s64 = ctx.r31.s64 + 16416;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635148
	ctx.lr = 0x822EA684;
	sub_82635148(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822ea740
	if (ctx.cr6.eq) goto loc_822EA740;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ea6b8
	if (ctx.cr6.eq) goto loc_822EA6B8;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x822ea6b8
	if (ctx.cr6.eq) goto loc_822EA6B8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822ea6b8
	if (ctx.cr6.eq) goto loc_822EA6B8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822ea740
	if (!ctx.cr6.eq) goto loc_822EA740;
loc_822EA6B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,16496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16496, ctx.r28.u32);
	// bne cr6,0x822ea6e4
	if (!ctx.cr6.eq) goto loc_822EA6E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9f60
	ctx.lr = 0x822EA6D4;
	sub_822E9F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea7fc
	if (ctx.cr6.lt) goto loc_822EA7FC;
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// b 0x822ea7b4
	goto loc_822EA7B4;
loc_822EA6E4:
	// lwz r11,16504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16504);
	// lwz r10,16512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16512);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822ea7fc
	if (ctx.cr6.gt) goto loc_822EA7FC;
	// stw r3,16412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16412, ctx.r3.u32);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// b 0x822ea7b4
	goto loc_822EA7B4;
loc_822EA704:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,16496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16496);
	// bne cr6,0x822ea720
	if (!ctx.cr6.eq) goto loc_822EA720;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ea740
	if (!ctx.cr6.eq) goto loc_822EA740;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x822ea7b4
	goto loc_822EA7B4;
loc_822EA720:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea5f4
	if (ctx.cr6.eq) goto loc_822EA5F4;
	// b 0x822ea7b0
	goto loc_822EA7B0;
loc_822EA72C:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,80
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 80, ctx.xer);
	// blt cr6,0x822ea754
	if (ctx.cr6.lt) goto loc_822EA754;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x822ea7b4
	if (ctx.cr6.eq) goto loc_822EA7B4;
loc_822EA740:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822EA754:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,16416(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16416, ctx.r10.u8);
	// lwz r11,16496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16496);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,16496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16496, ctx.r10.u32);
	// b 0x822ea7b4
	goto loc_822EA7B4;
loc_822EA76C:
	// lwz r30,16412(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16412);
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x822ea780
	if (!ctx.cr6.lt) goto loc_822EA780;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822EA780:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9f60
	ctx.lr = 0x822EA790;
	sub_822E9F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea7ec
	if (ctx.cr6.lt) goto loc_822EA7EC;
	// lwz r11,16412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16412);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf. r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,16412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16412, ctx.r10.u32);
	// bne 0x822ea7b4
	if (!ctx.cr0.eq) goto loc_822EA7B4;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_822EA7B0:
	// stw r28,16496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16496, ctx.r28.u32);
loc_822EA7B4:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x822ea464
	if (ctx.cr6.lt) goto loc_822EA464;
loc_822EA7BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822EA7D4:
	// subf r5,r29,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r29.s64;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9f60
	ctx.lr = 0x822EA7E4;
	sub_822E9F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822ea7bc
	if (!ctx.cr6.lt) goto loc_822EA7BC;
loc_822EA7EC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822EA7FC:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,-2
	ctx.r3.s64 = -2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822EA810:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_822EA81C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EA418) {
	__imp__sub_822EA418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA828) {
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
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822ea860
	if (!ctx.cr6.eq) goto loc_822EA860;
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
loc_822EA860:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822ea8a0
	if (!ctx.cr6.eq) goto loc_822EA8A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9f60
	ctx.lr = 0x822EA878;
	sub_822E9F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea8a0
	if (ctx.cr6.lt) goto loc_822EA8A0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_822EA8A0:
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

PPC_WEAK_FUNC(sub_822EA828) {
	__imp__sub_822EA828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822EA8C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82634d00
	ctx.lr = 0x822EA8CC;
	sub_82634D00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822eaad4
	if (ctx.cr6.eq) goto loc_822EAAD4;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x822ea8f0
	if (!ctx.cr6.eq) goto loc_822EA8F0;
loc_822EA8E4:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x822ea8e4
	if (ctx.cr6.eq) goto loc_822EA8E4;
loc_822EA8F0:
	// bl 0x82636998
	ctx.lr = 0x822EA8F4;
	sub_82636998(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822eaad4
	if (ctx.cr6.eq) goto loc_822EAAD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635b80
	ctx.lr = 0x822EA914;
	sub_82635B80(ctx, base);
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82636998
	ctx.lr = 0x822EA920;
	sub_82636998(ctx, base);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ea950
	if (ctx.cr6.eq) goto loc_822EA950;
loc_822EA934:
	// lbzu r30,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r30.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// bl 0x82636998
	ctx.lr = 0x822EA93C;
	sub_82636998(ctx, base);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ea934
	if (!ctx.cr6.eq) goto loc_822EA934;
loc_822EA950:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x822ea968
	if (!ctx.cr6.eq) goto loc_822EA968;
loc_822EA95C:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x822ea95c
	if (ctx.cr6.eq) goto loc_822EA95C;
loc_822EA968:
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// stb r29,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r29.u8);
	// stb r29,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r29.u8);
loc_822EA984:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ea984
	if (!ctx.cr6.eq) goto loc_822EA984;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x822eaad4
	if (ctx.cr6.lt) goto loc_822EAAD4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbzu r7,3(r31)
	ea = 3 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x822ea9dc
	if (!ctx.cr6.eq) goto loc_822EA9DC;
loc_822EA9D0:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x822ea9d0
	if (ctx.cr6.eq) goto loc_822EA9D0;
loc_822EA9DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635b80
	ctx.lr = 0x822EA9E4;
	sub_82635B80(ctx, base);
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82636998
	ctx.lr = 0x822EA9F0;
	sub_82636998(ctx, base);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eaa20
	if (ctx.cr6.eq) goto loc_822EAA20;
loc_822EAA04:
	// lbzu r30,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r30.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// bl 0x82636998
	ctx.lr = 0x822EAA0C;
	sub_82636998(ctx, base);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822eaa04
	if (!ctx.cr6.eq) goto loc_822EAA04;
loc_822EAA20:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x822eaa38
	if (!ctx.cr6.eq) goto loc_822EAA38;
loc_822EAA2C:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x822eaa2c
	if (ctx.cr6.eq) goto loc_822EAA2C;
loc_822EAA38:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822EAA3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822eaa3c
	if (!ctx.cr6.eq) goto loc_822EAA3C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x822eaad4
	if (ctx.cr6.lt) goto loc_822EAAD4;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x822eaad4
	if (!ctx.cr6.eq) goto loc_822EAAD4;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x822eaad4
	if (!ctx.cr6.eq) goto loc_822EAAD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635b80
	ctx.lr = 0x822EAA80;
	sub_82635B80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 3;
	// bl 0x82635b80
	ctx.lr = 0x822EAA8C;
	sub_82635B80(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// bl 0x82635b80
	ctx.lr = 0x822EAA98;
	sub_82635B80(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r11,2092
	ctx.r30.s64 = ctx.r11.s64 + 2092;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822EAAA8:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82635190
	ctx.lr = 0x822EAAB8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822eaae0
	if (ctx.cr6.eq) goto loc_822EAAE0;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eaaa8
	if (ctx.cr6.lt) goto loc_822EAAA8;
loc_822EAAD4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822EAAE0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x822eaad4
	if (ctx.cr6.lt) goto loc_822EAAD4;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// blt cr6,0x822eaad4
	if (ctx.cr6.lt) goto loc_822EAAD4;
	// cmpwi cr6,r24,31
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 31, ctx.xer);
	// bgt cr6,0x822eaad4
	if (ctx.cr6.gt) goto loc_822EAAD4;
	// cmpwi cr6,r25,1970
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1970, ctx.xer);
	// blt cr6,0x822eaad4
	if (ctx.cr6.lt) goto loc_822EAAD4;
	// cmpwi cr6,r28,23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 23, ctx.xer);
	// bgt cr6,0x822eaad4
	if (ctx.cr6.gt) goto loc_822EAAD4;
	// cmpwi cr6,r27,59
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 59, ctx.xer);
	// bgt cr6,0x822eaad4
	if (ctx.cr6.gt) goto loc_822EAAD4;
	// cmpwi cr6,r26,60
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 60, ctx.xer);
	// bgt cr6,0x822eaad4
	if (ctx.cr6.gt) goto loc_822EAAD4;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfic r11,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r10.s64;
	// subfze r8,r9
	// subf. r11,r8,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bge 0x822eab38
	if (!ctx.cr0.lt) goto loc_822EAB38;
	// addi r9,r11,-399
	ctx.r9.s64 = ctx.r11.s64 + -399;
loc_822EAB38:
	// li r8,400
	ctx.r8.s64 = 400;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// divw r7,r9,r8
	ctx.r7.s32 = ctx.r9.s32 / ctx.r8.s32;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mulli r5,r6,400
	ctx.r5.s64 = ctx.r6.s64 * 400;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// ble cr6,0x822eab60
	if (!ctx.cr6.gt) goto loc_822EAB60;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// b 0x822eab64
	goto loc_822EAB64;
loc_822EAB60:
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
loc_822EAB64:
	// mulli r10,r10,153
	ctx.r10.s64 = ctx.r10.s64 * 153;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,100
	ctx.r8.s64 = 100;
	// divwu r6,r10,r9
	ctx.r6.u32 = ctx.r10.u32 / ctx.r9.u32;
	// divwu r5,r11,r8
	ctx.r5.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mulli r8,r11,365
	ctx.r8.s64 = ctx.r11.s64 * 365;
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r3,r4,15025
	ctx.r3.u64 = ctx.r4.u64 | 15025;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mulld r10,r7,r3
	ctx.r10.s64 = ctx.r7.s64 * ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r9,10
	ctx.r9.s64 = 655360;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ori r8,r9,64108
	ctx.r8.u64 = ctx.r9.u64 | 64108;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// subf r3,r8,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mulli r5,r28,3600
	ctx.r5.s64 = ctx.r28.s64 * 3600;
	// ori r4,r6,20864
	ctx.r4.u64 = ctx.r6.u64 | 20864;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// mulld r11,r3,r4
	ctx.r11.s64 = ctx.r3.s64 * ctx.r4.s64;
	// mulli r9,r27,60
	ctx.r9.s64 = ctx.r27.s64 * 60;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EA8B8) {
	__imp__sub_822EA8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EABEC) {
	__imp__sub_822EABEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EABF0) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a3208
	ctx.lr = 0x822EAC08;
	sub_825A3208(ctx, base);
	// lis r31,-32012
	ctx.r31.s64 = -2097938432;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,-2032(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + -2032);
	// lfd f13,23400(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23400);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822eac34
	if (!ctx.cr6.eq) goto loc_822EAC34;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a31d0
	ctx.lr = 0x822EAC28;
	sub_825A31D0(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,-2032(r31)
	PPC_STORE_U64(ctx.r31.u32 + -2032, ctx.f0.u64);
loc_822EAC34:
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,23416(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23416);
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fmul f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
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

PPC_WEAK_FUNC(sub_822EABF0) {
	__imp__sub_822EABF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EAC6C) {
	__imp__sub_822EAC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAC70) {
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
	// bl 0x822eabf0
	ctx.lr = 0x822EAC80;
	sub_822EABF0(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// divdu r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 / ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EAC70) {
	__imp__sub_822EAC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAC98) {
	PPC_FUNC_PROLOGUE();
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addme r9,r10
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// b 0x825a32b8
	sub_825A32B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EAC98) {
	__imp__sub_822EAC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EACAC) {
	__imp__sub_822EACAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EACB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822EACB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r29,12
	ctx.r29.s64 = 12;
	// li r23,-1
	ctx.r23.s64 = -1;
	// bl 0x825a31c0
	ctx.lr = 0x822EACD8;
	sub_825A31C0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r27,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r27.u8);
	// stb r27,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r27.u8);
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822eadb0
	if (ctx.cr6.eq) goto loc_822EADB0;
loc_822EAD14:
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d00
	ctx.lr = 0x822EAD20;
	sub_82634D00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ead34
	if (ctx.cr6.eq) goto loc_822EAD34;
	// subf r31,r30,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r30.s64;
	// b 0x822ead54
	goto loc_822EAD54;
loc_822EAD34:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822EAD38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ead38
	if (!ctx.cr6.eq) goto loc_822EAD38;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_822EAD54:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822eaf4c
	if (!ctx.cr6.gt) goto loc_822EAF4C;
	// cmpwi cr6,r31,63
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 63, ctx.xer);
	// bgt cr6,0x822eaf4c
	if (ctx.cr6.gt) goto loc_822EAF4C;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x822eaf4c
	if (!ctx.cr6.lt) goto loc_822EAF4C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stbx r31,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r31.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x822EAD94;
	sub_82635430(ctx, base);
	// addic r8,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r8.s64 = ctx.r28.s64 + -1;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// subfe r11,r8,r28
	temp.u8 = (~ctx.r8.u32 + ctx.r28.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzux r6,r30,r7
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822ead14
	if (!ctx.cr6.eq) goto loc_822EAD14;
loc_822EADB0:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stbx r24,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r24.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,17
	ctx.r5.s64 = 17;
	// stbx r24,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r24.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stbx r27,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r27.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r24,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r24.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stbx r27,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r27.u8);
	// bl 0x825c5bd8
	ctx.lr = 0x822EADFC;
	sub_825C5BD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822eaf4c
	if (ctx.cr6.eq) goto loc_822EAF4C;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,22529
	ctx.r5.s64 = 22529;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x825c5c18
	ctx.lr = 0x822EAE20;
	sub_825C5C18(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,53
	ctx.r9.s64 = 53;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r24,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c5d38
	ctx.lr = 0x822EAE5C;
	sub_825C5D38(ctx, base);
	// lis r8,4194
	ctx.r8.s64 = 274857984;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// stw r30,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r30.u32);
	// ori r6,r8,19923
	ctx.r6.u64 = ctx.r8.u64 | 19923;
	// stw r27,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r27.u32);
	// divw r5,r26,r7
	ctx.r5.s32 = ctx.r26.s32 / ctx.r7.s32;
	// mulhw r4,r26,r6
	ctx.r4.s64 = (int64_t(ctx.r26.s32) * int64_t(ctx.r6.s32)) >> 32;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// srawi r11,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 6;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r3,1000
	ctx.r11.s64 = ctx.r3.s64 * 1000;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825c5cc8
	ctx.lr = 0x822EAEB0;
	sub_825C5CC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822eb040
	if (!ctx.cr6.gt) goto loc_822EB040;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c5ce8
	ctx.lr = 0x822EAECC;
	sub_825C5CE8(ctx, base);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// ble cr6,0x822eb040
	if (!ctx.cr6.gt) goto loc_822EB040;
	// lbz r9,416(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 416);
	// lbz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822eb040
	if (!ctx.cr6.eq) goto loc_822EB040;
	// lbz r9,417(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 417);
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822eb040
	if (!ctx.cr6.eq) goto loc_822EB040;
	// lbz r11,419(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 419);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822eb040
	if (!ctx.cr6.eq) goto loc_822EB040;
	// lbz r10,423(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 423);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lbz r9,422(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 422);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822eb040
	if (!ctx.cr6.gt) goto loc_822EB040;
loc_822EAF24:
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x822eb040
	if (ctx.cr6.gt) goto loc_822EB040;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r6,r9,0,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r6,192
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 192, ctx.xer);
	// bne cr6,0x822eaf58
	if (!ctx.cr6.eq) goto loc_822EAF58;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x822eaf84
	goto loc_822EAF84;
loc_822EAF4C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822EAF58:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822eaf80
	if (!ctx.cr6.lt) goto loc_822EAF80;
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
loc_822EAF64:
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822eaf80
	if (ctx.cr6.eq) goto loc_822EAF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822eaf64
	if (ctx.cr6.lt) goto loc_822EAF64;
loc_822EAF80:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_822EAF84:
	// addi r11,r10,10
	ctx.r11.s64 = ctx.r10.s64 + 10;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x822eb040
	if (ctx.cr6.gt) goto loc_822EB040;
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// addi r6,r1,417
	ctx.r6.s64 = ctx.r1.s64 + 417;
	// addi r5,r1,424
	ctx.r5.s64 = ctx.r1.s64 + 424;
	// addi r4,r1,425
	ctx.r4.s64 = ctx.r1.s64 + 425;
	// lbzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzx r4,r10,r4
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// or r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rotlwi r9,r5,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// or r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 | ctx.r4.u64;
	// bne cr6,0x822eafdc
	if (!ctx.cr6.eq) goto loc_822EAFDC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822eafdc
	if (!ctx.cr6.eq) goto loc_822EAFDC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x822eb000
	if (!ctx.cr6.gt) goto loc_822EB000;
loc_822EAFDC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822eaf24
	if (ctx.cr6.lt) goto loc_822EAF24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c5bf0
	ctx.lr = 0x822EAFF4;
	sub_825C5BF0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822EB000:
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r9,r1,417
	ctx.r9.s64 = ctx.r1.s64 + 417;
	// addi r8,r1,418
	ctx.r8.s64 = ctx.r1.s64 + 418;
	// addi r7,r1,419
	ctx.r7.s64 = ctx.r1.s64 + 419;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r4,r6,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r6.u32);
loc_822EB040:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c5bf0
	ctx.lr = 0x822EB048;
	sub_825C5BF0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EACB0) {
	__imp__sub_822EACB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EB054) {
	__imp__sub_822EB054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822EB060;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x822eabf0
	ctx.lr = 0x822EB074;
	sub_822EABF0(ctx, base);
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r31,r11,-2024
	ctx.r31.s64 = ctx.r11.s64 + -2024;
	// divdu r29,r3,r10
	ctx.r29.u64 = ctx.r3.u64 / ctx.r10.u64;
	// lwz r9,-2024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2024);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x822eb09c
	if (ctx.cr6.eq) goto loc_822EB09C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EB09C:
	// addi r3,r31,-1316
	ctx.r3.s64 = ctx.r31.s64 + -1316;
	// bl 0x826477c4
	ctx.lr = 0x822EB0A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// addi r8,r31,-1288
	ctx.r8.s64 = ctx.r31.s64 + -1288;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r11,37856
	ctx.r6.u64 = ctx.r11.u64 | 37856;
loc_822EB0B4:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822eb104
	if (ctx.cr6.eq) goto loc_822EB104;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822EB0C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822eb0ec
	if (ctx.cr6.eq) goto loc_822EB0EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822eb0c8
	if (ctx.cr6.eq) goto loc_822EB0C8;
loc_822EB0EC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822eb104
	if (!ctx.cr6.eq) goto loc_822EB104;
	// ld r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 72);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpld cr6,r10,r6
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r6.u64, ctx.xer);
	// blt cr6,0x822eb130
	if (ctx.cr6.lt) goto loc_822EB130;
loc_822EB104:
	// addi r11,r31,-1288
	ctx.r11.s64 = ctx.r31.s64 + -1288;
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// addi r11,r11,1280
	ctx.r11.s64 = ctx.r11.s64 + 1280;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eb0b4
	if (ctx.cr6.lt) goto loc_822EB0B4;
	// addi r3,r31,-1316
	ctx.r3.s64 = ctx.r31.s64 + -1316;
	// bl 0x826477b4
	ctx.lr = 0x822EB124;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EB130:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,-1288
	ctx.r11.s64 = ctx.r31.s64 + -1288;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r31,-1316
	ctx.r3.s64 = ctx.r31.s64 + -1316;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// bl 0x826477b4
	ctx.lr = 0x822EB158;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB058) {
	__imp__sub_822EB058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EB164) {
	__imp__sub_822EB164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822EB170;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822EB188:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822eb188
	if (!ctx.cr6.eq) goto loc_822EB188;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bge cr6,0x822eb368
	if (!ctx.cr6.lt) goto loc_822EB368;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r30,r11,-2024
	ctx.r30.s64 = ctx.r11.s64 + -2024;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_822EB1BC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x822eb1e0
	if (!ctx.cr6.eq) goto loc_822EB1E0;
	// stwcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822eb1bc
	if (!ctx.cr0.eq) goto loc_822EB1BC;
	// b 0x822eb1e8
	goto loc_822EB1E8;
loc_822EB1E0:
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822EB1E8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822eb21c
	if (!ctx.cr6.eq) goto loc_822EB21C;
	// addi r3,r30,-1316
	ctx.r3.s64 = ctx.r30.s64 + -1316;
	// bl 0x82647854
	ctx.lr = 0x822EB1FC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_822EB204:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822eb204
	if (!ctx.cr0.eq) goto loc_822EB204;
loc_822EB21C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822eb23c
	if (ctx.cr6.eq) goto loc_822EB23C;
loc_822EB228:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a32b8
	ctx.lr = 0x822EB230;
	sub_825A32B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822eb228
	if (!ctx.cr6.eq) goto loc_822EB228;
loc_822EB23C:
	// addi r3,r30,-1316
	ctx.r3.s64 = ctx.r30.s64 + -1316;
	// bl 0x826477c4
	ctx.lr = 0x822EB244;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,-1288
	ctx.r11.s64 = ctx.r30.s64 + -1288;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r8,r11,72
	ctx.r8.s64 = ctx.r11.s64 + 72;
loc_822EB250:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r8,-72
	ctx.r11.s64 = ctx.r8.s64 + -72;
loc_822EB258:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822eb27c
	if (ctx.cr6.eq) goto loc_822EB27C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822eb258
	if (ctx.cr6.eq) goto loc_822EB258;
loc_822EB27C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822eb2b4
	if (ctx.cr6.eq) goto loc_822EB2B4;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r11,r28
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, ctx.xer);
	// bge cr6,0x822eb298
	if (!ctx.cr6.lt) goto loc_822EB298;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_822EB298:
	// addi r11,r30,-1288
	ctx.r11.s64 = ctx.r30.s64 + -1288;
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// addi r11,r11,1352
	ctx.r11.s64 = ctx.r11.s64 + 1352;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eb250
	if (ctx.cr6.lt) goto loc_822EB250;
	// b 0x822eb2b8
	goto loc_822EB2B8;
loc_822EB2B4:
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_822EB2B8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,-1288
	ctx.r10.s64 = ctx.r30.s64 + -1288;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r31,r9,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
loc_822EB2D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822eb2d4
	if (!ctx.cr6.eq) goto loc_822EB2D4;
	// addi r11,r30,-1288
	ctx.r11.s64 = ctx.r30.s64 + -1288;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x825a3208
	ctx.lr = 0x822EB300;
	sub_825A3208(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// lfd f13,23400(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23400);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822eb328
	if (!ctx.cr6.eq) goto loc_822EB328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a31d0
	ctx.lr = 0x822EB31C;
	sub_825A31D0(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,-8(r30)
	PPC_STORE_U64(ctx.r30.u32 + -8, ctx.f0.u64);
loc_822EB328:
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r11,r30,-1288
	ctx.r11.s64 = ctx.r30.s64 + -1288;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// addi r8,r11,72
	ctx.r8.s64 = ctx.r11.s64 + 72;
	// addi r3,r30,-1316
	ctx.r3.s64 = ctx.r30.s64 + -1316;
	// lfd f13,23416(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23416);
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fmul f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// divdu r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 / ctx.r9.u64;
	// stdx r6,r31,r8
	PPC_STORE_U64(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u64);
	// bl 0x826477b4
	ctx.lr = 0x822EB368;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_822EB368:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB168) {
	__imp__sub_822EB168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822EB378;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822eabf0
	ctx.lr = 0x822EB394;
	sub_822EABF0(ctx, base);
	// li r25,1000
	ctx.r25.s64 = 1000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// divdu r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 / ctx.r25.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,23400(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23400);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r23,-32012
	ctx.r23.s64 = -2097938432;
	// lfd f30,23416(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23416);
loc_822EB3BC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a3208
	ctx.lr = 0x822EB3C4;
	sub_825A3208(ctx, base);
	// lfd f0,-2032(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r23.u32 + -2032);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x822eb3e4
	if (!ctx.cr6.eq) goto loc_822EB3E4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825a31d0
	ctx.lr = 0x822EB3D8;
	sub_825A31D0(ctx, base);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,-2032(r23)
	PPC_STORE_U64(ctx.r23.u32 + -2032, ctx.f0.u64);
loc_822EB3E4:
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// divdu r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 / ctx.r25.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r9,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r9.s64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x822c1870
	ctx.lr = 0x822EB414;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb494
	if (!ctx.cr6.eq) goto loc_822EB494;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822eb4a8
	if (!ctx.cr6.gt) goto loc_822EB4A8;
	// cmpwi cr6,r31,100
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 100, ctx.xer);
	// li r11,100
	ctx.r11.s64 = 100;
	// bgt cr6,0x822eb434
	if (ctx.cr6.gt) goto loc_822EB434;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822EB434:
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822eb45c
	if (ctx.cr6.eq) goto loc_822EB45C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x822eb464
	goto loc_822EB464;
loc_822EB45C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_822EB464:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825c5cc8
	ctx.lr = 0x822EB474;
	sub_825C5CC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822eb4bc
	if (ctx.cr6.gt) goto loc_822EB4BC;
	// bge cr6,0x822eb3bc
	if (!ctx.cr6.lt) goto loc_822EB3BC;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822EB494:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822EB4A8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822EB4BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB370) {
	__imp__sub_822EB370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822EB4D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x825c5bd8
	ctx.lr = 0x822EB504;
	sub_825C5BD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822eb51c
	if (!ctx.cr6.eq) goto loc_822EB51C;
	// li r3,-7
	ctx.r3.s64 = -7;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EB51C:
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c00
	ctx.lr = 0x822EB530;
	sub_825C5C00(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,22529
	ctx.r5.s64 = 22529;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822EB550;
	sub_825C5C18(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822EB568;
	sub_825C5C18(ctx, base);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,4098
	ctx.r5.s64 = 4098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822EB590;
	sub_825C5C18(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,4097
	ctx.r5.s64 = 4097;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822EB5A8;
	sub_825C5C18(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// sth r7,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r7.u16);
	// sth r28,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r28.u16);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x825c5c88
	ctx.lr = 0x822EB5D8;
	sub_825C5C88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822eb600
	if (ctx.cr6.eq) goto loc_822EB600;
	// bl 0x825c5db8
	ctx.lr = 0x822EB5E4;
	sub_825C5DB8(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x822eb600
	if (ctx.cr6.eq) goto loc_822EB600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5bf0
	ctx.lr = 0x822EB5F4;
	sub_825C5BF0(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EB600:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB4D0) {
	__imp__sub_822EB4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825c5cc8
	ctx.lr = 0x822EB65C;
	sub_825C5CC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822eb67c
	if (ctx.cr6.gt) goto loc_822EB67C;
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822EB67C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5dd0
	ctx.lr = 0x822EB688;
	sub_825C5DD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822eb6b0
	if (ctx.cr6.eq) goto loc_822EB6B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5bf0
	ctx.lr = 0x822EB698;
	sub_825C5BF0(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822EB6B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EB610) {
	__imp__sub_822EB610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822EB6D0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822eb4d0
	ctx.lr = 0x822EB6EC;
	sub_822EB4D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb7dc
	if (!ctx.cr6.eq) goto loc_822EB7DC;
	// bl 0x822eabf0
	ctx.lr = 0x822EB6F8;
	sub_822EABF0(ctx, base);
	// li r29,1000
	ctx.r29.s64 = 1000;
	// divdu r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 / ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822eb610
	ctx.lr = 0x822EB708;
	sub_822EB610(ctx, base);
	// cmpwi cr6,r3,-8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8, ctx.xer);
	// bne cr6,0x822eb7dc
	if (!ctx.cr6.eq) goto loc_822EB7DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r27,-32012
	ctx.r27.s64 = -2097938432;
	// lfd f30,23416(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23416);
	// lfd f31,23400(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23400);
loc_822EB724:
	// bl 0x822c1870
	ctx.lr = 0x822EB728;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb7b4
	if (!ctx.cr6.eq) goto loc_822EB7B4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a3208
	ctx.lr = 0x822EB738;
	sub_825A3208(ctx, base);
	// lfd f0,-2032(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + -2032);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x822eb758
	if (!ctx.cr6.eq) goto loc_822EB758;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a31d0
	ctx.lr = 0x822EB74C;
	sub_825A31D0(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,-2032(r27)
	PPC_STORE_U64(ctx.r27.u32 + -2032, ctx.f0.u64);
loc_822EB758:
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// divdu r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 / ctx.r29.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x822eb7d0
	if (ctx.cr6.gt) goto loc_822EB7D0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x825a32b8
	ctx.lr = 0x822EB794;
	sub_825A32B8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822eb610
	ctx.lr = 0x822EB79C;
	sub_822EB610(ctx, base);
	// cmpwi cr6,r3,-8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8, ctx.xer);
	// beq cr6,0x822eb724
	if (ctx.cr6.eq) goto loc_822EB724;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EB7B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825c5bf0
	ctx.lr = 0x822EB7BC;
	sub_825C5BF0(ctx, base);
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EB7D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825c5bf0
	ctx.lr = 0x822EB7D8;
	sub_825C5BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822EB7DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB6C8) {
	__imp__sub_822EB6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EB7EC) {
	__imp__sub_822EB7EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB7F0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825c5d20
	ctx.lr = 0x822EB804;
	sub_825C5D20(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822eb824
	if (!ctx.cr6.eq) goto loc_822EB824;
	// bl 0x825c5db8
	ctx.lr = 0x822EB810;
	sub_825C5DB8(ctx, base);
	// addi r11,r3,-10035
	ctx.r11.s64 = ctx.r3.s64 + -10035;
	// li r10,-5
	ctx.r10.s64 = -5;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_822EB824:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EB7F0) {
	__imp__sub_822EB7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EB834) {
	__imp__sub_822EB834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB838) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825c5ce8
	ctx.lr = 0x822EB84C;
	sub_825C5CE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822eb868
	if (!ctx.cr6.eq) goto loc_822EB868;
	// bl 0x825c5db8
	ctx.lr = 0x822EB858;
	sub_825C5DB8(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// li r3,-8
	ctx.r3.s64 = -8;
	// beq cr6,0x822eb868
	if (ctx.cr6.eq) goto loc_822EB868;
	// li r3,-5
	ctx.r3.s64 = -5;
loc_822EB868:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EB838) {
	__imp__sub_822EB838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822EB880;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822eabf0
	ctx.lr = 0x822EB8A4;
	sub_822EABF0(ctx, base);
	// li r26,1000
	ctx.r26.s64 = 1000;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// divdu r27,r3,r26
	ctx.r27.u64 = ctx.r3.u64 / ctx.r26.u64;
	// beq cr6,0x822eb984
	if (ctx.cr6.eq) goto loc_822EB984;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r23,-5
	ctx.r23.s64 = -5;
	// lis r24,-32012
	ctx.r24.s64 = -2097938432;
	// lfd f30,23416(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23416);
	// lfd f31,23400(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23400);
loc_822EB8CC:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r31,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r4,r31,r25
	ctx.r4.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c5d20
	ctx.lr = 0x822EB8E0;
	sub_825C5D20(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822eb8fc
	if (!ctx.cr6.eq) goto loc_822EB8FC;
	// bl 0x825c5db8
	ctx.lr = 0x822EB8EC;
	sub_825C5DB8(ctx, base);
	// addi r11,r3,-10035
	ctx.r11.s64 = ctx.r3.s64 + -10035;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r23
	ctx.r3.u64 = ctx.r8.u64 & ctx.r23.u64;
loc_822EB8FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eb988
	if (ctx.cr6.lt) goto loc_822EB988;
	// ble cr6,0x822eb910
	if (!ctx.cr6.gt) goto loc_822EB910;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// b 0x822eb97c
	goto loc_822EB97C;
loc_822EB910:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a3208
	ctx.lr = 0x822EB918;
	sub_825A3208(ctx, base);
	// lfd f0,-2032(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r24.u32 + -2032);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x822eb938
	if (!ctx.cr6.eq) goto loc_822EB938;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a31d0
	ctx.lr = 0x822EB92C;
	sub_825A31D0(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,-2032(r24)
	PPC_STORE_U64(ctx.r24.u32 + -2032, ctx.f0.u64);
loc_822EB938:
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rotlwi r11,r27,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// divdu r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 / ctx.r26.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x822eb370
	ctx.lr = 0x822EB974;
	sub_822EB370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb988
	if (!ctx.cr6.eq) goto loc_822EB988;
loc_822EB97C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822eb8cc
	if (ctx.cr6.lt) goto loc_822EB8CC;
loc_822EB984:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822EB988:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB878) {
	__imp__sub_822EB878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822EB9A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825c5ce8
	ctx.lr = 0x822EB9BC;
	sub_825C5CE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822eb9d8
	if (!ctx.cr6.eq) goto loc_822EB9D8;
	// bl 0x825c5db8
	ctx.lr = 0x822EB9C8;
	sub_825C5DB8(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// li r3,-8
	ctx.r3.s64 = -8;
	// beq cr6,0x822eb9d8
	if (ctx.cr6.eq) goto loc_822EB9D8;
	// li r3,-5
	ctx.r3.s64 = -5;
loc_822EB9D8:
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// cmpwi cr6,r3,-8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8, ctx.xer);
	// ld r11,-2000(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2000);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// std r9,-2000(r10)
	PPC_STORE_U64(ctx.r10.u32 + -2000, ctx.r9.u64);
	// beq cr6,0x822eba14
	if (ctx.cr6.eq) goto loc_822EBA14;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822ebab8
	if (!ctx.cr6.gt) goto loc_822EBAB8;
	// lis r9,-32012
	ctx.r9.s64 = -2097938432;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// ld r10,-2008(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -2008);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,-2008(r9)
	PPC_STORE_U64(ctx.r9.u32 + -2008, ctx.r8.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EBA14:
	// bl 0x822eabf0
	ctx.lr = 0x822EBA18;
	sub_822EABF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eb370
	ctx.lr = 0x822EBA2C;
	sub_822EB370(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822eabf0
	ctx.lr = 0x822EBA34;
	sub_822EABF0(ctx, base);
	// lis r9,-32012
	ctx.r9.s64 = -2097938432;
	// subf r10,r27,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r27.s64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ld r11,-2016(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -2016);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,-2016(r9)
	PPC_STORE_U64(ctx.r9.u32 + -2016, ctx.r8.u64);
	// beq cr6,0x822eba5c
	if (ctx.cr6.eq) goto loc_822EBA5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EBA5C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5ce8
	ctx.lr = 0x822EBA70;
	sub_825C5CE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822eba90
	if (!ctx.cr6.eq) goto loc_822EBA90;
	// bl 0x825c5db8
	ctx.lr = 0x822EBA7C;
	sub_825C5DB8(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x822ebab4
	if (ctx.cr6.eq) goto loc_822EBAB4;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EBA90:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822ebaac
	if (!ctx.cr6.gt) goto loc_822EBAAC;
	// lis r9,-32012
	ctx.r9.s64 = -2097938432;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// ld r11,-2008(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -2008);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,-2008(r9)
	PPC_STORE_U64(ctx.r9.u32 + -2008, ctx.r8.u64);
loc_822EBAAC:
	// cmpwi cr6,r3,-8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8, ctx.xer);
	// bne cr6,0x822ebab8
	if (!ctx.cr6.eq) goto loc_822EBAB8;
loc_822EBAB4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822EBAB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB998) {
	__imp__sub_822EB998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBAC0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x825c5bf0
	sub_825C5BF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBAC0) {
	__imp__sub_822EBAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBACC) {
	__imp__sub_822EBACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822EBAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,-2020
	ctx.r31.s64 = ctx.r11.s64 + -2020;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_822EBAF0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822ebb14
	if (!ctx.cr6.eq) goto loc_822EBB14;
	// stwcx. r7,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822ebaf0
	if (!ctx.cr0.eq) goto loc_822EBAF0;
	// b 0x822ebb1c
	goto loc_822EBB1C;
loc_822EBB14:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822EBB1C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ebba0
	if (!ctx.cr6.eq) goto loc_822EBBA0;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r30,r11,-3368
	ctx.r30.s64 = ctx.r11.s64 + -3368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82647854
	ctx.lr = 0x822EBB38;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,2348
	ctx.r3.s64 = ctx.r10.s64 + 2348;
	// bl 0x825a3448
	ctx.lr = 0x822EBB48;
	sub_825A3448(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r29,r9,2324
	ctx.r29.s64 = ctx.r9.s64 + 2324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a3390
	ctx.lr = 0x822EBB58;
	sub_825A3390(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r29,r8,2304
	ctx.r29.s64 = ctx.r8.s64 + 2304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a32c0
	ctx.lr = 0x822EBB6C;
	sub_825A32C0(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r7,2300
	ctx.r4.s64 = ctx.r7.s64 + 2300;
	// bl 0x82637058
	ctx.lr = 0x822EBB7C;
	sub_82637058(ctx, base);
	// stw r3,1376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1376, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822EBB88:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r4,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822ebb88
	if (!ctx.cr0.eq) goto loc_822EBB88;
loc_822EBBA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822ebbc0
	if (ctx.cr6.eq) goto loc_822EBBC0;
loc_822EBBAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a32b8
	ctx.lr = 0x822EBBB4;
	sub_825A32B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ebbac
	if (!ctx.cr6.eq) goto loc_822EBBAC;
loc_822EBBC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBAD0) {
	__imp__sub_822EBAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
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
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,840
	ctx.r10.s64 = ctx.r1.s64 + 840;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,700
	ctx.r4.s64 = 700;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x822EBC18;
	sub_822ECA20(ctx, base);
	// bl 0x822ebad0
	ctx.lr = 0x822EBC1C;
	sub_822EBAD0(ctx, base);
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r31,r11,-3368
	ctx.r31.s64 = ctx.r11.s64 + -3368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477c4
	ctx.lr = 0x822EBC2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,1376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ebc50
	if (ctx.cr6.eq) goto loc_822EBC50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,9504
	ctx.r4.s64 = ctx.r11.s64 + 9504;
	// bl 0x82637460
	ctx.lr = 0x822EBC48;
	sub_82637460(ctx, base);
	// lwz r3,1376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// bl 0x82637358
	ctx.lr = 0x822EBC50;
	sub_82637358(ctx, base);
loc_822EBC50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477b4
	ctx.lr = 0x822EBC58;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a3510
	ctx.lr = 0x822EBC60;
	sub_825A3510(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,10696
	ctx.r3.s64 = ctx.r11.s64 + 10696;
	// bl 0x825a3510
	ctx.lr = 0x822EBC6C;
	sub_825A3510(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ec610
	ctx.lr = 0x822EBC74;
	sub_822EC610(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBBC8) {
	__imp__sub_822EBBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
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
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r3.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,856
	ctx.r10.s64 = ctx.r1.s64 + 856;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,700
	ctx.r4.s64 = 700;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822eca20
	ctx.lr = 0x822EBCD8;
	sub_822ECA20(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822EBCE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ebce0
	if (!ctx.cr6.eq) goto loc_822EBCE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822ebd58
	if (ctx.cr6.eq) goto loc_822EBD58;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_822EBD18:
	// lbzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822ebd30
	if (ctx.cr6.eq) goto loc_822EBD30;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x822ebd40
	if (!ctx.cr6.eq) goto loc_822EBD40;
loc_822EBD30:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bne 0x822ebd18
	if (!ctx.cr0.eq) goto loc_822EBD18;
	// b 0x822ebd58
	goto loc_822EBD58;
loc_822EBD40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822ebd58
	if (ctx.cr6.eq) goto loc_822EBD58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,8796
	ctx.r3.s64 = ctx.r11.s64 + 8796;
	// bl 0x822ebbc8
	ctx.lr = 0x822EBD58;
	sub_822EBBC8(ctx, base);
loc_822EBD58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBC88) {
	__imp__sub_822EBC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBD70) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8796
	ctx.r3.s64 = ctx.r11.s64 + 8796;
	// bl 0x822ebbc8
	ctx.lr = 0x822EBD8C;
	sub_822EBBC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBD70) {
	__imp__sub_822EBD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,27355
	ctx.r3.s64 = 1792737280;
	// ori r3,r3,62720
	ctx.r3.u64 = ctx.r3.u64 | 62720;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBDA0) {
	__imp__sub_822EBDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EBDAC) {
	__imp__sub_822EBDAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBDB0) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// ld r31,680(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 680);
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(ctx.r31.s64, 0, ctx.xer);
	// bge cr6,0x822ebde8
	if (!ctx.cr6.lt) goto loc_822EBDE8;
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
loc_822EBDE8:
	// bl 0x822eabf0
	ctx.lr = 0x822EBDEC;
	sub_822EABF0(ctx, base);
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r9,r10,16960
	ctx.r9.u64 = ctx.r10.u64 | 16960;
	// ld r8,-1984(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1984);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// divdu r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 / ctx.r9.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_822EBDB0) {
	__imp__sub_822EBDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EBE1C) {
	__imp__sub_822EBE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822EBE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825a3550
	ctx.lr = 0x822EBE3C;
	sub_825A3550(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// lis r10,694
	ctx.r10.s64 = 45481984;
	// ori r11,r11,38528
	ctx.r11.u64 = ctx.r11.u64 | 38528;
	// ori r10,r10,4241
	ctx.r10.u64 = ctx.r10.u64 | 4241;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// divdu r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 / ctx.r11.u64;
	// subf r29,r10,r6
	ctx.r29.s64 = ctx.r6.s64 - ctx.r10.s64;
	// bl 0x822eabf0
	ctx.lr = 0x822EBE70;
	sub_822EABF0(ctx, base);
	// lis r5,-32012
	ctx.r5.s64 = -2097938432;
	// std r3,-1984(r5)
	PPC_STORE_U64(ctx.r5.u32 + -1984, ctx.r3.u64);
	// lwsync 
	// lis r4,-32155
	ctx.r4.s64 = -2107310080;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// subf r7,r31,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r3,r3,2360
	ctx.r3.s64 = ctx.r3.s64 + 2360;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// std r31,680(r4)
	PPC_STORE_U64(ctx.r4.u32 + 680, ctx.r31.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822EBEA0;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBE20) {
	__imp__sub_822EBE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBEA8) {
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
	// addi r5,r11,2432
	ctx.r5.s64 = ctx.r11.s64 + 2432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82637620
	ctx.lr = 0x822EBED4;
	sub_82637620(ctx, base);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ebf10
	if (ctx.cr6.eq) goto loc_822EBF10;
	// li r9,92
	ctx.r9.s64 = 92;
loc_822EBEF4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,47
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 47, ctx.xer);
	// bne cr6,0x822ebf04
	if (!ctx.cr6.eq) goto loc_822EBF04;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_822EBF04:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ebef4
	if (!ctx.cr6.eq) goto loc_822EBEF4;
loc_822EBF10:
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

PPC_WEAK_FUNC(sub_822EBEA8) {
	__imp__sub_822EBEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBF28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBF28) {
	__imp__sub_822EBF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822EBF38;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ebea8
	ctx.lr = 0x822EBF54;
	sub_822EBEA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2448
	ctx.r4.s64 = ctx.r11.s64 + 2448;
	// bl 0x82637058
	ctx.lr = 0x822EBF64;
	sub_82637058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ebf7c
	if (!ctx.cr6.eq) goto loc_822EBF7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822EBF7C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82637c70
	ctx.lr = 0x822EBF90;
	sub_82637C70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826377c8
	ctx.lr = 0x822EBF9C;
	sub_826377C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBF30) {
	__imp__sub_822EBF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822EBFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ebea8
	ctx.lr = 0x822EBFCC;
	sub_822EBEA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,2456
	ctx.r5.s64 = ctx.r11.s64 + 2456;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82637620
	ctx.lr = 0x822EBFE4;
	sub_82637620(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r31,275(r1)
	PPC_STORE_U8(ctx.r1.u32 + 275, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,2348
	ctx.r3.s64 = ctx.r10.s64 + 2348;
	// bl 0x825a3448
	ctx.lr = 0x822EBFFC;
	sub_825A3448(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82635430
	ctx.lr = 0x822EC00C;
	sub_82635430(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82637ff0
	ctx.lr = 0x822EC018;
	sub_82637FF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ec040
	if (ctx.cr6.eq) goto loc_822EC040;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x822ec040
	if (!ctx.cr6.gt) goto loc_822EC040;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x825a3448
	ctx.lr = 0x822EC040;
	sub_825A3448(ctx, base);
loc_822EC040:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,2452
	ctx.r4.s64 = ctx.r11.s64 + 2452;
	// bl 0x82637058
	ctx.lr = 0x822EC050;
	sub_82637058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ec088
	if (ctx.cr6.eq) goto loc_822EC088;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82637ef8
	ctx.lr = 0x822EC070;
	sub_82637EF8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822ec094
	if (ctx.cr6.eq) goto loc_822EC094;
	// bl 0x826377c8
	ctx.lr = 0x822EC080;
	sub_826377C8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a3390
	ctx.lr = 0x822EC088;
	sub_825A3390(ctx, base);
loc_822EC088:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822EC094:
	// bl 0x826377c8
	ctx.lr = 0x822EC098;
	sub_826377C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a3390
	ctx.lr = 0x822EC0A0;
	sub_825A3390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a32c0
	ctx.lr = 0x822EC0AC;
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
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBFA8) {
	__imp__sub_822EBFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC0BC) {
	__imp__sub_822EC0BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ebea8
	ctx.lr = 0x822EC0DC;
	sub_822EBEA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a3390
	ctx.lr = 0x822EC0E4;
	sub_825A3390(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC0C0) {
	__imp__sub_822EC0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC0FC) {
	__imp__sub_822EC0FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822EC108;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822eabf0
	ctx.lr = 0x822EC118;
	sub_822EABF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// blt cr6,0x822ec12c
	if (ctx.cr6.lt) goto loc_822EC12C;
	// li r31,32
	ctx.r31.s64 = 32;
loc_822EC12C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826478e4
	ctx.lr = 0x822EC138;
	__imp__XeCryptRandom(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x822ec150
	if (ctx.cr6.lt) goto loc_822EC150;
	// stdx r28,r31,r30
	PPC_STORE_U64(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822EC150:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC100) {
	__imp__sub_822EC100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC15C) {
	__imp__sub_822EC15C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822EC168;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x825c5db0
	ctx.lr = 0x822EC18C;
	sub_825C5DB0(ctx, base);
	// li r25,-3
	ctx.r25.s64 = -3;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ec1b0
	if (ctx.cr6.eq) goto loc_822EC1B0;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_822EC19C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822EC1B0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,2284
	ctx.r29.s64 = ctx.r11.s64 + 2284;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822EC1BC:
	// bl 0x822c1870
	ctx.lr = 0x822EC1C0;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ec2dc
	if (!ctx.cr6.eq) goto loc_822EC2DC;
	// li r6,1500
	ctx.r6.s64 = 1500;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822eacb0
	ctx.lr = 0x822EC1DC;
	sub_822EACB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ec19c
	if (ctx.cr6.eq) goto loc_822EC19C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ec1bc
	if (ctx.cr6.lt) goto loc_822EC1BC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,2468
	ctx.r3.s64 = ctx.r11.s64 + 2468;
	// bl 0x822ebbc8
	ctx.lr = 0x822EC204;
	sub_822EBBC8(ctx, base);
	// bl 0x825c5dc0
	ctx.lr = 0x822EC208;
	sub_825C5DC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c5ea8
	ctx.lr = 0x822EC21C;
	sub_825C5EA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ec32c
	if (!ctx.cr6.eq) goto loc_822EC32C;
	// bl 0x822eabf0
	ctx.lr = 0x822EC228;
	sub_822EABF0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r30,1000
	ctx.r30.s64 = 1000;
	// divdu r31,r3,r30
	ctx.r31.u64 = ctx.r3.u64 / ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,10036
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10036, ctx.xer);
	// bne cr6,0x822ec300
	if (!ctx.cr6.eq) goto loc_822EC300;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r29,-32012
	ctx.r29.s64 = -2097938432;
	// lfd f30,23416(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23416);
	// lfd f31,23400(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23400);
loc_822EC254:
	// bl 0x822c1870
	ctx.lr = 0x822EC258;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ec2f0
	if (!ctx.cr6.eq) goto loc_822EC2F0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a3208
	ctx.lr = 0x822EC268;
	sub_825A3208(ctx, base);
	// lfd f0,-2032(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + -2032);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x822ec288
	if (!ctx.cr6.eq) goto loc_822EC288;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825a31d0
	ctx.lr = 0x822EC27C;
	sub_825A31D0(ctx, base);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,-2032(r29)
	PPC_STORE_U64(ctx.r29.u32 + -2032, ctx.f0.u64);
loc_822EC288:
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f9.u64);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// divdu r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 / ctx.r30.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x822ec2f8
	if (ctx.cr6.gt) goto loc_822EC2F8;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82290cb8
	ctx.lr = 0x822EC2C8;
	sub_82290CB8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,10036
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10036, ctx.xer);
	// beq cr6,0x822ec254
	if (ctx.cr6.eq) goto loc_822EC254;
	// b 0x822ec300
	goto loc_822EC300;
loc_822EC2DC:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822EC2F0:
	// li r25,-6
	ctx.r25.s64 = -6;
	// b 0x822ec2fc
	goto loc_822EC2FC;
loc_822EC2F8:
	// li r25,-1
	ctx.r25.s64 = -1;
loc_822EC2FC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_822EC300:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ec324
	if (!ctx.cr6.eq) goto loc_822EC324;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822ec324
	if (!ctx.cr6.gt) goto loc_822EC324;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_822EC324:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825c5ec0
	ctx.lr = 0x822EC32C;
	sub_825C5EC0(ctx, base);
loc_822EC32C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825c5dc8
	ctx.lr = 0x822EC334;
	sub_825C5DC8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC160) {
	__imp__sub_822EC160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822EC350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822eb058
	ctx.lr = 0x822EC364;
	sub_822EB058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ec378
	if (ctx.cr6.eq) goto loc_822EC378;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822EC378:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ec160
	ctx.lr = 0x822EC388;
	sub_822EC160(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ec3a0
	if (!ctx.cr6.eq) goto loc_822EC3A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822eb168
	ctx.lr = 0x822EC3A0;
	sub_822EB168(ctx, base);
loc_822EC3A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC348) {
	__imp__sub_822EC348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC3AC) {
	__imp__sub_822EC3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822EC3B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822EC3D4;
	sub_826344D0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822ec40c
	if (ctx.cr6.lt) goto loc_822EC40C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bge cr6,0x822ec40c
	if (!ctx.cr6.lt) goto loc_822EC40C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3558
	ctx.lr = 0x822EC3F0;
	sub_825A3558(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ec418
	if (ctx.cr6.eq) goto loc_822EC418;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-1976
	ctx.r9.s64 = ctx.r11.s64 + -1976;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_822EC40C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822EC418:
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r10,r10,-1976
	ctx.r10.s64 = ctx.r10.s64 + -1976;
	// lhz r4,90(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// rlwinm r28,r11,24,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// lhz r30,94(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// lhz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// rlwinm r6,r11,25,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// lbz r27,86(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm r26,r11,23,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// lwzx r25,r9,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r24,r11,20,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// rlwinm r22,r11,19,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// lbz r23,87(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// subf r25,r7,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r7.s64;
	// sth r4,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r4.u16);
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// rlwinm r7,r11,18,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// rlwinm r4,r11,17,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// sth r5,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
	// rlwinm r30,r11,31,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rlwinm r21,r11,30,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// rlwinm r28,r11,29,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addic r11,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r22,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r22.u32);
	// subfe r11,r11,r25
	temp.u8 = (~ctx.r11.u32 + ctx.r25.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r25.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r25.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r21,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r21.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stb r27,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r27.u8);
	// stb r23,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r23.u8);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// beq cr6,0x822ec560
	if (ctx.cr6.eq) goto loc_822EC560;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ec560
	if (ctx.cr6.eq) goto loc_822EC560;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822ec520
	if (ctx.cr6.eq) goto loc_822EC520;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822EC520:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ec560
	if (ctx.cr6.eq) goto loc_822EC560;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822ec54c
	if (ctx.cr6.eq) goto loc_822EC54C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822EC54C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ec560
	if (ctx.cr6.eq) goto loc_822EC560;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ec560
	if (ctx.cr6.eq) goto loc_822EC560;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
loc_822EC560:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC3B0) {
	__imp__sub_822EC3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC570) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822ec3b0
	sub_822EC3B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC570) {
	__imp__sub_822EC570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC578) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822ec3b0
	sub_822EC3B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC578) {
	__imp__sub_822EC578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC580) {
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
	// bl 0x826478a4
	ctx.lr = 0x822EC59C;
	__imp__XGetVideoMode(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,1080
	ctx.r9.s64 = 1080;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// subfc r11,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfze r6,r8
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r10,-1960(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1960);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822EC580) {
	__imp__sub_822EC580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-1960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1960, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC5F8) {
	__imp__sub_822EC5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC60C) {
	__imp__sub_822EC60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC610) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b8ad0
	sub_822B8AD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC610) {
	__imp__sub_822EC610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC614) {
	__imp__sub_822EC614(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r3,r11,-1936
	ctx.r3.s64 = ctx.r11.s64 + -1936;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC618) {
	__imp__sub_822EC618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC624) {
	__imp__sub_822EC624(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC628) {
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
	// li r5,2496
	ctx.r5.s64 = 2496;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822EC648;
	sub_826344D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822EC628) {
	__imp__sub_822EC628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC664) {
	__imp__sub_822EC664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC668) {
	__imp__sub_822EC668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC674) {
	__imp__sub_822EC674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC678) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x826344d0
	ctx.lr = 0x822EC694;
	sub_826344D0(ctx, base);
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

PPC_WEAK_FUNC(sub_822EC678) {
	__imp__sub_822EC678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC6A8) {
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
	// bl 0x822ed118
	ctx.lr = 0x822EC6B8;
	sub_822ED118(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,4
	ctx.r9.s64 = 4;
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

PPC_WEAK_FUNC(sub_822EC6A8) {
	__imp__sub_822EC6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC6D8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ec6ec
	if (!ctx.cr6.eq) goto loc_822EC6EC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2676
	ctx.r3.s64 = ctx.r11.s64 + 2676;
	// blr 
	return;
loc_822EC6EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,16152
	ctx.r3.s64 = ctx.r11.s64 + 16152;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC6D8) {
	__imp__sub_822EC6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822EC700;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mftb r29
	ctx.r29.u64 = __rdtsc();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ld r28,-1272(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1272);
	// bl 0x823e0f70
	ctx.lr = 0x822EC738;
	sub_823E0F70(ctx, base);
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-1952
	ctx.r11.s64 = ctx.r11.s64 + -1952;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822ec788
	if (ctx.cr6.eq) goto loc_822EC788;
	// cmpld cr6,r29,r10
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x822ec788
	if (!ctx.cr6.gt) goto loc_822EC788;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subf r10,r8,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r8.s64;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x822ec784
	if (!ctx.cr6.lt) goto loc_822EC784;
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// tdllei r9,0
	// divdu r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 / ctx.r9.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subfic r9,r8,100
	ctx.xer.ca = ctx.r8.u32 <= 100;
	ctx.r9.s64 = 100 - ctx.r8.s64;
	// b 0x822ec788
	goto loc_822EC788;
loc_822EC784:
	// li r9,0
	ctx.r9.s64 = 0;
loc_822EC788:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 696);
	// blt cr6,0x822ec7a8
	if (ctx.cr6.lt) goto loc_822EC7A8;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_822EC7A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ec7b8
	if (ctx.cr6.lt) goto loc_822EC7B8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822EC7B8:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ec7cc
	if (ctx.cr6.lt) goto loc_822EC7CC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822EC7CC:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ec7e0
	if (ctx.cr6.lt) goto loc_822EC7E0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822EC7E0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ec7f4
	if (ctx.cr6.lt) goto loc_822EC7F4;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822EC7F4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ec808
	if (ctx.cr6.lt) goto loc_822EC808;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822EC808:
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-960
	ctx.r11.s64 = ctx.r11.s64 + -960;
	// beq cr6,0x822ec834
	if (ctx.cr6.eq) goto loc_822EC834;
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// twllei r31,0
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// divw r10,r30,r31
	ctx.r10.s32 = ctx.r30.s32 / ctx.r31.s32;
	// andc r8,r31,r9
	ctx.r8.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	// b 0x822ec838
	goto loc_822EC838;
loc_822EC834:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_822EC838:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x822ec8b4
	if (ctx.cr6.eq) goto loc_822EC8B4;
	// clrldi r10,r26,32
	ctx.r10.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// tdllei r27,0
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// divdu r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 / ctx.r27.u64;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// ble cr6,0x822ec86c
	if (!ctx.cr6.gt) goto loc_822EC86C;
	// li r10,100
	ctx.r10.s64 = 100;
loc_822EC868:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_822EC86C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lfd f0,28648(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 28648);
	// fmul f13,f30,f0
	ctx.f13.f64 = ctx.f30.f64 * ctx.f0.f64;
	// fmul f12,f31,f0
	ctx.f12.f64 = ctx.f31.f64 * ctx.f0.f64;
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822EC8B4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x822ec868
	goto loc_822EC868;
}

PPC_WEAK_FUNC(sub_822EC6F8) {
	__imp__sub_822EC6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC8BC) {
	__imp__sub_822EC8BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-960
	ctx.r9.s64 = ctx.r10.s64 + -960;
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC8C0) {
	__imp__sub_822EC8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC8D4) {
	__imp__sub_822EC8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822EC8E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-960
	ctx.r29.s64 = ctx.r11.s64 + -960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// addi r30,r10,10896
	ctx.r30.s64 = ctx.r10.s64 + 10896;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x822ec924
	if (ctx.cr6.lt) goto loc_822EC924;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82637620
	ctx.lr = 0x822EC91C;
	sub_82637620(ctx, base);
	// lhz r11,28368(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28368);
	// b 0x822ec92c
	goto loc_822EC92C;
loc_822EC924:
	// lhz r11,28368(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28368);
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
loc_822EC92C:
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x822ec950
	if (ctx.cr6.lt) goto loc_822EC950;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82637620
	ctx.lr = 0x822EC948;
	sub_82637620(ctx, base);
	// lhz r11,28368(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28368);
	// b 0x822ec954
	goto loc_822EC954;
loc_822EC950:
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
loc_822EC954:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r30,10
	ctx.r30.s64 = 10;
	// lwz r9,692(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822ec98c
	if (ctx.cr6.lt) goto loc_822EC98C;
	// lwz r11,692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// addi r5,r10,2716
	ctx.r5.s64 = ctx.r10.s64 + 2716;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// divw r6,r9,r30
	ctx.r6.s32 = ctx.r9.s32 / ctx.r30.s32;
	// bl 0x82637620
	ctx.lr = 0x822EC988;
	sub_82637620(ctx, base);
	// b 0x822ec990
	goto loc_822EC990;
loc_822EC98C:
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_822EC990:
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r31.u8);
	// addi r5,r10,2684
	ctx.r5.s64 = ctx.r10.s64 + 2684;
	// stb r31,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r31.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// divw r6,r11,r30
	ctx.r6.s32 = ctx.r11.s32 / ctx.r30.s32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82637620
	ctx.lr = 0x822EC9C8;
	sub_82637620(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ec9d8
	if (ctx.cr6.eq) goto loc_822EC9D8;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
loc_822EC9D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC8D8) {
	__imp__sub_822EC8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC9E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC9E0) {
	__imp__sub_822EC9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC9E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,999
	ctx.r11.s64 = ctx.r3.s64 + 999;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divw r3,r11,r10
	ctx.r3.s32 = ctx.r11.s32 / ctx.r10.s32;
	// b 0x825a32b8
	sub_825A32B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC9E8) {
	__imp__sub_822EC9E8(ctx, base);
}

