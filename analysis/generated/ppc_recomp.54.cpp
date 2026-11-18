#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_826462DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_826462DC) {
	__imp__sub_826462DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826462E0) {
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
	// bl 0x82648264
	ctx.lr = 0x826462F0;
	__imp__XexUnloadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82646304
	if (!ctx.cr0.lt) goto loc_82646304;
	// bl 0x82290cc0
	ctx.lr = 0x826462FC;
	sub_82290CC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82646308
	goto loc_82646308;
loc_82646304:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82646308:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_826462E0) {
	__imp__sub_826462E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646318) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82647904
	ctx.lr = 0x82646334;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82646364
	if (ctx.cr0.lt) goto loc_82646364;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8264635c
	if (!ctx.cr6.eq) goto loc_8264635C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r3,r3,611
	ctx.r3.u64 = ctx.r3.u64 | 611;
loc_8264635C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82646370
	if (!ctx.cr6.lt) goto loc_82646370;
loc_82646364:
	// bl 0x82290cc0
	ctx.lr = 0x82646368;
	sub_82290CC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82646374
	goto loc_82646374;
loc_82646370:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82646374:
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

PPC_WEAK_FUNC(sub_82646318) {
	__imp__sub_82646318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646388) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82648274
	ctx.lr = 0x826463A4;
	__imp__XexLoadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826463b8
	if (!ctx.cr0.lt) goto loc_826463B8;
	// bl 0x82290cc0
	ctx.lr = 0x826463B0;
	sub_82290CC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826463bc
	goto loc_826463BC;
loc_826463B8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826463BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82646388) {
	__imp__sub_82646388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826463CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_826463CC) {
	__imp__sub_826463CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826463D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// oris r11,r3,544
	ctx.r11.u64 = ctx.r3.u64 | 35651584;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1660);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646428
	if (ctx.cr6.eq) goto loc_82646428;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82646428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82646428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_826463D0) {
	__imp__sub_826463D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82646440;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 3;
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// rlwinm r10,r29,24,1,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0x7F000000;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1660(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1660);
	// ori r10,r10,98
	ctx.r10.u64 = ctx.r10.u64 | 98;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826464bc
	if (ctx.cr6.eq) goto loc_826464BC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r3,94
	ctx.r3.s64 = 94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826464B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826464c0
	goto loc_826464C0;
loc_826464BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826464C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826464d0
	if (!ctx.cr6.gt) goto loc_826464D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8264654c
	goto loc_8264654C;
loc_826464D0:
	// blt cr6,0x82646548
	if (ctx.cr6.lt) goto loc_82646548;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82639414
	ctx.lr = 0x826464E4;
	sub_82639414(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bl 0x82635430
	ctx.lr = 0x82646518;
	sub_82635430(ctx, base);
	// lwz r11,1660(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1660);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646548
	if (ctx.cr6.eq) goto loc_82646548;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82646544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8264654c
	goto loc_8264654C;
loc_82646548:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264654C:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82646438) {
	__imp__sub_82646438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646554) {
	__imp__sub_82646554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1660);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646580
	if (ctx.cr6.eq) goto loc_82646580;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82646580:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82646558) {
	__imp__sub_82646558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82647a84
	ctx.lr = 0x826465B0;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82646610
	if (ctx.cr0.lt) goto loc_82646610;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82647984
	ctx.lr = 0x826465D8;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82646610
	if (ctx.cr0.lt) goto loc_82646610;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x82647984
	ctx.lr = 0x82646600;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82646610
	if (ctx.cr0.lt) goto loc_82646610;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82646618
	goto loc_82646618;
loc_82646610:
	// bl 0x82294020
	ctx.lr = 0x82646614;
	sub_82294020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82646618:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82646588) {
	__imp__sub_82646588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8264662C) {
	__imp__sub_8264662C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82646638;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82646660
	if (ctx.cr6.eq) goto loc_82646660;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82646664
	goto loc_82646664;
loc_82646660:
	// extsw r30,r4
	ctx.r30.s64 = ctx.r4.s32;
loc_82646664:
	// lis r31,-32155
	ctx.r31.s64 = -2107310080;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x826466f0
	if (ctx.cr6.lt) goto loc_826466F0;
	// beq cr6,0x826466bc
	if (ctx.cr6.eq) goto loc_826466BC;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x826466bc
	if (!ctx.cr6.lt) goto loc_826466BC;
	// lwz r11,32032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826466A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826466b0
	if (!ctx.cr0.lt) goto loc_826466B0;
loc_826466A8:
	// bl 0x82294020
	ctx.lr = 0x826466AC;
	sub_82294020(ctx, base);
	// b 0x82646794
	goto loc_82646794;
loc_826466B0:
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
loc_826466B4:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x826466f4
	goto loc_826466F4;
loc_826466BC:
	// lwz r11,32032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826466E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826466a8
	if (ctx.cr0.lt) goto loc_826466A8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x826466b4
	goto loc_826466B4;
loc_826466F0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_826466F4:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x8264670c
	if (!ctx.cr6.lt) goto loc_8264670C;
	// li r3,131
	ctx.r3.s64 = 131;
loc_82646704:
	// bl 0x82294008
	ctx.lr = 0x82646708;
	sub_82294008(ctx, base);
	// b 0x82646794
	goto loc_82646794;
loc_8264670C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82646728
	if (!ctx.cr6.eq) goto loc_82646728;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82646728
	if (ctx.cr0.eq) goto loc_82646728;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82646704
	goto loc_82646704;
loc_82646728:
	// lwz r11,32032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264674C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82646780
	if (ctx.cr0.lt) goto loc_82646780;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82646764
	if (ctx.cr6.eq) goto loc_82646764;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82646764:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82646778
	if (!ctx.cr6.eq) goto loc_82646778;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822940e0
	ctx.lr = 0x82646778;
	sub_822940E0(ctx, base);
loc_82646778:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82646798
	goto loc_82646798;
loc_82646780:
	// bl 0x82294020
	ctx.lr = 0x82646784;
	sub_82294020(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82646794
	if (ctx.cr6.eq) goto loc_82646794;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82646794:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82646798:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82646630) {
	__imp__sub_82646630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826467A0) {
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
	// bl 0x82648284
	ctx.lr = 0x826467B4;
	__imp__NtCancelTimer(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826467c8
	if (!ctx.cr0.lt) goto loc_826467C8;
	// bl 0x82294020
	ctx.lr = 0x826467C0;
	sub_82294020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826467cc
	goto loc_826467CC;
loc_826467C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826467CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_826467A0) {
	__imp__sub_826467A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826467DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_826467DC) {
	__imp__sub_826467DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826467E0) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82648294
	ctx.lr = 0x82646808;
	__imp__NtSetTimerEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264681c
	if (!ctx.cr0.lt) goto loc_8264681C;
	// bl 0x82294020
	ctx.lr = 0x82646814;
	sub_82294020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8264683c
	goto loc_8264683C;
loc_8264681C:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,37
	ctx.r11.u64 = ctx.r11.u64 | 37;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,50
	ctx.r3.s64 = 50;
	// beq cr6,0x82646834
	if (ctx.cr6.eq) goto loc_82646834;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82646834:
	// bl 0x822940e0
	ctx.lr = 0x82646838;
	sub_822940E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8264683C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_826467E0) {
	__imp__sub_826467E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8264684C) {
	__imp__sub_8264684C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646850) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82290aa8
	ctx.lr = 0x8264686C;
	sub_82290AA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82647ae4
	ctx.lr = 0x82646874;
	__imp__ExTerminateThread(ctx, base);
}

PPC_WEAK_FUNC(sub_82646850) {
	__imp__sub_82646850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646874) {
	__imp__sub_82646874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826468a8
	if (ctx.cr6.eq) goto loc_826468A8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a51f0
	ctx.lr = 0x826468A0;
	sub_825A51F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826468ac
	goto loc_826468AC;
loc_826468A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826468AC:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x826482a4
	ctx.lr = 0x826468BC;
	__imp__NtCreateTimer(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826468e4
	if (ctx.cr0.lt) goto loc_826468E4;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x826468d8
	if (ctx.cr6.eq) goto loc_826468D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826468D8:
	// bl 0x822940e0
	ctx.lr = 0x826468DC;
	sub_822940E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826468ec
	goto loc_826468EC;
loc_826468E4:
	// bl 0x82294020
	ctx.lr = 0x826468E8;
	sub_82294020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826468EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82646878) {
	__imp__sub_82646878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646900) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82647ac4
	ctx.lr = 0x8264691C;
	__imp__NtDuplicateObject(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264692c
	if (ctx.cr0.lt) goto loc_8264692C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82646934
	goto loc_82646934;
loc_8264692C:
	// bl 0x82294020
	ctx.lr = 0x82646930;
	sub_82294020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82646934:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82646900) {
	__imp__sub_82646900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646944) {
	__imp__sub_82646944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646948) {
	PPC_FUNC_PROLOGUE();
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82647fb4
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82646948) {
	__imp__sub_82646948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646950) {
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
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r9,26960
	ctx.r9.s64 = ctx.r9.s64 + 26960;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x826469b4
	if (ctx.cr6.eq) goto loc_826469B4;
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// ble cr6,0x82646994
	if (!ctx.cr6.gt) goto loc_82646994;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82646994:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826469b8
	if (ctx.cr6.eq) goto loc_826469B8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826358b8
	ctx.lr = 0x826469B0;
	sub_826358B8(ctx, base);
	// b 0x826469b8
	goto loc_826469B8;
loc_826469B4:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_826469B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82647874
	ctx.lr = 0x826469C0;
	__imp__RtlRaiseException(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82646950) {
	__imp__sub_82646950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826469D0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826482d4
	ctx.lr = 0x826469EC;
	__imp__RtlInitUnicodeString(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826482c4
	ctx.lr = 0x826469FC;
	__imp__RtlUnicodeStringToAnsiString(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82646a10
	if (!ctx.cr0.lt) goto loc_82646A10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8828
	ctx.r11.s64 = ctx.r11.s64 + 8828;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82646A10:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825a3510
	ctx.lr = 0x82646A18;
	sub_825A3510(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82646a28
	if (ctx.cr6.lt) goto loc_82646A28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826482b4
	ctx.lr = 0x82646A28;
	__imp__RtlFreeAnsiString(ctx, base);
loc_82646A28:
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

PPC_WEAK_FUNC(sub_826469D0) {
	__imp__sub_826469D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646A3C) {
	__imp__sub_82646A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646A40) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826482e4
	ctx.lr = 0x82646A54;
	__imp__NtFlushBuffersFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82646a64
	if (ctx.cr0.lt) goto loc_82646A64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82646a6c
	goto loc_82646A6C;
loc_82646A64:
	// bl 0x82294020
	ctx.lr = 0x82646A68;
	sub_82294020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82646A6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82646A40) {
	__imp__sub_82646A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646A7C) {
	__imp__sub_82646A7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646A80) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,65001
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65001, ctx.xer);
	// bne cr6,0x82646ab8
	if (!ctx.cr6.eq) goto loc_82646AB8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82646cf0
	ctx.lr = 0x82646AB4;
	sub_82646CF0(ctx, base);
	// b 0x82646b40
	goto loc_82646B40;
loc_82646AB8:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82646ae8
	if (!ctx.cr6.eq) goto loc_82646AE8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82646AC4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82646ac4
	if (!ctx.cr6.eq) goto loc_82646AC4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// b 0x82646aec
	goto loc_82646AEC;
loc_82646AE8:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82646AEC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82646afc
	if (!ctx.cr6.eq) goto loc_82646AFC;
loc_82646AF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82646b40
	goto loc_82646B40;
loc_82646AFC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82646b34
	if (ctx.cr6.lt) goto loc_82646B34;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82646b34
	if (ctx.cr6.lt) goto loc_82646B34;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x826482f4
	ctx.lr = 0x82646B24;
	__imp__RtlMultiByteToUnicodeN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82646af4
	if (!ctx.cr0.lt) goto loc_82646AF4;
	// bl 0x82647884
	ctx.lr = 0x82646B30;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82646b38
	goto loc_82646B38;
loc_82646B34:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82646B38:
	// bl 0x822940e0
	ctx.lr = 0x82646B3C;
	sub_822940E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82646B40:
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

PPC_WEAK_FUNC(sub_82646A80) {
	__imp__sub_82646A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646B54) {
	__imp__sub_82646B54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82646B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82646b88
	if (ctx.cr6.eq) goto loc_82646B88;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
loc_82646B88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82646c2c
	if (ctx.cr6.eq) goto loc_82646C2C;
	// li r6,259
	ctx.r6.s64 = 259;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,32032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32032);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addic r7,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 & ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82646BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82646c08
	if (ctx.cr0.lt) goto loc_82646C08;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x82646c08
	if (ctx.cr6.eq) goto loc_82646C08;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82646c00
	if (ctx.cr6.eq) goto loc_82646C00;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82646C00:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82646ccc
	goto loc_82646CCC;
loc_82646C08:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82646cc4
	if (!ctx.cr6.eq) goto loc_82646CC4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82646c24
	if (ctx.cr6.eq) goto loc_82646C24;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82646C24:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82646cc4
	goto loc_82646CC4;
loc_82646C2C:
	// lwz r11,32032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32032);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82646C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82646c78
	if (!ctx.cr6.eq) goto loc_82646C78;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82647894
	ctx.lr = 0x82646C6C;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82646c90
	if (ctx.cr0.lt) goto loc_82646C90;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82646C78:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82646c90
	if (ctx.cr6.lt) goto loc_82646C90;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82646ccc
	goto loc_82646CCC;
loc_82646C90:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82646cac
	if (!ctx.cr6.eq) goto loc_82646CAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x82646ccc
	goto loc_82646CCC;
loc_82646CAC:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82646cc4
	if (!ctx.cr6.eq) goto loc_82646CC4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82646CC4:
	// bl 0x82294020
	ctx.lr = 0x82646CC8;
	sub_82294020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82646CCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82646B58) {
	__imp__sub_82646B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646CD4) {
	__imp__sub_82646CD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646CD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r3,r11,8,25,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x40;
	// b 0x82646ef8
	sub_82646EF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82646CD8) {
	__imp__sub_82646CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a3d28
	sub_825A3D28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82646CE8) {
	__imp__sub_82646CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646CEC) {
	__imp__sub_82646CEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x82646CF8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82646d34
	if (!ctx.cr6.eq) goto loc_82646D34;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82646D14:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82646d14
	if (!ctx.cr6.eq) goto loc_82646D14;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82646D34:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82646ed0
	if (!ctx.cr6.gt) goto loc_82646ED0;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// lis r29,-32154
	ctx.r29.s64 = -2107244544;
	// lis r28,-32154
	ctx.r28.s64 = -2107244544;
	// lis r27,-32154
	ctx.r27.s64 = -2107244544;
	// lis r26,-32154
	ctx.r26.s64 = -2107244544;
	// lis r25,-32154
	ctx.r25.s64 = -2107244544;
	// lis r21,-32154
	ctx.r21.s64 = -2107244544;
	// lis r20,-32154
	ctx.r20.s64 = -2107244544;
	// lis r22,-32154
	ctx.r22.s64 = -2107244544;
	// addi r23,r9,672
	ctx.r23.s64 = ctx.r9.s64 + 672;
	// addi r30,r11,696
	ctx.r30.s64 = ctx.r11.s64 + 696;
loc_82646D74:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r7,r24,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r24.s64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82646ed0
	if (!ctx.cr6.lt) goto loc_82646ED0;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82646e18
	if (ctx.cr6.lt) goto loc_82646E18;
	// beq cr6,0x82646e04
	if (ctx.cr6.eq) goto loc_82646E04;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x82646df0
	if (ctx.cr6.lt) goto loc_82646DF0;
	// beq cr6,0x82646ddc
	if (ctx.cr6.eq) goto loc_82646DDC;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x82646dc8
	if (ctx.cr6.lt) goto loc_82646DC8;
	// bne cr6,0x82646e28
	if (!ctx.cr6.eq) goto loc_82646E28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
loc_82646DC8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82646DDC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82646DF0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82646E04:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82646E18:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82646E28:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,644(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 644);
	// lwzx r9,r9,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82646e50
	if (ctx.cr6.gt) goto loc_82646E50;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82646ec8
	if (ctx.cr6.gt) goto loc_82646EC8;
	// b 0x82646e6c
	goto loc_82646E6C;
loc_82646E50:
	// lwz r9,648(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 648);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82646e7c
	if (!ctx.cr6.gt) goto loc_82646E7C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82646ec8
	if (ctx.cr6.gt) goto loc_82646EC8;
	// lwz r11,640(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 640);
loc_82646E6C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// b 0x82646ec8
	goto loc_82646EC8;
loc_82646E7C:
	// lwz r9,656(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 656);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82646ea8
	if (ctx.cr6.gt) goto loc_82646EA8;
	// lwz r9,652(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 652);
	// lwz r8,664(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 664);
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r9.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
loc_82646EA8:
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82646ec8
	if (ctx.cr6.gt) goto loc_82646EC8;
	// lwz r9,660(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 660);
	// lwz r8,668(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 668);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sthu r11,2(r5)
loc_82646EC8:
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82646d74
	if (ctx.cr6.lt) goto loc_82646D74;
loc_82646ED0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82646eec
	if (ctx.cr6.eq) goto loc_82646EEC;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82646eec
	if (!ctx.cr6.lt) goto loc_82646EEC;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x822940e0
	ctx.lr = 0x82646EE8;
	sub_822940E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82646EEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82646CF0) {
	__imp__sub_82646CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646EF4) {
	__imp__sub_82646EF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646EF8) {
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
	// bl 0x822940e8
	ctx.lr = 0x82646F18;
	sub_822940E8(ctx, base);
	// rlwinm r4,r31,29,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82292b38
	ctx.lr = 0x82646F24;
	sub_82292B38(ctx, base);
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

PPC_WEAK_FUNC(sub_82646EF8) {
	__imp__sub_82646EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646F3C) {
	__imp__sub_82646F3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r3,r11,18028
	ctx.r3.s64 = ctx.r11.s64 + 18028;
	// b 0x82647854
	__imp__RtlInitializeCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82646F40) {
	__imp__sub_82646F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646F4C) {
	__imp__sub_82646F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r3,r11,18000
	ctx.r3.s64 = ctx.r11.s64 + 18000;
	// b 0x82647854
	__imp__RtlInitializeCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82646F50) {
	__imp__sub_82646F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646F5C) {
	__imp__sub_82646F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-28552
	ctx.r11.s64 = ctx.r11.s64 + -28552;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// addi r9,r9,-27216
	ctx.r9.s64 = ctx.r9.s64 + -27216;
	// lfs f0,19508(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82646F60) {
	__imp__sub_82646F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82646FF4) {
	__imp__sub_82646FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82646FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-28504
	ctx.r11.s64 = ctx.r11.s64 + -28504;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// addi r9,r9,-27168
	ctx.r9.s64 = ctx.r9.s64 + -27168;
	// lfs f0,19508(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82646FF8) {
	__imp__sub_82646FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8264708C) {
	__imp__sub_8264708C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-28552
	ctx.r11.s64 = ctx.r11.s64 + -28552;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// addi r9,r9,-27120
	ctx.r9.s64 = ctx.r9.s64 + -27120;
	// lfs f0,21404(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21404);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82647090) {
	__imp__sub_82647090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82647124) {
	__imp__sub_82647124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-28504
	ctx.r11.s64 = ctx.r11.s64 + -28504;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// addi r9,r9,-27072
	ctx.r9.s64 = ctx.r9.s64 + -27072;
	// lfs f0,21404(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21404);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82647128) {
	__imp__sub_82647128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826471BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_826471BC) {
	__imp__sub_826471BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826471C0) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,-26768
	ctx.r31.s64 = ctx.r11.s64 + -26768;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x826344d0
	ctx.lr = 0x826471E8;
	sub_826344D0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-15672
	ctx.r4.s64 = ctx.r11.s64 + -15672;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82635430
	ctx.lr = 0x826471FC;
	sub_82635430(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x826344d0
	ctx.lr = 0x8264720C;
	sub_826344D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_826471C0) {
	__imp__sub_826471C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647250) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r31,r11,-25696
	ctx.r31.s64 = ctx.r11.s64 + -25696;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,26
	ctx.r3.s64 = ctx.r31.s64 + 26;
	// bl 0x826344d0
	ctx.lr = 0x82647278;
	sub_826344D0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-15672
	ctx.r4.s64 = ctx.r11.s64 + -15672;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82635430
	ctx.lr = 0x8264728C;
	sub_82635430(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x826344d0
	ctx.lr = 0x8264729C;
	sub_826344D0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82647250) {
	__imp__sub_82647250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826472E0) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-24624
	ctx.r31.s64 = ctx.r11.s64 + -24624;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x826344d0
	ctx.lr = 0x82647308;
	sub_826344D0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-15672
	ctx.r4.s64 = ctx.r11.s64 + -15672;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82635430
	ctx.lr = 0x8264731C;
	sub_82635430(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x826344d0
	ctx.lr = 0x8264732C;
	sub_826344D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_826472E0) {
	__imp__sub_826472E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647370) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,-23552
	ctx.r31.s64 = ctx.r11.s64 + -23552;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x826344d0
	ctx.lr = 0x82647398;
	sub_826344D0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-15672
	ctx.r4.s64 = ctx.r11.s64 + -15672;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82635430
	ctx.lr = 0x826473AC;
	sub_82635430(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x826344d0
	ctx.lr = 0x826473BC;
	sub_826344D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82647370) {
	__imp__sub_82647370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647400) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r31,r11,-22480
	ctx.r31.s64 = ctx.r11.s64 + -22480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x826344d0
	ctx.lr = 0x82647428;
	sub_826344D0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-15672
	ctx.r4.s64 = ctx.r11.s64 + -15672;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82635430
	ctx.lr = 0x8264743C;
	sub_82635430(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x826344d0
	ctx.lr = 0x8264744C;
	sub_826344D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82647400) {
	__imp__sub_82647400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647490) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,-21408
	ctx.r31.s64 = ctx.r11.s64 + -21408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x826344d0
	ctx.lr = 0x826474B8;
	sub_826344D0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-15672
	ctx.r4.s64 = ctx.r11.s64 + -15672;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82635430
	ctx.lr = 0x826474CC;
	sub_82635430(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x826344d0
	ctx.lr = 0x826474DC;
	sub_826344D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82647490) {
	__imp__sub_82647490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647520) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-20336
	ctx.r31.s64 = ctx.r11.s64 + -20336;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x826344d0
	ctx.lr = 0x82647548;
	sub_826344D0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-15672
	ctx.r4.s64 = ctx.r11.s64 + -15672;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82635430
	ctx.lr = 0x8264755C;
	sub_82635430(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x826344d0
	ctx.lr = 0x8264756C;
	sub_826344D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82647520) {
	__imp__sub_82647520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826475B0) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,-17904
	ctx.r31.s64 = ctx.r11.s64 + -17904;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x826344d0
	ctx.lr = 0x826475D8;
	sub_826344D0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-15672
	ctx.r4.s64 = ctx.r11.s64 + -15672;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82635430
	ctx.lr = 0x826475EC;
	sub_82635430(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x826344d0
	ctx.lr = 0x826475FC;
	sub_826344D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_826475B0) {
	__imp__sub_826475B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r3,r11,30344
	ctx.r3.s64 = ctx.r11.s64 + 30344;
	// b 0x8263a808
	sub_8263A808(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82647640) {
	__imp__sub_82647640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8264764C) {
	__imp__sub_8264764C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// b 0x8263a808
	sub_8263A808(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82647650) {
	__imp__sub_82647650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8264765C) {
	__imp__sub_8264765C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r3,r11,30376
	ctx.r3.s64 = ctx.r11.s64 + 30376;
	// b 0x8263a808
	sub_8263A808(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82647660) {
	__imp__sub_82647660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8264766C) {
	__imp__sub_8264766C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r3,r11,30336
	ctx.r3.s64 = ctx.r11.s64 + 30336;
	// b 0x8263a808
	sub_8263A808(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82647670) {
	__imp__sub_82647670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8264767C) {
	__imp__sub_8264767C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82647680) {
	__imp__sub_82647680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82647684) {
	__imp__sub_82647684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r3,r11,-5000
	ctx.r3.s64 = ctx.r11.s64 + -5000;
	// b 0x82620a10
	sub_82620A10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82647688) {
	__imp__sub_82647688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82647694) {
	__imp__sub_82647694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82647698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r3,r11,-4960
	ctx.r3.s64 = ctx.r11.s64 + -4960;
	// b 0x82620a10
	sub_82620A10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82647698) {
	__imp__sub_82647698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826476A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_826476A4) {
	__imp__sub_826476A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826476A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r3,r11,-4920
	ctx.r3.s64 = ctx.r11.s64 + -4920;
	// b 0x82620a10
	sub_82620A10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_826476A8) {
	__imp__sub_826476A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648304) {
	PPC_FUNC_PROLOGUE();
loc_82648304:
	// b 0x82648304
	goto loc_82648304;
}

PPC_WEAK_FUNC(sub_82648304) {
	__imp__sub_82648304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648308) {
	PPC_FUNC_PROLOGUE();
	// .long 0x485645
}

PPC_WEAK_FUNC(sub_82648308) {
	__imp__sub_82648308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264830C) {
	PPC_FUNC_PROLOGUE();
loc_8264830C:
	// b 0x8264830c
	goto loc_8264830C;
}

PPC_WEAK_FUNC(sub_8264830C) {
	__imp__sub_8264830C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648310) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82648310) {
	__imp__sub_82648310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82648314) {
	__imp__sub_82648314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648318) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82648318) {
	__imp__sub_82648318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8264831C) {
	__imp__sub_8264831C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648320) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82648320) {
	__imp__sub_82648320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648324) {
	PPC_FUNC_PROLOGUE();
	// attn 
	// .long 0x4e
}

PPC_WEAK_FUNC(sub_82648324) {
	__imp__sub_82648324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1
}

PPC_WEAK_FUNC(sub_8264832C) {
	__imp__sub_8264832C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648330) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df5c8
}

PPC_WEAK_FUNC(sub_82648330) {
	__imp__sub_82648330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df1b0
}

PPC_WEAK_FUNC(sub_82648334) {
	__imp__sub_82648334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648338) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df0b8
}

PPC_WEAK_FUNC(sub_82648338) {
	__imp__sub_82648338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dcf90
}

PPC_WEAK_FUNC(sub_8264833C) {
	__imp__sub_8264833C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648340) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dcff0
}

PPC_WEAK_FUNC(sub_82648340) {
	__imp__sub_82648340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dcd28
}

PPC_WEAK_FUNC(sub_82648344) {
	__imp__sub_82648344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648348) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dce50
}

PPC_WEAK_FUNC(sub_82648348) {
	__imp__sub_82648348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dcef8
}

PPC_WEAK_FUNC(sub_8264834C) {
	__imp__sub_8264834C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648350) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2deec8
}

PPC_WEAK_FUNC(sub_82648350) {
	__imp__sub_82648350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df278
}

PPC_WEAK_FUNC(sub_82648354) {
	__imp__sub_82648354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648358) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df4d0
}

PPC_WEAK_FUNC(sub_82648358) {
	__imp__sub_82648358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df408
}

PPC_WEAK_FUNC(sub_8264835C) {
	__imp__sub_8264835C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648360) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df340
}

PPC_WEAK_FUNC(sub_82648360) {
	__imp__sub_82648360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2defc0
}

PPC_WEAK_FUNC(sub_82648364) {
	__imp__sub_82648364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648368) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de1e0
}

PPC_WEAK_FUNC(sub_82648368) {
	__imp__sub_82648368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd910
}

PPC_WEAK_FUNC(sub_8264836C) {
	__imp__sub_8264836C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648370) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd818
}

PPC_WEAK_FUNC(sub_82648370) {
	__imp__sub_82648370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd578
}

PPC_WEAK_FUNC(sub_82648374) {
	__imp__sub_82648374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648378) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2ddb50
}

PPC_WEAK_FUNC(sub_82648378) {
	__imp__sub_82648378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd520
}

PPC_WEAK_FUNC(sub_8264837C) {
	__imp__sub_8264837C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648380) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dda90
}

PPC_WEAK_FUNC(sub_82648380) {
	__imp__sub_82648380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd9c0
}

PPC_WEAK_FUNC(sub_82648384) {
	__imp__sub_82648384(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648388) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd470
}

PPC_WEAK_FUNC(sub_82648388) {
	__imp__sub_82648388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd5e8
}

PPC_WEAK_FUNC(sub_8264838C) {
	__imp__sub_8264838C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648390) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd968
}

PPC_WEAK_FUNC(sub_82648390) {
	__imp__sub_82648390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd7b0
}

PPC_WEAK_FUNC(sub_82648394) {
	__imp__sub_82648394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648398) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd880
}

PPC_WEAK_FUNC(sub_82648398) {
	__imp__sub_82648398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264839C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd6b8
}

PPC_WEAK_FUNC(sub_8264839C) {
	__imp__sub_8264839C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2ddc10
}

PPC_WEAK_FUNC(sub_826483A0) {
	__imp__sub_826483A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd748
}

PPC_WEAK_FUNC(sub_826483A4) {
	__imp__sub_826483A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483A8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd4c8
}

PPC_WEAK_FUNC(sub_826483A8) {
	__imp__sub_826483A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dbad0
}

PPC_WEAK_FUNC(sub_826483AC) {
	__imp__sub_826483AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd140
}

PPC_WEAK_FUNC(sub_826483B0) {
	__imp__sub_826483B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd240
}

PPC_WEAK_FUNC(sub_826483B4) {
	__imp__sub_826483B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483B8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd280
}

PPC_WEAK_FUNC(sub_826483B8) {
	__imp__sub_826483B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd0f0
}

PPC_WEAK_FUNC(sub_826483BC) {
	__imp__sub_826483BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd1c0
}

PPC_WEAK_FUNC(sub_826483C0) {
	__imp__sub_826483C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483C4) {
	PPC_FUNC_PROLOGUE();
	// attn 
	// .long 0x2dd058
}

PPC_WEAK_FUNC(sub_826483C4) {
	__imp__sub_826483C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2ddcd0
}

PPC_WEAK_FUNC(sub_826483CC) {
	__imp__sub_826483CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483D0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dcaa0
}

PPC_WEAK_FUNC(sub_826483D0) {
	__imp__sub_826483D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dca68
}

PPC_WEAK_FUNC(sub_826483D4) {
	__imp__sub_826483D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483D8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2db8c8
}

PPC_WEAK_FUNC(sub_826483D8) {
	__imp__sub_826483D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de4d0
}

PPC_WEAK_FUNC(sub_826483DC) {
	__imp__sub_826483DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483E0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dcc38
}

PPC_WEAK_FUNC(sub_826483E0) {
	__imp__sub_826483E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dcc40
}

PPC_WEAK_FUNC(sub_826483E4) {
	__imp__sub_826483E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483E8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de498
}

PPC_WEAK_FUNC(sub_826483E8) {
	__imp__sub_826483E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dcc48
}

PPC_WEAK_FUNC(sub_826483EC) {
	__imp__sub_826483EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483F0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2db9c8
}

PPC_WEAK_FUNC(sub_826483F0) {
	__imp__sub_826483F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd2c0
}

PPC_WEAK_FUNC(sub_826483F4) {
	__imp__sub_826483F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483F8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de168
}

PPC_WEAK_FUNC(sub_826483F8) {
	__imp__sub_826483F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826483FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de0d0
}

PPC_WEAK_FUNC(sub_826483FC) {
	__imp__sub_826483FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648400) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de080
}

PPC_WEAK_FUNC(sub_82648400) {
	__imp__sub_82648400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de060
}

PPC_WEAK_FUNC(sub_82648404) {
	__imp__sub_82648404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648408) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de0f0
}

PPC_WEAK_FUNC(sub_82648408) {
	__imp__sub_82648408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de118
}

PPC_WEAK_FUNC(sub_8264840C) {
	__imp__sub_8264840C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648410) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de190
}

PPC_WEAK_FUNC(sub_82648410) {
	__imp__sub_82648410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de1b8
}

PPC_WEAK_FUNC(sub_82648414) {
	__imp__sub_82648414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648418) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de140
}

PPC_WEAK_FUNC(sub_82648418) {
	__imp__sub_82648418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de0a8
}

PPC_WEAK_FUNC(sub_8264841C) {
	__imp__sub_8264841C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648420) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2ddf00
}

PPC_WEAK_FUNC(sub_82648420) {
	__imp__sub_82648420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dfcd8
}

PPC_WEAK_FUNC(sub_82648424) {
	__imp__sub_82648424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648428) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df958
}

PPC_WEAK_FUNC(sub_82648428) {
	__imp__sub_82648428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df780
}

PPC_WEAK_FUNC(sub_8264842C) {
	__imp__sub_8264842C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648430) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dfc98
}

PPC_WEAK_FUNC(sub_82648430) {
	__imp__sub_82648430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dfb08
}

PPC_WEAK_FUNC(sub_82648434) {
	__imp__sub_82648434(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648438) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dfb28
}

PPC_WEAK_FUNC(sub_82648438) {
	__imp__sub_82648438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dfbf0
}

PPC_WEAK_FUNC(sub_8264843C) {
	__imp__sub_8264843C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648440) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dfb18
}

PPC_WEAK_FUNC(sub_82648440) {
	__imp__sub_82648440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd420
}

PPC_WEAK_FUNC(sub_82648444) {
	__imp__sub_82648444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648448) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df770
}

PPC_WEAK_FUNC(sub_82648448) {
	__imp__sub_82648448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2df778
}

PPC_WEAK_FUNC(sub_8264844C) {
	__imp__sub_8264844C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648450) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dd350
}

PPC_WEAK_FUNC(sub_82648450) {
	__imp__sub_82648450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dbce0
}

PPC_WEAK_FUNC(sub_82648454) {
	__imp__sub_82648454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648458) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de510
}

PPC_WEAK_FUNC(sub_82648458) {
	__imp__sub_82648458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2db8e0
}

PPC_WEAK_FUNC(sub_8264845C) {
	__imp__sub_8264845C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648460) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de480
}

PPC_WEAK_FUNC(sub_82648460) {
	__imp__sub_82648460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2de470
}

PPC_WEAK_FUNC(sub_82648464) {
	__imp__sub_82648464(ctx, base);
}

